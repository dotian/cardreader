<!DOCTYPE html>
<html>
<head>
<meta name="GENERATOR" content="lxr-1998-06-10: http://lxr.linux.no">
<link rel="icon" href="/mxr.png" type="image/png">
<title>seamonkey mozilla/modules/plugin/samples/npruntime/np_entry.cpp</title>
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
   <br><b><a href="/seamonkey/source/">mozilla</a>/ <a href="/seamonkey/source/modules/">modules</a>/ <a href="/seamonkey/source/modules/plugin/">plugin</a>/ <a href="/seamonkey/source/modules/plugin/samples/">samples</a>/ <a href="/seamonkey/source/modules/plugin/samples/npruntime/">npruntime</a>/ <a href="/seamonkey/source/modules/plugin/samples/npruntime/np_entry.cpp">np_entry.cpp</a> </b>
  </TD>

  <td align=right valign=top width="1%">
   <table border cellpadding=12 cellspacing=0>
    <tr>
     <td nowrap bgcolor="#FAFAFA">



      <a href="http://bonsai.mozilla.org/cvslog.cgi?file=mozilla/modules/plugin/samples/npruntime/np_entry.cpp&amp;rev=HEAD&amp;mark=1.1"
>CVS Log</a><br>
      <a href="http://bonsai.mozilla.org/cvsblame.cgi?file=mozilla/modules/plugin/samples/npruntime/np_entry.cpp&amp;rev=1.1"
onfocus='updateBonsaiBlameHash(this, event)'
onmouseover='updateBonsaiBlameHash(this, event)'
>CVS Blame</a><br>
      <a href="http://bonsai.mozilla.org/cvsgraph.cgi?file=mozilla/modules/plugin/samples/npruntime/np_entry.cpp&amp;rev=1.1"
