<!DOCTYPE html>
<html>
<head>
<meta name="GENERATOR" content="lxr-1998-06-10: http://lxr.linux.no">
<link rel="icon" href="/mxr.png" type="image/png">
<title>seamonkey mozilla/modules/plugin/samples/npruntime/plugin.h</title>
<link rel='stylesheet' title='' href='http://mxr.mozilla.org/seamonkey/style/h.css' type='text/css'>

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
   <br><b><a href="/seamonkey/source/">mozilla</a>/ <a href="/seamonkey/source/modules/">modules</a>/ <a href="/seamonkey/source/modules/plugin/">plugin</a>/ <a href="/seamonkey/source/modules/plugin/samples/">samples</a>/ <a href="/seamonkey/source/modules/plugin/samples/npruntime/">npruntime</a>/ <a href="/seamonkey/source/modules/plugin/samples/npruntime/plugin.h">plugin.h</a> </b>
  </TD>

  <td align=right valign=top width="1%">
   <table border cellpadding=12 cellspacing=0>
    <tr>
     <td nowrap bgcolor="#FAFAFA">



      <a href="http://bonsai.mozilla.org/cvslog.cgi?file=mozilla/modules/plugin/samples/npruntime/plugin.h&amp;rev=HEAD&amp;mark=1.1"
>CVS Log</a><br>
      <a href="http://bonsai.mozilla.org/cvsblame.cgi?file=mozilla/modules/plugin/samples/npruntime/plugin.h&amp;rev=1.1"
onfocus='updateBonsaiBlameHash(this, event)'
onmouseover='updateBonsaiBlameHash(this, event)'
>CVS Blame</a><br>
      <a href="http://bonsai.mozilla.org/cvsgraph.cgi?file=mozilla/modules/plugin/samples/npruntime/plugin.h&amp;rev=1.1"
