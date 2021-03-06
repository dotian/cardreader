<!DOCTYPE html>
<html>
<head>
<meta name="GENERATOR" content="lxr-1998-06-10: http://lxr.linux.no">
<link rel="icon" href="/mxr.png" type="image/png">
<title>seamonkey mozilla/modules/plugin/samples/npruntime/plugin.cpp</title>
<link rel='stylesheet' title='' href='http://mxr.mozilla.org/seamonkey/style/style.css' type='text/css'>
<link rel='alternate stylesheet' title='Alt-1' href='http://mxr.mozilla.org/seamonkey/style/alt1-cpp.css' type='text/css'>

<script src='http://mxr.mozilla.org/coloration.js'></script>
<script src='http://mxr.mozilla.org/script.js'></script>
</head>

<body   bgcolor="#FFFFFF" text="#000000"
	link="#0000EE" vlink="#551A8B" alink="#FF0000">

<table class=banner bgcolor="#000000" width="100%" border=0 cellpadding=0 cellspacing=0>
<tr><td><a class="logo" href="//www.mozilla.org/"><img
 src="//www.mozilla.org/images/mozilla-banner.gif" alt=""
 border=0 width=600 height=58></a></td></tr></table>

<table class=header border=0 cellpadding=12 cellspacing=0 width="100%">
 <tr>
  <td align=left valign=middle>
   <nobr><font size="+2"><b><a href="http://mxr.mozilla.org">Mozilla Cross-Reference</a></b>
</nobr><i><a href="http://mxr.mozilla.org/seamonkey">seamonkey</a></i>
</font>
   <br><b><a href="/seamonkey/source/">mozilla</a>/ <a href="/seamonkey/source/modules/">modules</a>/ <a href="/seamonkey/source/modules/plugin/">plugin</a>/ <a href="/seamonkey/source/modules/plugin/samples/">samples</a>/ <a href="/seamonkey/source/modules/plugin/samples/npruntime/">npruntime</a>/ <a href="/seamonkey/source/modules/plugin/samples/npruntime/plugin.cpp">plugin.cpp</a> </b>
  </TD>

  <td align=right valign=top width="1%">
   <table border cellpadding=12 cellspacing=0>
    <tr>
     <td nowrap bgcolor="#FAFAFA">



      <a href="http://bonsai.mozilla.org/cvslog.cgi?file=mozilla/modules/plugin/samples/npruntime/plugin.cpp&amp;rev=HEAD&amp;mark=1.1"
>CVS Log</a><br>
      <a href="http://bonsai.mozilla.org/cvsblame.cgi?file=mozilla/modules/plugin/samples/npruntime/plugin.cpp&amp;rev=1.1"
onfocus='updateBonsaiBlameHash(this, event)'
onmouseover='updateBonsaiBlameHash(this, event)'
>CVS Blame</a><br>
      <a href="http://bonsai.mozilla.org/cvsgraph.cgi?file=mozilla/modules/plugin/samples/npruntime/plugin.cpp&amp;rev=1.1"
>CVS Graph</a><br>








      <a href="http://mxr.mozilla.org/seamonkey/diff?file=/modules/plugin/samples/npruntime/plugin.cpp">Diff file</a><br>
      <a href="http://mxr.mozilla.org/seamonkey/source/modules/plugin/samples/npruntime/plugin.cpp?raw=1">Raw file</a><br>
     </TD>
    </TR>
   </table>
  </TD>


  <td align=right valign=top width="1%">
   <table border cellpadding=6 cellspacing=0>
    <tr>
     <td bgcolor="#FAFAFA">
      <table border=0 cellpadding=6 cellspacing=0>
       <tr>
        <td nowrap align=left>
         changes to<br>this file in<br>the last:
        </TD>
        <td nowrap>
         <a href="http://bonsai.mozilla.org/cvsquery.cgi?branch=HEAD&amp;file=mozilla/modules/plugin/samples/npruntime/plugin.cpp&amp;date=day">day</a><br>
         <a href="http://bonsai.mozilla.org/cvsquery.cgi?branch=HEAD&amp;file=mozilla/modules/plugin/samples/npruntime/plugin.cpp&amp;date=week">week</a><br>
         <a href="http://bonsai.mozilla.org/cvsquery.cgi?branch=HEAD&amp;file=mozilla/modules/plugin/samples/npruntime/plugin.cpp&amp;date=month">month</a><br>
        </TD>
       </TR>
      </table>
     </TD>
    </TR>
   </table>
  </TD>


 </TR>
</table>

<form name='source' id='source' class='beforecontent'
>view using tree:
<select name='tree' id='tree' onchange='changetarget("http://mxr.mozilla.org/seamonkey/", "seamonkey/")'>
<option value="firefox">firefox</option>
<option value="js">js</option>
<option value="mozilla">mozilla</option>
<option value="nspr-cvs">nspr-cvs</option>
<option value="seamonkey" selected=1>seamonkey</option>
<option value="security">security</option>

</select></form>



