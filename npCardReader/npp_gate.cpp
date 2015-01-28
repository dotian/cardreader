<!DOCTYPE html>
<html>
<head>
<meta name="GENERATOR" content="lxr-1998-06-10: http://lxr.linux.no">
<link rel="icon" href="/mxr.png" type="image/png">
<title>seamonkey mozilla/modules/plugin/samples/npruntime/npp_gate.cpp</title>
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
   <br><b><a href="/seamonkey/source/">mozilla</a>/ <a href="/seamonkey/source/modules/">modules</a>/ <a href="/seamonkey/source/modules/plugin/">plugin</a>/ <a href="/seamonkey/source/modules/plugin/samples/">samples</a>/ <a href="/seamonkey/source/modules/plugin/samples/npruntime/">npruntime</a>/ <a href="/seamonkey/source/modules/plugin/samples/npruntime/npp_gate.cpp">npp_gate.cpp</a> </b>
  </TD>

  <td align=right valign=top width="1%">
   <table border cellpadding=12 cellspacing=0>
    <tr>
     <td nowrap bgcolor="#FAFAFA">



      <a href="http://bonsai.mozilla.org/cvslog.cgi?file=mozilla/modules/plugin/samples/npruntime/npp_gate.cpp&amp;rev=HEAD&amp;mark=1.1"
>CVS Log</a><br>
      <a href="http://bonsai.mozilla.org/cvsblame.cgi?file=mozilla/modules/plugin/samples/npruntime/npp_gate.cpp&amp;rev=1.1"
onfocus='updateBonsaiBlameHash(this, event)'
onmouseover='updateBonsaiBlameHash(this, event)'
>CVS Blame</a><br>
      <a href="http://bonsai.mozilla.org/cvsgraph.cgi?file=mozilla/modules/plugin/samples/npruntime/npp_gate.cpp&amp;rev=1.1"