>CVS Graph</a><br>








      <a href="http://mxr.mozilla.org/seamonkey/diff?file=/modules/plugin/samples/npruntime/plugin.h">Diff file</a><br>
      <a href="http://mxr.mozilla.org/seamonkey/source/modules/plugin/samples/npruntime/plugin.h?raw=1">Raw file</a><br>
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
         <a href="http://bonsai.mozilla.org/cvsquery.cgi?branch=HEAD&amp;file=mozilla/modules/plugin/samples/npruntime/plugin.h&amp;date=day">day</a><br>
         <a href="http://bonsai.mozilla.org/cvsquery.cgi?branch=HEAD&amp;file=mozilla/modules/plugin/samples/npruntime/plugin.h&amp;date=week">week</a><br>
         <a href="http://bonsai.mozilla.org/cvsquery.cgi?branch=HEAD&amp;file=mozilla/modules/plugin/samples/npruntime/plugin.h&amp;date=month">month</a><br>
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
<a class='l d1' name=38 href="#38">38</a> <span class='v'>#ifndef </span><a class="d" href="/seamonkey/ident?i=__PLUGIN_H__">__PLUGIN_H__</a>
<a class='l d1' name=39 href="#39">39</a> <span class='v'>#define </span><a class="d" href="/seamonkey/ident?i=__PLUGIN_H__">__PLUGIN_H__</a>
<a class='l d1' name=40 href="#40">40</a> 
<a class='l d1' name=41 href="#41">41</a> <span class='i'>#include</span> "<a href='/seamonkey/find?string=/npapi\.h$'>npapi.h</a>"
<a class='l d1' name=42 href="#42">42</a> <span class='i'>#include</span> "<a href="/seamonkey/source/modules/plugin/base/public/npruntime.h">npruntime.h</a>"
<a class='l d1' name=43 href="#43">43</a> 
<a class='l d1' name=44 href="#44">44</a> <span class='v'>class </span><a class="d" href="/seamonkey/ident?i=CPlugin">CPlugin</a>
<a class='l d1' name=45 href="#45">45</a> {
<a class='l d1' name=46 href="#46">46</a> <span class='v'>private:</span>
<a class='l d1' name=47 href="#47">47</a>   <a class="d" href="/seamonkey/ident?i=NPP">NPP</a> <a class="d" href="/seamonkey/ident?i=m_pNPInstance">m_pNPInstance</a>;
<a class='l d1' name=48 href="#48">48</a> 
<a class='l d1' name=49 href="#49">49</a> <span class='v'>#ifdef </span><a class="d" href="/seamonkey/ident?i=XP_WIN">XP_WIN</a>
<a class='l d1' name=50 href="#50">50</a>   <a class="d" href="/seamonkey/ident?i=HWND">HWND</a> <a class="d" href="/seamonkey/ident?i=m_hWnd">m_hWnd</a>; 
<a class='l d1' name=51 href="#51">51</a> <span class='v'>#endif
<a class='l d1' name=52 href="#52">52</a> </span>
<a class='l d1' name=53 href="#53">53</a>   <a class="d" href="/seamonkey/ident?i=NPWindow">NPWindow</a> * <a class="d" href="/seamonkey/ident?i=m_Window">m_Window</a>;
<a class='l d1' name=54 href="#54">54</a>   
<a class='l d1' name=55 href="#55">55</a>   <a class="d" href="/seamonkey/ident?i=NPStream">NPStream</a> * <a class="d" href="/seamonkey/ident?i=m_pNPStream">m_pNPStream</a>;
<a class='l d1' name=56 href="#56">56</a>   <a class="d" href="/seamonkey/ident?i=NPBool">NPBool</a> <a class="d" href="/seamonkey/ident?i=m_bInitialized">m_bInitialized</a>;
<a class='l d1' name=57 href="#57">57</a> 
<a class='l d1' name=58 href="#58">58</a>   <a class="d" href="/seamonkey/ident?i=NPObject">NPObject</a> *<a class="d" href="/seamonkey/ident?i=m_pScriptableObject">m_pScriptableObject</a>;
<a class='l d1' name=59 href="#59">59</a> 
<a class='l d1' name=60 href="#60">60</a> <span class='v'>public:</span>
<a class='l d1' name=61 href="#61">61</a>   <span class='v'>char </span><a class="d" href="/seamonkey/ident?i=m_String">m_String</a>[128];
<a class='l d1' name=62 href="#62">62</a> 
<a class='l d1' name=63 href="#63">63</a> <span class='v'>public:</span>
<a class='l d1' name=64 href="#64">64</a>   <a class="d" href="/seamonkey/ident?i=CPlugin">CPlugin</a>(<a class="d" href="/seamonkey/ident?i=NPP">NPP</a> <span class='a'>pNPInstance</span>);
<a class='l d1' name=65 href="#65">65</a>   ~<a class="d" href="/seamonkey/ident?i=CPlugin">CPlugin</a>();
<a class='l d1' name=66 href="#66">66</a> 
<a class='l d1' name=67 href="#67">67</a>   <a class="d" href="/seamonkey/ident?i=NPBool">NPBool</a> <a class="d" href="/seamonkey/ident?i=init">init</a>(<a class="d" href="/seamonkey/ident?i=NPWindow">NPWindow</a>* <a class="d" href="/seamonkey/ident?i=pNPWindow">pNPWindow</a>);
<a class='l d1' name=68 href="#68">68</a>   <span class='v'>void </span><a class="d" href="/seamonkey/ident?i=shut">shut</a>();
<a class='l d1' name=69 href="#69">69</a>   <a class="d" href="/seamonkey/ident?i=NPBool">NPBool</a> <a class="d" href="/seamonkey/ident?i=isInitialized">isInitialized</a>();
<a class='l d1' name=70 href="#70">70</a>   
<a class='l d1' name=71 href="#71">71</a>   <a class="d" href="/seamonkey/ident?i=int16">int16</a> <a class="d" href="/seamonkey/ident?i=handleEvent">handleEvent</a>(<span class='v'>void* </span><a class="d" href="/seamonkey/ident?i=event">event</a>);
<a class='l d1' name=72 href="#72">72</a> 
<a class='l d1' name=73 href="#73">73</a>   <span class='v'>void </span><a class="d" href="/seamonkey/ident?i=showVersion">showVersion</a>();
<a class='l d1' name=74 href="#74">74</a>   <span class='v'>void </span><a class="d" href="/seamonkey/ident?i=clear">clear</a>();
<a class='l d1' name=75 href="#75">75</a>   <span class='v'>void </span><a class="d" href="/seamonkey/ident?i=getVersion">getVersion</a>(<span class='v'>char* </span>*<a class="d" href="/seamonkey/ident?i=aVersion">aVersion</a>);
<a class='l d1' name=76 href="#76">76</a> 
<a class='l d1' name=77 href="#77">77</a>   <a class="d" href="/seamonkey/ident?i=NPObject">NPObject</a> *<a class="d" href="/seamonkey/ident?i=GetScriptableObject">GetScriptableObject</a>();
<a class='l d1' name=78 href="#78">78</a> };
<a class='l d1' name=79 href="#79">79</a> 
<a class='l d1' name=80 href="#80">80</a> <span class='v'>#endif </span><span class='c'>// __PLUGIN_H__</span>
<a class='l d1' name=81 href="#81">81</a> <span class='c'></span></span></pre>
</html>