>CVS Graph</a><br>








      <a href="http://mxr.mozilla.org/seamonkey/diff?file=/modules/plugin/samples/npruntime/np_entry.cpp">Diff file</a><br>
      <a href="http://mxr.mozilla.org/seamonkey/source/modules/plugin/samples/npruntime/np_entry.cpp?raw=1">Raw file</a><br>
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
         <a href="http://bonsai.mozilla.org/cvsquery.cgi?branch=HEAD&amp;file=mozilla/modules/plugin/samples/npruntime/np_entry.cpp&amp;date=day">day</a><br>
         <a href="http://bonsai.mozilla.org/cvsquery.cgi?branch=HEAD&amp;file=mozilla/modules/plugin/samples/npruntime/np_entry.cpp&amp;date=week">week</a><br>
         <a href="http://bonsai.mozilla.org/cvsquery.cgi?branch=HEAD&amp;file=mozilla/modules/plugin/samples/npruntime/np_entry.cpp&amp;date=month">month</a><br>
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
<a class='l d1' name=38 href="#38">38</a> <span class='c'>//////////////////////////////////////////////////////////////</span>
<a class='l d1' name=39 href="#39">39</a> <span class='c'></span><span class='c'>//</span>
<a class='l d1' name=40 href="#40">40</a> <span class='c'></span><span class='c'>// Main plugin entry point implementation</span>
<a class='l d1' name=41 href="#41">41</a> <span class='c'></span><span class='c'>//</span>
<a class='l d1' name=42 href="#42">42</a> <span class='c'></span><span class='i'>#include</span> "<a href='/seamonkey/find?string=/npapi\.h$'>npapi.h</a>"
<a class='l d1' name=43 href="#43">43</a> <span class='i'>#include</span> "<a href='/seamonkey/find?string=/npupp\.h$'>npupp.h</a>"
<a class='l d1' name=44 href="#44">44</a> 
<a class='l d1' name=45 href="#45">45</a> <span class='v'>#ifndef </span><a class="d" href="/seamonkey/ident?i=HIBYTE">HIBYTE</a>
<a class='l d1' name=46 href="#46">46</a> <span class='v'>#define </span><a class="d" href="/seamonkey/ident?i=HIBYTE">HIBYTE</a>(<a class="d" href="/seamonkey/ident?i=x">x</a>) ((((<a class="d" href="/seamonkey/ident?i=uint32">uint32</a>)(<a class="d" href="/seamonkey/ident?i=x">x</a>)) &amp; 0xff00) &gt;&gt; 8)
<a class='l d1' name=47 href="#47">47</a> <span class='v'>#endif
<a class='l d1' name=48 href="#48">48</a> </span>
<a class='l d1' name=49 href="#49">49</a> <a class="d" href="/seamonkey/ident?i=NPNetscapeFuncs">NPNetscapeFuncs</a> <a class="d" href="/seamonkey/ident?i=NPNFuncs">NPNFuncs</a>;
<a class='l d1' name=50 href="#50">50</a> 
<a class='l d1' name=51 href="#51">51</a> <span class='v'>#ifdef </span><a class="d" href="/seamonkey/ident?i=XP_WIN">XP_WIN</a>
<a class='l d1' name=52 href="#52">52</a> 
<a class='l d1' name=53 href="#53">53</a> <a class="d" href="/seamonkey/ident?i=NPError">NPError</a> <a class="d" href="/seamonkey/ident?i=OSCALL">OSCALL</a> <a class="d" href="/seamonkey/ident?i=NP_GetEntryPoints">NP_GetEntryPoints</a>(<a class="d" href="/seamonkey/ident?i=NPPluginFuncs">NPPluginFuncs</a>* <a class="d" href="/seamonkey/ident?i=pFuncs">pFuncs</a>)
<a class='l d1' name=54 href="#54">54</a> {
<a class='l d1' name=55 href="#55">55</a>   <span class='v'>if(</span><a class="d" href="/seamonkey/ident?i=pFuncs">pFuncs</a> == <a class="d" href="/seamonkey/ident?i=NULL">NULL</a>)
<a class='l d1' name=56 href="#56">56</a>     <span class='v'>return </span><a class="d" href="/seamonkey/ident?i=NPERR_INVALID_FUNCTABLE_ERROR">NPERR_INVALID_FUNCTABLE_ERROR</a>;
<a class='l d1' name=57 href="#57">57</a> 
<a class='l d1' name=58 href="#58">58</a>   <span class='v'>if(</span><a class="d" href="/seamonkey/ident?i=pFuncs">pFuncs</a>-&gt;<a class="d" href="/seamonkey/ident?i=size">size</a> &lt; <span class='v'>sizeof(</span><a class="d" href="/seamonkey/ident?i=NPPluginFuncs">NPPluginFuncs</a>))
<a class='l d1' name=59 href="#59">59</a>     <span class='v'>return </span><a class="d" href="/seamonkey/ident?i=NPERR_INVALID_FUNCTABLE_ERROR">NPERR_INVALID_FUNCTABLE_ERROR</a>;
<a class='l d1' name=60 href="#60">60</a> 
<a class='l d1' name=61 href="#61">61</a>   <a class="d" href="/seamonkey/ident?i=pFuncs">pFuncs</a>-&gt;<a class="d" href="/seamonkey/ident?i=version">version</a>       = (<a class="d" href="/seamonkey/ident?i=NP_VERSION_MAJOR">NP_VERSION_MAJOR</a> &lt;&lt; 8) | <a class="d" href="/seamonkey/ident?i=NP_VERSION_MINOR">NP_VERSION_MINOR</a>;
<a class='l d1' name=62 href="#62">62</a>   <a class="d" href="/seamonkey/ident?i=pFuncs">pFuncs</a>-&gt;<a class="d" href="/seamonkey/ident?i=newp">newp</a>          = <a class="d" href="/seamonkey/ident?i=NPP_New">NPP_New</a>;
<a class='l d1' name=63 href="#63">63</a>   <a class="d" href="/seamonkey/ident?i=pFuncs">pFuncs</a>-&gt;<a class="d" href="/seamonkey/ident?i=destroy">destroy</a>       = <a class="d" href="/seamonkey/ident?i=NPP_Destroy">NPP_Destroy</a>;
<a class='l d1' name=64 href="#64">64</a>   <a class="d" href="/seamonkey/ident?i=pFuncs">pFuncs</a>-&gt;<a class="d" href="/seamonkey/ident?i=setwindow">setwindow</a>     = <a class="d" href="/seamonkey/ident?i=NPP_SetWindow">NPP_SetWindow</a>;
<a class='l d1' name=65 href="#65">65</a>   <a class="d" href="/seamonkey/ident?i=pFuncs">pFuncs</a>-&gt;<a class="d" href="/seamonkey/ident?i=newstream">newstream</a>     = <a class="d" href="/seamonkey/ident?i=NPP_NewStream">NPP_NewStream</a>;
<a class='l d1' name=66 href="#66">66</a>   <a class="d" href="/seamonkey/ident?i=pFuncs">pFuncs</a>-&gt;<a class="d" href="/seamonkey/ident?i=destroystream">destroystream</a> = <a class="d" href="/seamonkey/ident?i=NPP_DestroyStream">NPP_DestroyStream</a>;
<a class='l d1' name=67 href="#67">67</a>   <a class="d" href="/seamonkey/ident?i=pFuncs">pFuncs</a>-&gt;<a class="d" href="/seamonkey/ident?i=asfile">asfile</a>        = <a class="d" href="/seamonkey/ident?i=NPP_StreamAsFile">NPP_StreamAsFile</a>;
<a class='l d1' name=68 href="#68">68</a>   <a class="d" href="/seamonkey/ident?i=pFuncs">pFuncs</a>-&gt;<a class="d" href="/seamonkey/ident?i=writeready">writeready</a>    = <a class="d" href="/seamonkey/ident?i=NPP_WriteReady">NPP_WriteReady</a>;
<a class='l d1' name=69 href="#69">69</a>   <a class="d" href="/seamonkey/ident?i=pFuncs">pFuncs</a>-&gt;<a class="d" href="/seamonkey/ident?i=write">write</a>         = <a class="d" href="/seamonkey/ident?i=NPP_Write">NPP_Write</a>;
<a class='l d1' name=70 href="#70">70</a>   <a class="d" href="/seamonkey/ident?i=pFuncs">pFuncs</a>-&gt;<a class="d" href="/seamonkey/ident?i=print">print</a>         = <a class="d" href="/seamonkey/ident?i=NPP_Print">NPP_Print</a>;
<a class='l d1' name=71 href="#71">71</a>   <a class="d" href="/seamonkey/ident?i=pFuncs">pFuncs</a>-&gt;<a class="d" href="/seamonkey/ident?i=event">event</a>         = <a class="d" href="/seamonkey/ident?i=NPP_HandleEvent">NPP_HandleEvent</a>;
<a class='l d1' name=72 href="#72">72</a>   <a class="d" href="/seamonkey/ident?i=pFuncs">pFuncs</a>-&gt;<a class="d" href="/seamonkey/ident?i=urlnotify">urlnotify</a>     = <a class="d" href="/seamonkey/ident?i=NPP_URLNotify">NPP_URLNotify</a>;
<a class='l d1' name=73 href="#73">73</a>   <a class="d" href="/seamonkey/ident?i=pFuncs">pFuncs</a>-&gt;<a class="d" href="/seamonkey/ident?i=getvalue">getvalue</a>      = <a class="d" href="/seamonkey/ident?i=NPP_GetValue">NPP_GetValue</a>;
<a class='l d1' name=74 href="#74">74</a>   <a class="d" href="/seamonkey/ident?i=pFuncs">pFuncs</a>-&gt;<a class="d" href="/seamonkey/ident?i=setvalue">setvalue</a>      = <a class="d" href="/seamonkey/ident?i=NPP_SetValue">NPP_SetValue</a>;
<a class='l d1' name=75 href="#75">75</a>   <a class="d" href="/seamonkey/ident?i=pFuncs">pFuncs</a>-&gt;<a class="d" href="/seamonkey/ident?i=javaClass">javaClass</a>     = <a class="d" href="/seamonkey/ident?i=NULL">NULL</a>;
<a class='l d1' name=76 href="#76">76</a> 
<a class='l d1' name=77 href="#77">77</a>   <span class='v'>return </span><a class="d" href="/seamonkey/ident?i=NPERR_NO_ERROR">NPERR_NO_ERROR</a>;
<a class='l d1' name=78 href="#78">78</a> }
<a class='l d1' name=79 href="#79">79</a> 
<a class='l d1' name=80 href="#80">80</a> <span class='v'>#endif </span><span class='c'>/* XP_WIN */</span>
<a class='l d1' name=81 href="#81">81</a> 
<a class='l d1' name=82 href="#82">82</a> <span class='v'>char </span>*<a class="d" href="/seamonkey/ident?i=NPP_GetMIMEDescription">NPP_GetMIMEDescription</a>();
<a class='l d1' name=83 href="#83">83</a> 
<a class='l d1' name=84 href="#84">84</a> <span class='v'>char </span>*
<a class='l d1' name=85 href="#85">85</a> <a class="d" href="/seamonkey/ident?i=NP_GetMIMEDescription">NP_GetMIMEDescription</a>()
<a class='l d1' name=86 href="#86">86</a> {
<a class='l d1' name=87 href="#87">87</a>   <span class='v'>return </span><a class="d" href="/seamonkey/ident?i=NPP_GetMIMEDescription">NPP_GetMIMEDescription</a>();
<a class='l d1' name=88 href="#88">88</a> }
<a class='l d1' name=89 href="#89">89</a> 
<a class='l d1' name=90 href="#90">90</a> <a class="d" href="/seamonkey/ident?i=NPError">NPError</a>
<a class='l d1' name=91 href="#91">91</a> <a class="d" href="/seamonkey/ident?i=NP_GetValue">NP_GetValue</a>(<span class='v'>void* </span><a class="d" href="/seamonkey/ident?i=future">future</a>, <a class="d" href="/seamonkey/ident?i=NPPVariable">NPPVariable</a> <a class="d" href="/seamonkey/ident?i=variable">variable</a>, <span class='v'>void </span>*<a class="d" href="/seamonkey/ident?i=value">value</a>)
<a class='l d1' name=92 href="#92">92</a> {
<a class='l d1' name=93 href="#93">93</a>   <span class='v'>return </span><a class="d" href="/seamonkey/ident?i=NPP_GetValue">NPP_GetValue</a>((<a class="d" href="/seamonkey/ident?i=NPP_t">NPP_t</a> *)<a class="d" href="/seamonkey/ident?i=future">future</a>, <a class="d" href="/seamonkey/ident?i=variable">variable</a>, <a class="d" href="/seamonkey/ident?i=value">value</a>);
<a class='l d1' name=94 href="#94">94</a> }
<a class='l d1' name=95 href="#95">95</a> 
<a class='l d1' name=96 href="#96">96</a> <a class="d" href="/seamonkey/ident?i=NPError">NPError</a> <a class="d" href="/seamonkey/ident?i=OSCALL">OSCALL</a>
<a class='l d1' name=97 href="#97">97</a> <a class="d" href="/seamonkey/ident?i=NP_Initialize">NP_Initialize</a>(<a class="d" href="/seamonkey/ident?i=NPNetscapeFuncs">NPNetscapeFuncs</a>* <a class="d" href="/seamonkey/ident?i=pFuncs">pFuncs</a>
<a class='l d1' name=98 href="#98">98</a> <span class='v'>#ifdef </span><a class="d" href="/seamonkey/ident?i=XP_UNIX">XP_UNIX</a>
<a class='l d1' name=99 href="#99">99</a>               , <a class="d" href="/seamonkey/ident?i=NPPluginFuncs">NPPluginFuncs</a>* <a class="d" href="/seamonkey/ident?i=pluginFuncs">pluginFuncs</a>
<a class='l d2' name=100 href="#100">100</a> <span class='v'>#endif
<a class='l d2' name=101 href="#101">101</a> </span>              )
<a class='l d2' name=102 href="#102">102</a> {
<a class='l d2' name=103 href="#103">103</a>   <span class='v'>if(</span><a class="d" href="/seamonkey/ident?i=pFuncs">pFuncs</a> == <a class="d" href="/seamonkey/ident?i=NULL">NULL</a>)
<a class='l d2' name=104 href="#104">104</a>     <span class='v'>return </span><a class="d" href="/seamonkey/ident?i=NPERR_INVALID_FUNCTABLE_ERROR">NPERR_INVALID_FUNCTABLE_ERROR</a>;
<a class='l d2' name=105 href="#105">105</a> 
<a class='l d2' name=106 href="#106">106</a>   <span class='v'>if(</span><a class="d" href="/seamonkey/ident?i=HIBYTE">HIBYTE</a>(<a class="d" href="/seamonkey/ident?i=pFuncs">pFuncs</a>-&gt;<a class="d" href="/seamonkey/ident?i=version">version</a>) &gt; <a class="d" href="/seamonkey/ident?i=NP_VERSION_MAJOR">NP_VERSION_MAJOR</a>)
<a class='l d2' name=107 href="#107">107</a>     <span class='v'>return </span><a class="d" href="/seamonkey/ident?i=NPERR_INCOMPATIBLE_VERSION_ERROR">NPERR_INCOMPATIBLE_VERSION_ERROR</a>;
<a class='l d2' name=108 href="#108">108</a> 
<a class='l d2' name=109 href="#109">109</a>   <span class='v'>if(</span><a class="d" href="/seamonkey/ident?i=pFuncs">pFuncs</a>-&gt;<a class="d" href="/seamonkey/ident?i=size">size</a> &lt; <span class='v'>sizeof(</span><a class="d" href="/seamonkey/ident?i=NPNetscapeFuncs">NPNetscapeFuncs</a>))
<a class='l d2' name=110 href="#110">110</a>     <span class='v'>return </span><a class="d" href="/seamonkey/ident?i=NPERR_INVALID_FUNCTABLE_ERROR">NPERR_INVALID_FUNCTABLE_ERROR</a>;
<a class='l d2' name=111 href="#111">111</a> 
<a class='l d2' name=112 href="#112">112</a>   <a class="d" href="/seamonkey/ident?i=NPNFuncs">NPNFuncs</a>.<a class="d" href="/seamonkey/ident?i=size">size</a>                    = <a class="d" href="/seamonkey/ident?i=pFuncs">pFuncs</a>-&gt;<a class="d" href="/seamonkey/ident?i=size">size</a>;
<a class='l d2' name=113 href="#113">113</a>   <a class="d" href="/seamonkey/ident?i=NPNFuncs">NPNFuncs</a>.<a class="d" href="/seamonkey/ident?i=version">version</a>                 = <a class="d" href="/seamonkey/ident?i=pFuncs">pFuncs</a>-&gt;<a class="d" href="/seamonkey/ident?i=version">version</a>;
<a class='l d2' name=114 href="#114">114</a>   <a class="d" href="/seamonkey/ident?i=NPNFuncs">NPNFuncs</a>.<a class="d" href="/seamonkey/ident?i=geturlnotify">geturlnotify</a>            = <a class="d" href="/seamonkey/ident?i=pFuncs">pFuncs</a>-&gt;<a class="d" href="/seamonkey/ident?i=geturlnotify">geturlnotify</a>;
<a class='l d2' name=115 href="#115">115</a>   <a class="d" href="/seamonkey/ident?i=NPNFuncs">NPNFuncs</a>.<a class="d" href="/seamonkey/ident?i=geturl">geturl</a>                  = <a class="d" href="/seamonkey/ident?i=pFuncs">pFuncs</a>-&gt;<a class="d" href="/seamonkey/ident?i=geturl">geturl</a>;
<a class='l d2' name=116 href="#116">116</a>   <a class="d" href="/seamonkey/ident?i=NPNFuncs">NPNFuncs</a>.<a class="d" href="/seamonkey/ident?i=posturlnotify">posturlnotify</a>           = <a class="d" href="/seamonkey/ident?i=pFuncs">pFuncs</a>-&gt;<a class="d" href="/seamonkey/ident?i=posturlnotify">posturlnotify</a>;
<a class='l d2' name=117 href="#117">117</a>   <a class="d" href="/seamonkey/ident?i=NPNFuncs">NPNFuncs</a>.<a class="d" href="/seamonkey/ident?i=posturl">posturl</a>                 = <a class="d" href="/seamonkey/ident?i=pFuncs">pFuncs</a>-&gt;<a class="d" href="/seamonkey/ident?i=posturl">posturl</a>;
<a class='l d2' name=118 href="#118">118</a>   <a class="d" href="/seamonkey/ident?i=NPNFuncs">NPNFuncs</a>.<a class="d" href="/seamonkey/ident?i=requestread">requestread</a>             = <a class="d" href="/seamonkey/ident?i=pFuncs">pFuncs</a>-&gt;<a class="d" href="/seamonkey/ident?i=requestread">requestread</a>;
<a class='l d2' name=119 href="#119">119</a>   <a class="d" href="/seamonkey/ident?i=NPNFuncs">NPNFuncs</a>.<a class="d" href="/seamonkey/ident?i=newstream">newstream</a>               = <a class="d" href="/seamonkey/ident?i=pFuncs">pFuncs</a>-&gt;<a class="d" href="/seamonkey/ident?i=newstream">newstream</a>;
<a class='l d2' name=120 href="#120">120</a>   <a class="d" href="/seamonkey/ident?i=NPNFuncs">NPNFuncs</a>.<a class="d" href="/seamonkey/ident?i=write">write</a>                   = <a class="d" href="/seamonkey/ident?i=pFuncs">pFuncs</a>-&gt;<a class="d" href="/seamonkey/ident?i=write">write</a>;
<a class='l d2' name=121 href="#121">121</a>   <a class="d" href="/seamonkey/ident?i=NPNFuncs">NPNFuncs</a>.<a class="d" href="/seamonkey/ident?i=destroystream">destroystream</a>           = <a class="d" href="/seamonkey/ident?i=pFuncs">pFuncs</a>-&gt;<a class="d" href="/seamonkey/ident?i=destroystream">destroystream</a>;
<a class='l d2' name=122 href="#122">122</a>   <a class="d" href="/seamonkey/ident?i=NPNFuncs">NPNFuncs</a>.<a class="d" href="/seamonkey/ident?i=status">status</a>                  = <a class="d" href="/seamonkey/ident?i=pFuncs">pFuncs</a>-&gt;<a class="d" href="/seamonkey/ident?i=status">status</a>;
<a class='l d2' name=123 href="#123">123</a>   <a class="d" href="/seamonkey/ident?i=NPNFuncs">NPNFuncs</a>.<a class="d" href="/seamonkey/ident?i=uagent">uagent</a>                  = <a class="d" href="/seamonkey/ident?i=pFuncs">pFuncs</a>-&gt;<a class="d" href="/seamonkey/ident?i=uagent">uagent</a>;
<a class='l d2' name=124 href="#124">124</a>   <a class="d" href="/seamonkey/ident?i=NPNFuncs">NPNFuncs</a>.<a class="d" href="/seamonkey/ident?i=memalloc">memalloc</a>                = <a class="d" href="/seamonkey/ident?i=pFuncs">pFuncs</a>-&gt;<a class="d" href="/seamonkey/ident?i=memalloc">memalloc</a>;
<a class='l d2' name=125 href="#125">125</a>   <a class="d" href="/seamonkey/ident?i=NPNFuncs">NPNFuncs</a>.<a class="d" href="/seamonkey/ident?i=memfree">memfree</a>                 = <a class="d" href="/seamonkey/ident?i=pFuncs">pFuncs</a>-&gt;<a class="d" href="/seamonkey/ident?i=memfree">memfree</a>;
<a class='l d2' name=126 href="#126">126</a>   <a class="d" href="/seamonkey/ident?i=NPNFuncs">NPNFuncs</a>.<a class="d" href="/seamonkey/ident?i=memflush">memflush</a>                = <a class="d" href="/seamonkey/ident?i=pFuncs">pFuncs</a>-&gt;<a class="d" href="/seamonkey/ident?i=memflush">memflush</a>;
<a class='l d2' name=127 href="#127">127</a>   <a class="d" href="/seamonkey/ident?i=NPNFuncs">NPNFuncs</a>.<a class="d" href="/seamonkey/ident?i=reloadplugins">reloadplugins</a>           = <a class="d" href="/seamonkey/ident?i=pFuncs">pFuncs</a>-&gt;<a class="d" href="/seamonkey/ident?i=reloadplugins">reloadplugins</a>;
<a class='l d2' name=128 href="#128">128</a>   <a class="d" href="/seamonkey/ident?i=NPNFuncs">NPNFuncs</a>.<a class="d" href="/seamonkey/ident?i=getJavaEnv">getJavaEnv</a>              = <a class="d" href="/seamonkey/ident?i=pFuncs">pFuncs</a>-&gt;<a class="d" href="/seamonkey/ident?i=getJavaEnv">getJavaEnv</a>;
<a class='l d2' name=129 href="#129">129</a>   <a class="d" href="/seamonkey/ident?i=NPNFuncs">NPNFuncs</a>.<a class="d" href="/seamonkey/ident?i=getJavaPeer">getJavaPeer</a>             = <a class="d" href="/seamonkey/ident?i=pFuncs">pFuncs</a>-&gt;<a class="d" href="/seamonkey/ident?i=getJavaPeer">getJavaPeer</a>;
<a class='l d2' name=130 href="#130">130</a>   <a class="d" href="/seamonkey/ident?i=NPNFuncs">NPNFuncs</a>.<a class="d" href="/seamonkey/ident?i=getvalue">getvalue</a>                = <a class="d" href="/seamonkey/ident?i=pFuncs">pFuncs</a>-&gt;<a class="d" href="/seamonkey/ident?i=getvalue">getvalue</a>;
<a class='l d2' name=131 href="#131">131</a>   <a class="d" href="/seamonkey/ident?i=NPNFuncs">NPNFuncs</a>.<a class="d" href="/seamonkey/ident?i=setvalue">setvalue</a>                = <a class="d" href="/seamonkey/ident?i=pFuncs">pFuncs</a>-&gt;<a class="d" href="/seamonkey/ident?i=setvalue">setvalue</a>;
<a class='l d2' name=132 href="#132">132</a>   <a class="d" href="/seamonkey/ident?i=NPNFuncs">NPNFuncs</a>.<a class="d" href="/seamonkey/ident?i=invalidaterect">invalidaterect</a>          = <a class="d" href="/seamonkey/ident?i=pFuncs">pFuncs</a>-&gt;<a class="d" href="/seamonkey/ident?i=invalidaterect">invalidaterect</a>;
<a class='l d2' name=133 href="#133">133</a>   <a class="d" href="/seamonkey/ident?i=NPNFuncs">NPNFuncs</a>.<a class="d" href="/seamonkey/ident?i=invalidateregion">invalidateregion</a>        = <a class="d" href="/seamonkey/ident?i=pFuncs">pFuncs</a>-&gt;<a class="d" href="/seamonkey/ident?i=invalidateregion">invalidateregion</a>;
<a class='l d2' name=134 href="#134">134</a>   <a class="d" href="/seamonkey/ident?i=NPNFuncs">NPNFuncs</a>.<a class="d" href="/seamonkey/ident?i=forceredraw">forceredraw</a>             = <a class="d" href="/seamonkey/ident?i=pFuncs">pFuncs</a>-&gt;<a class="d" href="/seamonkey/ident?i=forceredraw">forceredraw</a>;
<a class='l d2' name=135 href="#135">135</a>   <a class="d" href="/seamonkey/ident?i=NPNFuncs">NPNFuncs</a>.<a class="d" href="/seamonkey/ident?i=getstringidentifier">getstringidentifier</a>     = <a class="d" href="/seamonkey/ident?i=pFuncs">pFuncs</a>-&gt;<a class="d" href="/seamonkey/ident?i=getstringidentifier">getstringidentifier</a>;
<a class='l d2' name=136 href="#136">136</a>   <a class="d" href="/seamonkey/ident?i=NPNFuncs">NPNFuncs</a>.<a class="d" href="/seamonkey/ident?i=getstringidentifiers">getstringidentifiers</a>    = <a class="d" href="/seamonkey/ident?i=pFuncs">pFuncs</a>-&gt;<a class="d" href="/seamonkey/ident?i=getstringidentifiers">getstringidentifiers</a>;
<a class='l d2' name=137 href="#137">137</a>   <a class="d" href="/seamonkey/ident?i=NPNFuncs">NPNFuncs</a>.<a class="d" href="/seamonkey/ident?i=getintidentifier">getintidentifier</a>        = <a class="d" href="/seamonkey/ident?i=pFuncs">pFuncs</a>-&gt;<a class="d" href="/seamonkey/ident?i=getintidentifier">getintidentifier</a>;
<a class='l d2' name=138 href="#138">138</a>   <a class="d" href="/seamonkey/ident?i=NPNFuncs">NPNFuncs</a>.<a class="d" href="/seamonkey/ident?i=identifierisstring">identifierisstring</a>      = <a class="d" href="/seamonkey/ident?i=pFuncs">pFuncs</a>-&gt;<a class="d" href="/seamonkey/ident?i=identifierisstring">identifierisstring</a>;
<a class='l d2' name=139 href="#139">139</a>   <a class="d" href="/seamonkey/ident?i=NPNFuncs">NPNFuncs</a>.<a class="d" href="/seamonkey/ident?i=utf8fromidentifier">utf8fromidentifier</a>      = <a class="d" href="/seamonkey/ident?i=pFuncs">pFuncs</a>-&gt;<a class="d" href="/seamonkey/ident?i=utf8fromidentifier">utf8fromidentifier</a>;
<a class='l d2' name=140 href="#140">140</a>   <a class="d" href="/seamonkey/ident?i=NPNFuncs">NPNFuncs</a>.<a class="d" href="/seamonkey/ident?i=intfromidentifier">intfromidentifier</a>       = <a class="d" href="/seamonkey/ident?i=pFuncs">pFuncs</a>-&gt;<a class="d" href="/seamonkey/ident?i=intfromidentifier">intfromidentifier</a>;
<a class='l d2' name=141 href="#141">141</a>   <a class="d" href="/seamonkey/ident?i=NPNFuncs">NPNFuncs</a>.<a class="d" href="/seamonkey/ident?i=createobject">createobject</a>            = <a class="d" href="/seamonkey/ident?i=pFuncs">pFuncs</a>-&gt;<a class="d" href="/seamonkey/ident?i=createobject">createobject</a>;
<a class='l d2' name=142 href="#142">142</a>   <a class="d" href="/seamonkey/ident?i=NPNFuncs">NPNFuncs</a>.<a class="d" href="/seamonkey/ident?i=retainobject">retainobject</a>            = <a class="d" href="/seamonkey/ident?i=pFuncs">pFuncs</a>-&gt;<a class="d" href="/seamonkey/ident?i=retainobject">retainobject</a>;
<a class='l d2' name=143 href="#143">143</a>   <a class="d" href="/seamonkey/ident?i=NPNFuncs">NPNFuncs</a>.<a class="d" href="/seamonkey/ident?i=releaseobject">releaseobject</a>           = <a class="d" href="/seamonkey/ident?i=pFuncs">pFuncs</a>-&gt;<a class="d" href="/seamonkey/ident?i=releaseobject">releaseobject</a>;
<a class='l d2' name=144 href="#144">144</a>   <a class="d" href="/seamonkey/ident?i=NPNFuncs">NPNFuncs</a>.<a class="d" href="/seamonkey/ident?i=invoke">invoke</a>                  = <a class="d" href="/seamonkey/ident?i=pFuncs">pFuncs</a>-&gt;<a class="d" href="/seamonkey/ident?i=invoke">invoke</a>;
<a class='l d2' name=145 href="#145">145</a>   <a class="d" href="/seamonkey/ident?i=NPNFuncs">NPNFuncs</a>.<a class="d" href="/seamonkey/ident?i=invokeDefault">invokeDefault</a>           = <a class="d" href="/seamonkey/ident?i=pFuncs">pFuncs</a>-&gt;<a class="d" href="/seamonkey/ident?i=invokeDefault">invokeDefault</a>;
<a class='l d2' name=146 href="#146">146</a>   <a class="d" href="/seamonkey/ident?i=NPNFuncs">NPNFuncs</a>.<a class="d" href="/seamonkey/ident?i=evaluate">evaluate</a>                = <a class="d" href="/seamonkey/ident?i=pFuncs">pFuncs</a>-&gt;<a class="d" href="/seamonkey/ident?i=evaluate">evaluate</a>;
<a class='l d2' name=147 href="#147">147</a>   <a class="d" href="/seamonkey/ident?i=NPNFuncs">NPNFuncs</a>.<a class="d" href="/seamonkey/ident?i=getproperty">getproperty</a>             = <a class="d" href="/seamonkey/ident?i=pFuncs">pFuncs</a>-&gt;<a class="d" href="/seamonkey/ident?i=getproperty">getproperty</a>;
<a class='l d2' name=148 href="#148">148</a>   <a class="d" href="/seamonkey/ident?i=NPNFuncs">NPNFuncs</a>.<a class="d" href="/seamonkey/ident?i=setproperty">setproperty</a>             = <a class="d" href="/seamonkey/ident?i=pFuncs">pFuncs</a>-&gt;<a class="d" href="/seamonkey/ident?i=setproperty">setproperty</a>;
<a class='l d2' name=149 href="#149">149</a>   <a class="d" href="/seamonkey/ident?i=NPNFuncs">NPNFuncs</a>.<a class="d" href="/seamonkey/ident?i=removeproperty">removeproperty</a>          = <a class="d" href="/seamonkey/ident?i=pFuncs">pFuncs</a>-&gt;<a class="d" href="/seamonkey/ident?i=removeproperty">removeproperty</a>;
<a class='l d2' name=150 href="#150">150</a>   <a class="d" href="/seamonkey/ident?i=NPNFuncs">NPNFuncs</a>.<a class="d" href="/seamonkey/ident?i=hasproperty">hasproperty</a>             = <a class="d" href="/seamonkey/ident?i=pFuncs">pFuncs</a>-&gt;<a class="d" href="/seamonkey/ident?i=hasproperty">hasproperty</a>;
<a class='l d2' name=151 href="#151">151</a>   <a class="d" href="/seamonkey/ident?i=NPNFuncs">NPNFuncs</a>.<a class="d" href="/seamonkey/ident?i=hasmethod">hasmethod</a>               = <a class="d" href="/seamonkey/ident?i=pFuncs">pFuncs</a>-&gt;<a class="d" href="/seamonkey/ident?i=hasmethod">hasmethod</a>;
<a class='l d2' name=152 href="#152">152</a>   <a class="d" href="/seamonkey/ident?i=NPNFuncs">NPNFuncs</a>.<a class="d" href="/seamonkey/ident?i=releasevariantvalue">releasevariantvalue</a>     = <a class="d" href="/seamonkey/ident?i=pFuncs">pFuncs</a>-&gt;<a class="d" href="/seamonkey/ident?i=releasevariantvalue">releasevariantvalue</a>;
<a class='l d2' name=153 href="#153">153</a>   <a class="d" href="/seamonkey/ident?i=NPNFuncs">NPNFuncs</a>.<a class="d" href="/seamonkey/ident?i=setexception">setexception</a>            = <a class="d" href="/seamonkey/ident?i=pFuncs">pFuncs</a>-&gt;<a class="d" href="/seamonkey/ident?i=setexception">setexception</a>;
<a class='l d2' name=154 href="#154">154</a> 
<a class='l d2' name=155 href="#155">155</a> <span class='v'>#ifdef </span><a class="d" href="/seamonkey/ident?i=XP_UNIX">XP_UNIX</a>
<a class='l d2' name=156 href="#156">156</a>   <span class='c'>/*</span>
<a class='l d2' name=157 href="#157">157</a> <span class='c'>   * Set up the plugin function table that Netscape will use to</span>
<a class='l d2' name=158 href="#158">158</a> <span class='c'>   * call us.  Netscape needs to know about our version and size</span>
<a class='l d2' name=159 href="#159">159</a> <span class='c'>   * and have a UniversalProcPointer for every function we</span>
<a class='l d2' name=160 href="#160">160</a> <span class='c'>   * implement.</span>
<a class='l d2' name=161 href="#161">161</a> <span class='c'>   */</span>
<a class='l d2' name=162 href="#162">162</a>   <a class="d" href="/seamonkey/ident?i=pluginFuncs">pluginFuncs</a>-&gt;<a class="d" href="/seamonkey/ident?i=version">version</a>    = (<a class="d" href="/seamonkey/ident?i=NP_VERSION_MAJOR">NP_VERSION_MAJOR</a> &lt;&lt; 8) + <a class="d" href="/seamonkey/ident?i=NP_VERSION_MINOR">NP_VERSION_MINOR</a>;
<a class='l d2' name=163 href="#163">163</a>   <a class="d" href="/seamonkey/ident?i=pluginFuncs">pluginFuncs</a>-&gt;<a class="d" href="/seamonkey/ident?i=size">size</a>       = <span class='v'>sizeof(</span><a class="d" href="/seamonkey/ident?i=NPPluginFuncs">NPPluginFuncs</a>);
<a class='l d2' name=164 href="#164">164</a>   <a class="d" href="/seamonkey/ident?i=pluginFuncs">pluginFuncs</a>-&gt;<a class="d" href="/seamonkey/ident?i=newp">newp</a>       = <a class="d" href="/seamonkey/ident?i=NewNPP_NewProc">NewNPP_NewProc</a>(<a class="d" href="/seamonkey/ident?i=NPP_New">NPP_New</a>);
<a class='l d2' name=165 href="#165">165</a>   <a class="d" href="/seamonkey/ident?i=pluginFuncs">pluginFuncs</a>-&gt;<a class="d" href="/seamonkey/ident?i=destroy">destroy</a>    = <a class="d" href="/seamonkey/ident?i=NewNPP_DestroyProc">NewNPP_DestroyProc</a>(<a class="d" href="/seamonkey/ident?i=NPP_Destroy">NPP_Destroy</a>);
<a class='l d2' name=166 href="#166">166</a>   <a class="d" href="/seamonkey/ident?i=pluginFuncs">pluginFuncs</a>-&gt;<a class="d" href="/seamonkey/ident?i=setwindow">setwindow</a>  = <a class="d" href="/seamonkey/ident?i=NewNPP_SetWindowProc">NewNPP_SetWindowProc</a>(<a class="d" href="/seamonkey/ident?i=NPP_SetWindow">NPP_SetWindow</a>);
<a class='l d2' name=167 href="#167">167</a>   <a class="d" href="/seamonkey/ident?i=pluginFuncs">pluginFuncs</a>-&gt;<a class="d" href="/seamonkey/ident?i=newstream">newstream</a>  = <a class="d" href="/seamonkey/ident?i=NewNPP_NewStreamProc">NewNPP_NewStreamProc</a>(<a class="d" href="/seamonkey/ident?i=NPP_NewStream">NPP_NewStream</a>);
<a class='l d2' name=168 href="#168">168</a>   <a class="d" href="/seamonkey/ident?i=pluginFuncs">pluginFuncs</a>-&gt;<a class="d" href="/seamonkey/ident?i=destroystream">destroystream</a> = <a class="d" href="/seamonkey/ident?i=NewNPP_DestroyStreamProc">NewNPP_DestroyStreamProc</a>(<a class="d" href="/seamonkey/ident?i=NPP_DestroyStream">NPP_DestroyStream</a>);
<a class='l d2' name=169 href="#169">169</a>   <a class="d" href="/seamonkey/ident?i=pluginFuncs">pluginFuncs</a>-&gt;<a class="d" href="/seamonkey/ident?i=asfile">asfile</a>     = <a class="d" href="/seamonkey/ident?i=NewNPP_StreamAsFileProc">NewNPP_StreamAsFileProc</a>(<a class="d" href="/seamonkey/ident?i=NPP_StreamAsFile">NPP_StreamAsFile</a>);
<a class='l d2' name=170 href="#170">170</a>   <a class="d" href="/seamonkey/ident?i=pluginFuncs">pluginFuncs</a>-&gt;<a class="d" href="/seamonkey/ident?i=writeready">writeready</a> = <a class="d" href="/seamonkey/ident?i=NewNPP_WriteReadyProc">NewNPP_WriteReadyProc</a>(<a class="d" href="/seamonkey/ident?i=NPP_WriteReady">NPP_WriteReady</a>);
<a class='l d2' name=171 href="#171">171</a>   <a class="d" href="/seamonkey/ident?i=pluginFuncs">pluginFuncs</a>-&gt;<a class="d" href="/seamonkey/ident?i=write">write</a>      = <a class="d" href="/seamonkey/ident?i=NewNPP_WriteProc">NewNPP_WriteProc</a>(<a class="d" href="/seamonkey/ident?i=NPP_Write">NPP_Write</a>);
<a class='l d2' name=172 href="#172">172</a>   <a class="d" href="/seamonkey/ident?i=pluginFuncs">pluginFuncs</a>-&gt;<a class="d" href="/seamonkey/ident?i=print">print</a>      = <a class="d" href="/seamonkey/ident?i=NewNPP_PrintProc">NewNPP_PrintProc</a>(<a class="d" href="/seamonkey/ident?i=NPP_Print">NPP_Print</a>);
<a class='l d2' name=173 href="#173">173</a>   <a class="d" href="/seamonkey/ident?i=pluginFuncs">pluginFuncs</a>-&gt;<a class="d" href="/seamonkey/ident?i=urlnotify">urlnotify</a>  = <a class="d" href="/seamonkey/ident?i=NewNPP_URLNotifyProc">NewNPP_URLNotifyProc</a>(<a class="d" href="/seamonkey/ident?i=NPP_URLNotify">NPP_URLNotify</a>);
<a class='l d2' name=174 href="#174">174</a>   <a class="d" href="/seamonkey/ident?i=pluginFuncs">pluginFuncs</a>-&gt;<a class="d" href="/seamonkey/ident?i=event">event</a>      = <a class="d" href="/seamonkey/ident?i=NULL">NULL</a>;
<a class='l d2' name=175 href="#175">175</a>   <a class="d" href="/seamonkey/ident?i=pluginFuncs">pluginFuncs</a>-&gt;<a class="d" href="/seamonkey/ident?i=getvalue">getvalue</a>   = <a class="d" href="/seamonkey/ident?i=NewNPP_GetValueProc">NewNPP_GetValueProc</a>(<a class="d" href="/seamonkey/ident?i=NPP_GetValue">NPP_GetValue</a>);
<a class='l d2' name=176 href="#176">176</a> <span class='v'>#ifdef </span><span class='a'>OJI</span>
<a class='l d2' name=177 href="#177">177</a>   <a class="d" href="/seamonkey/ident?i=pluginFuncs">pluginFuncs</a>-&gt;<a class="d" href="/seamonkey/ident?i=javaClass">javaClass</a>  = <a class="d" href="/seamonkey/ident?i=NPP_GetJavaClass">NPP_GetJavaClass</a>();
<a class='l d2' name=178 href="#178">178</a> <span class='v'>#endif
<a class='l d2' name=179 href="#179">179</a> </span>
<a class='l d2' name=180 href="#180">180</a>   <a class="d" href="/seamonkey/ident?i=NPP_Initialize">NPP_Initialize</a>();
<a class='l d2' name=181 href="#181">181</a> <span class='v'>#endif
<a class='l d2' name=182 href="#182">182</a> </span>
<a class='l d2' name=183 href="#183">183</a>   <span class='v'>return </span><a class="d" href="/seamonkey/ident?i=NPERR_NO_ERROR">NPERR_NO_ERROR</a>;
<a class='l d2' name=184 href="#184">184</a> }
<a class='l d2' name=185 href="#185">185</a> 
<a class='l d2' name=186 href="#186">186</a> <a class="d" href="/seamonkey/ident?i=NPError">NPError</a> <a class="d" href="/seamonkey/ident?i=OSCALL">OSCALL</a> <a class="d" href="/seamonkey/ident?i=NP_Shutdown">NP_Shutdown</a>()
<a class='l d2' name=187 href="#187">187</a> {
<a class='l d2' name=188 href="#188">188</a>   <span class='v'>return </span><a class="d" href="/seamonkey/ident?i=NPERR_NO_ERROR">NPERR_NO_ERROR</a>;
<a class='l d2' name=189 href="#189">189</a> }
<a class='l d2' name=190 href="#190">190</a> </span></pre>
</html>