>CVS Graph</a><br>








      <a href="http://mxr.mozilla.org/seamonkey/diff?file=/modules/plugin/samples/npruntime/npp_gate.cpp">Diff file</a><br>
      <a href="http://mxr.mozilla.org/seamonkey/source/modules/plugin/samples/npruntime/npp_gate.cpp?raw=1">Raw file</a><br>
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
         <a href="http://bonsai.mozilla.org/cvsquery.cgi?branch=HEAD&amp;file=mozilla/modules/plugin/samples/npruntime/npp_gate.cpp&amp;date=day">day</a><br>
         <a href="http://bonsai.mozilla.org/cvsquery.cgi?branch=HEAD&amp;file=mozilla/modules/plugin/samples/npruntime/npp_gate.cpp&amp;date=week">week</a><br>
         <a href="http://bonsai.mozilla.org/cvsquery.cgi?branch=HEAD&amp;file=mozilla/modules/plugin/samples/npruntime/npp_gate.cpp&amp;date=month">month</a><br>
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
<a class='l d1' name=38 href="#38">38</a> <span class='c'>////////////////////////////////////////////////////////////</span>
<a class='l d1' name=39 href="#39">39</a> <span class='c'></span><span class='c'>//</span>
<a class='l d1' name=40 href="#40">40</a> <span class='c'></span><span class='c'>// Implementation of plugin entry points (NPP_*)</span>
<a class='l d1' name=41 href="#41">41</a> <span class='c'></span><span class='c'>// most are just empty stubs for this particular plugin </span>
<a class='l d1' name=42 href="#42">42</a> <span class='c'></span><span class='c'>//</span>
<a class='l d1' name=43 href="#43">43</a> <span class='c'></span><span class='i'>#include</span> "<a href="/seamonkey/source/modules/plugin/samples/npruntime/plugin.h">plugin.h</a>"
<a class='l d1' name=44 href="#44">44</a> 
<a class='l d1' name=45 href="#45">45</a> <span class='v'>char*
<a class='l d1' name=46 href="#46">46</a> </span><a class="d" href="/seamonkey/ident?i=NPP_GetMIMEDescription">NPP_GetMIMEDescription</a>(<span class='v'>void)</span>
<a class='l d1' name=47 href="#47">47</a> {
<a class='l d1' name=48 href="#48">48</a>   <span class='v'>return </span><span class='s'>"application/mozilla-npruntime-scriptable-plugin:.foo:Scriptability Demo Plugin"</span>;
<a class='l d1' name=49 href="#49">49</a> }
<a class='l d1' name=50 href="#50">50</a> 
<a class='l d1' name=51 href="#51">51</a> 
<a class='l d1' name=52 href="#52">52</a> 
<a class='l d1' name=53 href="#53">53</a> <a class="d" href="/seamonkey/ident?i=NPError">NPError</a> <a class="d" href="/seamonkey/ident?i=NPP_Initialize">NPP_Initialize</a>(<span class='v'>void)</span>
<a class='l d1' name=54 href="#54">54</a> {
<a class='l d1' name=55 href="#55">55</a>   <span class='v'>return </span><a class="d" href="/seamonkey/ident?i=NPERR_NO_ERROR">NPERR_NO_ERROR</a>;
<a class='l d1' name=56 href="#56">56</a> }
<a class='l d1' name=57 href="#57">57</a> 
<a class='l d1' name=58 href="#58">58</a> <span class='v'>void </span><a class="d" href="/seamonkey/ident?i=NPP_Shutdown">NPP_Shutdown</a>(<span class='v'>void)</span>
<a class='l d1' name=59 href="#59">59</a> {
<a class='l d1' name=60 href="#60">60</a> }
<a class='l d1' name=61 href="#61">61</a> 
<a class='l d1' name=62 href="#62">62</a> <span class='c'>// here the plugin creates an instance of our CPlugin object which </span>
<a class='l d1' name=63 href="#63">63</a> <span class='c'></span><span class='c'>// will be associated with this newly created plugin instance and </span>
<a class='l d1' name=64 href="#64">64</a> <span class='c'></span><span class='c'>// will do all the neccessary job</span>
<a class='l d1' name=65 href="#65">65</a> <span class='c'></span><a class="d" href="/seamonkey/ident?i=NPError">NPError</a> <a class="d" href="/seamonkey/ident?i=NPP_New">NPP_New</a>(<a class="d" href="/seamonkey/ident?i=NPMIMEType">NPMIMEType</a> <a class="d" href="/seamonkey/ident?i=pluginType">pluginType</a>,
<a class='l d1' name=66 href="#66">66</a>                 <a class="d" href="/seamonkey/ident?i=NPP">NPP</a> <a class="d" href="/seamonkey/ident?i=instance">instance</a>,
<a class='l d1' name=67 href="#67">67</a>                 <a class="d" href="/seamonkey/ident?i=uint16">uint16</a> <a class="d" href="/seamonkey/ident?i=mode">mode</a>,
<a class='l d1' name=68 href="#68">68</a>                 <a class="d" href="/seamonkey/ident?i=int16">int16</a> <a class="d" href="/seamonkey/ident?i=argc">argc</a>,
<a class='l d1' name=69 href="#69">69</a>                 <span class='v'>char* </span><a class="d" href="/seamonkey/ident?i=argn">argn</a>[],
<a class='l d1' name=70 href="#70">70</a>                 <span class='v'>char* </span><a class="d" href="/seamonkey/ident?i=argv">argv</a>[],
<a class='l d1' name=71 href="#71">71</a>                 <a class="d" href="/seamonkey/ident?i=NPSavedData">NPSavedData</a>* <a class="d" href="/seamonkey/ident?i=saved">saved</a>)
<a class='l d1' name=72 href="#72">72</a> {   
<a class='l d1' name=73 href="#73">73</a>   <span class='v'>if(</span><a class="d" href="/seamonkey/ident?i=instance">instance</a> == <a class="d" href="/seamonkey/ident?i=NULL">NULL</a>)
<a class='l d1' name=74 href="#74">74</a>     <span class='v'>return </span><a class="d" href="/seamonkey/ident?i=NPERR_INVALID_INSTANCE_ERROR">NPERR_INVALID_INSTANCE_ERROR</a>;
<a class='l d1' name=75 href="#75">75</a> 
<a class='l d1' name=76 href="#76">76</a>   <a class="d" href="/seamonkey/ident?i=NPError">NPError</a> <a class="d" href="/seamonkey/ident?i=rv">rv</a> = <a class="d" href="/seamonkey/ident?i=NPERR_NO_ERROR">NPERR_NO_ERROR</a>;
<a class='l d1' name=77 href="#77">77</a> 
<a class='l d1' name=78 href="#78">78</a>   <a class="d" href="/seamonkey/ident?i=CPlugin">CPlugin</a> * <a class="d" href="/seamonkey/ident?i=pPlugin">pPlugin</a> = <span class='v'>new </span><a class="d" href="/seamonkey/ident?i=CPlugin">CPlugin</a>(<a class="d" href="/seamonkey/ident?i=instance">instance</a>);
<a class='l d1' name=79 href="#79">79</a>   <span class='v'>if(</span><a class="d" href="/seamonkey/ident?i=pPlugin">pPlugin</a> == <a class="d" href="/seamonkey/ident?i=NULL">NULL</a>)
<a class='l d1' name=80 href="#80">80</a>     <span class='v'>return </span><a class="d" href="/seamonkey/ident?i=NPERR_OUT_OF_MEMORY_ERROR">NPERR_OUT_OF_MEMORY_ERROR</a>;
<a class='l d1' name=81 href="#81">81</a> 
<a class='l d1' name=82 href="#82">82</a>   <a class="d" href="/seamonkey/ident?i=instance">instance</a>-&gt;<a class="d" href="/seamonkey/ident?i=pdata">pdata</a> = (<span class='v'>void </span>*)<a class="d" href="/seamonkey/ident?i=pPlugin">pPlugin</a>;
<a class='l d1' name=83 href="#83">83</a>   <span class='v'>return </span><a class="d" href="/seamonkey/ident?i=rv">rv</a>;
<a class='l d1' name=84 href="#84">84</a> }
<a class='l d1' name=85 href="#85">85</a> 
<a class='l d1' name=86 href="#86">86</a> <span class='c'>// here is the place to clean up and destroy the CPlugin object</span>
<a class='l d1' name=87 href="#87">87</a> <span class='c'></span><a class="d" href="/seamonkey/ident?i=NPError">NPError</a> <a class="d" href="/seamonkey/ident?i=NPP_Destroy">NPP_Destroy</a> (<a class="d" href="/seamonkey/ident?i=NPP">NPP</a> <a class="d" href="/seamonkey/ident?i=instance">instance</a>, <a class="d" href="/seamonkey/ident?i=NPSavedData">NPSavedData</a>** <a class="d" href="/seamonkey/ident?i=save">save</a>)
<a class='l d1' name=88 href="#88">88</a> {
<a class='l d1' name=89 href="#89">89</a>   <span class='v'>if(</span><a class="d" href="/seamonkey/ident?i=instance">instance</a> == <a class="d" href="/seamonkey/ident?i=NULL">NULL</a>)
<a class='l d1' name=90 href="#90">90</a>     <span class='v'>return </span><a class="d" href="/seamonkey/ident?i=NPERR_INVALID_INSTANCE_ERROR">NPERR_INVALID_INSTANCE_ERROR</a>;
<a class='l d1' name=91 href="#91">91</a> 
<a class='l d1' name=92 href="#92">92</a>   <a class="d" href="/seamonkey/ident?i=NPError">NPError</a> <a class="d" href="/seamonkey/ident?i=rv">rv</a> = <a class="d" href="/seamonkey/ident?i=NPERR_NO_ERROR">NPERR_NO_ERROR</a>;
<a class='l d1' name=93 href="#93">93</a> 
<a class='l d1' name=94 href="#94">94</a>   <a class="d" href="/seamonkey/ident?i=CPlugin">CPlugin</a> * <a class="d" href="/seamonkey/ident?i=pPlugin">pPlugin</a> = (<a class="d" href="/seamonkey/ident?i=CPlugin">CPlugin</a> *)<a class="d" href="/seamonkey/ident?i=instance">instance</a>-&gt;<a class="d" href="/seamonkey/ident?i=pdata">pdata</a>;
<a class='l d1' name=95 href="#95">95</a>   <span class='v'>if(</span><a class="d" href="/seamonkey/ident?i=pPlugin">pPlugin</a> != <a class="d" href="/seamonkey/ident?i=NULL">NULL</a>) {
<a class='l d1' name=96 href="#96">96</a>     <a class="d" href="/seamonkey/ident?i=pPlugin">pPlugin</a>-&gt;<a class="d" href="/seamonkey/ident?i=shut">shut</a>();
<a class='l d1' name=97 href="#97">97</a>     <span class='v'>delete </span><a class="d" href="/seamonkey/ident?i=pPlugin">pPlugin</a>;
<a class='l d1' name=98 href="#98">98</a>   }
<a class='l d1' name=99 href="#99">99</a>   <span class='v'>return </span><a class="d" href="/seamonkey/ident?i=rv">rv</a>;
<a class='l d2' name=100 href="#100">100</a> }
<a class='l d2' name=101 href="#101">101</a> 
<a class='l d2' name=102 href="#102">102</a> <span class='c'>// during this call we know when the plugin window is ready or</span>
<a class='l d2' name=103 href="#103">103</a> <span class='c'></span><span class='c'>// is about to be destroyed so we can do some gui specific</span>
<a class='l d2' name=104 href="#104">104</a> <span class='c'></span><span class='c'>// initialization and shutdown</span>
<a class='l d2' name=105 href="#105">105</a> <span class='c'></span><a class="d" href="/seamonkey/ident?i=NPError">NPError</a> <a class="d" href="/seamonkey/ident?i=NPP_SetWindow">NPP_SetWindow</a> (<a class="d" href="/seamonkey/ident?i=NPP">NPP</a> <a class="d" href="/seamonkey/ident?i=instance">instance</a>, <a class="d" href="/seamonkey/ident?i=NPWindow">NPWindow</a>* <a class="d" href="/seamonkey/ident?i=pNPWindow">pNPWindow</a>)
<a class='l d2' name=106 href="#106">106</a> {    
<a class='l d2' name=107 href="#107">107</a>   <span class='v'>if(</span><a class="d" href="/seamonkey/ident?i=instance">instance</a> == <a class="d" href="/seamonkey/ident?i=NULL">NULL</a>)
<a class='l d2' name=108 href="#108">108</a>     <span class='v'>return </span><a class="d" href="/seamonkey/ident?i=NPERR_INVALID_INSTANCE_ERROR">NPERR_INVALID_INSTANCE_ERROR</a>;
<a class='l d2' name=109 href="#109">109</a> 
<a class='l d2' name=110 href="#110">110</a>   <a class="d" href="/seamonkey/ident?i=NPError">NPError</a> <a class="d" href="/seamonkey/ident?i=rv">rv</a> = <a class="d" href="/seamonkey/ident?i=NPERR_NO_ERROR">NPERR_NO_ERROR</a>;
<a class='l d2' name=111 href="#111">111</a> 
<a class='l d2' name=112 href="#112">112</a>   <span class='v'>if(</span><a class="d" href="/seamonkey/ident?i=pNPWindow">pNPWindow</a> == <a class="d" href="/seamonkey/ident?i=NULL">NULL</a>)
<a class='l d2' name=113 href="#113">113</a>     <span class='v'>return </span><a class="d" href="/seamonkey/ident?i=NPERR_GENERIC_ERROR">NPERR_GENERIC_ERROR</a>;
<a class='l d2' name=114 href="#114">114</a> 
<a class='l d2' name=115 href="#115">115</a>   <a class="d" href="/seamonkey/ident?i=CPlugin">CPlugin</a> * <a class="d" href="/seamonkey/ident?i=pPlugin">pPlugin</a> = (<a class="d" href="/seamonkey/ident?i=CPlugin">CPlugin</a> *)<a class="d" href="/seamonkey/ident?i=instance">instance</a>-&gt;<a class="d" href="/seamonkey/ident?i=pdata">pdata</a>;
<a class='l d2' name=116 href="#116">116</a> 
<a class='l d2' name=117 href="#117">117</a>   <span class='v'>if(</span><a class="d" href="/seamonkey/ident?i=pPlugin">pPlugin</a> == <a class="d" href="/seamonkey/ident?i=NULL">NULL</a>) 
<a class='l d2' name=118 href="#118">118</a>     <span class='v'>return </span><a class="d" href="/seamonkey/ident?i=NPERR_GENERIC_ERROR">NPERR_GENERIC_ERROR</a>;
<a class='l d2' name=119 href="#119">119</a> 
<a class='l d2' name=120 href="#120">120</a>   <span class='c'>// window just created</span>
<a class='l d2' name=121 href="#121">121</a> <span class='c'></span>  <span class='v'>if(</span>!<a class="d" href="/seamonkey/ident?i=pPlugin">pPlugin</a>-&gt;<a class="d" href="/seamonkey/ident?i=isInitialized">isInitialized</a>() &amp;&amp; (<a class="d" href="/seamonkey/ident?i=pNPWindow">pNPWindow</a>-&gt;<a class="d" href="/seamonkey/ident?i=window">window</a> != <a class="d" href="/seamonkey/ident?i=NULL">NULL</a>)) { 
<a class='l d2' name=122 href="#122">122</a>     <span class='v'>if(</span>!<a class="d" href="/seamonkey/ident?i=pPlugin">pPlugin</a>-&gt;<a class="d" href="/seamonkey/ident?i=init">init</a>(<a class="d" href="/seamonkey/ident?i=pNPWindow">pNPWindow</a>)) {
<a class='l d2' name=123 href="#123">123</a>       <span class='v'>delete </span><a class="d" href="/seamonkey/ident?i=pPlugin">pPlugin</a>;
<a class='l d2' name=124 href="#124">124</a>       <a class="d" href="/seamonkey/ident?i=pPlugin">pPlugin</a> = <a class="d" href="/seamonkey/ident?i=NULL">NULL</a>;
<a class='l d2' name=125 href="#125">125</a>       <span class='v'>return </span><a class="d" href="/seamonkey/ident?i=NPERR_MODULE_LOAD_FAILED_ERROR">NPERR_MODULE_LOAD_FAILED_ERROR</a>;
<a class='l d2' name=126 href="#126">126</a>     }
<a class='l d2' name=127 href="#127">127</a>   }
<a class='l d2' name=128 href="#128">128</a> 
<a class='l d2' name=129 href="#129">129</a>   <span class='c'>// window goes away</span>
<a class='l d2' name=130 href="#130">130</a> <span class='c'></span>  <span class='v'>if(</span>(<a class="d" href="/seamonkey/ident?i=pNPWindow">pNPWindow</a>-&gt;<a class="d" href="/seamonkey/ident?i=window">window</a> == <a class="d" href="/seamonkey/ident?i=NULL">NULL</a>) &amp;&amp; <a class="d" href="/seamonkey/ident?i=pPlugin">pPlugin</a>-&gt;<a class="d" href="/seamonkey/ident?i=isInitialized">isInitialized</a>())
<a class='l d2' name=131 href="#131">131</a>     <span class='v'>return </span><a class="d" href="/seamonkey/ident?i=NPERR_NO_ERROR">NPERR_NO_ERROR</a>;
<a class='l d2' name=132 href="#132">132</a> 
<a class='l d2' name=133 href="#133">133</a>   <span class='c'>// window resized</span>
<a class='l d2' name=134 href="#134">134</a> <span class='c'></span>  <span class='v'>if(</span><a class="d" href="/seamonkey/ident?i=pPlugin">pPlugin</a>-&gt;<a class="d" href="/seamonkey/ident?i=isInitialized">isInitialized</a>() &amp;&amp; (<a class="d" href="/seamonkey/ident?i=pNPWindow">pNPWindow</a>-&gt;<a class="d" href="/seamonkey/ident?i=window">window</a> != <a class="d" href="/seamonkey/ident?i=NULL">NULL</a>))
<a class='l d2' name=135 href="#135">135</a>     <span class='v'>return </span><a class="d" href="/seamonkey/ident?i=NPERR_NO_ERROR">NPERR_NO_ERROR</a>;
<a class='l d2' name=136 href="#136">136</a> 
<a class='l d2' name=137 href="#137">137</a>   <span class='c'>// this should not happen, nothing to do</span>
<a class='l d2' name=138 href="#138">138</a> <span class='c'></span>  <span class='v'>if(</span>(<a class="d" href="/seamonkey/ident?i=pNPWindow">pNPWindow</a>-&gt;<a class="d" href="/seamonkey/ident?i=window">window</a> == <a class="d" href="/seamonkey/ident?i=NULL">NULL</a>) &amp;&amp; !<a class="d" href="/seamonkey/ident?i=pPlugin">pPlugin</a>-&gt;<a class="d" href="/seamonkey/ident?i=isInitialized">isInitialized</a>())
<a class='l d2' name=139 href="#139">139</a>     <span class='v'>return </span><a class="d" href="/seamonkey/ident?i=NPERR_NO_ERROR">NPERR_NO_ERROR</a>;
<a class='l d2' name=140 href="#140">140</a> 
<a class='l d2' name=141 href="#141">141</a>   <span class='v'>return </span><a class="d" href="/seamonkey/ident?i=rv">rv</a>;
<a class='l d2' name=142 href="#142">142</a> }
<a class='l d2' name=143 href="#143">143</a> 
<a class='l d2' name=144 href="#144">144</a> <span class='c'>// ==============================</span>
<a class='l d2' name=145 href="#145">145</a> <span class='c'></span><span class='c'>// ! Scriptability related code !</span>
<a class='l d2' name=146 href="#146">146</a> <span class='c'></span><span class='c'>// ==============================</span>
<a class='l d2' name=147 href="#147">147</a> <span class='c'></span><span class='c'>//</span>
<a class='l d2' name=148 href="#148">148</a> <span class='c'></span><span class='c'>// here the plugin is asked by Mozilla to tell if it is scriptable</span>
<a class='l d2' name=149 href="#149">149</a> <span class='c'></span><span class='c'>// we should return a valid interface id and a pointer to </span>
<a class='l d2' name=150 href="#150">150</a> <span class='c'></span><span class='c'>// nsScriptablePeer interface which we should have implemented</span>
<a class='l d2' name=151 href="#151">151</a> <span class='c'></span><span class='c'>// and which should be defined in the corressponding *.xpt file</span>
<a class='l d2' name=152 href="#152">152</a> <span class='c'></span><span class='c'>// in the bin/components folder</span>
<a class='l d2' name=153 href="#153">153</a> <span class='c'></span><a class="d" href="/seamonkey/ident?i=NPError">NPError</a>	<a class="d" href="/seamonkey/ident?i=NPP_GetValue">NPP_GetValue</a>(<a class="d" href="/seamonkey/ident?i=NPP">NPP</a> <a class="d" href="/seamonkey/ident?i=instance">instance</a>, <a class="d" href="/seamonkey/ident?i=NPPVariable">NPPVariable</a> <a class="d" href="/seamonkey/ident?i=variable">variable</a>, <span class='v'>void </span>*<a class="d" href="/seamonkey/ident?i=value">value</a>)
<a class='l d2' name=154 href="#154">154</a> {
<a class='l d2' name=155 href="#155">155</a>   <span class='v'>if(</span><a class="d" href="/seamonkey/ident?i=instance">instance</a> == <a class="d" href="/seamonkey/ident?i=NULL">NULL</a>)
<a class='l d2' name=156 href="#156">156</a>     <span class='v'>return </span><a class="d" href="/seamonkey/ident?i=NPERR_INVALID_INSTANCE_ERROR">NPERR_INVALID_INSTANCE_ERROR</a>;
<a class='l d2' name=157 href="#157">157</a> 
<a class='l d2' name=158 href="#158">158</a>   <a class="d" href="/seamonkey/ident?i=NPError">NPError</a> <a class="d" href="/seamonkey/ident?i=rv">rv</a> = <a class="d" href="/seamonkey/ident?i=NPERR_NO_ERROR">NPERR_NO_ERROR</a>;
<a class='l d2' name=159 href="#159">159</a> 
<a class='l d2' name=160 href="#160">160</a>   <span class='v'>if(</span><a class="d" href="/seamonkey/ident?i=instance">instance</a> == <a class="d" href="/seamonkey/ident?i=NULL">NULL</a>)
<a class='l d2' name=161 href="#161">161</a>     <span class='v'>return </span><a class="d" href="/seamonkey/ident?i=NPERR_GENERIC_ERROR">NPERR_GENERIC_ERROR</a>;
<a class='l d2' name=162 href="#162">162</a> 
<a class='l d2' name=163 href="#163">163</a>   <a class="d" href="/seamonkey/ident?i=CPlugin">CPlugin</a> * <a class="d" href="/seamonkey/ident?i=plugin">plugin</a> = (<a class="d" href="/seamonkey/ident?i=CPlugin">CPlugin</a> *)<a class="d" href="/seamonkey/ident?i=instance">instance</a>-&gt;<a class="d" href="/seamonkey/ident?i=pdata">pdata</a>;
<a class='l d2' name=164 href="#164">164</a>   <span class='v'>if(</span><a class="d" href="/seamonkey/ident?i=plugin">plugin</a> == <a class="d" href="/seamonkey/ident?i=NULL">NULL</a>)
<a class='l d2' name=165 href="#165">165</a>     <span class='v'>return </span><a class="d" href="/seamonkey/ident?i=NPERR_GENERIC_ERROR">NPERR_GENERIC_ERROR</a>;
<a class='l d2' name=166 href="#166">166</a> 
<a class='l d2' name=167 href="#167">167</a>   <span class='v'>switch </span>(<a class="d" href="/seamonkey/ident?i=variable">variable</a>) {
<a class='l d2' name=168 href="#168">168</a>   <span class='v'>case </span><a class="d" href="/seamonkey/ident?i=NPPVpluginNameString">NPPVpluginNameString</a>:
<a class='l d2' name=169 href="#169">169</a>     *((<span class='v'>char </span>**)<a class="d" href="/seamonkey/ident?i=value">value</a>) = <span class='s'>"NPRuntimeTest"</span>;
<a class='l d2' name=170 href="#170">170</a>     <span class='v'>break;
<a class='l d2' name=171 href="#171">171</a> </span>  <span class='v'>case </span><a class="d" href="/seamonkey/ident?i=NPPVpluginDescriptionString">NPPVpluginDescriptionString</a>:
<a class='l d2' name=172 href="#172">172</a>     *((<span class='v'>char </span>**)<a class="d" href="/seamonkey/ident?i=value">value</a>) = <span class='s'>"NPRuntime scriptability API test plugin"</span>;
<a class='l d2' name=173 href="#173">173</a>     <span class='v'>break;
<a class='l d2' name=174 href="#174">174</a> </span>  <span class='v'>case </span><a class="d" href="/seamonkey/ident?i=NPPVpluginScriptableNPObject">NPPVpluginScriptableNPObject</a>:
<a class='l d2' name=175 href="#175">175</a>     *(<a class="d" href="/seamonkey/ident?i=NPObject">NPObject</a> **)<a class="d" href="/seamonkey/ident?i=value">value</a> = <a class="d" href="/seamonkey/ident?i=plugin">plugin</a>-&gt;<a class="d" href="/seamonkey/ident?i=GetScriptableObject">GetScriptableObject</a>();
<a class='l d2' name=176 href="#176">176</a>     <span class='v'>break;
<a class='l d2' name=177 href="#177">177</a> </span>  <span class='v'>default:
<a class='l d2' name=178 href="#178">178</a> </span>    <a class="d" href="/seamonkey/ident?i=rv">rv</a> = <a class="d" href="/seamonkey/ident?i=NPERR_GENERIC_ERROR">NPERR_GENERIC_ERROR</a>;
<a class='l d2' name=179 href="#179">179</a>   }
<a class='l d2' name=180 href="#180">180</a> 
<a class='l d2' name=181 href="#181">181</a>   <span class='v'>return </span><a class="d" href="/seamonkey/ident?i=rv">rv</a>;
<a class='l d2' name=182 href="#182">182</a> }
<a class='l d2' name=183 href="#183">183</a> 
<a class='l d2' name=184 href="#184">184</a> <a class="d" href="/seamonkey/ident?i=NPError">NPError</a> <a class="d" href="/seamonkey/ident?i=NPP_NewStream">NPP_NewStream</a>(<a class="d" href="/seamonkey/ident?i=NPP">NPP</a> <a class="d" href="/seamonkey/ident?i=instance">instance</a>,
<a class='l d2' name=185 href="#185">185</a>                       <a class="d" href="/seamonkey/ident?i=NPMIMEType">NPMIMEType</a> <a class="d" href="/seamonkey/ident?i=type">type</a>,
<a class='l d2' name=186 href="#186">186</a>                       <a class="d" href="/seamonkey/ident?i=NPStream">NPStream</a>* <a class="d" href="/seamonkey/ident?i=stream">stream</a>, 
<a class='l d2' name=187 href="#187">187</a>                       <a class="d" href="/seamonkey/ident?i=NPBool">NPBool</a> <a class="d" href="/seamonkey/ident?i=seekable">seekable</a>,
<a class='l d2' name=188 href="#188">188</a>                       <a class="d" href="/seamonkey/ident?i=uint16">uint16</a>* <a class="d" href="/seamonkey/ident?i=stype">stype</a>)
<a class='l d2' name=189 href="#189">189</a> {
<a class='l d2' name=190 href="#190">190</a>   <span class='v'>if(</span><a class="d" href="/seamonkey/ident?i=instance">instance</a> == <a class="d" href="/seamonkey/ident?i=NULL">NULL</a>)
<a class='l d2' name=191 href="#191">191</a>     <span class='v'>return </span><a class="d" href="/seamonkey/ident?i=NPERR_INVALID_INSTANCE_ERROR">NPERR_INVALID_INSTANCE_ERROR</a>;
<a class='l d2' name=192 href="#192">192</a> 
<a class='l d2' name=193 href="#193">193</a>   <a class="d" href="/seamonkey/ident?i=NPError">NPError</a> <a class="d" href="/seamonkey/ident?i=rv">rv</a> = <a class="d" href="/seamonkey/ident?i=NPERR_NO_ERROR">NPERR_NO_ERROR</a>;
<a class='l d2' name=194 href="#194">194</a>   <span class='v'>return </span><a class="d" href="/seamonkey/ident?i=rv">rv</a>;
<a class='l d2' name=195 href="#195">195</a> }
<a class='l d2' name=196 href="#196">196</a> 
<a class='l d2' name=197 href="#197">197</a> <a class="d" href="/seamonkey/ident?i=int32">int32</a> <a class="d" href="/seamonkey/ident?i=NPP_WriteReady">NPP_WriteReady</a> (<a class="d" href="/seamonkey/ident?i=NPP">NPP</a> <a class="d" href="/seamonkey/ident?i=instance">instance</a>, <a class="d" href="/seamonkey/ident?i=NPStream">NPStream</a> *<a class="d" href="/seamonkey/ident?i=stream">stream</a>)
<a class='l d2' name=198 href="#198">198</a> {
<a class='l d2' name=199 href="#199">199</a>   <span class='v'>if(</span><a class="d" href="/seamonkey/ident?i=instance">instance</a> == <a class="d" href="/seamonkey/ident?i=NULL">NULL</a>)
<a class='l d2' name=200 href="#200">200</a>     <span class='v'>return </span><a class="d" href="/seamonkey/ident?i=NPERR_INVALID_INSTANCE_ERROR">NPERR_INVALID_INSTANCE_ERROR</a>;
<a class='l d2' name=201 href="#201">201</a> 
<a class='l d2' name=202 href="#202">202</a>   <a class="d" href="/seamonkey/ident?i=int32">int32</a> <a class="d" href="/seamonkey/ident?i=rv">rv</a> = 0x0fffffff;
<a class='l d2' name=203 href="#203">203</a>   <span class='v'>return </span><a class="d" href="/seamonkey/ident?i=rv">rv</a>;
<a class='l d2' name=204 href="#204">204</a> }
<a class='l d2' name=205 href="#205">205</a> 
<a class='l d2' name=206 href="#206">206</a> <a class="d" href="/seamonkey/ident?i=int32">int32</a> <a class="d" href="/seamonkey/ident?i=NPP_Write">NPP_Write</a> (<a class="d" href="/seamonkey/ident?i=NPP">NPP</a> <a class="d" href="/seamonkey/ident?i=instance">instance</a>, <a class="d" href="/seamonkey/ident?i=NPStream">NPStream</a> *<a class="d" href="/seamonkey/ident?i=stream">stream</a>, <a class="d" href="/seamonkey/ident?i=int32">int32</a> <a class="d" href="/seamonkey/ident?i=offset">offset</a>, <a class="d" href="/seamonkey/ident?i=int32">int32</a> <a class="d" href="/seamonkey/ident?i=len">len</a>, <span class='v'>void </span>*<a class="d" href="/seamonkey/ident?i=buffer">buffer</a>)
<a class='l d2' name=207 href="#207">207</a> {   
<a class='l d2' name=208 href="#208">208</a>   <span class='v'>if(</span><a class="d" href="/seamonkey/ident?i=instance">instance</a> == <a class="d" href="/seamonkey/ident?i=NULL">NULL</a>)
<a class='l d2' name=209 href="#209">209</a>     <span class='v'>return </span><a class="d" href="/seamonkey/ident?i=NPERR_INVALID_INSTANCE_ERROR">NPERR_INVALID_INSTANCE_ERROR</a>;
<a class='l d2' name=210 href="#210">210</a> 
<a class='l d2' name=211 href="#211">211</a>   <a class="d" href="/seamonkey/ident?i=int32">int32</a> <a class="d" href="/seamonkey/ident?i=rv">rv</a> = <a class="d" href="/seamonkey/ident?i=len">len</a>;
<a class='l d2' name=212 href="#212">212</a>   <span class='v'>return </span><a class="d" href="/seamonkey/ident?i=rv">rv</a>;
<a class='l d2' name=213 href="#213">213</a> }
<a class='l d2' name=214 href="#214">214</a> 
<a class='l d2' name=215 href="#215">215</a> <a class="d" href="/seamonkey/ident?i=NPError">NPError</a> <a class="d" href="/seamonkey/ident?i=NPP_DestroyStream">NPP_DestroyStream</a> (<a class="d" href="/seamonkey/ident?i=NPP">NPP</a> <a class="d" href="/seamonkey/ident?i=instance">instance</a>, <a class="d" href="/seamonkey/ident?i=NPStream">NPStream</a> *<a class="d" href="/seamonkey/ident?i=stream">stream</a>, <a class="d" href="/seamonkey/ident?i=NPError">NPError</a> <a class="d" href="/seamonkey/ident?i=reason">reason</a>)
<a class='l d2' name=216 href="#216">216</a> {
<a class='l d2' name=217 href="#217">217</a>   <span class='v'>if(</span><a class="d" href="/seamonkey/ident?i=instance">instance</a> == <a class="d" href="/seamonkey/ident?i=NULL">NULL</a>)
<a class='l d2' name=218 href="#218">218</a>     <span class='v'>return </span><a class="d" href="/seamonkey/ident?i=NPERR_INVALID_INSTANCE_ERROR">NPERR_INVALID_INSTANCE_ERROR</a>;
<a class='l d2' name=219 href="#219">219</a> 
<a class='l d2' name=220 href="#220">220</a>   <a class="d" href="/seamonkey/ident?i=NPError">NPError</a> <a class="d" href="/seamonkey/ident?i=rv">rv</a> = <a class="d" href="/seamonkey/ident?i=NPERR_NO_ERROR">NPERR_NO_ERROR</a>;
<a class='l d2' name=221 href="#221">221</a>   <span class='v'>return </span><a class="d" href="/seamonkey/ident?i=rv">rv</a>;
<a class='l d2' name=222 href="#222">222</a> }
<a class='l d2' name=223 href="#223">223</a> 
<a class='l d2' name=224 href="#224">224</a> <span class='v'>void </span><a class="d" href="/seamonkey/ident?i=NPP_StreamAsFile">NPP_StreamAsFile</a> (<a class="d" href="/seamonkey/ident?i=NPP">NPP</a> <a class="d" href="/seamonkey/ident?i=instance">instance</a>, <a class="d" href="/seamonkey/ident?i=NPStream">NPStream</a>* <a class="d" href="/seamonkey/ident?i=stream">stream</a>, <span class='v'>const </span><span class='v'>char* </span><a class="d" href="/seamonkey/ident?i=fname">fname</a>)
<a class='l d2' name=225 href="#225">225</a> {
<a class='l d2' name=226 href="#226">226</a>   <span class='v'>if(</span><a class="d" href="/seamonkey/ident?i=instance">instance</a> == <a class="d" href="/seamonkey/ident?i=NULL">NULL</a>)
<a class='l d2' name=227 href="#227">227</a>     <span class='v'>return;</span>
<a class='l d2' name=228 href="#228">228</a> }
<a class='l d2' name=229 href="#229">229</a> 
<a class='l d2' name=230 href="#230">230</a> <span class='v'>void </span><a class="d" href="/seamonkey/ident?i=NPP_Print">NPP_Print</a> (<a class="d" href="/seamonkey/ident?i=NPP">NPP</a> <a class="d" href="/seamonkey/ident?i=instance">instance</a>, <span class='a'>NPPrint</span>* <a class="d" href="/seamonkey/ident?i=printInfo">printInfo</a>)
<a class='l d2' name=231 href="#231">231</a> {
<a class='l d2' name=232 href="#232">232</a>   <span class='v'>if(</span><a class="d" href="/seamonkey/ident?i=instance">instance</a> == <a class="d" href="/seamonkey/ident?i=NULL">NULL</a>)
<a class='l d2' name=233 href="#233">233</a>     <span class='v'>return;</span>
<a class='l d2' name=234 href="#234">234</a> }
<a class='l d2' name=235 href="#235">235</a> 
<a class='l d2' name=236 href="#236">236</a> <span class='v'>void </span><a class="d" href="/seamonkey/ident?i=NPP_URLNotify">NPP_URLNotify</a>(<a class="d" href="/seamonkey/ident?i=NPP">NPP</a> <a class="d" href="/seamonkey/ident?i=instance">instance</a>, <span class='v'>const </span><span class='v'>char* </span><a class="d" href="/seamonkey/ident?i=url">url</a>, <a class="d" href="/seamonkey/ident?i=NPReason">NPReason</a> <a class="d" href="/seamonkey/ident?i=reason">reason</a>, <span class='v'>void* </span><a class="d" href="/seamonkey/ident?i=notifyData">notifyData</a>)
<a class='l d2' name=237 href="#237">237</a> {
<a class='l d2' name=238 href="#238">238</a>   <span class='v'>if(</span><a class="d" href="/seamonkey/ident?i=instance">instance</a> == <a class="d" href="/seamonkey/ident?i=NULL">NULL</a>)
<a class='l d2' name=239 href="#239">239</a>     <span class='v'>return;</span>
<a class='l d2' name=240 href="#240">240</a> }
<a class='l d2' name=241 href="#241">241</a> 
<a class='l d2' name=242 href="#242">242</a> <a class="d" href="/seamonkey/ident?i=NPError">NPError</a> <a class="d" href="/seamonkey/ident?i=NPP_SetValue">NPP_SetValue</a>(<a class="d" href="/seamonkey/ident?i=NPP">NPP</a> <a class="d" href="/seamonkey/ident?i=instance">instance</a>, <a class="d" href="/seamonkey/ident?i=NPNVariable">NPNVariable</a> <a class="d" href="/seamonkey/ident?i=variable">variable</a>, <span class='v'>void </span>*<a class="d" href="/seamonkey/ident?i=value">value</a>)
<a class='l d2' name=243 href="#243">243</a> {
<a class='l d2' name=244 href="#244">244</a>   <span class='v'>if(</span><a class="d" href="/seamonkey/ident?i=instance">instance</a> == <a class="d" href="/seamonkey/ident?i=NULL">NULL</a>)
<a class='l d2' name=245 href="#245">245</a>     <span class='v'>return </span><a class="d" href="/seamonkey/ident?i=NPERR_INVALID_INSTANCE_ERROR">NPERR_INVALID_INSTANCE_ERROR</a>;
<a class='l d2' name=246 href="#246">246</a> 
<a class='l d2' name=247 href="#247">247</a>   <a class="d" href="/seamonkey/ident?i=NPError">NPError</a> <a class="d" href="/seamonkey/ident?i=rv">rv</a> = <a class="d" href="/seamonkey/ident?i=NPERR_NO_ERROR">NPERR_NO_ERROR</a>;
<a class='l d2' name=248 href="#248">248</a>   <span class='v'>return </span><a class="d" href="/seamonkey/ident?i=rv">rv</a>;
<a class='l d2' name=249 href="#249">249</a> }
<a class='l d2' name=250 href="#250">250</a> 
<a class='l d2' name=251 href="#251">251</a> <a class="d" href="/seamonkey/ident?i=int16">int16</a>	<a class="d" href="/seamonkey/ident?i=NPP_HandleEvent">NPP_HandleEvent</a>(<a class="d" href="/seamonkey/ident?i=NPP">NPP</a> <a class="d" href="/seamonkey/ident?i=instance">instance</a>, <span class='v'>void* </span><a class="d" href="/seamonkey/ident?i=event">event</a>)
<a class='l d2' name=252 href="#252">252</a> {
<a class='l d2' name=253 href="#253">253</a>   <span class='v'>if(</span><a class="d" href="/seamonkey/ident?i=instance">instance</a> == <a class="d" href="/seamonkey/ident?i=NULL">NULL</a>)
<a class='l d2' name=254 href="#254">254</a>     <span class='v'>return </span>0;
<a class='l d2' name=255 href="#255">255</a> 
<a class='l d2' name=256 href="#256">256</a>   <a class="d" href="/seamonkey/ident?i=int16">int16</a> <a class="d" href="/seamonkey/ident?i=rv">rv</a> = 0;
<a class='l d2' name=257 href="#257">257</a>   <a class="d" href="/seamonkey/ident?i=CPlugin">CPlugin</a> * <a class="d" href="/seamonkey/ident?i=pPlugin">pPlugin</a> = (<a class="d" href="/seamonkey/ident?i=CPlugin">CPlugin</a> *)<a class="d" href="/seamonkey/ident?i=instance">instance</a>-&gt;<a class="d" href="/seamonkey/ident?i=pdata">pdata</a>;
<a class='l d2' name=258 href="#258">258</a>   <span class='v'>if </span>(<a class="d" href="/seamonkey/ident?i=pPlugin">pPlugin</a>)
<a class='l d2' name=259 href="#259">259</a>     <a class="d" href="/seamonkey/ident?i=rv">rv</a> = <a class="d" href="/seamonkey/ident?i=pPlugin">pPlugin</a>-&gt;<a class="d" href="/seamonkey/ident?i=handleEvent">handleEvent</a>(<a class="d" href="/seamonkey/ident?i=event">event</a>);
<a class='l d2' name=260 href="#260">260</a> 
<a class='l d2' name=261 href="#261">261</a>   <span class='v'>return </span><a class="d" href="/seamonkey/ident?i=rv">rv</a>;
<a class='l d2' name=262 href="#262">262</a> }
<a class='l d2' name=263 href="#263">263</a> 
<a class='l d2' name=264 href="#264">264</a> <a class="d" href="/seamonkey/ident?i=jref">jref</a> <a class="d" href="/seamonkey/ident?i=NPP_GetJavaClass">NPP_GetJavaClass</a> (<span class='v'>void)</span>
<a class='l d2' name=265 href="#265">265</a> {
<a class='l d2' name=266 href="#266">266</a>   <span class='v'>return </span><a class="d" href="/seamonkey/ident?i=NULL">NULL</a>;
<a class='l d2' name=267 href="#267">267</a> }
<a class='l d2' name=268 href="#268">268</a> 
<a class='l d2' name=269 href="#269">269</a> <a class="d" href="/seamonkey/ident?i=NPObject">NPObject</a> *<a class="d" href="/seamonkey/ident?i=NPP_GetScriptableInstance">NPP_GetScriptableInstance</a>(<a class="d" href="/seamonkey/ident?i=NPP">NPP</a> <a class="d" href="/seamonkey/ident?i=instance">instance</a>)
<a class='l d2' name=270 href="#270">270</a> {
<a class='l d2' name=271 href="#271">271</a>   <span class='v'>if(</span>!<a class="d" href="/seamonkey/ident?i=instance">instance</a>)
<a class='l d2' name=272 href="#272">272</a>     <span class='v'>return </span>0;
<a class='l d2' name=273 href="#273">273</a> 
<a class='l d2' name=274 href="#274">274</a>   <a class="d" href="/seamonkey/ident?i=NPObject">NPObject</a> *<a class="d" href="/seamonkey/ident?i=npobj">npobj</a> = 0;
<a class='l d2' name=275 href="#275">275</a>   <a class="d" href="/seamonkey/ident?i=CPlugin">CPlugin</a> * <a class="d" href="/seamonkey/ident?i=pPlugin">pPlugin</a> = (<a class="d" href="/seamonkey/ident?i=CPlugin">CPlugin</a> *)<a class="d" href="/seamonkey/ident?i=instance">instance</a>-&gt;<a class="d" href="/seamonkey/ident?i=pdata">pdata</a>;
<a class='l d2' name=276 href="#276">276</a>   <span class='v'>if </span>(!<a class="d" href="/seamonkey/ident?i=pPlugin">pPlugin</a>)
<a class='l d2' name=277 href="#277">277</a>     <a class="d" href="/seamonkey/ident?i=npobj">npobj</a> = <a class="d" href="/seamonkey/ident?i=pPlugin">pPlugin</a>-&gt;<a class="d" href="/seamonkey/ident?i=GetScriptableObject">GetScriptableObject</a>();
<a class='l d2' name=278 href="#278">278</a> 
<a class='l d2' name=279 href="#279">279</a>   <span class='v'>return </span><a class="d" href="/seamonkey/ident?i=npobj">npobj</a>;
<a class='l d2' name=280 href="#280">280</a> }
<a class='l d2' name=281 href="#281">281</a> </span></pre>
</html>