<pre lang='en'><style>.d2:before{content:' '} .d1:before{content:'  '} .d0:before{content:'   '} </style><span id='the-code'><a class='l d0' name=1 href="#1">1</a> <span class='c'>/* -*- Mode: C++; tab-width: 2; indent-tabs-mode: nil; c-basic-offset: 2 -*- */</span>
<a class='l d0' name=2 href="#2">2</a> <span class='c'>/* ***** BEGIN LICENSE BLOCK *****</span>
<a class='l d0' name=3 href="#3">3</a> <span class='c'> * Version: NPL 1.1/GPL 2.0/LGPL 2.1</span>
<a class='l d0' name=4 href="#4">4</a> <span class='c'> *</span>
<a class='l d0' name=5 href="#5">5</a> <span class='c'> * The contents of this file are subject to the Netscape Public License</span>
<a class='l d0' name=6 href="#6">6</a> <span class='c'> * Version 1.1 (the "License"); you may not use this file except in</span>
<a class='l d0' name=7 href="#7">7</a> <span class='c'> * compliance with the License. You may obtain a copy of the License at</span>
<a class='l d0' name=8 href="#8">8</a> <span class='c'> * <a href="http://www.mozilla.org/NPL/">http://www.mozilla.org/NPL/</a></span>
<a class='l d0' name=9 href="#9">9</a> <span class='c'> *</span>
<a class='l d1' name=10 href="#10">10</a> <span class='c'> * Software distributed under the License is distributed on an "AS IS" basis,</span>
<a class='l d1' name=11 href="#11">11</a> <span class='c'> * WITHOUT WARRANTY OF ANY KIND, either express or implied. See the License</span>
<a class='l d1' name=12 href="#12">12</a> <span class='c'> * for the specific language governing rights and limitations under the</span>
<a class='l d1' name=13 href="#13">13</a> <span class='c'> * License.</span>
<a class='l d1' name=14 href="#14">14</a> <span class='c'> *</span>
<a class='l d1' name=15 href="#15">15</a> <span class='c'> * The Original Code is mozilla.org code.</span>
<a class='l d1' name=16 href="#16">16</a> <span class='c'> *</span>
<a class='l d1' name=17 href="#17">17</a> <span class='c'> * The Initial Developer of the Original Code is </span>
<a class='l d1' name=18 href="#18">18</a> <span class='c'> * Netscape Communications Corporation.</span>
<a class='l d1' name=19 href="#19">19</a> <span class='c'> * Portions created by the Initial Developer are Copyright (C) 1998</span>
<a class='l d1' name=20 href="#20">20</a> <span class='c'> * the Initial Developer. All Rights Reserved.</span>
<a class='l d1' name=21 href="#21">21</a> <span class='c'> *</span>
<a class='l d1' name=22 href="#22">22</a> <span class='c'> * Contributor(s):</span>
<a class='l d1' name=23 href="#23">23</a> <span class='c'> *</span>
<a class='l d1' name=24 href="#24">24</a> <span class='c'> * Alternatively, the contents of this file may be used under the terms of</span>
<a class='l d1' name=25 href="#25">25</a> <span class='c'> * either the GNU General Public License Version 2 or later (the "GPL"), or </span>
<a class='l d1' name=26 href="#26">26</a> <span class='c'> * the GNU Lesser General Public License Version 2.1 or later (the "LGPL"),</span>
<a class='l d1' name=27 href="#27">27</a> <span class='c'> * in which case the provisions of the GPL or the LGPL are applicable instead</span>
<a class='l d1' name=28 href="#28">28</a> <span class='c'> * of those above. If you wish to allow use of your version of this file only</span>
<a class='l d1' name=29 href="#29">29</a> <span class='c'> * under the terms of either the GPL or the LGPL, and not to allow others to</span>
<a class='l d1' name=30 href="#30">30</a> <span class='c'> * use your version of this file under the terms of the NPL, indicate your</span>
<a class='l d1' name=31 href="#31">31</a> <span class='c'> * decision by deleting the provisions above and replace them with the notice</span>
<a class='l d1' name=32 href="#32">32</a> <span class='c'> * and other provisions required by the GPL or the LGPL. If you do not delete</span>
<a class='l d1' name=33 href="#33">33</a> <span class='c'> * the provisions above, a recipient may use your version of this file under</span>
<a class='l d1' name=34 href="#34">34</a> <span class='c'> * the terms of any one of the NPL, the GPL or the LGPL.</span>
<a class='l d1' name=35 href="#35">35</a> <span class='c'> *</span>
<a class='l d1' name=36 href="#36">36</a> <span class='c'> * ***** END LICENSE BLOCK ***** */</span>
<a class='l d1' name=37 href="#37">37</a> 
<a class='l d1' name=38 href="#38">38</a> <span class='c'>//////////////////////////////////////////////////</span>
<a class='l d1' name=39 href="#39">39</a> <span class='c'></span><span class='c'>//</span>
<a class='l d1' name=40 href="#40">40</a> <span class='c'></span><span class='c'>// CPlugin class implementation</span>
<a class='l d1' name=41 href="#41">41</a> <span class='c'></span><span class='c'>//</span>
<a class='l d1' name=42 href="#42">42</a> <span class='c'></span><span class='v'>#ifdef </span><a class="d" href="/seamonkey/ident?i=XP_WIN">XP_WIN</a>
<a class='l d1' name=43 href="#43">43</a> <span class='i'>#include</span> &lt;<a href='/seamonkey/find?string=/windows\.h$'>windows.h</a>&gt;
<a class='l d1' name=44 href="#44">44</a> <span class='i'>#include</span> &lt;<a href='/seamonkey/find?string=/windowsx\.h$'>windowsx.h</a>&gt;
<a class='l d1' name=45 href="#45">45</a> <span class='v'>#endif
<a class='l d1' name=46 href="#46">46</a> </span>
<a class='l d1' name=47 href="#47">47</a> <span class='v'>#ifdef </span><a class="d" href="/seamonkey/ident?i=XP_MAC">XP_MAC</a>
<a class='l d1' name=48 href="#48">48</a> <span class='i'>#include</span> &lt;<a href='/seamonkey/find?string=/TextEdit\.h$'>TextEdit.h</a>&gt;
<a class='l d1' name=49 href="#49">49</a> <span class='v'>#endif
<a class='l d1' name=50 href="#50">50</a> </span>
<a class='l d1' name=51 href="#51">51</a> <span class='v'>#ifdef </span><a class="d" href="/seamonkey/ident?i=XP_UNIX">XP_UNIX</a>
<a class='l d1' name=52 href="#52">52</a> <span class='i'>#include</span> &lt;<a href="/seamonkey/source/other-licenses/7zstub/src/Common/String.h">string.h</a>&gt;
<a class='l d1' name=53 href="#53">53</a> <span class='v'>#endif
<a class='l d1' name=54 href="#54">54</a> </span>
<a class='l d1' name=55 href="#55">55</a> <span class='i'>#include</span> "<a href="/seamonkey/source/modules/plugin/samples/npruntime/plugin.h">plugin.h</a>"
<a class='l d1' name=56 href="#56">56</a> <span class='i'>#include</span> "<a href='/seamonkey/find?string=/npupp\.h$'>npupp.h</a>"
<a class='l d1' name=57 href="#57">57</a> 
<a class='l d1' name=58 href="#58">58</a> <span class='v'>static </span><a class="d" href="/seamonkey/ident?i=NPIdentifier">NPIdentifier</a> <a class="d" href="/seamonkey/ident?i=sFoo_id">sFoo_id</a>;
<a class='l d1' name=59 href="#59">59</a> <span class='v'>static </span><a class="d" href="/seamonkey/ident?i=NPIdentifier">NPIdentifier</a> <a class="d" href="/seamonkey/ident?i=sBar_id">sBar_id</a>;
<a class='l d1' name=60 href="#60">60</a> <span class='v'>static </span><a class="d" href="/seamonkey/ident?i=NPIdentifier">NPIdentifier</a> <a class="d" href="/seamonkey/ident?i=sDocument_id">sDocument_id</a>;
<a class='l d1' name=61 href="#61">61</a> <span class='v'>static </span><a class="d" href="/seamonkey/ident?i=NPIdentifier">NPIdentifier</a> <a class="d" href="/seamonkey/ident?i=sBody_id">sBody_id</a>;
<a class='l d1' name=62 href="#62">62</a> <span class='v'>static </span><a class="d" href="/seamonkey/ident?i=NPIdentifier">NPIdentifier</a> <a class="d" href="/seamonkey/ident?i=sCreateElement_id">sCreateElement_id</a>;
<a class='l d1' name=63 href="#63">63</a> <span class='v'>static </span><a class="d" href="/seamonkey/ident?i=NPIdentifier">NPIdentifier</a> <a class="d" href="/seamonkey/ident?i=sCreateTextNode_id">sCreateTextNode_id</a>;
<a class='l d1' name=64 href="#64">64</a> <span class='v'>static </span><a class="d" href="/seamonkey/ident?i=NPIdentifier">NPIdentifier</a> <a class="d" href="/seamonkey/ident?i=sAppendChild_id">sAppendChild_id</a>;
<a class='l d1' name=65 href="#65">65</a> <span class='v'>static </span><a class="d" href="/seamonkey/ident?i=NPIdentifier">NPIdentifier</a> <a class="d" href="/seamonkey/ident?i=sPluginType_id">sPluginType_id</a>;
<a class='l d1' name=66 href="#66">66</a> <span class='v'>static </span><a class="d" href="/seamonkey/ident?i=NPObject">NPObject</a> *<a class="d" href="/seamonkey/ident?i=sWindowObj">sWindowObj</a>;
<a class='l d1' name=67 href="#67">67</a> 
<a class='l d1' name=68 href="#68">68</a> <span class='c'>// Helper class that can be used to map calls to the NPObject hooks</span>
<a class='l d1' name=69 href="#69">69</a> <span class='c'></span><span class='c'>// into virtual methods on instances of classes that derive from this</span>
<a class='l d1' name=70 href="#70">70</a> <span class='c'></span><span class='c'>// class.</span>
<a class='l d1' name=71 href="#71">71</a> <span class='c'></span><span class='v'>class </span><a class="d" href="/seamonkey/ident?i=ScriptablePluginObjectBase">ScriptablePluginObjectBase</a> : <span class='v'>public </span><a class="d" href="/seamonkey/ident?i=NPObject">NPObject</a>
<a class='l d1' name=72 href="#72">72</a> {
<a class='l d1' name=73 href="#73">73</a> <span class='v'>public:</span>
<a class='l d1' name=74 href="#74">74</a>   <a class="d" href="/seamonkey/ident?i=ScriptablePluginObjectBase">ScriptablePluginObjectBase</a>(<a class="d" href="/seamonkey/ident?i=NPP">NPP</a> <a class="d" href="/seamonkey/ident?i=npp">npp</a>)
<a class='l d1' name=75 href="#75">75</a>     : <a class="d" href="/seamonkey/ident?i=mNpp">mNpp</a>(<a class="d" href="/seamonkey/ident?i=npp">npp</a>)
<a class='l d1' name=76 href="#76">76</a>   {
<a class='l d1' name=77 href="#77">77</a>   }
<a class='l d1' name=78 href="#78">78</a> 
<a class='l d1' name=79 href="#79">79</a>   <span class='v'>virtual </span>~<a class="d" href="/seamonkey/ident?i=ScriptablePluginObjectBase">ScriptablePluginObjectBase</a>()
<a class='l d1' name=80 href="#80">80</a>   {
<a class='l d1' name=81 href="#81">81</a>   }
<a class='l d1' name=82 href="#82">82</a> 
<a class='l d1' name=83 href="#83">83</a>   <span class='c'>// Virtual NPObject hooks called through this base class. Override</span>
<a class='l d1' name=84 href="#84">84</a> <span class='c'></span>  <span class='c'>// as you see fit.</span>
<a class='l d1' name=85 href="#85">85</a> <span class='c'></span>  <span class='v'>virtual </span><span class='v'>void </span><a class="d" href="/seamonkey/ident?i=Invalidate">Invalidate</a>();
<a class='l d1' name=86 href="#86">86</a>   <span class='v'>virtual </span><span class='v'>bool </span><a class="d" href="/seamonkey/ident?i=HasMethod">HasMethod</a>(<a class="d" href="/seamonkey/ident?i=NPIdentifier">NPIdentifier</a> <a class="d" href="/seamonkey/ident?i=name">name</a>);
<a class='l d1' name=87 href="#87">87</a>   <span class='v'>virtual </span><span class='v'>bool </span><a class="d" href="/seamonkey/ident?i=Invoke">Invoke</a>(<a class="d" href="/seamonkey/ident?i=NPIdentifier">NPIdentifier</a> <a class="d" href="/seamonkey/ident?i=name">name</a>, <span class='v'>const </span><span class='a'>NPVariant</span> *<a class="d" href="/seamonkey/ident?i=args">args</a>,
<a class='l d1' name=88 href="#88">88</a>                       <a class="d" href="/seamonkey/ident?i=uint32_t">uint32_t</a> <a class="d" href="/seamonkey/ident?i=argCount">argCount</a>, <span class='a'>NPVariant</span> *<a class="d" href="/seamonkey/ident?i=result">result</a>);
<a class='l d1' name=89 href="#89">89</a>   <span class='v'>virtual </span><span class='v'>bool </span><a class="d" href="/seamonkey/ident?i=InvokeDefault">InvokeDefault</a>(<span class='v'>const </span><span class='a'>NPVariant</span> *<a class="d" href="/seamonkey/ident?i=args">args</a>, <a class="d" href="/seamonkey/ident?i=uint32_t">uint32_t</a> <a class="d" href="/seamonkey/ident?i=argCount">argCount</a>,
<a class='l d1' name=90 href="#90">90</a>                              <span class='a'>NPVariant</span> *<a class="d" href="/seamonkey/ident?i=result">result</a>);
<a class='l d1' name=91 href="#91">91</a>   <span class='v'>virtual </span><span class='v'>bool </span><a class="d" href="/seamonkey/ident?i=HasProperty">HasProperty</a>(<a class="d" href="/seamonkey/ident?i=NPIdentifier">NPIdentifier</a> <a class="d" href="/seamonkey/ident?i=name">name</a>);
<a class='l d1' name=92 href="#92">92</a>   <span class='v'>virtual </span><span class='v'>bool </span><a class="d" href="/seamonkey/ident?i=GetProperty">GetProperty</a>(<a class="d" href="/seamonkey/ident?i=NPIdentifier">NPIdentifier</a> <a class="d" href="/seamonkey/ident?i=name">name</a>, <span class='a'>NPVariant</span> *<a class="d" href="/seamonkey/ident?i=result">result</a>);
<a class='l d1' name=93 href="#93">93</a>   <span class='v'>virtual </span><span class='v'>bool </span><a class="d" href="/seamonkey/ident?i=SetProperty">SetProperty</a>(<a class="d" href="/seamonkey/ident?i=NPIdentifier">NPIdentifier</a> <a class="d" href="/seamonkey/ident?i=name">name</a>, <span class='v'>const </span><span class='a'>NPVariant</span> *<a class="d" href="/seamonkey/ident?i=value">value</a>);
<a class='l d1' name=94 href="#94">94</a>   <span class='v'>virtual </span><span class='v'>bool </span><a class="d" href="/seamonkey/ident?i=RemoveProperty">RemoveProperty</a>(<a class="d" href="/seamonkey/ident?i=NPIdentifier">NPIdentifier</a> <a class="d" href="/seamonkey/ident?i=name">name</a>);
<a class='l d1' name=95 href="#95">95</a>   <span class='v'>virtual </span><span class='v'>bool </span><a class="d" href="/seamonkey/ident?i=Enumerate">Enumerate</a>(<a class="d" href="/seamonkey/ident?i=NPIdentifier">NPIdentifier</a> **<a class="d" href="/seamonkey/ident?i=identifier">identifier</a>, <a class="d" href="/seamonkey/ident?i=uint32_t">uint32_t</a> *<a class="d" href="/seamonkey/ident?i=count">count</a>);
<a class='l d1' name=96 href="#96">96</a>   <span class='v'>virtual </span><span class='v'>bool </span><a class="d" href="/seamonkey/ident?i=Construct">Construct</a>(<span class='v'>const </span><span class='a'>NPVariant</span> *<a class="d" href="/seamonkey/ident?i=args">args</a>, <a class="d" href="/seamonkey/ident?i=uint32_t">uint32_t</a> <a class="d" href="/seamonkey/ident?i=argCount">argCount</a>,
<a class='l d1' name=97 href="#97">97</a>                          <span class='a'>NPVariant</span> *<a class="d" href="/seamonkey/ident?i=result">result</a>);
<a class='l d1' name=98 href="#98">98</a> 
<a class='l d1' name=99 href="#99">99</a> <span class='v'>public:</span>
<a class='l d2' name=100 href="#100">100</a>   <span class='v'>static </span><span class='v'>void </span><a class="d" href="/seamonkey/ident?i=_Deallocate">_Deallocate</a>(<a class="d" href="/seamonkey/ident?i=NPObject">NPObject</a> *<a class="d" href="/seamonkey/ident?i=npobj">npobj</a>);
<a class='l d2' name=101 href="#101">101</a>   <span class='v'>static </span><span class='v'>void </span><a class="d" href="/seamonkey/ident?i=_Invalidate">_Invalidate</a>(<a class="d" href="/seamonkey/ident?i=NPObject">NPObject</a> *<a class="d" href="/seamonkey/ident?i=npobj">npobj</a>);
<a class='l d2' name=102 href="#102">102</a>   <span class='v'>static </span><span class='v'>bool </span><a class="d" href="/seamonkey/ident?i=_HasMethod">_HasMethod</a>(<a class="d" href="/seamonkey/ident?i=NPObject">NPObject</a> *<a class="d" href="/seamonkey/ident?i=npobj">npobj</a>, <a class="d" href="/seamonkey/ident?i=NPIdentifier">NPIdentifier</a> <a class="d" href="/seamonkey/ident?i=name">name</a>);
<a class='l d2' name=103 href="#103">103</a>   <span class='v'>static </span><span class='v'>bool </span><a class="d" href="/seamonkey/ident?i=_Invoke">_Invoke</a>(<a class="d" href="/seamonkey/ident?i=NPObject">NPObject</a> *<a class="d" href="/seamonkey/ident?i=npobj">npobj</a>, <a class="d" href="/seamonkey/ident?i=NPIdentifier">NPIdentifier</a> <a class="d" href="/seamonkey/ident?i=name">name</a>,
<a class='l d2' name=104 href="#104">104</a>                       <span class='v'>const </span><span class='a'>NPVariant</span> *<a class="d" href="/seamonkey/ident?i=args">args</a>, <a class="d" href="/seamonkey/ident?i=uint32_t">uint32_t</a> <a class="d" href="/seamonkey/ident?i=argCount">argCount</a>,
<a class='l d2' name=105 href="#105">105</a>                       <span class='a'>NPVariant</span> *<a class="d" href="/seamonkey/ident?i=result">result</a>);
<a class='l d2' name=106 href="#106">106</a>   <span class='v'>static </span><span class='v'>bool </span><a class="d" href="/seamonkey/ident?i=_InvokeDefault">_InvokeDefault</a>(<a class="d" href="/seamonkey/ident?i=NPObject">NPObject</a> *<a class="d" href="/seamonkey/ident?i=npobj">npobj</a>, <span class='v'>const </span><span class='a'>NPVariant</span> *<a class="d" href="/seamonkey/ident?i=args">args</a>,
<a class='l d2' name=107 href="#107">107</a>                              <a class="d" href="/seamonkey/ident?i=uint32_t">uint32_t</a> <a class="d" href="/seamonkey/ident?i=argCount">argCount</a>, <span class='a'>NPVariant</span> *<a class="d" href="/seamonkey/ident?i=result">result</a>);
<a class='l d2' name=108 href="#108">108</a>   <span class='v'>static </span><span class='v'>bool </span><a class="d" href="/seamonkey/ident?i=_HasProperty">_HasProperty</a>(<a class="d" href="/seamonkey/ident?i=NPObject">NPObject</a> * <a class="d" href="/seamonkey/ident?i=npobj">npobj</a>, <a class="d" href="/seamonkey/ident?i=NPIdentifier">NPIdentifier</a> <a class="d" href="/seamonkey/ident?i=name">name</a>);
<a class='l d2' name=109 href="#109">109</a>   <span class='v'>static </span><span class='v'>bool </span><a class="d" href="/seamonkey/ident?i=_GetProperty">_GetProperty</a>(<a class="d" href="/seamonkey/ident?i=NPObject">NPObject</a> *<a class="d" href="/seamonkey/ident?i=npobj">npobj</a>, <a class="d" href="/seamonkey/ident?i=NPIdentifier">NPIdentifier</a> <a class="d" href="/seamonkey/ident?i=name">name</a>,
<a class='l d2' name=110 href="#110">110</a>                            <span class='a'>NPVariant</span> *<a class="d" href="/seamonkey/ident?i=result">result</a>);
<a class='l d2' name=111 href="#111">111</a>   <span class='v'>static </span><span class='v'>bool </span><a class="d" href="/seamonkey/ident?i=_SetProperty">_SetProperty</a>(<a class="d" href="/seamonkey/ident?i=NPObject">NPObject</a> *<a class="d" href="/seamonkey/ident?i=npobj">npobj</a>, <a class="d" href="/seamonkey/ident?i=NPIdentifier">NPIdentifier</a> <a class="d" href="/seamonkey/ident?i=name">name</a>,
<a class='l d2' name=112 href="#112">112</a>                            <span class='v'>const </span><span class='a'>NPVariant</span> *<a class="d" href="/seamonkey/ident?i=value">value</a>);
<a class='l d2' name=113 href="#113">113</a>   <span class='v'>static </span><span class='v'>bool </span><a class="d" href="/seamonkey/ident?i=_RemoveProperty">_RemoveProperty</a>(<a class="d" href="/seamonkey/ident?i=NPObject">NPObject</a> *<a class="d" href="/seamonkey/ident?i=npobj">npobj</a>, <a class="d" href="/seamonkey/ident?i=NPIdentifier">NPIdentifier</a> <a class="d" href="/seamonkey/ident?i=name">name</a>);
<a class='l d2' name=114 href="#114">114</a>   <span class='v'>static </span><span class='v'>bool </span><a class="d" href="/seamonkey/ident?i=_Enumerate">_Enumerate</a>(<a class="d" href="/seamonkey/ident?i=NPObject">NPObject</a> *<a class="d" href="/seamonkey/ident?i=npobj">npobj</a>, <a class="d" href="/seamonkey/ident?i=NPIdentifier">NPIdentifier</a> **<a class="d" href="/seamonkey/ident?i=identifier">identifier</a>,
<a class='l d2' name=115 href="#115">115</a>                          <a class="d" href="/seamonkey/ident?i=uint32_t">uint32_t</a> *<a class="d" href="/seamonkey/ident?i=count">count</a>);
<a class='l d2' name=116 href="#116">116</a>   <span class='v'>static </span><span class='v'>bool </span><a class="d" href="/seamonkey/ident?i=_Construct">_Construct</a>(<a class="d" href="/seamonkey/ident?i=NPObject">NPObject</a> *<a class="d" href="/seamonkey/ident?i=npobj">npobj</a>, <span class='v'>const </span><span class='a'>NPVariant</span> *<a class="d" href="/seamonkey/ident?i=args">args</a>,
<a class='l d2' name=117 href="#117">117</a>                          <a class="d" href="/seamonkey/ident?i=uint32_t">uint32_t</a> <a class="d" href="/seamonkey/ident?i=argCount">argCount</a>, <span class='a'>NPVariant</span> *<a class="d" href="/seamonkey/ident?i=result">result</a>);
<a class='l d2' name=118 href="#118">118</a> 
<a class='l d2' name=119 href="#119">119</a> <span class='v'>protected:</span>
<a class='l d2' name=120 href="#120">120</a>   <a class="d" href="/seamonkey/ident?i=NPP">NPP</a> <a class="d" href="/seamonkey/ident?i=mNpp">mNpp</a>;
<a class='l d2' name=121 href="#121">121</a> };
<a class='l d2' name=122 href="#122">122</a> 
<a class='l d2' name=123 href="#123">123</a> <span class='v'>#define </span><a class="d" href="/seamonkey/ident?i=DECLARE_NPOBJECT_CLASS_WITH_BASE">DECLARE_NPOBJECT_CLASS_WITH_BASE</a>(<a class="d" href="/seamonkey/ident?i=_class">_class</a>, <a class="d" href="/seamonkey/ident?i=ctor">ctor</a>)                        \
<a class='l d2' name=124 href="#124">124</a> <span class='v'>static </span><a class="d" href="/seamonkey/ident?i=NPClass">NPClass</a> <a class="d" href="/seamonkey/ident?i=s">s</a>##_class##_NPClass = {                                        \
<a class='l d2' name=125 href="#125">125</a>   <a class="d" href="/seamonkey/ident?i=NP_CLASS_STRUCT_VERSION_CTOR">NP_CLASS_STRUCT_VERSION_CTOR</a>,                                               \
<a class='l d2' name=126 href="#126">126</a>   <a class="d" href="/seamonkey/ident?i=ctor">ctor</a>,                                                                       \
<a class='l d2' name=127 href="#127">127</a>   <a class="d" href="/seamonkey/ident?i=ScriptablePluginObjectBase">ScriptablePluginObjectBase</a>::<a class="d" href="/seamonkey/ident?i=_Deallocate">_Deallocate</a>,                                    \
<a class='l d2' name=128 href="#128">128</a>   <a class="d" href="/seamonkey/ident?i=ScriptablePluginObjectBase">ScriptablePluginObjectBase</a>::<a class="d" href="/seamonkey/ident?i=_Invalidate">_Invalidate</a>,                                    \
<a class='l d2' name=129 href="#129">129</a>   <a class="d" href="/seamonkey/ident?i=ScriptablePluginObjectBase">ScriptablePluginObjectBase</a>::<a class="d" href="/seamonkey/ident?i=_HasMethod">_HasMethod</a>,                                     \
<a class='l d2' name=130 href="#130">130</a>   <a class="d" href="/seamonkey/ident?i=ScriptablePluginObjectBase">ScriptablePluginObjectBase</a>::<a class="d" href="/seamonkey/ident?i=_Invoke">_Invoke</a>,                                        \
<a class='l d2' name=131 href="#131">131</a>   <a class="d" href="/seamonkey/ident?i=ScriptablePluginObjectBase">ScriptablePluginObjectBase</a>::<a class="d" href="/seamonkey/ident?i=_InvokeDefault">_InvokeDefault</a>,                                 \
<a class='l d2' name=132 href="#132">132</a>   <a class="d" href="/seamonkey/ident?i=ScriptablePluginObjectBase">ScriptablePluginObjectBase</a>::<a class="d" href="/seamonkey/ident?i=_HasProperty">_HasProperty</a>,                                   \
<a class='l d2' name=133 href="#133">133</a>   <a class="d" href="/seamonkey/ident?i=ScriptablePluginObjectBase">ScriptablePluginObjectBase</a>::<a class="d" href="/seamonkey/ident?i=_GetProperty">_GetProperty</a>,                                   \
<a class='l d2' name=134 href="#134">134</a>   <a class="d" href="/seamonkey/ident?i=ScriptablePluginObjectBase">ScriptablePluginObjectBase</a>::<a class="d" href="/seamonkey/ident?i=_SetProperty">_SetProperty</a>,                                   \
<a class='l d2' name=135 href="#135">135</a>   <a class="d" href="/seamonkey/ident?i=ScriptablePluginObjectBase">ScriptablePluginObjectBase</a>::<a class="d" href="/seamonkey/ident?i=_RemoveProperty">_RemoveProperty</a>,                                \
<a class='l d2' name=136 href="#136">136</a>   <a class="d" href="/seamonkey/ident?i=ScriptablePluginObjectBase">ScriptablePluginObjectBase</a>::<a class="d" href="/seamonkey/ident?i=_Enumerate">_Enumerate</a>,                                     \
<a class='l d2' name=137 href="#137">137</a>   <a class="d" href="/seamonkey/ident?i=ScriptablePluginObjectBase">ScriptablePluginObjectBase</a>::<a class="d" href="/seamonkey/ident?i=_Construct">_Construct</a>                                      \
<a class='l d2' name=138 href="#138">138</a> }
<a class='l d2' name=139 href="#139">139</a> 
<a class='l d2' name=140 href="#140">140</a> <span class='v'>#define </span><a class="d" href="/seamonkey/ident?i=GET_NPOBJECT_CLASS">GET_NPOBJECT_CLASS</a>(<a class="d" href="/seamonkey/ident?i=_class">_class</a>) &amp;<a class="d" href="/seamonkey/ident?i=s">s</a>##_class##_NPClass
<a class='l d2' name=141 href="#141">141</a> 
<a class='l d2' name=142 href="#142">142</a> <span class='v'>void
<a class='l d2' name=143 href="#143">143</a> </span><a class="d" href="/seamonkey/ident?i=ScriptablePluginObjectBase">ScriptablePluginObjectBase</a>::<a class="d" href="/seamonkey/ident?i=Invalidate">Invalidate</a>()
<a class='l d2' name=144 href="#144">144</a> {
<a class='l d2' name=145 href="#145">145</a> }
<a class='l d2' name=146 href="#146">146</a> 
<a class='l d2' name=147 href="#147">147</a> <span class='v'>bool
<a class='l d2' name=148 href="#148">148</a> </span><a class="d" href="/seamonkey/ident?i=ScriptablePluginObjectBase">ScriptablePluginObjectBase</a>::<a class="d" href="/seamonkey/ident?i=HasMethod">HasMethod</a>(<a class="d" href="/seamonkey/ident?i=NPIdentifier">NPIdentifier</a> <a class="d" href="/seamonkey/ident?i=name">name</a>)
<a class='l d2' name=149 href="#149">149</a> {
<a class='l d2' name=150 href="#150">150</a>   <span class='v'>return </span><span class='v'>false;</span>
<a class='l d2' name=151 href="#151">151</a> }
<a class='l d2' name=152 href="#152">152</a> 
<a class='l d2' name=153 href="#153">153</a> <span class='v'>bool
<a class='l d2' name=154 href="#154">154</a> </span><a class="d" href="/seamonkey/ident?i=ScriptablePluginObjectBase">ScriptablePluginObjectBase</a>::<a class="d" href="/seamonkey/ident?i=Invoke">Invoke</a>(<a class="d" href="/seamonkey/ident?i=NPIdentifier">NPIdentifier</a> <a class="d" href="/seamonkey/ident?i=name">name</a>, <span class='v'>const </span><span class='a'>NPVariant</span> *<a class="d" href="/seamonkey/ident?i=args">args</a>,
<a class='l d2' name=155 href="#155">155</a>                                    <a class="d" href="/seamonkey/ident?i=uint32_t">uint32_t</a> <a class="d" href="/seamonkey/ident?i=argCount">argCount</a>, <span class='a'>NPVariant</span> *<a class="d" href="/seamonkey/ident?i=result">result</a>)
<a class='l d2' name=156 href="#156">156</a> {
<a class='l d2' name=157 href="#157">157</a>   <span class='v'>return </span><span class='v'>false;</span>
<a class='l d2' name=158 href="#158">158</a> }
<a class='l d2' name=159 href="#159">159</a> 
<a class='l d2' name=160 href="#160">160</a> <span class='v'>bool
<a class='l d2' name=161 href="#161">161</a> </span><a class="d" href="/seamonkey/ident?i=ScriptablePluginObjectBase">ScriptablePluginObjectBase</a>::<a class="d" href="/seamonkey/ident?i=InvokeDefault">InvokeDefault</a>(<span class='v'>const </span><span class='a'>NPVariant</span> *<a class="d" href="/seamonkey/ident?i=args">args</a>,
<a class='l d2' name=162 href="#162">162</a>                                           <a class="d" href="/seamonkey/ident?i=uint32_t">uint32_t</a> <a class="d" href="/seamonkey/ident?i=argCount">argCount</a>, <span class='a'>NPVariant</span> *<a class="d" href="/seamonkey/ident?i=result">result</a>)
<a class='l d2' name=163 href="#163">163</a> {
<a class='l d2' name=164 href="#164">164</a>   <span class='v'>return </span><span class='v'>false;</span>
<a class='l d2' name=165 href="#165">165</a> }
<a class='l d2' name=166 href="#166">166</a> 
<a class='l d2' name=167 href="#167">167</a> <span class='v'>bool
<a class='l d2' name=168 href="#168">168</a> </span><a class="d" href="/seamonkey/ident?i=ScriptablePluginObjectBase">ScriptablePluginObjectBase</a>::<a class="d" href="/seamonkey/ident?i=HasProperty">HasProperty</a>(<a class="d" href="/seamonkey/ident?i=NPIdentifier">NPIdentifier</a> <a class="d" href="/seamonkey/ident?i=name">name</a>)
<a class='l d2' name=169 href="#169">169</a> {
<a class='l d2' name=170 href="#170">170</a>   <span class='v'>return </span><span class='v'>false;</span>
<a class='l d2' name=171 href="#171">171</a> }
<a class='l d2' name=172 href="#172">172</a> 
<a class='l d2' name=173 href="#173">173</a> <span class='v'>bool
<a class='l d2' name=174 href="#174">174</a> </span><a class="d" href="/seamonkey/ident?i=ScriptablePluginObjectBase">ScriptablePluginObjectBase</a>::<a class="d" href="/seamonkey/ident?i=GetProperty">GetProperty</a>(<a class="d" href="/seamonkey/ident?i=NPIdentifier">NPIdentifier</a> <a class="d" href="/seamonkey/ident?i=name">name</a>, <span class='a'>NPVariant</span> *<a class="d" href="/seamonkey/ident?i=result">result</a>)
<a class='l d2' name=175 href="#175">175</a> {
<a class='l d2' name=176 href="#176">176</a>   <span class='v'>return </span><span class='v'>false;</span>
<a class='l d2' name=177 href="#177">177</a> }
<a class='l d2' name=178 href="#178">178</a> 
<a class='l d2' name=179 href="#179">179</a> <span class='v'>bool
<a class='l d2' name=180 href="#180">180</a> </span><a class="d" href="/seamonkey/ident?i=ScriptablePluginObjectBase">ScriptablePluginObjectBase</a>::<a class="d" href="/seamonkey/ident?i=SetProperty">SetProperty</a>(<a class="d" href="/seamonkey/ident?i=NPIdentifier">NPIdentifier</a> <a class="d" href="/seamonkey/ident?i=name">name</a>,
<a class='l d2' name=181 href="#181">181</a>                                         <span class='v'>const </span><span class='a'>NPVariant</span> *<a class="d" href="/seamonkey/ident?i=value">value</a>)
<a class='l d2' name=182 href="#182">182</a> {
<a class='l d2' name=183 href="#183">183</a>   <span class='v'>if </span>(<a class="d" href="/seamonkey/ident?i=name">name</a> == <a class="d" href="/seamonkey/ident?i=sBar_id">sBar_id</a>) {
<a class='l d2' name=184 href="#184">184</a>     <a class="d" href="/seamonkey/ident?i=printf">printf</a> (<span class='s'>"bar set\n"</span>);
<a class='l d2' name=185 href="#185">185</a> 
<a class='l d2' name=186 href="#186">186</a>     <span class='v'>return </span><span class='v'>true;</span>
<a class='l d2' name=187 href="#187">187</a>   }
<a class='l d2' name=188 href="#188">188</a> 
<a class='l d2' name=189 href="#189">189</a>   <span class='v'>return </span><span class='v'>false;</span>
<a class='l d2' name=190 href="#190">190</a> }
<a class='l d2' name=191 href="#191">191</a> 
<a class='l d2' name=192 href="#192">192</a> <span class='v'>bool
<a class='l d2' name=193 href="#193">193</a> </span><a class="d" href="/seamonkey/ident?i=ScriptablePluginObjectBase">ScriptablePluginObjectBase</a>::<a class="d" href="/seamonkey/ident?i=RemoveProperty">RemoveProperty</a>(<a class="d" href="/seamonkey/ident?i=NPIdentifier">NPIdentifier</a> <a class="d" href="/seamonkey/ident?i=name">name</a>)
<a class='l d2' name=194 href="#194">194</a> {
<a class='l d2' name=195 href="#195">195</a>   <span class='v'>return </span><span class='v'>false;</span>
<a class='l d2' name=196 href="#196">196</a> }
<a class='l d2' name=197 href="#197">197</a> 
<a class='l d2' name=198 href="#198">198</a> <span class='v'>bool
<a class='l d2' name=199 href="#199">199</a> </span><a class="d" href="/seamonkey/ident?i=ScriptablePluginObjectBase">ScriptablePluginObjectBase</a>::<a class="d" href="/seamonkey/ident?i=Enumerate">Enumerate</a>(<a class="d" href="/seamonkey/ident?i=NPIdentifier">NPIdentifier</a> **<a class="d" href="/seamonkey/ident?i=identifier">identifier</a>,
<a class='l d2' name=200 href="#200">200</a>                                       <a class="d" href="/seamonkey/ident?i=uint32_t">uint32_t</a> *<a class="d" href="/seamonkey/ident?i=count">count</a>)
<a class='l d2' name=201 href="#201">201</a> {
<a class='l d2' name=202 href="#202">202</a>   <span class='v'>return </span><span class='v'>false;</span>
<a class='l d2' name=203 href="#203">203</a> }
<a class='l d2' name=204 href="#204">204</a> 
<a class='l d2' name=205 href="#205">205</a> <span class='v'>bool
<a class='l d2' name=206 href="#206">206</a> </span><a class="d" href="/seamonkey/ident?i=ScriptablePluginObjectBase">ScriptablePluginObjectBase</a>::<a class="d" href="/seamonkey/ident?i=Construct">Construct</a>(<span class='v'>const </span><span class='a'>NPVariant</span> *<a class="d" href="/seamonkey/ident?i=args">args</a>, <a class="d" href="/seamonkey/ident?i=uint32_t">uint32_t</a> <a class="d" href="/seamonkey/ident?i=argCount">argCount</a>,
<a class='l d2' name=207 href="#207">207</a>                                       <span class='a'>NPVariant</span> *<a class="d" href="/seamonkey/ident?i=result">result</a>)
<a class='l d2' name=208 href="#208">208</a> {
<a class='l d2' name=209 href="#209">209</a>   <span class='v'>return </span><span class='v'>false;</span>
<a class='l d2' name=210 href="#210">210</a> }
<a class='l d2' name=211 href="#211">211</a> 
<a class='l d2' name=212 href="#212">212</a> <span class='c'>// static</span>
<a class='l d2' name=213 href="#213">213</a> <span class='c'></span><span class='v'>void
<a class='l d2' name=214 href="#214">214</a> </span><a class="d" href="/seamonkey/ident?i=ScriptablePluginObjectBase">ScriptablePluginObjectBase</a>::<a class="d" href="/seamonkey/ident?i=_Deallocate">_Deallocate</a>(<a class="d" href="/seamonkey/ident?i=NPObject">NPObject</a> *<a class="d" href="/seamonkey/ident?i=npobj">npobj</a>)
<a class='l d2' name=215 href="#215">215</a> {
<a class='l d2' name=216 href="#216">216</a>   <span class='c'>// Call the virtual destructor.</span>
<a class='l d2' name=217 href="#217">217</a> <span class='c'></span>  <span class='v'>delete </span>(<a class="d" href="/seamonkey/ident?i=ScriptablePluginObjectBase">ScriptablePluginObjectBase</a> *)<a class="d" href="/seamonkey/ident?i=npobj">npobj</a>;
<a class='l d2' name=218 href="#218">218</a> }
<a class='l d2' name=219 href="#219">219</a> 
<a class='l d2' name=220 href="#220">220</a> <span class='c'>// static</span>
<a class='l d2' name=221 href="#221">221</a> <span class='c'></span><span class='v'>void
<a class='l d2' name=222 href="#222">222</a> </span><a class="d" href="/seamonkey/ident?i=ScriptablePluginObjectBase">ScriptablePluginObjectBase</a>::<a class="d" href="/seamonkey/ident?i=_Invalidate">_Invalidate</a>(<a class="d" href="/seamonkey/ident?i=NPObject">NPObject</a> *<a class="d" href="/seamonkey/ident?i=npobj">npobj</a>)
<a class='l d2' name=223 href="#223">223</a> {
<a class='l d2' name=224 href="#224">224</a>   ((<a class="d" href="/seamonkey/ident?i=ScriptablePluginObjectBase">ScriptablePluginObjectBase</a> *)<a class="d" href="/seamonkey/ident?i=npobj">npobj</a>)-&gt;<a class="d" href="/seamonkey/ident?i=Invalidate">Invalidate</a>();
<a class='l d2' name=225 href="#225">225</a> }
<a class='l d2' name=226 href="#226">226</a> 
<a class='l d2' name=227 href="#227">227</a> <span class='c'>// static</span>
<a class='l d2' name=228 href="#228">228</a> <span class='c'></span><span class='v'>bool
<a class='l d2' name=229 href="#229">229</a> </span><a class="d" href="/seamonkey/ident?i=ScriptablePluginObjectBase">ScriptablePluginObjectBase</a>::<a class="d" href="/seamonkey/ident?i=_HasMethod">_HasMethod</a>(<a class="d" href="/seamonkey/ident?i=NPObject">NPObject</a> *<a class="d" href="/seamonkey/ident?i=npobj">npobj</a>, <a class="d" href="/seamonkey/ident?i=NPIdentifier">NPIdentifier</a> <a class="d" href="/seamonkey/ident?i=name">name</a>)
<a class='l d2' name=230 href="#230">230</a> {
<a class='l d2' name=231 href="#231">231</a>   <span class='v'>return </span>((<a class="d" href="/seamonkey/ident?i=ScriptablePluginObjectBase">ScriptablePluginObjectBase</a> *)<a class="d" href="/seamonkey/ident?i=npobj">npobj</a>)-&gt;<a class="d" href="/seamonkey/ident?i=HasMethod">HasMethod</a>(<a class="d" href="/seamonkey/ident?i=name">name</a>);
<a class='l d2' name=232 href="#232">232</a> }
<a class='l d2' name=233 href="#233">233</a> 
<a class='l d2' name=234 href="#234">234</a> <span class='c'>// static</span>
<a class='l d2' name=235 href="#235">235</a> <span class='c'></span><span class='v'>bool
<a class='l d2' name=236 href="#236">236</a> </span><a class="d" href="/seamonkey/ident?i=ScriptablePluginObjectBase">ScriptablePluginObjectBase</a>::<a class="d" href="/seamonkey/ident?i=_Invoke">_Invoke</a>(<a class="d" href="/seamonkey/ident?i=NPObject">NPObject</a> *<a class="d" href="/seamonkey/ident?i=npobj">npobj</a>, <a class="d" href="/seamonkey/ident?i=NPIdentifier">NPIdentifier</a> <a class="d" href="/seamonkey/ident?i=name">name</a>,
<a class='l d2' name=237 href="#237">237</a>                                     <span class='v'>const </span><span class='a'>NPVariant</span> *<a class="d" href="/seamonkey/ident?i=args">args</a>, <a class="d" href="/seamonkey/ident?i=uint32_t">uint32_t</a> <a class="d" href="/seamonkey/ident?i=argCount">argCount</a>,
<a class='l d2' name=238 href="#238">238</a>                                     <span class='a'>NPVariant</span> *<a class="d" href="/seamonkey/ident?i=result">result</a>)
<a class='l d2' name=239 href="#239">239</a> {
<a class='l d2' name=240 href="#240">240</a>   <span class='v'>return </span>((<a class="d" href="/seamonkey/ident?i=ScriptablePluginObjectBase">ScriptablePluginObjectBase</a> *)<a class="d" href="/seamonkey/ident?i=npobj">npobj</a>)-&gt;<a class="d" href="/seamonkey/ident?i=Invoke">Invoke</a>(<a class="d" href="/seamonkey/ident?i=name">name</a>, <a class="d" href="/seamonkey/ident?i=args">args</a>, <a class="d" href="/seamonkey/ident?i=argCount">argCount</a>,
<a class='l d2' name=241 href="#241">241</a>                                                        <a class="d" href="/seamonkey/ident?i=result">result</a>);
<a class='l d2' name=242 href="#242">242</a> }
<a class='l d2' name=243 href="#243">243</a> 
<a class='l d2' name=244 href="#244">244</a> <span class='c'>// static</span>
<a class='l d2' name=245 href="#245">245</a> <span class='c'></span><span class='v'>bool
<a class='l d2' name=246 href="#246">246</a> </span><a class="d" href="/seamonkey/ident?i=ScriptablePluginObjectBase">ScriptablePluginObjectBase</a>::<a class="d" href="/seamonkey/ident?i=_InvokeDefault">_InvokeDefault</a>(<a class="d" href="/seamonkey/ident?i=NPObject">NPObject</a> *<a class="d" href="/seamonkey/ident?i=npobj">npobj</a>,
<a class='l d2' name=247 href="#247">247</a>                                            <span class='v'>const </span><span class='a'>NPVariant</span> *<a class="d" href="/seamonkey/ident?i=args">args</a>,
<a class='l d2' name=248 href="#248">248</a>                                            <a class="d" href="/seamonkey/ident?i=uint32_t">uint32_t</a> <a class="d" href="/seamonkey/ident?i=argCount">argCount</a>,
<a class='l d2' name=249 href="#249">249</a>                                            <span class='a'>NPVariant</span> *<a class="d" href="/seamonkey/ident?i=result">result</a>)
<a class='l d2' name=250 href="#250">250</a> {
<a class='l d2' name=251 href="#251">251</a>   <span class='v'>return </span>((<a class="d" href="/seamonkey/ident?i=ScriptablePluginObjectBase">ScriptablePluginObjectBase</a> *)<a class="d" href="/seamonkey/ident?i=npobj">npobj</a>)-&gt;<a class="d" href="/seamonkey/ident?i=InvokeDefault">InvokeDefault</a>(<a class="d" href="/seamonkey/ident?i=args">args</a>, <a class="d" href="/seamonkey/ident?i=argCount">argCount</a>,
<a class='l d2' name=252 href="#252">252</a>                                                               <a class="d" href="/seamonkey/ident?i=result">result</a>);
<a class='l d2' name=253 href="#253">253</a> }
<a class='l d2' name=254 href="#254">254</a> 
<a class='l d2' name=255 href="#255">255</a> <span class='c'>// static</span>
<a class='l d2' name=256 href="#256">256</a> <span class='c'></span><span class='v'>bool
<a class='l d2' name=257 href="#257">257</a> </span><a class="d" href="/seamonkey/ident?i=ScriptablePluginObjectBase">ScriptablePluginObjectBase</a>::<a class="d" href="/seamonkey/ident?i=_HasProperty">_HasProperty</a>(<a class="d" href="/seamonkey/ident?i=NPObject">NPObject</a> * <a class="d" href="/seamonkey/ident?i=npobj">npobj</a>, <a class="d" href="/seamonkey/ident?i=NPIdentifier">NPIdentifier</a> <a class="d" href="/seamonkey/ident?i=name">name</a>)
<a class='l d2' name=258 href="#258">258</a> {
<a class='l d2' name=259 href="#259">259</a>   <span class='v'>return </span>((<a class="d" href="/seamonkey/ident?i=ScriptablePluginObjectBase">ScriptablePluginObjectBase</a> *)<a class="d" href="/seamonkey/ident?i=npobj">npobj</a>)-&gt;<a class="d" href="/seamonkey/ident?i=HasProperty">HasProperty</a>(<a class="d" href="/seamonkey/ident?i=name">name</a>);
<a class='l d2' name=260 href="#260">260</a> }
<a class='l d2' name=261 href="#261">261</a> 
<a class='l d2' name=262 href="#262">262</a> <span class='c'>// static</span>
<a class='l d2' name=263 href="#263">263</a> <span class='c'></span><span class='v'>bool
<a class='l d2' name=264 href="#264">264</a> </span><a class="d" href="/seamonkey/ident?i=ScriptablePluginObjectBase">ScriptablePluginObjectBase</a>::<a class="d" href="/seamonkey/ident?i=_GetProperty">_GetProperty</a>(<a class="d" href="/seamonkey/ident?i=NPObject">NPObject</a> *<a class="d" href="/seamonkey/ident?i=npobj">npobj</a>, <a class="d" href="/seamonkey/ident?i=NPIdentifier">NPIdentifier</a> <a class="d" href="/seamonkey/ident?i=name">name</a>,
<a class='l d2' name=265 href="#265">265</a>                                          <span class='a'>NPVariant</span> *<a class="d" href="/seamonkey/ident?i=result">result</a>)
<a class='l d2' name=266 href="#266">266</a> {
<a class='l d2' name=267 href="#267">267</a>   <span class='v'>return </span>((<a class="d" href="/seamonkey/ident?i=ScriptablePluginObjectBase">ScriptablePluginObjectBase</a> *)<a class="d" href="/seamonkey/ident?i=npobj">npobj</a>)-&gt;<a class="d" href="/seamonkey/ident?i=GetProperty">GetProperty</a>(<a class="d" href="/seamonkey/ident?i=name">name</a>, <a class="d" href="/seamonkey/ident?i=result">result</a>);
<a class='l d2' name=268 href="#268">268</a> }
<a class='l d2' name=269 href="#269">269</a> 
<a class='l d2' name=270 href="#270">270</a> <span class='c'>// static</span>
<a class='l d2' name=271 href="#271">271</a> <span class='c'></span><span class='v'>bool
<a class='l d2' name=272 href="#272">272</a> </span><a class="d" href="/seamonkey/ident?i=ScriptablePluginObjectBase">ScriptablePluginObjectBase</a>::<a class="d" href="/seamonkey/ident?i=_SetProperty">_SetProperty</a>(<a class="d" href="/seamonkey/ident?i=NPObject">NPObject</a> *<a class="d" href="/seamonkey/ident?i=npobj">npobj</a>, <a class="d" href="/seamonkey/ident?i=NPIdentifier">NPIdentifier</a> <a class="d" href="/seamonkey/ident?i=name">name</a>,
<a class='l d2' name=273 href="#273">273</a>                                          <span class='v'>const </span><span class='a'>NPVariant</span> *<a class="d" href="/seamonkey/ident?i=value">value</a>)
<a class='l d2' name=274 href="#274">274</a> {
<a class='l d2' name=275 href="#275">275</a>   <span class='v'>return </span>((<a class="d" href="/seamonkey/ident?i=ScriptablePluginObjectBase">ScriptablePluginObjectBase</a> *)<a class="d" href="/seamonkey/ident?i=npobj">npobj</a>)-&gt;<a class="d" href="/seamonkey/ident?i=SetProperty">SetProperty</a>(<a class="d" href="/seamonkey/ident?i=name">name</a>, <a class="d" href="/seamonkey/ident?i=value">value</a>);
<a class='l d2' name=276 href="#276">276</a> }
<a class='l d2' name=277 href="#277">277</a> 
<a class='l d2' name=278 href="#278">278</a> <span class='c'>// static</span>
<a class='l d2' name=279 href="#279">279</a> <span class='c'></span><span class='v'>bool
<a class='l d2' name=280 href="#280">280</a> </span><a class="d" href="/seamonkey/ident?i=ScriptablePluginObjectBase">ScriptablePluginObjectBase</a>::<a class="d" href="/seamonkey/ident?i=_RemoveProperty">_RemoveProperty</a>(<a class="d" href="/seamonkey/ident?i=NPObject">NPObject</a> *<a class="d" href="/seamonkey/ident?i=npobj">npobj</a>, <a class="d" href="/seamonkey/ident?i=NPIdentifier">NPIdentifier</a> <a class="d" href="/seamonkey/ident?i=name">name</a>)
<a class='l d2' name=281 href="#281">281</a> {
<a class='l d2' name=282 href="#282">282</a>   <span class='v'>return </span>((<a class="d" href="/seamonkey/ident?i=ScriptablePluginObjectBase">ScriptablePluginObjectBase</a> *)<a class="d" href="/seamonkey/ident?i=npobj">npobj</a>)-&gt;<a class="d" href="/seamonkey/ident?i=RemoveProperty">RemoveProperty</a>(<a class="d" href="/seamonkey/ident?i=name">name</a>);
<a class='l d2' name=283 href="#283">283</a> }
<a class='l d2' name=284 href="#284">284</a> 
<a class='l d2' name=285 href="#285">285</a> <span class='c'>// static</span>
<a class='l d2' name=286 href="#286">286</a> <span class='c'></span><span class='v'>bool
<a class='l d2' name=287 href="#287">287</a> </span><a class="d" href="/seamonkey/ident?i=ScriptablePluginObjectBase">ScriptablePluginObjectBase</a>::<a class="d" href="/seamonkey/ident?i=_Enumerate">_Enumerate</a>(<a class="d" href="/seamonkey/ident?i=NPObject">NPObject</a> *<a class="d" href="/seamonkey/ident?i=npobj">npobj</a>,
<a class='l d2' name=288 href="#288">288</a>                                        <a class="d" href="/seamonkey/ident?i=NPIdentifier">NPIdentifier</a> **<a class="d" href="/seamonkey/ident?i=identifier">identifier</a>,
<a class='l d2' name=289 href="#289">289</a>                                        <a class="d" href="/seamonkey/ident?i=uint32_t">uint32_t</a> *<a class="d" href="/seamonkey/ident?i=count">count</a>)
<a class='l d2' name=290 href="#290">290</a> {
<a class='l d2' name=291 href="#291">291</a>   <span class='v'>return </span>((<a class="d" href="/seamonkey/ident?i=ScriptablePluginObjectBase">ScriptablePluginObjectBase</a> *)<a class="d" href="/seamonkey/ident?i=npobj">npobj</a>)-&gt;<a class="d" href="/seamonkey/ident?i=Enumerate">Enumerate</a>(<a class="d" href="/seamonkey/ident?i=identifier">identifier</a>, <a class="d" href="/seamonkey/ident?i=count">count</a>);
<a class='l d2' name=292 href="#292">292</a> }
<a class='l d2' name=293 href="#293">293</a> 
<a class='l d2' name=294 href="#294">294</a> <span class='c'>// static</span>
<a class='l d2' name=295 href="#295">295</a> <span class='c'></span><span class='v'>bool
<a class='l d2' name=296 href="#296">296</a> </span><a class="d" href="/seamonkey/ident?i=ScriptablePluginObjectBase">ScriptablePluginObjectBase</a>::<a class="d" href="/seamonkey/ident?i=_Construct">_Construct</a>(<a class="d" href="/seamonkey/ident?i=NPObject">NPObject</a> *<a class="d" href="/seamonkey/ident?i=npobj">npobj</a>, <span class='v'>const </span><span class='a'>NPVariant</span> *<a class="d" href="/seamonkey/ident?i=args">args</a>,
<a class='l d2' name=297 href="#297">297</a>                                        <a class="d" href="/seamonkey/ident?i=uint32_t">uint32_t</a> <a class="d" href="/seamonkey/ident?i=argCount">argCount</a>, <span class='a'>NPVariant</span> *<a class="d" href="/seamonkey/ident?i=result">result</a>)
<a class='l d2' name=298 href="#298">298</a> {
<a class='l d2' name=299 href="#299">299</a>   <span class='v'>return </span>((<a class="d" href="/seamonkey/ident?i=ScriptablePluginObjectBase">ScriptablePluginObjectBase</a> *)<a class="d" href="/seamonkey/ident?i=npobj">npobj</a>)-&gt;<a class="d" href="/seamonkey/ident?i=Construct">Construct</a>(<a class="d" href="/seamonkey/ident?i=args">args</a>, <a class="d" href="/seamonkey/ident?i=argCount">argCount</a>,
<a class='l d2' name=300 href="#300">300</a>                                                           <a class="d" href="/seamonkey/ident?i=result">result</a>);
<a class='l d2' name=301 href="#301">301</a> }
<a class='l d2' name=302 href="#302">302</a> 
<a class='l d2' name=303 href="#303">303</a> 
<a class='l d2' name=304 href="#304">304</a> <span class='v'>class </span><a class="d" href="/seamonkey/ident?i=ConstructablePluginObject">ConstructablePluginObject</a> : <span class='v'>public </span><a class="d" href="/seamonkey/ident?i=ScriptablePluginObjectBase">ScriptablePluginObjectBase</a>
<a class='l d2' name=305 href="#305">305</a> {
<a class='l d2' name=306 href="#306">306</a> <span class='v'>public:</span>
<a class='l d2' name=307 href="#307">307</a>   <a class="d" href="/seamonkey/ident?i=ConstructablePluginObject">ConstructablePluginObject</a>(<a class="d" href="/seamonkey/ident?i=NPP">NPP</a> <a class="d" href="/seamonkey/ident?i=npp">npp</a>)
<a class='l d2' name=308 href="#308">308</a>     : <a class="d" href="/seamonkey/ident?i=ScriptablePluginObjectBase">ScriptablePluginObjectBase</a>(<a class="d" href="/seamonkey/ident?i=npp">npp</a>)
<a class='l d2' name=309 href="#309">309</a>   {
<a class='l d2' name=310 href="#310">310</a>   }
<a class='l d2' name=311 href="#311">311</a> 
<a class='l d2' name=312 href="#312">312</a>   <span class='v'>virtual </span><span class='v'>bool </span><a class="d" href="/seamonkey/ident?i=Construct">Construct</a>(<span class='v'>const </span><span class='a'>NPVariant</span> *<a class="d" href="/seamonkey/ident?i=args">args</a>, <a class="d" href="/seamonkey/ident?i=uint32_t">uint32_t</a> <a class="d" href="/seamonkey/ident?i=argCount">argCount</a>,
<a class='l d2' name=313 href="#313">313</a>                          <span class='a'>NPVariant</span> *<a class="d" href="/seamonkey/ident?i=result">result</a>);
<a class='l d2' name=314 href="#314">314</a> };
<a class='l d2' name=315 href="#315">315</a> 
<a class='l d2' name=316 href="#316">316</a> <span class='v'>static </span><a class="d" href="/seamonkey/ident?i=NPObject">NPObject</a> *
<a class='l d2' name=317 href="#317">317</a> <a class="d" href="/seamonkey/ident?i=AllocateConstructablePluginObject">AllocateConstructablePluginObject</a>(<a class="d" href="/seamonkey/ident?i=NPP">NPP</a> <a class="d" href="/seamonkey/ident?i=npp">npp</a>, <a class="d" href="/seamonkey/ident?i=NPClass">NPClass</a> *<a class="d" href="/seamonkey/ident?i=aClass">aClass</a>)
<a class='l d2' name=318 href="#318">318</a> {
<a class='l d2' name=319 href="#319">319</a>   <span class='v'>return </span><span class='v'>new </span><a class="d" href="/seamonkey/ident?i=ConstructablePluginObject">ConstructablePluginObject</a>(<a class="d" href="/seamonkey/ident?i=npp">npp</a>);
<a class='l d2' name=320 href="#320">320</a> }
<a class='l d2' name=321 href="#321">321</a> 
<a class='l d2' name=322 href="#322">322</a> <a class="d" href="/seamonkey/ident?i=DECLARE_NPOBJECT_CLASS_WITH_BASE">DECLARE_NPOBJECT_CLASS_WITH_BASE</a>(<a class="d" href="/seamonkey/ident?i=ConstructablePluginObject">ConstructablePluginObject</a>,
<a class='l d2' name=323 href="#323">323</a>                                  <a class="d" href="/seamonkey/ident?i=AllocateConstructablePluginObject">AllocateConstructablePluginObject</a>);
<a class='l d2' name=324 href="#324">324</a> 
<a class='l d2' name=325 href="#325">325</a> <span class='v'>bool
<a class='l d2' name=326 href="#326">326</a> </span><a class="d" href="/seamonkey/ident?i=ConstructablePluginObject">ConstructablePluginObject</a>::<a class="d" href="/seamonkey/ident?i=Construct">Construct</a>(<span class='v'>const </span><span class='a'>NPVariant</span> *<a class="d" href="/seamonkey/ident?i=args">args</a>, <a class="d" href="/seamonkey/ident?i=uint32_t">uint32_t</a> <a class="d" href="/seamonkey/ident?i=argCount">argCount</a>,
<a class='l d2' name=327 href="#327">327</a>                                      <span class='a'>NPVariant</span> *<a class="d" href="/seamonkey/ident?i=result">result</a>)
<a class='l d2' name=328 href="#328">328</a> {
<a class='l d2' name=329 href="#329">329</a>   <a class="d" href="/seamonkey/ident?i=printf">printf</a>(<span class='s'>"Creating new ConstructablePluginObject!\n"</span>);
<a class='l d2' name=330 href="#330">330</a> 
<a class='l d2' name=331 href="#331">331</a>   <a class="d" href="/seamonkey/ident?i=NPObject">NPObject</a> *<a class="d" href="/seamonkey/ident?i=myobj">myobj</a> =
<a class='l d2' name=332 href="#332">332</a>     <a class="d" href="/seamonkey/ident?i=NPN_CreateObject">NPN_CreateObject</a>(<a class="d" href="/seamonkey/ident?i=mNpp">mNpp</a>, <a class="d" href="/seamonkey/ident?i=GET_NPOBJECT_CLASS">GET_NPOBJECT_CLASS</a>(<a class="d" href="/seamonkey/ident?i=ConstructablePluginObject">ConstructablePluginObject</a>));
<a class='l d2' name=333 href="#333">333</a>   <span class='v'>if </span>(!<a class="d" href="/seamonkey/ident?i=myobj">myobj</a>)
<a class='l d2' name=334 href="#334">334</a>     <span class='v'>return </span><span class='v'>false;</span>
<a class='l d2' name=335 href="#335">335</a> 
<a class='l d2' name=336 href="#336">336</a>   <a class="d" href="/seamonkey/ident?i=OBJECT_TO_NPVARIANT">OBJECT_TO_NPVARIANT</a>(<a class="d" href="/seamonkey/ident?i=myobj">myobj</a>, *<a class="d" href="/seamonkey/ident?i=result">result</a>);
<a class='l d2' name=337 href="#337">337</a> 
<a class='l d2' name=338 href="#338">338</a>   <span class='v'>return </span><span class='v'>true;</span>
<a class='l d2' name=339 href="#339">339</a> }
<a class='l d2' name=340 href="#340">340</a> 
<a class='l d2' name=341 href="#341">341</a> <span class='v'>class </span><a class="d" href="/seamonkey/ident?i=ScriptablePluginObject">ScriptablePluginObject</a> : <span class='v'>public </span><a class="d" href="/seamonkey/ident?i=ScriptablePluginObjectBase">ScriptablePluginObjectBase</a>
<a class='l d2' name=342 href="#342">342</a> {
<a class='l d2' name=343 href="#343">343</a> <span class='v'>public:</span>
<a class='l d2' name=344 href="#344">344</a>   <a class="d" href="/seamonkey/ident?i=ScriptablePluginObject">ScriptablePluginObject</a>(<a class="d" href="/seamonkey/ident?i=NPP">NPP</a> <a class="d" href="/seamonkey/ident?i=npp">npp</a>)
<a class='l d2' name=345 href="#345">345</a>     : <a class="d" href="/seamonkey/ident?i=ScriptablePluginObjectBase">ScriptablePluginObjectBase</a>(<a class="d" href="/seamonkey/ident?i=npp">npp</a>)
<a class='l d2' name=346 href="#346">346</a>   {
<a class='l d2' name=347 href="#347">347</a>   }
<a class='l d2' name=348 href="#348">348</a> 
<a class='l d2' name=349 href="#349">349</a>   <span class='v'>virtual </span><span class='v'>bool </span><a class="d" href="/seamonkey/ident?i=HasMethod">HasMethod</a>(<a class="d" href="/seamonkey/ident?i=NPIdentifier">NPIdentifier</a> <a class="d" href="/seamonkey/ident?i=name">name</a>);
<a class='l d2' name=350 href="#350">350</a>   <span class='v'>virtual </span><span class='v'>bool </span><a class="d" href="/seamonkey/ident?i=HasProperty">HasProperty</a>(<a class="d" href="/seamonkey/ident?i=NPIdentifier">NPIdentifier</a> <a class="d" href="/seamonkey/ident?i=name">name</a>);
<a class='l d2' name=351 href="#351">351</a>   <span class='v'>virtual </span><span class='v'>bool </span><a class="d" href="/seamonkey/ident?i=GetProperty">GetProperty</a>(<a class="d" href="/seamonkey/ident?i=NPIdentifier">NPIdentifier</a> <a class="d" href="/seamonkey/ident?i=name">name</a>, <span class='a'>NPVariant</span> *<a class="d" href="/seamonkey/ident?i=result">result</a>);
<a class='l d2' name=352 href="#352">352</a>   <span class='v'>virtual </span><span class='v'>bool </span><a class="d" href="/seamonkey/ident?i=Invoke">Invoke</a>(<a class="d" href="/seamonkey/ident?i=NPIdentifier">NPIdentifier</a> <a class="d" href="/seamonkey/ident?i=name">name</a>, <span class='v'>const </span><span class='a'>NPVariant</span> *<a class="d" href="/seamonkey/ident?i=args">args</a>,
<a class='l d2' name=353 href="#353">353</a>                       <a class="d" href="/seamonkey/ident?i=uint32_t">uint32_t</a> <a class="d" href="/seamonkey/ident?i=argCount">argCount</a>, <span class='a'>NPVariant</span> *<a class="d" href="/seamonkey/ident?i=result">result</a>);
<a class='l d2' name=354 href="#354">354</a>   <span class='v'>virtual </span><span class='v'>bool </span><a class="d" href="/seamonkey/ident?i=InvokeDefault">InvokeDefault</a>(<span class='v'>const </span><span class='a'>NPVariant</span> *<a class="d" href="/seamonkey/ident?i=args">args</a>, <a class="d" href="/seamonkey/ident?i=uint32_t">uint32_t</a> <a class="d" href="/seamonkey/ident?i=argCount">argCount</a>,
<a class='l d2' name=355 href="#355">355</a>                              <span class='a'>NPVariant</span> *<a class="d" href="/seamonkey/ident?i=result">result</a>);
<a class='l d2' name=356 href="#356">356</a> };
<a class='l d2' name=357 href="#357">357</a> 
<a class='l d2' name=358 href="#358">358</a> <span class='v'>static </span><a class="d" href="/seamonkey/ident?i=NPObject">NPObject</a> *
<a class='l d2' name=359 href="#359">359</a> <a class="d" href="/seamonkey/ident?i=AllocateScriptablePluginObject">AllocateScriptablePluginObject</a>(<a class="d" href="/seamonkey/ident?i=NPP">NPP</a> <a class="d" href="/seamonkey/ident?i=npp">npp</a>, <a class="d" href="/seamonkey/ident?i=NPClass">NPClass</a> *<a class="d" href="/seamonkey/ident?i=aClass">aClass</a>)
<a class='l d2' name=360 href="#360">360</a> {
<a class='l d2' name=361 href="#361">361</a>   <span class='v'>return </span><span class='v'>new </span><a class="d" href="/seamonkey/ident?i=ScriptablePluginObject">ScriptablePluginObject</a>(<a class="d" href="/seamonkey/ident?i=npp">npp</a>);
<a class='l d2' name=362 href="#362">362</a> }
<a class='l d2' name=363 href="#363">363</a> 
<a class='l d2' name=364 href="#364">364</a> <a class="d" href="/seamonkey/ident?i=DECLARE_NPOBJECT_CLASS_WITH_BASE">DECLARE_NPOBJECT_CLASS_WITH_BASE</a>(<a class="d" href="/seamonkey/ident?i=ScriptablePluginObject">ScriptablePluginObject</a>,
<a class='l d2' name=365 href="#365">365</a>                                  <a class="d" href="/seamonkey/ident?i=AllocateScriptablePluginObject">AllocateScriptablePluginObject</a>);
<a class='l d2' name=366 href="#366">366</a> 
<a class='l d2' name=367 href="#367">367</a> <span class='v'>bool
<a class='l d2' name=368 href="#368">368</a> </span><a class="d" href="/seamonkey/ident?i=ScriptablePluginObject">ScriptablePluginObject</a>::<a class="d" href="/seamonkey/ident?i=HasMethod">HasMethod</a>(<a class="d" href="/seamonkey/ident?i=NPIdentifier">NPIdentifier</a> <a class="d" href="/seamonkey/ident?i=name">name</a>)
<a class='l d2' name=369 href="#369">369</a> {
<a class='l d2' name=370 href="#370">370</a>   <span class='v'>return </span><a class="d" href="/seamonkey/ident?i=name">name</a> == <a class="d" href="/seamonkey/ident?i=sFoo_id">sFoo_id</a>;
<a class='l d2' name=371 href="#371">371</a> }
<a class='l d2' name=372 href="#372">372</a> 
<a class='l d2' name=373 href="#373">373</a> <span class='v'>bool
<a class='l d2' name=374 href="#374">374</a> </span><a class="d" href="/seamonkey/ident?i=ScriptablePluginObject">ScriptablePluginObject</a>::<a class="d" href="/seamonkey/ident?i=HasProperty">HasProperty</a>(<a class="d" href="/seamonkey/ident?i=NPIdentifier">NPIdentifier</a> <a class="d" href="/seamonkey/ident?i=name">name</a>)
<a class='l d2' name=375 href="#375">375</a> {
<a class='l d2' name=376 href="#376">376</a>   <span class='v'>return </span>(<a class="d" href="/seamonkey/ident?i=name">name</a> == <a class="d" href="/seamonkey/ident?i=sBar_id">sBar_id</a> ||
<a class='l d2' name=377 href="#377">377</a>           <a class="d" href="/seamonkey/ident?i=name">name</a> == <a class="d" href="/seamonkey/ident?i=sPluginType_id">sPluginType_id</a>);
<a class='l d2' name=378 href="#378">378</a> }
<a class='l d2' name=379 href="#379">379</a> 
<a class='l d2' name=380 href="#380">380</a> <span class='v'>bool
<a class='l d2' name=381 href="#381">381</a> </span><a class="d" href="/seamonkey/ident?i=ScriptablePluginObject">ScriptablePluginObject</a>::<a class="d" href="/seamonkey/ident?i=GetProperty">GetProperty</a>(<a class="d" href="/seamonkey/ident?i=NPIdentifier">NPIdentifier</a> <a class="d" href="/seamonkey/ident?i=name">name</a>, <span class='a'>NPVariant</span> *<a class="d" href="/seamonkey/ident?i=result">result</a>)
<a class='l d2' name=382 href="#382">382</a> {
<a class='l d2' name=383 href="#383">383</a>   <a class="d" href="/seamonkey/ident?i=VOID_TO_NPVARIANT">VOID_TO_NPVARIANT</a>(*<a class="d" href="/seamonkey/ident?i=result">result</a>);
<a class='l d2' name=384 href="#384">384</a> 
<a class='l d2' name=385 href="#385">385</a>   <span class='v'>if </span>(<a class="d" href="/seamonkey/ident?i=name">name</a> == <a class="d" href="/seamonkey/ident?i=sBar_id">sBar_id</a>) {
<a class='l d2' name=386 href="#386">386</a>     <span class='v'>static </span><span class='v'>int </span><a class="d" href="/seamonkey/ident?i=a">a</a> = 17;
<a class='l d2' name=387 href="#387">387</a> 
<a class='l d2' name=388 href="#388">388</a>     <a class="d" href="/seamonkey/ident?i=INT32_TO_NPVARIANT">INT32_TO_NPVARIANT</a>(<a class="d" href="/seamonkey/ident?i=a">a</a>, *<a class="d" href="/seamonkey/ident?i=result">result</a>);
<a class='l d2' name=389 href="#389">389</a> 
<a class='l d2' name=390 href="#390">390</a>     <a class="d" href="/seamonkey/ident?i=a">a</a> += 5;
<a class='l d2' name=391 href="#391">391</a> 
<a class='l d2' name=392 href="#392">392</a>     <span class='v'>return </span><span class='v'>true;</span>
<a class='l d2' name=393 href="#393">393</a>   }
<a class='l d2' name=394 href="#394">394</a> 
<a class='l d2' name=395 href="#395">395</a>   <span class='v'>if </span>(<a class="d" href="/seamonkey/ident?i=name">name</a> == <a class="d" href="/seamonkey/ident?i=sPluginType_id">sPluginType_id</a>) {
<a class='l d2' name=396 href="#396">396</a>     <a class="d" href="/seamonkey/ident?i=NPObject">NPObject</a> *<a class="d" href="/seamonkey/ident?i=myobj">myobj</a> =
<a class='l d2' name=397 href="#397">397</a>       <a class="d" href="/seamonkey/ident?i=NPN_CreateObject">NPN_CreateObject</a>(<a class="d" href="/seamonkey/ident?i=mNpp">mNpp</a>, <a class="d" href="/seamonkey/ident?i=GET_NPOBJECT_CLASS">GET_NPOBJECT_CLASS</a>(<a class="d" href="/seamonkey/ident?i=ConstructablePluginObject">ConstructablePluginObject</a>));
<a class='l d2' name=398 href="#398">398</a>     <span class='v'>if </span>(!<a class="d" href="/seamonkey/ident?i=myobj">myobj</a>) {
<a class='l d2' name=399 href="#399">399</a>       <span class='v'>return </span><span class='v'>false;</span>
<a class='l d2' name=400 href="#400">400</a>     }
<a class='l d2' name=401 href="#401">401</a> 
<a class='l d2' name=402 href="#402">402</a>     <a class="d" href="/seamonkey/ident?i=OBJECT_TO_NPVARIANT">OBJECT_TO_NPVARIANT</a>(<a class="d" href="/seamonkey/ident?i=myobj">myobj</a>, *<a class="d" href="/seamonkey/ident?i=result">result</a>);
<a class='l d2' name=403 href="#403">403</a> 
<a class='l d2' name=404 href="#404">404</a>     <span class='v'>return </span><span class='v'>true;</span>
<a class='l d2' name=405 href="#405">405</a>   }
<a class='l d2' name=406 href="#406">406</a> 
<a class='l d2' name=407 href="#407">407</a>   <span class='v'>return </span><span class='v'>true;</span>
<a class='l d2' name=408 href="#408">408</a> }
<a class='l d2' name=409 href="#409">409</a> 
<a class='l d2' name=410 href="#410">410</a> <span class='v'>bool
<a class='l d2' name=411 href="#411">411</a> </span><a class="d" href="/seamonkey/ident?i=ScriptablePluginObject">ScriptablePluginObject</a>::<a class="d" href="/seamonkey/ident?i=Invoke">Invoke</a>(<a class="d" href="/seamonkey/ident?i=NPIdentifier">NPIdentifier</a> <a class="d" href="/seamonkey/ident?i=name">name</a>, <span class='v'>const </span><span class='a'>NPVariant</span> *<a class="d" href="/seamonkey/ident?i=args">args</a>,
<a class='l d2' name=412 href="#412">412</a>                                <a class="d" href="/seamonkey/ident?i=uint32_t">uint32_t</a> <a class="d" href="/seamonkey/ident?i=argCount">argCount</a>, <span class='a'>NPVariant</span> *<a class="d" href="/seamonkey/ident?i=result">result</a>)
<a class='l d2' name=413 href="#413">413</a> {
<a class='l d2' name=414 href="#414">414</a>   <span class='v'>if </span>(<a class="d" href="/seamonkey/ident?i=name">name</a> == <a class="d" href="/seamonkey/ident?i=sFoo_id">sFoo_id</a>) {
<a class='l d2' name=415 href="#415">415</a>     <a class="d" href="/seamonkey/ident?i=printf">printf</a> (<span class='s'>"foo called!\n"</span>);
<a class='l d2' name=416 href="#416">416</a> 
<a class='l d2' name=417 href="#417">417</a>     <span class='a'>NPVariant</span> <a class="d" href="/seamonkey/ident?i=docv">docv</a>;
<a class='l d2' name=418 href="#418">418</a>     <a class="d" href="/seamonkey/ident?i=NPN_GetProperty">NPN_GetProperty</a>(<a class="d" href="/seamonkey/ident?i=mNpp">mNpp</a>, <a class="d" href="/seamonkey/ident?i=sWindowObj">sWindowObj</a>, <a class="d" href="/seamonkey/ident?i=sDocument_id">sDocument_id</a>, &amp;<a class="d" href="/seamonkey/ident?i=docv">docv</a>);
<a class='l d2' name=419 href="#419">419</a> 
<a class='l d2' name=420 href="#420">420</a>     <a class="d" href="/seamonkey/ident?i=NPObject">NPObject</a> *<a class="d" href="/seamonkey/ident?i=doc">doc</a> = <a class="d" href="/seamonkey/ident?i=NPVARIANT_TO_OBJECT">NPVARIANT_TO_OBJECT</a>(<a class="d" href="/seamonkey/ident?i=docv">docv</a>);
<a class='l d2' name=421 href="#421">421</a> 
<a class='l d2' name=422 href="#422">422</a>     <span class='a'>NPVariant</span> <a class="d" href="/seamonkey/ident?i=strv">strv</a>;
<a class='l d2' name=423 href="#423">423</a>     <a class="d" href="/seamonkey/ident?i=STRINGZ_TO_NPVARIANT">STRINGZ_TO_NPVARIANT</a>(<span class='s'>"div"</span>, <a class="d" href="/seamonkey/ident?i=strv">strv</a>);
<a class='l d2' name=424 href="#424">424</a> 
<a class='l d2' name=425 href="#425">425</a>     <span class='a'>NPVariant</span> <a class="d" href="/seamonkey/ident?i=divv">divv</a>;
<a class='l d2' name=426 href="#426">426</a>     <a class="d" href="/seamonkey/ident?i=NPN_Invoke">NPN_Invoke</a>(<a class="d" href="/seamonkey/ident?i=mNpp">mNpp</a>, <a class="d" href="/seamonkey/ident?i=doc">doc</a>, <a class="d" href="/seamonkey/ident?i=sCreateElement_id">sCreateElement_id</a>, &amp;<a class="d" href="/seamonkey/ident?i=strv">strv</a>, 1, &amp;<a class="d" href="/seamonkey/ident?i=divv">divv</a>);
<a class='l d2' name=427 href="#427">427</a> 
<a class='l d2' name=428 href="#428">428</a>     <a class="d" href="/seamonkey/ident?i=STRINGZ_TO_NPVARIANT">STRINGZ_TO_NPVARIANT</a>(<span class='s'>"I'm created by a plugin!"</span>, <a class="d" href="/seamonkey/ident?i=strv">strv</a>);
<a class='l d2' name=429 href="#429">429</a> 
<a class='l d2' name=430 href="#430">430</a>     <span class='a'>NPVariant</span> <a class="d" href="/seamonkey/ident?i=textv">textv</a>;
<a class='l d2' name=431 href="#431">431</a>     <a class="d" href="/seamonkey/ident?i=NPN_Invoke">NPN_Invoke</a>(<a class="d" href="/seamonkey/ident?i=mNpp">mNpp</a>, <a class="d" href="/seamonkey/ident?i=doc">doc</a>, <a class="d" href="/seamonkey/ident?i=sCreateTextNode_id">sCreateTextNode_id</a>, &amp;<a class="d" href="/seamonkey/ident?i=strv">strv</a>, 1, &amp;<a class="d" href="/seamonkey/ident?i=textv">textv</a>);
<a class='l d2' name=432 href="#432">432</a> 
<a class='l d2' name=433 href="#433">433</a>     <span class='a'>NPVariant</span> <a class="d" href="/seamonkey/ident?i=v">v</a>;
<a class='l d2' name=434 href="#434">434</a>     <a class="d" href="/seamonkey/ident?i=NPN_Invoke">NPN_Invoke</a>(<a class="d" href="/seamonkey/ident?i=mNpp">mNpp</a>, <a class="d" href="/seamonkey/ident?i=NPVARIANT_TO_OBJECT">NPVARIANT_TO_OBJECT</a>(<a class="d" href="/seamonkey/ident?i=divv">divv</a>), <a class="d" href="/seamonkey/ident?i=sAppendChild_id">sAppendChild_id</a>, &amp;<a class="d" href="/seamonkey/ident?i=textv">textv</a>, 1,
<a class='l d2' name=435 href="#435">435</a>                &amp;<a class="d" href="/seamonkey/ident?i=v">v</a>);
<a class='l d2' name=436 href="#436">436</a>     <a class="d" href="/seamonkey/ident?i=NPN_ReleaseVariantValue">NPN_ReleaseVariantValue</a>(&amp;<a class="d" href="/seamonkey/ident?i=v">v</a>);
<a class='l d2' name=437 href="#437">437</a> 
<a class='l d2' name=438 href="#438">438</a>     <a class="d" href="/seamonkey/ident?i=NPN_ReleaseVariantValue">NPN_ReleaseVariantValue</a>(&amp;<a class="d" href="/seamonkey/ident?i=textv">textv</a>);
<a class='l d2' name=439 href="#439">439</a> 
<a class='l d2' name=440 href="#440">440</a>     <span class='a'>NPVariant</span> <a class="d" href="/seamonkey/ident?i=bodyv">bodyv</a>;
<a class='l d2' name=441 href="#441">441</a>     <a class="d" href="/seamonkey/ident?i=NPN_GetProperty">NPN_GetProperty</a>(<a class="d" href="/seamonkey/ident?i=mNpp">mNpp</a>, <a class="d" href="/seamonkey/ident?i=doc">doc</a>, <a class="d" href="/seamonkey/ident?i=sBody_id">sBody_id</a>, &amp;<a class="d" href="/seamonkey/ident?i=bodyv">bodyv</a>);
<a class='l d2' name=442 href="#442">442</a> 
<a class='l d2' name=443 href="#443">443</a>     <a class="d" href="/seamonkey/ident?i=NPN_Invoke">NPN_Invoke</a>(<a class="d" href="/seamonkey/ident?i=mNpp">mNpp</a>, <a class="d" href="/seamonkey/ident?i=NPVARIANT_TO_OBJECT">NPVARIANT_TO_OBJECT</a>(<a class="d" href="/seamonkey/ident?i=bodyv">bodyv</a>), <a class="d" href="/seamonkey/ident?i=sAppendChild_id">sAppendChild_id</a>, &amp;<a class="d" href="/seamonkey/ident?i=divv">divv</a>, 1,
<a class='l d2' name=444 href="#444">444</a>                &amp;<a class="d" href="/seamonkey/ident?i=v">v</a>);
<a class='l d2' name=445 href="#445">445</a>     <a class="d" href="/seamonkey/ident?i=NPN_ReleaseVariantValue">NPN_ReleaseVariantValue</a>(&amp;<a class="d" href="/seamonkey/ident?i=v">v</a>);
<a class='l d2' name=446 href="#446">446</a> 
<a class='l d2' name=447 href="#447">447</a>     <a class="d" href="/seamonkey/ident?i=NPN_ReleaseVariantValue">NPN_ReleaseVariantValue</a>(&amp;<a class="d" href="/seamonkey/ident?i=divv">divv</a>);
<a class='l d2' name=448 href="#448">448</a>     <a class="d" href="/seamonkey/ident?i=NPN_ReleaseVariantValue">NPN_ReleaseVariantValue</a>(&amp;<a class="d" href="/seamonkey/ident?i=bodyv">bodyv</a>);
<a class='l d2' name=449 href="#449">449</a> 
<a class='l d2' name=450 href="#450">450</a>     <a class="d" href="/seamonkey/ident?i=NPN_ReleaseVariantValue">NPN_ReleaseVariantValue</a>(&amp;<a class="d" href="/seamonkey/ident?i=docv">docv</a>);
<a class='l d2' name=451 href="#451">451</a> 
<a class='l d2' name=452 href="#452">452</a>     <a class="d" href="/seamonkey/ident?i=STRINGZ_TO_NPVARIANT">STRINGZ_TO_NPVARIANT</a>(<a class="d" href="/seamonkey/ident?i=strdup">strdup</a>(<span class='s'>"foo return val"</span>), *<a class="d" href="/seamonkey/ident?i=result">result</a>);
<a class='l d2' name=453 href="#453">453</a> 
<a class='l d2' name=454 href="#454">454</a>     <span class='v'>return </span><a class="d" href="/seamonkey/ident?i=PR_TRUE">PR_TRUE</a>;
<a class='l d2' name=455 href="#455">455</a>   }
<a class='l d2' name=456 href="#456">456</a> 
<a class='l d2' name=457 href="#457">457</a>   <span class='v'>return </span><a class="d" href="/seamonkey/ident?i=PR_FALSE">PR_FALSE</a>;
<a class='l d2' name=458 href="#458">458</a> }
<a class='l d2' name=459 href="#459">459</a> 
<a class='l d2' name=460 href="#460">460</a> <span class='v'>bool
<a class='l d2' name=461 href="#461">461</a> </span><a class="d" href="/seamonkey/ident?i=ScriptablePluginObject">ScriptablePluginObject</a>::<a class="d" href="/seamonkey/ident?i=InvokeDefault">InvokeDefault</a>(<span class='v'>const </span><span class='a'>NPVariant</span> *<a class="d" href="/seamonkey/ident?i=args">args</a>, <a class="d" href="/seamonkey/ident?i=uint32_t">uint32_t</a> <a class="d" href="/seamonkey/ident?i=argCount">argCount</a>,
<a class='l d2' name=462 href="#462">462</a>                                       <span class='a'>NPVariant</span> *<a class="d" href="/seamonkey/ident?i=result">result</a>)
<a class='l d2' name=463 href="#463">463</a> {
<a class='l d2' name=464 href="#464">464</a>   <a class="d" href="/seamonkey/ident?i=printf">printf</a> (<span class='s'>"ScriptablePluginObject default method called!\n"</span>);
<a class='l d2' name=465 href="#465">465</a> 
<a class='l d2' name=466 href="#466">466</a>   <a class="d" href="/seamonkey/ident?i=STRINGZ_TO_NPVARIANT">STRINGZ_TO_NPVARIANT</a>(<a class="d" href="/seamonkey/ident?i=strdup">strdup</a>(<span class='s'>"default method return val"</span>), *<a class="d" href="/seamonkey/ident?i=result">result</a>);
<a class='l d2' name=467 href="#467">467</a> 
<a class='l d2' name=468 href="#468">468</a>   <span class='v'>return </span><a class="d" href="/seamonkey/ident?i=PR_TRUE">PR_TRUE</a>;
<a class='l d2' name=469 href="#469">469</a> }
<a class='l d2' name=470 href="#470">470</a> 
<a class='l d2' name=471 href="#471">471</a> <a class="d" href="/seamonkey/ident?i=CPlugin">CPlugin</a>::<a class="d" href="/seamonkey/ident?i=CPlugin">CPlugin</a>(<a class="d" href="/seamonkey/ident?i=NPP">NPP</a> <span class='a'>pNPInstance</span>) :
<a class='l d2' name=472 href="#472">472</a>   <a class="d" href="/seamonkey/ident?i=m_pNPInstance">m_pNPInstance</a>(<span class='a'>pNPInstance</span>),
<a class='l d2' name=473 href="#473">473</a>   <a class="d" href="/seamonkey/ident?i=m_pNPStream">m_pNPStream</a>(<a class="d" href="/seamonkey/ident?i=NULL">NULL</a>),
<a class='l d2' name=474 href="#474">474</a>   <a class="d" href="/seamonkey/ident?i=m_bInitialized">m_bInitialized</a>(<a class="d" href="/seamonkey/ident?i=FALSE">FALSE</a>),
<a class='l d2' name=475 href="#475">475</a>   <a class="d" href="/seamonkey/ident?i=m_pScriptableObject">m_pScriptableObject</a>(<a class="d" href="/seamonkey/ident?i=NULL">NULL</a>)
<a class='l d2' name=476 href="#476">476</a> {
<a class='l d2' name=477 href="#477">477</a> <span class='v'>#ifdef </span><a class="d" href="/seamonkey/ident?i=XP_WIN">XP_WIN</a>
<a class='l d2' name=478 href="#478">478</a>   <a class="d" href="/seamonkey/ident?i=m_hWnd">m_hWnd</a> = <a class="d" href="/seamonkey/ident?i=NULL">NULL</a>;
<a class='l d2' name=479 href="#479">479</a> <span class='v'>#endif
<a class='l d2' name=480 href="#480">480</a> </span>
<a class='l d2' name=481 href="#481">481</a>   <a class="d" href="/seamonkey/ident?i=NPN_GetValue">NPN_GetValue</a>(<a class="d" href="/seamonkey/ident?i=m_pNPInstance">m_pNPInstance</a>, <a class="d" href="/seamonkey/ident?i=NPNVWindowNPObject">NPNVWindowNPObject</a>, &amp;<a class="d" href="/seamonkey/ident?i=sWindowObj">sWindowObj</a>);
<a class='l d2' name=482 href="#482">482</a> 
<a class='l d2' name=483 href="#483">483</a>   <a class="d" href="/seamonkey/ident?i=NPIdentifier">NPIdentifier</a> <a class="d" href="/seamonkey/ident?i=n">n</a> = <a class="d" href="/seamonkey/ident?i=NPN_GetStringIdentifier">NPN_GetStringIdentifier</a>(<span class='s'>"foof"</span>);
<a class='l d2' name=484 href="#484">484</a> 
<a class='l d2' name=485 href="#485">485</a>   <a class="d" href="/seamonkey/ident?i=sFoo_id">sFoo_id</a> = <a class="d" href="/seamonkey/ident?i=NPN_GetStringIdentifier">NPN_GetStringIdentifier</a>(<span class='s'>"foo"</span>);
<a class='l d2' name=486 href="#486">486</a>   <a class="d" href="/seamonkey/ident?i=sBar_id">sBar_id</a> = <a class="d" href="/seamonkey/ident?i=NPN_GetStringIdentifier">NPN_GetStringIdentifier</a>(<span class='s'>"bar"</span>);
<a class='l d2' name=487 href="#487">487</a>   <a class="d" href="/seamonkey/ident?i=sDocument_id">sDocument_id</a> = <a class="d" href="/seamonkey/ident?i=NPN_GetStringIdentifier">NPN_GetStringIdentifier</a>(<span class='s'>"document"</span>);
<a class='l d2' name=488 href="#488">488</a>   <a class="d" href="/seamonkey/ident?i=sBody_id">sBody_id</a> = <a class="d" href="/seamonkey/ident?i=NPN_GetStringIdentifier">NPN_GetStringIdentifier</a>(<span class='s'>"body"</span>);
<a class='l d2' name=489 href="#489">489</a>   <a class="d" href="/seamonkey/ident?i=sCreateElement_id">sCreateElement_id</a> = <a class="d" href="/seamonkey/ident?i=NPN_GetStringIdentifier">NPN_GetStringIdentifier</a>(<span class='s'>"createElement"</span>);
<a class='l d2' name=490 href="#490">490</a>   <a class="d" href="/seamonkey/ident?i=sCreateTextNode_id">sCreateTextNode_id</a> = <a class="d" href="/seamonkey/ident?i=NPN_GetStringIdentifier">NPN_GetStringIdentifier</a>(<span class='s'>"createTextNode"</span>);
<a class='l d2' name=491 href="#491">491</a>   <a class="d" href="/seamonkey/ident?i=sAppendChild_id">sAppendChild_id</a> = <a class="d" href="/seamonkey/ident?i=NPN_GetStringIdentifier">NPN_GetStringIdentifier</a>(<span class='s'>"appendChild"</span>);
<a class='l d2' name=492 href="#492">492</a>   <a class="d" href="/seamonkey/ident?i=sPluginType_id">sPluginType_id</a> = <a class="d" href="/seamonkey/ident?i=NPN_GetStringIdentifier">NPN_GetStringIdentifier</a>(<span class='s'>"PluginType"</span>);
<a class='l d2' name=493 href="#493">493</a> 
<a class='l d2' name=494 href="#494">494</a>   <span class='a'>NPVariant</span> <a class="d" href="/seamonkey/ident?i=v">v</a>;
<a class='l d2' name=495 href="#495">495</a>   <a class="d" href="/seamonkey/ident?i=INT32_TO_NPVARIANT">INT32_TO_NPVARIANT</a>(46, <a class="d" href="/seamonkey/ident?i=v">v</a>);
<a class='l d2' name=496 href="#496">496</a> 
<a class='l d2' name=497 href="#497">497</a>   <a class="d" href="/seamonkey/ident?i=NPN_SetProperty">NPN_SetProperty</a>(<a class="d" href="/seamonkey/ident?i=m_pNPInstance">m_pNPInstance</a>, <a class="d" href="/seamonkey/ident?i=sWindowObj">sWindowObj</a>, <a class="d" href="/seamonkey/ident?i=n">n</a>, &amp;<a class="d" href="/seamonkey/ident?i=v">v</a>);
<a class='l d2' name=498 href="#498">498</a> 
<a class='l d2' name=499 href="#499">499</a>   <span class='a'>NPVariant</span> <a class="d" href="/seamonkey/ident?i=rval">rval</a>;
<a class='l d2' name=500 href="#500">500</a>   <a class="d" href="/seamonkey/ident?i=NPN_GetProperty">NPN_GetProperty</a>(<a class="d" href="/seamonkey/ident?i=m_pNPInstance">m_pNPInstance</a>, <a class="d" href="/seamonkey/ident?i=sWindowObj">sWindowObj</a>, <a class="d" href="/seamonkey/ident?i=n">n</a>, &amp;<a class="d" href="/seamonkey/ident?i=rval">rval</a>);
<a class='l d2' name=501 href="#501">501</a> 
<a class='l d2' name=502 href="#502">502</a>   <span class='v'>if </span>(<a class="d" href="/seamonkey/ident?i=NPVARIANT_IS_INT32">NPVARIANT_IS_INT32</a>(<a class="d" href="/seamonkey/ident?i=rval">rval</a>)) {
<a class='l d2' name=503 href="#503">503</a>     <a class="d" href="/seamonkey/ident?i=printf">printf</a>(<span class='s'>"rval = %d\n"</span>, <a class="d" href="/seamonkey/ident?i=NPVARIANT_TO_INT32">NPVARIANT_TO_INT32</a>(<a class="d" href="/seamonkey/ident?i=rval">rval</a>));
<a class='l d2' name=504 href="#504">504</a>   }
<a class='l d2' name=505 href="#505">505</a> 
<a class='l d2' name=506 href="#506">506</a>   <a class="d" href="/seamonkey/ident?i=n">n</a> = <a class="d" href="/seamonkey/ident?i=NPN_GetStringIdentifier">NPN_GetStringIdentifier</a>(<span class='s'>"document"</span>);
<a class='l d2' name=507 href="#507">507</a> 
<a class='l d2' name=508 href="#508">508</a>   <span class='v'>if </span>(!<a class="d" href="/seamonkey/ident?i=NPN_IdentifierIsString">NPN_IdentifierIsString</a>(<a class="d" href="/seamonkey/ident?i=n">n</a>)) {
<a class='l d2' name=509 href="#509">509</a>     <a class="d" href="/seamonkey/ident?i=NPString">NPString</a> <a class="d" href="/seamonkey/ident?i=str">str</a>;
<a class='l d2' name=510 href="#510">510</a>     <a class="d" href="/seamonkey/ident?i=str">str</a>.<a class="d" href="/seamonkey/ident?i=utf8characters">utf8characters</a> = <span class='s'>"alert('NPN_IdentifierIsString() test failed!');"</span>;
<a class='l d2' name=511 href="#511">511</a>     <a class="d" href="/seamonkey/ident?i=str">str</a>.<a class="d" href="/seamonkey/ident?i=utf8length">utf8length</a> = <a class="d" href="/seamonkey/ident?i=strlen">strlen</a>(<a class="d" href="/seamonkey/ident?i=str">str</a>.<a class="d" href="/seamonkey/ident?i=utf8characters">utf8characters</a>);
<a class='l d2' name=512 href="#512">512</a> 
<a class='l d2' name=513 href="#513">513</a>     <a class="d" href="/seamonkey/ident?i=NPN_Evaluate">NPN_Evaluate</a>(<a class="d" href="/seamonkey/ident?i=m_pNPInstance">m_pNPInstance</a>, <a class="d" href="/seamonkey/ident?i=sWindowObj">sWindowObj</a>, &amp;<a class="d" href="/seamonkey/ident?i=str">str</a>, <a class="d" href="/seamonkey/ident?i=NULL">NULL</a>);
<a class='l d2' name=514 href="#514">514</a>   }
<a class='l d2' name=515 href="#515">515</a> 
<a class='l d2' name=516 href="#516">516</a>   <a class="d" href="/seamonkey/ident?i=NPObject">NPObject</a> *<a class="d" href="/seamonkey/ident?i=doc">doc</a>;
<a class='l d2' name=517 href="#517">517</a> 
<a class='l d2' name=518 href="#518">518</a>   <a class="d" href="/seamonkey/ident?i=NPN_GetProperty">NPN_GetProperty</a>(<a class="d" href="/seamonkey/ident?i=m_pNPInstance">m_pNPInstance</a>, <a class="d" href="/seamonkey/ident?i=sWindowObj">sWindowObj</a>, <a class="d" href="/seamonkey/ident?i=n">n</a>, &amp;<a class="d" href="/seamonkey/ident?i=rval">rval</a>);
<a class='l d2' name=519 href="#519">519</a> 
<a class='l d2' name=520 href="#520">520</a>   <span class='v'>if </span>(<a class="d" href="/seamonkey/ident?i=NPVARIANT_IS_OBJECT">NPVARIANT_IS_OBJECT</a>(<a class="d" href="/seamonkey/ident?i=rval">rval</a>) &amp;&amp; (<a class="d" href="/seamonkey/ident?i=doc">doc</a> = <a class="d" href="/seamonkey/ident?i=NPVARIANT_TO_OBJECT">NPVARIANT_TO_OBJECT</a>(<a class="d" href="/seamonkey/ident?i=rval">rval</a>))) {
<a class='l d2' name=521 href="#521">521</a>     <a class="d" href="/seamonkey/ident?i=n">n</a> = <a class="d" href="/seamonkey/ident?i=NPN_GetStringIdentifier">NPN_GetStringIdentifier</a>(<span class='s'>"title"</span>);
<a class='l d2' name=522 href="#522">522</a> 
<a class='l d2' name=523 href="#523">523</a>     <a class="d" href="/seamonkey/ident?i=NPN_GetProperty">NPN_GetProperty</a>(<a class="d" href="/seamonkey/ident?i=m_pNPInstance">m_pNPInstance</a>, <a class="d" href="/seamonkey/ident?i=doc">doc</a>, <a class="d" href="/seamonkey/ident?i=n">n</a>, &amp;<a class="d" href="/seamonkey/ident?i=rval">rval</a>);
<a class='l d2' name=524 href="#524">524</a> 
<a class='l d2' name=525 href="#525">525</a>     <span class='v'>if </span>(<a class="d" href="/seamonkey/ident?i=NPVARIANT_IS_STRING">NPVARIANT_IS_STRING</a>(<a class="d" href="/seamonkey/ident?i=rval">rval</a>)) {
<a class='l d2' name=526 href="#526">526</a>       <a class="d" href="/seamonkey/ident?i=printf">printf</a> (<span class='s'>"title = %s\n"</span>, <a class="d" href="/seamonkey/ident?i=NPVARIANT_TO_STRING">NPVARIANT_TO_STRING</a>(<a class="d" href="/seamonkey/ident?i=rval">rval</a>).<a class="d" href="/seamonkey/ident?i=utf8characters">utf8characters</a>);
<a class='l d2' name=527 href="#527">527</a> 
<a class='l d2' name=528 href="#528">528</a>       <a class="d" href="/seamonkey/ident?i=NPN_ReleaseVariantValue">NPN_ReleaseVariantValue</a>(&amp;<a class="d" href="/seamonkey/ident?i=rval">rval</a>);
<a class='l d2' name=529 href="#529">529</a>     }
<a class='l d2' name=530 href="#530">530</a> 
<a class='l d2' name=531 href="#531">531</a>     <a class="d" href="/seamonkey/ident?i=n">n</a> = <a class="d" href="/seamonkey/ident?i=NPN_GetStringIdentifier">NPN_GetStringIdentifier</a>(<span class='s'>"plugindoc"</span>);
<a class='l d2' name=532 href="#532">532</a> 
<a class='l d2' name=533 href="#533">533</a>     <a class="d" href="/seamonkey/ident?i=OBJECT_TO_NPVARIANT">OBJECT_TO_NPVARIANT</a>(<a class="d" href="/seamonkey/ident?i=doc">doc</a>, <a class="d" href="/seamonkey/ident?i=v">v</a>);
<a class='l d2' name=534 href="#534">534</a>     <a class="d" href="/seamonkey/ident?i=NPN_SetProperty">NPN_SetProperty</a>(<a class="d" href="/seamonkey/ident?i=m_pNPInstance">m_pNPInstance</a>, <a class="d" href="/seamonkey/ident?i=sWindowObj">sWindowObj</a>, <a class="d" href="/seamonkey/ident?i=n">n</a>, &amp;<a class="d" href="/seamonkey/ident?i=v">v</a>);
<a class='l d2' name=535 href="#535">535</a> 
<a class='l d2' name=536 href="#536">536</a>     <a class="d" href="/seamonkey/ident?i=NPString">NPString</a> <a class="d" href="/seamonkey/ident?i=str">str</a>;
<a class='l d2' name=537 href="#537">537</a>     <a class="d" href="/seamonkey/ident?i=str">str</a>.<a class="d" href="/seamonkey/ident?i=utf8characters">utf8characters</a> = <span class='s'>"document.getElementById('result').innerHTML += '&lt;p&gt;' + 'NPN_Evaluate() test, document = ' + this + '&lt;/p&gt;';"</span>;
<a class='l d2' name=538 href="#538">538</a>     <a class="d" href="/seamonkey/ident?i=str">str</a>.<a class="d" href="/seamonkey/ident?i=utf8length">utf8length</a> = <a class="d" href="/seamonkey/ident?i=strlen">strlen</a>(<a class="d" href="/seamonkey/ident?i=str">str</a>.<a class="d" href="/seamonkey/ident?i=utf8characters">utf8characters</a>);
<a class='l d2' name=539 href="#539">539</a> 
<a class='l d2' name=540 href="#540">540</a>     <a class="d" href="/seamonkey/ident?i=NPN_Evaluate">NPN_Evaluate</a>(<a class="d" href="/seamonkey/ident?i=m_pNPInstance">m_pNPInstance</a>, <a class="d" href="/seamonkey/ident?i=doc">doc</a>, &amp;<a class="d" href="/seamonkey/ident?i=str">str</a>, <a class="d" href="/seamonkey/ident?i=NULL">NULL</a>);
<a class='l d2' name=541 href="#541">541</a> 
<a class='l d2' name=542 href="#542">542</a>     <a class="d" href="/seamonkey/ident?i=NPN_ReleaseObject">NPN_ReleaseObject</a>(<a class="d" href="/seamonkey/ident?i=doc">doc</a>);
<a class='l d2' name=543 href="#543">543</a>   }
<a class='l d2' name=544 href="#544">544</a> 
<a class='l d2' name=545 href="#545">545</a>   <span class='a'>NPVariant</span> <a class="d" href="/seamonkey/ident?i=barval">barval</a>;
<a class='l d2' name=546 href="#546">546</a>   <a class="d" href="/seamonkey/ident?i=NPN_GetProperty">NPN_GetProperty</a>(<a class="d" href="/seamonkey/ident?i=m_pNPInstance">m_pNPInstance</a>, <a class="d" href="/seamonkey/ident?i=sWindowObj">sWindowObj</a>, <a class="d" href="/seamonkey/ident?i=sBar_id">sBar_id</a>, &amp;<a class="d" href="/seamonkey/ident?i=barval">barval</a>);
<a class='l d2' name=547 href="#547">547</a> 
<a class='l d2' name=548 href="#548">548</a>   <span class='a'>NPVariant</span> <a class="d" href="/seamonkey/ident?i=arg">arg</a>;
<a class='l d2' name=549 href="#549">549</a>   <a class="d" href="/seamonkey/ident?i=OBJECT_TO_NPVARIANT">OBJECT_TO_NPVARIANT</a>(<a class="d" href="/seamonkey/ident?i=sWindowObj">sWindowObj</a>, <a class="d" href="/seamonkey/ident?i=arg">arg</a>);
<a class='l d2' name=550 href="#550">550</a> 
<a class='l d2' name=551 href="#551">551</a>   <a class="d" href="/seamonkey/ident?i=NPN_InvokeDefault">NPN_InvokeDefault</a>(<a class="d" href="/seamonkey/ident?i=m_pNPInstance">m_pNPInstance</a>, <a class="d" href="/seamonkey/ident?i=NPVARIANT_TO_OBJECT">NPVARIANT_TO_OBJECT</a>(<a class="d" href="/seamonkey/ident?i=barval">barval</a>), &amp;<a class="d" href="/seamonkey/ident?i=arg">arg</a>, 1,
<a class='l d2' name=552 href="#552">552</a>                     &amp;<a class="d" href="/seamonkey/ident?i=rval">rval</a>);
<a class='l d2' name=553 href="#553">553</a> 
<a class='l d2' name=554 href="#554">554</a>   <span class='v'>if </span>(<a class="d" href="/seamonkey/ident?i=NPVARIANT_IS_INT32">NPVARIANT_IS_INT32</a>(<a class="d" href="/seamonkey/ident?i=rval">rval</a>) &amp;&amp; <a class="d" href="/seamonkey/ident?i=NPVARIANT_TO_INT32">NPVARIANT_TO_INT32</a>(<a class="d" href="/seamonkey/ident?i=rval">rval</a>) == 4) {
<a class='l d2' name=555 href="#555">555</a>     <a class="d" href="/seamonkey/ident?i=printf">printf</a> (<span class='s'>"Default function call SUCCEEDED!\n"</span>);
<a class='l d2' name=556 href="#556">556</a>   } <span class='v'>else </span>{
<a class='l d2' name=557 href="#557">557</a>     <a class="d" href="/seamonkey/ident?i=printf">printf</a> (<span class='s'>"Default function call FAILED!\n"</span>);
<a class='l d2' name=558 href="#558">558</a>   }
<a class='l d2' name=559 href="#559">559</a> 
<a class='l d2' name=560 href="#560">560</a>   <a class="d" href="/seamonkey/ident?i=NPN_ReleaseVariantValue">NPN_ReleaseVariantValue</a>(&amp;<a class="d" href="/seamonkey/ident?i=barval">barval</a>);
<a class='l d2' name=561 href="#561">561</a>   <a class="d" href="/seamonkey/ident?i=NPN_ReleaseVariantValue">NPN_ReleaseVariantValue</a>(&amp;<a class="d" href="/seamonkey/ident?i=rval">rval</a>);
<a class='l d2' name=562 href="#562">562</a> 
<a class='l d2' name=563 href="#563">563</a> 
<a class='l d2' name=564 href="#564">564</a> <span class='v'>#if </span>0
<a class='l d2' name=565 href="#565">565</a>   <a class="d" href="/seamonkey/ident?i=n">n</a> = <a class="d" href="/seamonkey/ident?i=NPN_GetStringIdentifier">NPN_GetStringIdentifier</a>(<span class='s'>"prompt"</span>);
<a class='l d2' name=566 href="#566">566</a> 
<a class='l d2' name=567 href="#567">567</a>   <span class='a'>NPVariant</span> <a class="d" href="/seamonkey/ident?i=vars">vars</a>[3];
<a class='l d2' name=568 href="#568">568</a>   <a class="d" href="/seamonkey/ident?i=STRINGZ_TO_NPVARIANT">STRINGZ_TO_NPVARIANT</a>(<span class='s'>"foo"</span>, <a class="d" href="/seamonkey/ident?i=vars">vars</a>[0]);
<a class='l d2' name=569 href="#569">569</a>   <a class="d" href="/seamonkey/ident?i=STRINGZ_TO_NPVARIANT">STRINGZ_TO_NPVARIANT</a>(<span class='s'>"bar"</span>, <a class="d" href="/seamonkey/ident?i=vars">vars</a>[1]);
<a class='l d2' name=570 href="#570">570</a>   <a class="d" href="/seamonkey/ident?i=STRINGZ_TO_NPVARIANT">STRINGZ_TO_NPVARIANT</a>(<span class='s'>"foof"</span>, <a class="d" href="/seamonkey/ident?i=vars">vars</a>[2]);
<a class='l d2' name=571 href="#571">571</a> 
<a class='l d2' name=572 href="#572">572</a>   <a class="d" href="/seamonkey/ident?i=NPN_Invoke">NPN_Invoke</a>(<a class="d" href="/seamonkey/ident?i=sWindowObj">sWindowObj</a>, <a class="d" href="/seamonkey/ident?i=n">n</a>, <a class="d" href="/seamonkey/ident?i=vars">vars</a>, 3, &amp;<a class="d" href="/seamonkey/ident?i=rval">rval</a>);
<a class='l d2' name=573 href="#573">573</a> 
<a class='l d2' name=574 href="#574">574</a>   <span class='v'>if </span>(<a class="d" href="/seamonkey/ident?i=NPVARIANT_IS_STRING">NPVARIANT_IS_STRING</a>(<a class="d" href="/seamonkey/ident?i=rval">rval</a>)) {
<a class='l d2' name=575 href="#575">575</a>     <a class="d" href="/seamonkey/ident?i=printf">printf</a> (<span class='s'>"prompt returned '%s'\n"</span>, <a class="d" href="/seamonkey/ident?i=NPVARIANT_TO_STRING">NPVARIANT_TO_STRING</a>(<a class="d" href="/seamonkey/ident?i=rval">rval</a>).<a class="d" href="/seamonkey/ident?i=utf8characters">utf8characters</a>);
<a class='l d2' name=576 href="#576">576</a>   }
<a class='l d2' name=577 href="#577">577</a> 
<a class='l d2' name=578 href="#578">578</a>   <a class="d" href="/seamonkey/ident?i=NPN_ReleaseVariantValue">NPN_ReleaseVariantValue</a>(&amp;<a class="d" href="/seamonkey/ident?i=rval">rval</a>);
<a class='l d2' name=579 href="#579">579</a> <span class='v'>#endif
<a class='l d2' name=580 href="#580">580</a> </span>
<a class='l d2' name=581 href="#581">581</a>   <a class="d" href="/seamonkey/ident?i=NPObject">NPObject</a> *<a class="d" href="/seamonkey/ident?i=myobj">myobj</a> =
<a class='l d2' name=582 href="#582">582</a>     <a class="d" href="/seamonkey/ident?i=NPN_CreateObject">NPN_CreateObject</a>(<a class="d" href="/seamonkey/ident?i=m_pNPInstance">m_pNPInstance</a>,
<a class='l d2' name=583 href="#583">583</a>                      <a class="d" href="/seamonkey/ident?i=GET_NPOBJECT_CLASS">GET_NPOBJECT_CLASS</a>(<a class="d" href="/seamonkey/ident?i=ScriptablePluginObject">ScriptablePluginObject</a>));
<a class='l d2' name=584 href="#584">584</a> 
<a class='l d2' name=585 href="#585">585</a>   <a class="d" href="/seamonkey/ident?i=n">n</a> = <a class="d" href="/seamonkey/ident?i=NPN_GetStringIdentifier">NPN_GetStringIdentifier</a>(<span class='s'>"pluginobj"</span>);
<a class='l d2' name=586 href="#586">586</a> 
<a class='l d2' name=587 href="#587">587</a>   <a class="d" href="/seamonkey/ident?i=OBJECT_TO_NPVARIANT">OBJECT_TO_NPVARIANT</a>(<a class="d" href="/seamonkey/ident?i=myobj">myobj</a>, <a class="d" href="/seamonkey/ident?i=v">v</a>);
<a class='l d2' name=588 href="#588">588</a>   <a class="d" href="/seamonkey/ident?i=NPN_SetProperty">NPN_SetProperty</a>(<a class="d" href="/seamonkey/ident?i=m_pNPInstance">m_pNPInstance</a>, <a class="d" href="/seamonkey/ident?i=sWindowObj">sWindowObj</a>, <a class="d" href="/seamonkey/ident?i=n">n</a>, &amp;<a class="d" href="/seamonkey/ident?i=v">v</a>);
<a class='l d2' name=589 href="#589">589</a> 
<a class='l d2' name=590 href="#590">590</a>   <a class="d" href="/seamonkey/ident?i=NPN_GetProperty">NPN_GetProperty</a>(<a class="d" href="/seamonkey/ident?i=m_pNPInstance">m_pNPInstance</a>, <a class="d" href="/seamonkey/ident?i=sWindowObj">sWindowObj</a>, <a class="d" href="/seamonkey/ident?i=n">n</a>, &amp;<a class="d" href="/seamonkey/ident?i=rval">rval</a>);
<a class='l d2' name=591 href="#591">591</a> 
<a class='l d2' name=592 href="#592">592</a>   <a class="d" href="/seamonkey/ident?i=printf">printf</a> (<span class='s'>"Object set/get test "</span>);
<a class='l d2' name=593 href="#593">593</a> 
<a class='l d2' name=594 href="#594">594</a>   <span class='v'>if </span>(<a class="d" href="/seamonkey/ident?i=NPVARIANT_IS_OBJECT">NPVARIANT_IS_OBJECT</a>(<a class="d" href="/seamonkey/ident?i=rval">rval</a>) &amp;&amp; <a class="d" href="/seamonkey/ident?i=NPVARIANT_TO_OBJECT">NPVARIANT_TO_OBJECT</a>(<a class="d" href="/seamonkey/ident?i=rval">rval</a>) == <a class="d" href="/seamonkey/ident?i=myobj">myobj</a>) {
<a class='l d2' name=595 href="#595">595</a>     <a class="d" href="/seamonkey/ident?i=printf">printf</a> (<span class='s'>"succeeded!\n"</span>);
<a class='l d2' name=596 href="#596">596</a>   } <span class='v'>else </span>{
<a class='l d2' name=597 href="#597">597</a>     <a class="d" href="/seamonkey/ident?i=printf">printf</a> (<span class='s'>"FAILED!\n"</span>);
<a class='l d2' name=598 href="#598">598</a>   }
<a class='l d2' name=599 href="#599">599</a> 
<a class='l d2' name=600 href="#600">600</a>   <a class="d" href="/seamonkey/ident?i=NPN_ReleaseVariantValue">NPN_ReleaseVariantValue</a>(&amp;<a class="d" href="/seamonkey/ident?i=rval">rval</a>);
<a class='l d2' name=601 href="#601">601</a>   <a class="d" href="/seamonkey/ident?i=NPN_ReleaseObject">NPN_ReleaseObject</a>(<a class="d" href="/seamonkey/ident?i=myobj">myobj</a>);
<a class='l d2' name=602 href="#602">602</a> 
<a class='l d2' name=603 href="#603">603</a>   <span class='v'>const </span><span class='v'>char </span>*<a class="d" href="/seamonkey/ident?i=ua">ua</a> = <a class="d" href="/seamonkey/ident?i=NPN_UserAgent">NPN_UserAgent</a>(<a class="d" href="/seamonkey/ident?i=m_pNPInstance">m_pNPInstance</a>);
<a class='l d2' name=604 href="#604">604</a>   <a class="d" href="/seamonkey/ident?i=strcpy">strcpy</a>(<a class="d" href="/seamonkey/ident?i=m_String">m_String</a>, <a class="d" href="/seamonkey/ident?i=ua">ua</a>);
<a class='l d2' name=605 href="#605">605</a> }
<a class='l d2' name=606 href="#606">606</a> 
<a class='l d2' name=607 href="#607">607</a> <a class="d" href="/seamonkey/ident?i=CPlugin">CPlugin</a>::~<a class="d" href="/seamonkey/ident?i=CPlugin">CPlugin</a>()
<a class='l d2' name=608 href="#608">608</a> {
<a class='l d2' name=609 href="#609">609</a>   <span class='v'>if </span>(<a class="d" href="/seamonkey/ident?i=sWindowObj">sWindowObj</a>)
<a class='l d2' name=610 href="#610">610</a>     <a class="d" href="/seamonkey/ident?i=NPN_ReleaseObject">NPN_ReleaseObject</a>(<a class="d" href="/seamonkey/ident?i=sWindowObj">sWindowObj</a>);
<a class='l d2' name=611 href="#611">611</a>   <span class='v'>if </span>(<a class="d" href="/seamonkey/ident?i=m_pScriptableObject">m_pScriptableObject</a>)
<a class='l d2' name=612 href="#612">612</a>     <a class="d" href="/seamonkey/ident?i=NPN_ReleaseObject">NPN_ReleaseObject</a>(<a class="d" href="/seamonkey/ident?i=m_pScriptableObject">m_pScriptableObject</a>);
<a class='l d2' name=613 href="#613">613</a> 
<a class='l d2' name=614 href="#614">614</a>   <a class="d" href="/seamonkey/ident?i=sWindowObj">sWindowObj</a> = 0;
<a class='l d2' name=615 href="#615">615</a> }
<a class='l d2' name=616 href="#616">616</a> 
<a class='l d2' name=617 href="#617">617</a> <span class='v'>#ifdef </span><a class="d" href="/seamonkey/ident?i=XP_WIN">XP_WIN</a>
<a class='l d2' name=618 href="#618">618</a> <span class='v'>static </span><span class='a'>LRESULT</span> <a class="d" href="/seamonkey/ident?i=CALLBACK">CALLBACK</a> <a class="d" href="/seamonkey/ident?i=PluginWinProc">PluginWinProc</a>(<a class="d" href="/seamonkey/ident?i=HWND">HWND</a>, <a class="d" href="/seamonkey/ident?i=UINT">UINT</a>, <span class='a'>WPARAM</span>, <a class="d" href="/seamonkey/ident?i=LPARAM">LPARAM</a>);
<a class='l d2' name=619 href="#619">619</a> <span class='v'>static </span><span class='a'>WNDPROC</span> <a class="d" href="/seamonkey/ident?i=lpOldProc">lpOldProc</a> = <a class="d" href="/seamonkey/ident?i=NULL">NULL</a>;
<a class='l d2' name=620 href="#620">620</a> <span class='v'>#endif
<a class='l d2' name=621 href="#621">621</a> </span>
<a class='l d2' name=622 href="#622">622</a> <a class="d" href="/seamonkey/ident?i=NPBool">NPBool</a> <a class="d" href="/seamonkey/ident?i=CPlugin">CPlugin</a>::<a class="d" href="/seamonkey/ident?i=init">init</a>(<a class="d" href="/seamonkey/ident?i=NPWindow">NPWindow</a>* <a class="d" href="/seamonkey/ident?i=pNPWindow">pNPWindow</a>)
<a class='l d2' name=623 href="#623">623</a> {
<a class='l d2' name=624 href="#624">624</a>   <span class='v'>if(</span><a class="d" href="/seamonkey/ident?i=pNPWindow">pNPWindow</a> == <a class="d" href="/seamonkey/ident?i=NULL">NULL</a>)
<a class='l d2' name=625 href="#625">625</a>     <span class='v'>return </span><a class="d" href="/seamonkey/ident?i=FALSE">FALSE</a>;
<a class='l d2' name=626 href="#626">626</a> 
<a class='l d2' name=627 href="#627">627</a> <span class='v'>#ifdef </span><a class="d" href="/seamonkey/ident?i=XP_WIN">XP_WIN</a>
<a class='l d2' name=628 href="#628">628</a>   <a class="d" href="/seamonkey/ident?i=m_hWnd">m_hWnd</a> = (<a class="d" href="/seamonkey/ident?i=HWND">HWND</a>)<a class="d" href="/seamonkey/ident?i=pNPWindow">pNPWindow</a>-&gt;<a class="d" href="/seamonkey/ident?i=window">window</a>;
<a class='l d2' name=629 href="#629">629</a>   <span class='v'>if(</span><a class="d" href="/seamonkey/ident?i=m_hWnd">m_hWnd</a> == <a class="d" href="/seamonkey/ident?i=NULL">NULL</a>)
<a class='l d2' name=630 href="#630">630</a>     <span class='v'>return </span><a class="d" href="/seamonkey/ident?i=FALSE">FALSE</a>;
<a class='l d2' name=631 href="#631">631</a> 
<a class='l d2' name=632 href="#632">632</a>   <span class='c'>// subclass window so we can intercept window messages and</span>
<a class='l d2' name=633 href="#633">633</a> <span class='c'></span>  <span class='c'>// do our drawing to it</span>
<a class='l d2' name=634 href="#634">634</a> <span class='c'></span>  <a class="d" href="/seamonkey/ident?i=lpOldProc">lpOldProc</a> = <a class="d" href="/seamonkey/ident?i=SubclassWindow">SubclassWindow</a>(<a class="d" href="/seamonkey/ident?i=m_hWnd">m_hWnd</a>, (<span class='a'>WNDPROC</span>)<a class="d" href="/seamonkey/ident?i=PluginWinProc">PluginWinProc</a>);
<a class='l d2' name=635 href="#635">635</a> 
<a class='l d2' name=636 href="#636">636</a>   <span class='c'>// associate window with our CPlugin object so we can access </span>
<a class='l d2' name=637 href="#637">637</a> <span class='c'></span>  <span class='c'>// it in the window procedure</span>
<a class='l d2' name=638 href="#638">638</a> <span class='c'></span>  <a class="d" href="/seamonkey/ident?i=SetWindowLong">SetWindowLong</a>(<a class="d" href="/seamonkey/ident?i=m_hWnd">m_hWnd</a>, <a class="d" href="/seamonkey/ident?i=GWL_USERDATA">GWL_USERDATA</a>, (<a class="d" href="/seamonkey/ident?i=LONG">LONG</a>)<a class="d" href="/seamonkey/ident?i=this">this</a>);
<a class='l d2' name=639 href="#639">639</a> <span class='v'>#endif
<a class='l d2' name=640 href="#640">640</a> </span>
<a class='l d2' name=641 href="#641">641</a>   <a class="d" href="/seamonkey/ident?i=m_Window">m_Window</a> = <a class="d" href="/seamonkey/ident?i=pNPWindow">pNPWindow</a>;
<a class='l d2' name=642 href="#642">642</a> 
<a class='l d2' name=643 href="#643">643</a>   <a class="d" href="/seamonkey/ident?i=m_bInitialized">m_bInitialized</a> = <a class="d" href="/seamonkey/ident?i=TRUE">TRUE</a>;
<a class='l d2' name=644 href="#644">644</a>   <span class='v'>return </span><a class="d" href="/seamonkey/ident?i=TRUE">TRUE</a>;
<a class='l d2' name=645 href="#645">645</a> }
<a class='l d2' name=646 href="#646">646</a> 
<a class='l d2' name=647 href="#647">647</a> <span class='v'>void </span><a class="d" href="/seamonkey/ident?i=CPlugin">CPlugin</a>::<a class="d" href="/seamonkey/ident?i=shut">shut</a>()
<a class='l d2' name=648 href="#648">648</a> {
<a class='l d2' name=649 href="#649">649</a> <span class='v'>#ifdef </span><a class="d" href="/seamonkey/ident?i=XP_WIN">XP_WIN</a>
<a class='l d2' name=650 href="#650">650</a>   <span class='c'>// subclass it back</span>
<a class='l d2' name=651 href="#651">651</a> <span class='c'></span>  <a class="d" href="/seamonkey/ident?i=SubclassWindow">SubclassWindow</a>(<a class="d" href="/seamonkey/ident?i=m_hWnd">m_hWnd</a>, <a class="d" href="/seamonkey/ident?i=lpOldProc">lpOldProc</a>);
<a class='l d2' name=652 href="#652">652</a>   <a class="d" href="/seamonkey/ident?i=m_hWnd">m_hWnd</a> = <a class="d" href="/seamonkey/ident?i=NULL">NULL</a>;
<a class='l d2' name=653 href="#653">653</a> <span class='v'>#endif
<a class='l d2' name=654 href="#654">654</a> </span>
<a class='l d2' name=655 href="#655">655</a>   <a class="d" href="/seamonkey/ident?i=m_bInitialized">m_bInitialized</a> = <a class="d" href="/seamonkey/ident?i=FALSE">FALSE</a>;
<a class='l d2' name=656 href="#656">656</a> }
<a class='l d2' name=657 href="#657">657</a> 
<a class='l d2' name=658 href="#658">658</a> <a class="d" href="/seamonkey/ident?i=NPBool">NPBool</a> <a class="d" href="/seamonkey/ident?i=CPlugin">CPlugin</a>::<a class="d" href="/seamonkey/ident?i=isInitialized">isInitialized</a>()
<a class='l d2' name=659 href="#659">659</a> {
<a class='l d2' name=660 href="#660">660</a>   <span class='v'>return </span><a class="d" href="/seamonkey/ident?i=m_bInitialized">m_bInitialized</a>;
<a class='l d2' name=661 href="#661">661</a> }
<a class='l d2' name=662 href="#662">662</a> 
<a class='l d2' name=663 href="#663">663</a> <a class="d" href="/seamonkey/ident?i=int16">int16</a> <a class="d" href="/seamonkey/ident?i=CPlugin">CPlugin</a>::<a class="d" href="/seamonkey/ident?i=handleEvent">handleEvent</a>(<span class='v'>void* </span><a class="d" href="/seamonkey/ident?i=event">event</a>)
<a class='l d2' name=664 href="#664">664</a> {
<a class='l d2' name=665 href="#665">665</a> <span class='v'>#ifdef </span><a class="d" href="/seamonkey/ident?i=XP_MAC">XP_MAC</a>
<a class='l d2' name=666 href="#666">666</a>   <a class="d" href="/seamonkey/ident?i=NPEvent">NPEvent</a>* <a class="d" href="/seamonkey/ident?i=ev">ev</a> = (<a class="d" href="/seamonkey/ident?i=NPEvent">NPEvent</a>*)<a class="d" href="/seamonkey/ident?i=event">event</a>;
<a class='l d2' name=667 href="#667">667</a>   <span class='v'>if </span>(<a class="d" href="/seamonkey/ident?i=m_Window">m_Window</a>) {
<a class='l d2' name=668 href="#668">668</a>     <a class="d" href="/seamonkey/ident?i=Rect">Rect</a> <a class="d" href="/seamonkey/ident?i=box">box</a> = { <a class="d" href="/seamonkey/ident?i=m_Window">m_Window</a>-&gt;<a class="d" href="/seamonkey/ident?i=y">y</a>, <a class="d" href="/seamonkey/ident?i=m_Window">m_Window</a>-&gt;<a class="d" href="/seamonkey/ident?i=x">x</a>,
<a class='l d2' name=669 href="#669">669</a>                  <a class="d" href="/seamonkey/ident?i=m_Window">m_Window</a>-&gt;<a class="d" href="/seamonkey/ident?i=y">y</a> + <a class="d" href="/seamonkey/ident?i=m_Window">m_Window</a>-&gt;<a class="d" href="/seamonkey/ident?i=height">height</a>, <a class="d" href="/seamonkey/ident?i=m_Window">m_Window</a>-&gt;<a class="d" href="/seamonkey/ident?i=x">x</a> + <a class="d" href="/seamonkey/ident?i=m_Window">m_Window</a>-&gt;<a class="d" href="/seamonkey/ident?i=width">width</a> };
<a class='l d2' name=670 href="#670">670</a>     <span class='v'>if </span>(<a class="d" href="/seamonkey/ident?i=ev">ev</a>-&gt;<a class="d" href="/seamonkey/ident?i=what">what</a> == <a class="d" href="/seamonkey/ident?i=updateEvt">updateEvt</a>) {
<a class='l d2' name=671 href="#671">671</a>       ::<a class="d" href="/seamonkey/ident?i=TETextBox">TETextBox</a>(<a class="d" href="/seamonkey/ident?i=m_String">m_String</a>, <a class="d" href="/seamonkey/ident?i=strlen">strlen</a>(<a class="d" href="/seamonkey/ident?i=m_String">m_String</a>), &amp;<a class="d" href="/seamonkey/ident?i=box">box</a>, <span class='a'>teJustCenter</span>);
<a class='l d2' name=672 href="#672">672</a>     }
<a class='l d2' name=673 href="#673">673</a>   }
<a class='l d2' name=674 href="#674">674</a> <span class='v'>#endif
<a class='l d2' name=675 href="#675">675</a> </span>  <span class='v'>return </span>0;
<a class='l d2' name=676 href="#676">676</a> }
<a class='l d2' name=677 href="#677">677</a> 
<a class='l d2' name=678 href="#678">678</a> <span class='c'>// this will force to draw a version string in the plugin window</span>
<a class='l d2' name=679 href="#679">679</a> <span class='c'></span><span class='v'>void </span><a class="d" href="/seamonkey/ident?i=CPlugin">CPlugin</a>::<a class="d" href="/seamonkey/ident?i=showVersion">showVersion</a>()
<a class='l d2' name=680 href="#680">680</a> {
<a class='l d2' name=681 href="#681">681</a>   <span class='v'>const </span><span class='v'>char </span>*<a class="d" href="/seamonkey/ident?i=ua">ua</a> = <a class="d" href="/seamonkey/ident?i=NPN_UserAgent">NPN_UserAgent</a>(<a class="d" href="/seamonkey/ident?i=m_pNPInstance">m_pNPInstance</a>);
<a class='l d2' name=682 href="#682">682</a>   <a class="d" href="/seamonkey/ident?i=strcpy">strcpy</a>(<a class="d" href="/seamonkey/ident?i=m_String">m_String</a>, <a class="d" href="/seamonkey/ident?i=ua">ua</a>);
<a class='l d2' name=683 href="#683">683</a> 
<a class='l d2' name=684 href="#684">684</a> <span class='v'>#ifdef </span><a class="d" href="/seamonkey/ident?i=XP_WIN">XP_WIN</a>
<a class='l d2' name=685 href="#685">685</a>   <a class="d" href="/seamonkey/ident?i=InvalidateRect">InvalidateRect</a>(<a class="d" href="/seamonkey/ident?i=m_hWnd">m_hWnd</a>, <a class="d" href="/seamonkey/ident?i=NULL">NULL</a>, <a class="d" href="/seamonkey/ident?i=TRUE">TRUE</a>);
<a class='l d2' name=686 href="#686">686</a>   <a class="d" href="/seamonkey/ident?i=UpdateWindow">UpdateWindow</a>(<a class="d" href="/seamonkey/ident?i=m_hWnd">m_hWnd</a>);
<a class='l d2' name=687 href="#687">687</a> <span class='v'>#endif
<a class='l d2' name=688 href="#688">688</a> </span>
<a class='l d2' name=689 href="#689">689</a>   <span class='v'>if </span>(<a class="d" href="/seamonkey/ident?i=m_Window">m_Window</a>) {
<a class='l d2' name=690 href="#690">690</a>     <a class="d" href="/seamonkey/ident?i=NPRect">NPRect</a> <a class="d" href="/seamonkey/ident?i=r">r</a> =
<a class='l d2' name=691 href="#691">691</a>       {
<a class='l d2' name=692 href="#692">692</a>         (<a class="d" href="/seamonkey/ident?i=uint16">uint16</a>)<a class="d" href="/seamonkey/ident?i=m_Window">m_Window</a>-&gt;<a class="d" href="/seamonkey/ident?i=y">y</a>, (<a class="d" href="/seamonkey/ident?i=uint16">uint16</a>)<a class="d" href="/seamonkey/ident?i=m_Window">m_Window</a>-&gt;<a class="d" href="/seamonkey/ident?i=x">x</a>,
<a class='l d2' name=693 href="#693">693</a>         (<a class="d" href="/seamonkey/ident?i=uint16">uint16</a>)(<a class="d" href="/seamonkey/ident?i=m_Window">m_Window</a>-&gt;<a class="d" href="/seamonkey/ident?i=y">y</a> + <a class="d" href="/seamonkey/ident?i=m_Window">m_Window</a>-&gt;<a class="d" href="/seamonkey/ident?i=height">height</a>),
<a class='l d2' name=694 href="#694">694</a>         (<a class="d" href="/seamonkey/ident?i=uint16">uint16</a>)(<a class="d" href="/seamonkey/ident?i=m_Window">m_Window</a>-&gt;<a class="d" href="/seamonkey/ident?i=x">x</a> + <a class="d" href="/seamonkey/ident?i=m_Window">m_Window</a>-&gt;<a class="d" href="/seamonkey/ident?i=width">width</a>)
<a class='l d2' name=695 href="#695">695</a>       };
<a class='l d2' name=696 href="#696">696</a> 
<a class='l d2' name=697 href="#697">697</a>     <a class="d" href="/seamonkey/ident?i=NPN_InvalidateRect">NPN_InvalidateRect</a>(<a class="d" href="/seamonkey/ident?i=m_pNPInstance">m_pNPInstance</a>, &amp;<a class="d" href="/seamonkey/ident?i=r">r</a>);
<a class='l d2' name=698 href="#698">698</a>   }
<a class='l d2' name=699 href="#699">699</a> }
<a class='l d2' name=700 href="#700">700</a> 
<a class='l d2' name=701 href="#701">701</a> <span class='c'>// this will clean the plugin window</span>
<a class='l d2' name=702 href="#702">702</a> <span class='c'></span><span class='v'>void </span><a class="d" href="/seamonkey/ident?i=CPlugin">CPlugin</a>::<a class="d" href="/seamonkey/ident?i=clear">clear</a>()
<a class='l d2' name=703 href="#703">703</a> {
<a class='l d2' name=704 href="#704">704</a>   <a class="d" href="/seamonkey/ident?i=strcpy">strcpy</a>(<a class="d" href="/seamonkey/ident?i=m_String">m_String</a>, <span class='s'>""</span>);
<a class='l d2' name=705 href="#705">705</a> 
<a class='l d2' name=706 href="#706">706</a> <span class='v'>#ifdef </span><a class="d" href="/seamonkey/ident?i=XP_WIN">XP_WIN</a>
<a class='l d2' name=707 href="#707">707</a>   <a class="d" href="/seamonkey/ident?i=InvalidateRect">InvalidateRect</a>(<a class="d" href="/seamonkey/ident?i=m_hWnd">m_hWnd</a>, <a class="d" href="/seamonkey/ident?i=NULL">NULL</a>, <a class="d" href="/seamonkey/ident?i=TRUE">TRUE</a>);
<a class='l d2' name=708 href="#708">708</a>   <a class="d" href="/seamonkey/ident?i=UpdateWindow">UpdateWindow</a>(<a class="d" href="/seamonkey/ident?i=m_hWnd">m_hWnd</a>);
<a class='l d2' name=709 href="#709">709</a> <span class='v'>#endif
<a class='l d2' name=710 href="#710">710</a> </span>}
<a class='l d2' name=711 href="#711">711</a> 
<a class='l d2' name=712 href="#712">712</a> <span class='v'>void </span><a class="d" href="/seamonkey/ident?i=CPlugin">CPlugin</a>::<a class="d" href="/seamonkey/ident?i=getVersion">getVersion</a>(<span class='v'>char* </span>*<a class="d" href="/seamonkey/ident?i=aVersion">aVersion</a>)
<a class='l d2' name=713 href="#713">713</a> {
<a class='l d2' name=714 href="#714">714</a>   <span class='v'>const </span><span class='v'>char </span>*<a class="d" href="/seamonkey/ident?i=ua">ua</a> = <a class="d" href="/seamonkey/ident?i=NPN_UserAgent">NPN_UserAgent</a>(<a class="d" href="/seamonkey/ident?i=m_pNPInstance">m_pNPInstance</a>);
<a class='l d2' name=715 href="#715">715</a>   <span class='v'>char*&amp; </span><a class="d" href="/seamonkey/ident?i=version">version</a> = *<a class="d" href="/seamonkey/ident?i=aVersion">aVersion</a>;
<a class='l d2' name=716 href="#716">716</a>   <a class="d" href="/seamonkey/ident?i=version">version</a> = (<span class='v'>char*)</span><a class="d" href="/seamonkey/ident?i=NPN_MemAlloc">NPN_MemAlloc</a>(1 + <a class="d" href="/seamonkey/ident?i=strlen">strlen</a>(<a class="d" href="/seamonkey/ident?i=ua">ua</a>));
<a class='l d2' name=717 href="#717">717</a>   <span class='v'>if </span>(<a class="d" href="/seamonkey/ident?i=version">version</a>)
<a class='l d2' name=718 href="#718">718</a>     <a class="d" href="/seamonkey/ident?i=strcpy">strcpy</a>(<a class="d" href="/seamonkey/ident?i=version">version</a>, <a class="d" href="/seamonkey/ident?i=ua">ua</a>);
<a class='l d2' name=719 href="#719">719</a> }
<a class='l d2' name=720 href="#720">720</a> 
<a class='l d2' name=721 href="#721">721</a> <a class="d" href="/seamonkey/ident?i=NPObject">NPObject</a> *
<a class='l d2' name=722 href="#722">722</a> <a class="d" href="/seamonkey/ident?i=CPlugin">CPlugin</a>::<a class="d" href="/seamonkey/ident?i=GetScriptableObject">GetScriptableObject</a>()
<a class='l d2' name=723 href="#723">723</a> {
<a class='l d2' name=724 href="#724">724</a>   <span class='v'>if </span>(!<a class="d" href="/seamonkey/ident?i=m_pScriptableObject">m_pScriptableObject</a>) {
<a class='l d2' name=725 href="#725">725</a>     <a class="d" href="/seamonkey/ident?i=m_pScriptableObject">m_pScriptableObject</a> =
<a class='l d2' name=726 href="#726">726</a>       <a class="d" href="/seamonkey/ident?i=NPN_CreateObject">NPN_CreateObject</a>(<a class="d" href="/seamonkey/ident?i=m_pNPInstance">m_pNPInstance</a>,
<a class='l d2' name=727 href="#727">727</a>                        <a class="d" href="/seamonkey/ident?i=GET_NPOBJECT_CLASS">GET_NPOBJECT_CLASS</a>(<a class="d" href="/seamonkey/ident?i=ScriptablePluginObject">ScriptablePluginObject</a>));
<a class='l d2' name=728 href="#728">728</a>   }
<a class='l d2' name=729 href="#729">729</a> 
<a class='l d2' name=730 href="#730">730</a>   <span class='v'>if </span>(<a class="d" href="/seamonkey/ident?i=m_pScriptableObject">m_pScriptableObject</a>) {
<a class='l d2' name=731 href="#731">731</a>     <a class="d" href="/seamonkey/ident?i=NPN_RetainObject">NPN_RetainObject</a>(<a class="d" href="/seamonkey/ident?i=m_pScriptableObject">m_pScriptableObject</a>);
<a class='l d2' name=732 href="#732">732</a>   }
<a class='l d2' name=733 href="#733">733</a> 
<a class='l d2' name=734 href="#734">734</a>   <span class='v'>return </span><a class="d" href="/seamonkey/ident?i=m_pScriptableObject">m_pScriptableObject</a>;
<a class='l d2' name=735 href="#735">735</a> }
<a class='l d2' name=736 href="#736">736</a> 
<a class='l d2' name=737 href="#737">737</a> <span class='v'>#ifdef </span><a class="d" href="/seamonkey/ident?i=XP_WIN">XP_WIN</a>
<a class='l d2' name=738 href="#738">738</a> <span class='v'>static </span><span class='a'>LRESULT</span> <a class="d" href="/seamonkey/ident?i=CALLBACK">CALLBACK</a> <a class="d" href="/seamonkey/ident?i=PluginWinProc">PluginWinProc</a>(<a class="d" href="/seamonkey/ident?i=HWND">HWND</a> <a class="d" href="/seamonkey/ident?i=hWnd">hWnd</a>, <a class="d" href="/seamonkey/ident?i=UINT">UINT</a> <a class="d" href="/seamonkey/ident?i=msg">msg</a>, <span class='a'>WPARAM</span> <a class="d" href="/seamonkey/ident?i=wParam">wParam</a>, <a class="d" href="/seamonkey/ident?i=LPARAM">LPARAM</a> <a class="d" href="/seamonkey/ident?i=lParam">lParam</a>)
<a class='l d2' name=739 href="#739">739</a> {
<a class='l d2' name=740 href="#740">740</a>   <span class='v'>switch </span>(<a class="d" href="/seamonkey/ident?i=msg">msg</a>) {
<a class='l d2' name=741 href="#741">741</a>     <span class='v'>case </span><a class="d" href="/seamonkey/ident?i=WM_PAINT">WM_PAINT</a>:
<a class='l d2' name=742 href="#742">742</a>       {
<a class='l d2' name=743 href="#743">743</a>         <span class='c'>// draw a frame and display the string</span>
<a class='l d2' name=744 href="#744">744</a> <span class='c'></span>        <span class='a'>PAINTSTRUCT</span> <a class="d" href="/seamonkey/ident?i=ps">ps</a>;
<a class='l d2' name=745 href="#745">745</a>         <a class="d" href="/seamonkey/ident?i=HDC">HDC</a> <a class="d" href="/seamonkey/ident?i=hdc">hdc</a> = <a class="d" href="/seamonkey/ident?i=BeginPaint">BeginPaint</a>(<a class="d" href="/seamonkey/ident?i=hWnd">hWnd</a>, &amp;<a class="d" href="/seamonkey/ident?i=ps">ps</a>);
<a class='l d2' name=746 href="#746">746</a>         <a class="d" href="/seamonkey/ident?i=RECT">RECT</a> <a class="d" href="/seamonkey/ident?i=rc">rc</a>;
<a class='l d2' name=747 href="#747">747</a>         <a class="d" href="/seamonkey/ident?i=GetClientRect">GetClientRect</a>(<a class="d" href="/seamonkey/ident?i=hWnd">hWnd</a>, &amp;<a class="d" href="/seamonkey/ident?i=rc">rc</a>);
<a class='l d2' name=748 href="#748">748</a>         <a class="d" href="/seamonkey/ident?i=FrameRect">FrameRect</a>(<a class="d" href="/seamonkey/ident?i=hdc">hdc</a>, &amp;<a class="d" href="/seamonkey/ident?i=rc">rc</a>, <span class='a'>GetStockBrush</span>(<span class='a'>BLACK_BRUSH</span>));
<a class='l d2' name=749 href="#749">749</a>         <a class="d" href="/seamonkey/ident?i=CPlugin">CPlugin</a> * <a class="d" href="/seamonkey/ident?i=p">p</a> = (<a class="d" href="/seamonkey/ident?i=CPlugin">CPlugin</a> *)<a class="d" href="/seamonkey/ident?i=GetWindowLong">GetWindowLong</a>(<a class="d" href="/seamonkey/ident?i=hWnd">hWnd</a>, <a class="d" href="/seamonkey/ident?i=GWL_USERDATA">GWL_USERDATA</a>);
<a class='l d2' name=750 href="#750">750</a>         <span class='v'>if(</span><a class="d" href="/seamonkey/ident?i=p">p</a>) {
<a class='l d2' name=751 href="#751">751</a>           <span class='v'>if </span>(<a class="d" href="/seamonkey/ident?i=p">p</a>-&gt;<a class="d" href="/seamonkey/ident?i=m_String">m_String</a>[0] == 0) {
<a class='l d2' name=752 href="#752">752</a>             <a class="d" href="/seamonkey/ident?i=strcpy">strcpy</a>(<span class='s'>"foo"</span>, <a class="d" href="/seamonkey/ident?i=p">p</a>-&gt;<a class="d" href="/seamonkey/ident?i=m_String">m_String</a>);
<a class='l d2' name=753 href="#753">753</a>           }
<a class='l d2' name=754 href="#754">754</a> 
<a class='l d2' name=755 href="#755">755</a>           <a class="d" href="/seamonkey/ident?i=DrawText">DrawText</a>(<a class="d" href="/seamonkey/ident?i=hdc">hdc</a>, <a class="d" href="/seamonkey/ident?i=p">p</a>-&gt;<a class="d" href="/seamonkey/ident?i=m_String">m_String</a>, <a class="d" href="/seamonkey/ident?i=strlen">strlen</a>(<a class="d" href="/seamonkey/ident?i=p">p</a>-&gt;<a class="d" href="/seamonkey/ident?i=m_String">m_String</a>), &amp;<a class="d" href="/seamonkey/ident?i=rc">rc</a>, <span class='a'>DT_SINGLELINE</span> | <span class='a'>DT_CENTER</span> | <span class='a'>DT_VCENTER</span>);
<a class='l d2' name=756 href="#756">756</a>         }
<a class='l d2' name=757 href="#757">757</a> 
<a class='l d2' name=758 href="#758">758</a>         <a class="d" href="/seamonkey/ident?i=EndPaint">EndPaint</a>(<a class="d" href="/seamonkey/ident?i=hWnd">hWnd</a>, &amp;<a class="d" href="/seamonkey/ident?i=ps">ps</a>);
<a class='l d2' name=759 href="#759">759</a>       }
<a class='l d2' name=760 href="#760">760</a>       <span class='v'>break;
<a class='l d2' name=761 href="#761">761</a> </span>    <span class='v'>default:
<a class='l d2' name=762 href="#762">762</a> </span>      <span class='v'>break;
<a class='l d2' name=763 href="#763">763</a> </span>  }
<a class='l d2' name=764 href="#764">764</a> 
<a class='l d2' name=765 href="#765">765</a>   <span class='v'>return </span><a class="d" href="/seamonkey/ident?i=DefWindowProc">DefWindowProc</a>(<a class="d" href="/seamonkey/ident?i=hWnd">hWnd</a>, <a class="d" href="/seamonkey/ident?i=msg">msg</a>, <a class="d" href="/seamonkey/ident?i=wParam">wParam</a>, <a class="d" href="/seamonkey/ident?i=lParam">lParam</a>);
<a class='l d2' name=766 href="#766">766</a> }
<a class='l d2' name=767 href="#767">767</a> <span class='v'>#endif
<a class='l d2' name=768 href="#768">768</a> </span></span></pre>
</html>
