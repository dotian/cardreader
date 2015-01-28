<!DOCTYPE html>
<html>
<head>
<meta name="GENERATOR" content="lxr-1998-06-10: http://lxr.linux.no">
<link rel="icon" href="/mxr.png" type="image/png">
<title>seamonkey mozilla/modules/plugin/samples/npruntime/npn_gate.cpp</title>
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
   <br><b><a href="/seamonkey/source/">mozilla</a>/ <a href="/seamonkey/source/modules/">modules</a>/ <a href="/seamonkey/source/modules/plugin/">plugin</a>/ <a href="/seamonkey/source/modules/plugin/samples/">samples</a>/ <a href="/seamonkey/source/modules/plugin/samples/npruntime/">npruntime</a>/ <a href="/seamonkey/source/modules/plugin/samples/npruntime/npn_gate.cpp">npn_gate.cpp</a> </b>
  </TD>

  <td align=right valign=top width="1%">
   <table border cellpadding=12 cellspacing=0>
    <tr>
     <td nowrap bgcolor="#FAFAFA">



      <a href="http://bonsai.mozilla.org/cvslog.cgi?file=mozilla/modules/plugin/samples/npruntime/npn_gate.cpp&amp;rev=HEAD&amp;mark=1.1"
>CVS Log</a><br>
      <a href="http://bonsai.mozilla.org/cvsblame.cgi?file=mozilla/modules/plugin/samples/npruntime/npn_gate.cpp&amp;rev=1.1"
onfocus='updateBonsaiBlameHash(this, event)'
onmouseover='updateBonsaiBlameHash(this, event)'
>CVS Blame</a><br>
      <a href="http://bonsai.mozilla.org/cvsgraph.cgi?file=mozilla/modules/plugin/samples/npruntime/npn_gate.cpp&amp;rev=1.1"
>CVS Graph</a><br>








      <a href="http://mxr.mozilla.org/seamonkey/diff?file=/modules/plugin/samples/npruntime/npn_gate.cpp">Diff file</a><br>
      <a href="http://mxr.mozilla.org/seamonkey/source/modules/plugin/samples/npruntime/npn_gate.cpp?raw=1">Raw file</a><br>
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
         <a href="http://bonsai.mozilla.org/cvsquery.cgi?branch=HEAD&amp;file=mozilla/modules/plugin/samples/npruntime/npn_gate.cpp&amp;date=day">day</a><br>
         <a href="http://bonsai.mozilla.org/cvsquery.cgi?branch=HEAD&amp;file=mozilla/modules/plugin/samples/npruntime/npn_gate.cpp&amp;date=week">week</a><br>
         <a href="http://bonsai.mozilla.org/cvsquery.cgi?branch=HEAD&amp;file=mozilla/modules/plugin/samples/npruntime/npn_gate.cpp&amp;date=month">month</a><br>
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
<a class='l d1' name=40 href="#40">40</a> <span class='c'></span><span class='c'>// Implementation of Netscape entry points (NPN_*)</span>
<a class='l d1' name=41 href="#41">41</a> <span class='c'></span><span class='c'>//</span>
<a class='l d1' name=42 href="#42">42</a> <span class='c'></span><span class='i'>#include</span> "<a href='/seamonkey/find?string=/npapi\.h$'>npapi.h</a>"
<a class='l d1' name=43 href="#43">43</a> <span class='i'>#include</span> "<a href='/seamonkey/find?string=/npupp\.h$'>npupp.h</a>"
<a class='l d1' name=44 href="#44">44</a> 
<a class='l d1' name=45 href="#45">45</a> <span class='v'>#ifndef </span><a class="d" href="/seamonkey/ident?i=HIBYTE">HIBYTE</a>
<a class='l d1' name=46 href="#46">46</a> <span class='v'>#define </span><a class="d" href="/seamonkey/ident?i=HIBYTE">HIBYTE</a>(<a class="d" href="/seamonkey/ident?i=x">x</a>) ((((<a class="d" href="/seamonkey/ident?i=uint32">uint32</a>)(<a class="d" href="/seamonkey/ident?i=x">x</a>)) &amp; 0xff00) &gt;&gt; 8)
<a class='l d1' name=47 href="#47">47</a> <span class='v'>#endif
<a class='l d1' name=48 href="#48">48</a> </span>
<a class='l d1' name=49 href="#49">49</a> <span class='v'>#ifndef </span><a class="d" href="/seamonkey/ident?i=LOBYTE">LOBYTE</a>
<a class='l d1' name=50 href="#50">50</a> <span class='v'>#define </span><a class="d" href="/seamonkey/ident?i=LOBYTE">LOBYTE</a>(<a class="d" href="/seamonkey/ident?i=W">W</a>) ((<a class="d" href="/seamonkey/ident?i=W">W</a>) &amp; 0xFF)
<a class='l d1' name=51 href="#51">51</a> <span class='v'>#endif
<a class='l d1' name=52 href="#52">52</a> </span>
<a class='l d1' name=53 href="#53">53</a> <span class='v'>extern </span><a class="d" href="/seamonkey/ident?i=NPNetscapeFuncs">NPNetscapeFuncs</a> <a class="d" href="/seamonkey/ident?i=NPNFuncs">NPNFuncs</a>;
<a class='l d1' name=54 href="#54">54</a> 
<a class='l d1' name=55 href="#55">55</a> <span class='v'>void </span><a class="d" href="/seamonkey/ident?i=NPN_Version">NPN_Version</a>(<span class='v'>int* </span><a class="d" href="/seamonkey/ident?i=plugin_major">plugin_major</a>, <span class='v'>int* </span><a class="d" href="/seamonkey/ident?i=plugin_minor">plugin_minor</a>, <span class='v'>int* </span><a class="d" href="/seamonkey/ident?i=netscape_major">netscape_major</a>, <span class='v'>int* </span><a class="d" href="/seamonkey/ident?i=netscape_minor">netscape_minor</a>)
<a class='l d1' name=56 href="#56">56</a> {
<a class='l d1' name=57 href="#57">57</a>   *<a class="d" href="/seamonkey/ident?i=plugin_major">plugin_major</a>   = <a class="d" href="/seamonkey/ident?i=NP_VERSION_MAJOR">NP_VERSION_MAJOR</a>;
<a class='l d1' name=58 href="#58">58</a>   *<a class="d" href="/seamonkey/ident?i=plugin_minor">plugin_minor</a>   = <a class="d" href="/seamonkey/ident?i=NP_VERSION_MINOR">NP_VERSION_MINOR</a>;
<a class='l d1' name=59 href="#59">59</a>   *<a class="d" href="/seamonkey/ident?i=netscape_major">netscape_major</a> = <a class="d" href="/seamonkey/ident?i=HIBYTE">HIBYTE</a>(<a class="d" href="/seamonkey/ident?i=NPNFuncs">NPNFuncs</a>.<a class="d" href="/seamonkey/ident?i=version">version</a>);
<a class='l d1' name=60 href="#60">60</a>   *<a class="d" href="/seamonkey/ident?i=netscape_minor">netscape_minor</a> = <a class="d" href="/seamonkey/ident?i=LOBYTE">LOBYTE</a>(<a class="d" href="/seamonkey/ident?i=NPNFuncs">NPNFuncs</a>.<a class="d" href="/seamonkey/ident?i=version">version</a>);
<a class='l d1' name=61 href="#61">61</a> }
<a class='l d1' name=62 href="#62">62</a> 
<a class='l d1' name=63 href="#63">63</a> <a class="d" href="/seamonkey/ident?i=NPError">NPError</a> <a class="d" href="/seamonkey/ident?i=NPN_GetURLNotify">NPN_GetURLNotify</a>(<a class="d" href="/seamonkey/ident?i=NPP">NPP</a> <a class="d" href="/seamonkey/ident?i=instance">instance</a>, <span class='v'>const </span><span class='v'>char </span>*<a class="d" href="/seamonkey/ident?i=url">url</a>, <span class='v'>const </span><span class='v'>char </span>*<a class="d" href="/seamonkey/ident?i=target">target</a>, <span class='v'>void* </span><a class="d" href="/seamonkey/ident?i=notifyData">notifyData</a>)
<a class='l d1' name=64 href="#64">64</a> {
<a class='l d1' name=65 href="#65">65</a> 	<span class='v'>int </span><a class="d" href="/seamonkey/ident?i=navMinorVers">navMinorVers</a> = <a class="d" href="/seamonkey/ident?i=NPNFuncs">NPNFuncs</a>.<a class="d" href="/seamonkey/ident?i=version">version</a> &amp; 0xFF;
<a class='l d1' name=66 href="#66">66</a>   <a class="d" href="/seamonkey/ident?i=NPError">NPError</a> <a class="d" href="/seamonkey/ident?i=rv">rv</a> = <a class="d" href="/seamonkey/ident?i=NPERR_NO_ERROR">NPERR_NO_ERROR</a>;
<a class='l d1' name=67 href="#67">67</a> 
<a class='l d1' name=68 href="#68">68</a>   <span class='v'>if(</span> <a class="d" href="/seamonkey/ident?i=navMinorVers">navMinorVers</a> &gt;= <a class="d" href="/seamonkey/ident?i=NPVERS_HAS_NOTIFICATION">NPVERS_HAS_NOTIFICATION</a> )
<a class='l d1' name=69 href="#69">69</a> 		<a class="d" href="/seamonkey/ident?i=rv">rv</a> = <a class="d" href="/seamonkey/ident?i=NPNFuncs">NPNFuncs</a>.<a class="d" href="/seamonkey/ident?i=geturlnotify">geturlnotify</a>(<a class="d" href="/seamonkey/ident?i=instance">instance</a>, <a class="d" href="/seamonkey/ident?i=url">url</a>, <a class="d" href="/seamonkey/ident?i=target">target</a>, <a class="d" href="/seamonkey/ident?i=notifyData">notifyData</a>);
<a class='l d1' name=70 href="#70">70</a> 	<span class='v'>else
<a class='l d1' name=71 href="#71">71</a> </span>		<a class="d" href="/seamonkey/ident?i=rv">rv</a> = <a class="d" href="/seamonkey/ident?i=NPERR_INCOMPATIBLE_VERSION_ERROR">NPERR_INCOMPATIBLE_VERSION_ERROR</a>;
<a class='l d1' name=72 href="#72">72</a> 
<a class='l d1' name=73 href="#73">73</a>   <span class='v'>return </span><a class="d" href="/seamonkey/ident?i=rv">rv</a>;
<a class='l d1' name=74 href="#74">74</a> }
<a class='l d1' name=75 href="#75">75</a> 
<a class='l d1' name=76 href="#76">76</a> <a class="d" href="/seamonkey/ident?i=NPError">NPError</a> <a class="d" href="/seamonkey/ident?i=NPN_GetURL">NPN_GetURL</a>(<a class="d" href="/seamonkey/ident?i=NPP">NPP</a> <a class="d" href="/seamonkey/ident?i=instance">instance</a>, <span class='v'>const </span><span class='v'>char </span>*<a class="d" href="/seamonkey/ident?i=url">url</a>, <span class='v'>const </span><span class='v'>char </span>*<a class="d" href="/seamonkey/ident?i=target">target</a>)
<a class='l d1' name=77 href="#77">77</a> {
<a class='l d1' name=78 href="#78">78</a>   <a class="d" href="/seamonkey/ident?i=NPError">NPError</a> <a class="d" href="/seamonkey/ident?i=rv">rv</a> = <a class="d" href="/seamonkey/ident?i=NPNFuncs">NPNFuncs</a>.<a class="d" href="/seamonkey/ident?i=geturl">geturl</a>(<a class="d" href="/seamonkey/ident?i=instance">instance</a>, <a class="d" href="/seamonkey/ident?i=url">url</a>, <a class="d" href="/seamonkey/ident?i=target">target</a>);
<a class='l d1' name=79 href="#79">79</a>   <span class='v'>return </span><a class="d" href="/seamonkey/ident?i=rv">rv</a>;
<a class='l d1' name=80 href="#80">80</a> }
<a class='l d1' name=81 href="#81">81</a> 
<a class='l d1' name=82 href="#82">82</a> <a class="d" href="/seamonkey/ident?i=NPError">NPError</a> <a class="d" href="/seamonkey/ident?i=NPN_PostURLNotify">NPN_PostURLNotify</a>(<a class="d" href="/seamonkey/ident?i=NPP">NPP</a> <a class="d" href="/seamonkey/ident?i=instance">instance</a>, <span class='v'>const </span><span class='v'>char* </span><a class="d" href="/seamonkey/ident?i=url">url</a>, <span class='v'>const </span><span class='v'>char* </span><a class="d" href="/seamonkey/ident?i=window">window</a>, <a class="d" href="/seamonkey/ident?i=uint32">uint32</a> <a class="d" href="/seamonkey/ident?i=len">len</a>, <span class='v'>const </span><span class='v'>char* </span><a class="d" href="/seamonkey/ident?i=buf">buf</a>, <a class="d" href="/seamonkey/ident?i=NPBool">NPBool</a> <a class="d" href="/seamonkey/ident?i=file">file</a>, <span class='v'>void* </span><a class="d" href="/seamonkey/ident?i=notifyData">notifyData</a>)
<a class='l d1' name=83 href="#83">83</a> {
<a class='l d1' name=84 href="#84">84</a> 	<span class='v'>int </span><a class="d" href="/seamonkey/ident?i=navMinorVers">navMinorVers</a> = <a class="d" href="/seamonkey/ident?i=NPNFuncs">NPNFuncs</a>.<a class="d" href="/seamonkey/ident?i=version">version</a> &amp; 0xFF;
<a class='l d1' name=85 href="#85">85</a>   <a class="d" href="/seamonkey/ident?i=NPError">NPError</a> <a class="d" href="/seamonkey/ident?i=rv">rv</a> = <a class="d" href="/seamonkey/ident?i=NPERR_NO_ERROR">NPERR_NO_ERROR</a>;
<a class='l d1' name=86 href="#86">86</a> 
<a class='l d1' name=87 href="#87">87</a> 	<span class='v'>if(</span> <a class="d" href="/seamonkey/ident?i=navMinorVers">navMinorVers</a> &gt;= <a class="d" href="/seamonkey/ident?i=NPVERS_HAS_NOTIFICATION">NPVERS_HAS_NOTIFICATION</a> )
<a class='l d1' name=88 href="#88">88</a> 		<a class="d" href="/seamonkey/ident?i=rv">rv</a> = <a class="d" href="/seamonkey/ident?i=NPNFuncs">NPNFuncs</a>.<a class="d" href="/seamonkey/ident?i=posturlnotify">posturlnotify</a>(<a class="d" href="/seamonkey/ident?i=instance">instance</a>, <a class="d" href="/seamonkey/ident?i=url">url</a>, <a class="d" href="/seamonkey/ident?i=window">window</a>, <a class="d" href="/seamonkey/ident?i=len">len</a>, <a class="d" href="/seamonkey/ident?i=buf">buf</a>, <a class="d" href="/seamonkey/ident?i=file">file</a>, <a class="d" href="/seamonkey/ident?i=notifyData">notifyData</a>);
<a class='l d1' name=89 href="#89">89</a> 	<span class='v'>else
<a class='l d1' name=90 href="#90">90</a> </span>		<a class="d" href="/seamonkey/ident?i=rv">rv</a> = <a class="d" href="/seamonkey/ident?i=NPERR_INCOMPATIBLE_VERSION_ERROR">NPERR_INCOMPATIBLE_VERSION_ERROR</a>;
<a class='l d1' name=91 href="#91">91</a> 
<a class='l d1' name=92 href="#92">92</a>   <span class='v'>return </span><a class="d" href="/seamonkey/ident?i=rv">rv</a>;
<a class='l d1' name=93 href="#93">93</a> }
<a class='l d1' name=94 href="#94">94</a> 
<a class='l d1' name=95 href="#95">95</a> <a class="d" href="/seamonkey/ident?i=NPError">NPError</a> <a class="d" href="/seamonkey/ident?i=NPN_PostURL">NPN_PostURL</a>(<a class="d" href="/seamonkey/ident?i=NPP">NPP</a> <a class="d" href="/seamonkey/ident?i=instance">instance</a>, <span class='v'>const </span><span class='v'>char* </span><a class="d" href="/seamonkey/ident?i=url">url</a>, <span class='v'>const </span><span class='v'>char* </span><a class="d" href="/seamonkey/ident?i=window">window</a>, <a class="d" href="/seamonkey/ident?i=uint32">uint32</a> <a class="d" href="/seamonkey/ident?i=len">len</a>, <span class='v'>const </span><span class='v'>char* </span><a class="d" href="/seamonkey/ident?i=buf">buf</a>, <a class="d" href="/seamonkey/ident?i=NPBool">NPBool</a> <a class="d" href="/seamonkey/ident?i=file">file</a>)
<a class='l d1' name=96 href="#96">96</a> {
<a class='l d1' name=97 href="#97">97</a>   <a class="d" href="/seamonkey/ident?i=NPError">NPError</a> <a class="d" href="/seamonkey/ident?i=rv">rv</a> = <a class="d" href="/seamonkey/ident?i=NPNFuncs">NPNFuncs</a>.<a class="d" href="/seamonkey/ident?i=posturl">posturl</a>(<a class="d" href="/seamonkey/ident?i=instance">instance</a>, <a class="d" href="/seamonkey/ident?i=url">url</a>, <a class="d" href="/seamonkey/ident?i=window">window</a>, <a class="d" href="/seamonkey/ident?i=len">len</a>, <a class="d" href="/seamonkey/ident?i=buf">buf</a>, <a class="d" href="/seamonkey/ident?i=file">file</a>);
<a class='l d1' name=98 href="#98">98</a>   <span class='v'>return </span><a class="d" href="/seamonkey/ident?i=rv">rv</a>;
<a class='l d1' name=99 href="#99">99</a> } 
<a class='l d2' name=100 href="#100">100</a> 
<a class='l d2' name=101 href="#101">101</a> <a class="d" href="/seamonkey/ident?i=NPError">NPError</a> <a class="d" href="/seamonkey/ident?i=NPN_RequestRead">NPN_RequestRead</a>(<a class="d" href="/seamonkey/ident?i=NPStream">NPStream</a>* <a class="d" href="/seamonkey/ident?i=stream">stream</a>, <a class="d" href="/seamonkey/ident?i=NPByteRange">NPByteRange</a>* <a class="d" href="/seamonkey/ident?i=rangeList">rangeList</a>)
<a class='l d2' name=102 href="#102">102</a> {
<a class='l d2' name=103 href="#103">103</a>   <a class="d" href="/seamonkey/ident?i=NPError">NPError</a> <a class="d" href="/seamonkey/ident?i=rv">rv</a> = <a class="d" href="/seamonkey/ident?i=NPNFuncs">NPNFuncs</a>.<a class="d" href="/seamonkey/ident?i=requestread">requestread</a>(<a class="d" href="/seamonkey/ident?i=stream">stream</a>, <a class="d" href="/seamonkey/ident?i=rangeList">rangeList</a>);
<a class='l d2' name=104 href="#104">104</a>   <span class='v'>return </span><a class="d" href="/seamonkey/ident?i=rv">rv</a>;
<a class='l d2' name=105 href="#105">105</a> }
<a class='l d2' name=106 href="#106">106</a> 
<a class='l d2' name=107 href="#107">107</a> <a class="d" href="/seamonkey/ident?i=NPError">NPError</a> <a class="d" href="/seamonkey/ident?i=NPN_NewStream">NPN_NewStream</a>(<a class="d" href="/seamonkey/ident?i=NPP">NPP</a> <a class="d" href="/seamonkey/ident?i=instance">instance</a>, <a class="d" href="/seamonkey/ident?i=NPMIMEType">NPMIMEType</a> <a class="d" href="/seamonkey/ident?i=type">type</a>, <span class='v'>const </span><span class='v'>char* </span><a class="d" href="/seamonkey/ident?i=target">target</a>, <a class="d" href="/seamonkey/ident?i=NPStream">NPStream</a>** <a class="d" href="/seamonkey/ident?i=stream">stream</a>)
<a class='l d2' name=108 href="#108">108</a> {
<a class='l d2' name=109 href="#109">109</a> 	<span class='v'>int </span><a class="d" href="/seamonkey/ident?i=navMinorVersion">navMinorVersion</a> = <a class="d" href="/seamonkey/ident?i=NPNFuncs">NPNFuncs</a>.<a class="d" href="/seamonkey/ident?i=version">version</a> &amp; 0xFF;
<a class='l d2' name=110 href="#110">110</a> 
<a class='l d2' name=111 href="#111">111</a>   <a class="d" href="/seamonkey/ident?i=NPError">NPError</a> <a class="d" href="/seamonkey/ident?i=rv">rv</a> = <a class="d" href="/seamonkey/ident?i=NPERR_NO_ERROR">NPERR_NO_ERROR</a>;
<a class='l d2' name=112 href="#112">112</a> 
<a class='l d2' name=113 href="#113">113</a> 	<span class='v'>if(</span> <a class="d" href="/seamonkey/ident?i=navMinorVersion">navMinorVersion</a> &gt;= <a class="d" href="/seamonkey/ident?i=NPVERS_HAS_STREAMOUTPUT">NPVERS_HAS_STREAMOUTPUT</a> )
<a class='l d2' name=114 href="#114">114</a> 		<a class="d" href="/seamonkey/ident?i=rv">rv</a> = <a class="d" href="/seamonkey/ident?i=NPNFuncs">NPNFuncs</a>.<a class="d" href="/seamonkey/ident?i=newstream">newstream</a>(<a class="d" href="/seamonkey/ident?i=instance">instance</a>, <a class="d" href="/seamonkey/ident?i=type">type</a>, <a class="d" href="/seamonkey/ident?i=target">target</a>, <a class="d" href="/seamonkey/ident?i=stream">stream</a>);
<a class='l d2' name=115 href="#115">115</a> 	<span class='v'>else
<a class='l d2' name=116 href="#116">116</a> </span>		<a class="d" href="/seamonkey/ident?i=rv">rv</a> = <a class="d" href="/seamonkey/ident?i=NPERR_INCOMPATIBLE_VERSION_ERROR">NPERR_INCOMPATIBLE_VERSION_ERROR</a>;
<a class='l d2' name=117 href="#117">117</a> 
<a class='l d2' name=118 href="#118">118</a>   <span class='v'>return </span><a class="d" href="/seamonkey/ident?i=rv">rv</a>;
<a class='l d2' name=119 href="#119">119</a> }
<a class='l d2' name=120 href="#120">120</a> 
<a class='l d2' name=121 href="#121">121</a> <a class="d" href="/seamonkey/ident?i=int32">int32</a> <a class="d" href="/seamonkey/ident?i=NPN_Write">NPN_Write</a>(<a class="d" href="/seamonkey/ident?i=NPP">NPP</a> <a class="d" href="/seamonkey/ident?i=instance">instance</a>, <a class="d" href="/seamonkey/ident?i=NPStream">NPStream</a> *<a class="d" href="/seamonkey/ident?i=stream">stream</a>, <a class="d" href="/seamonkey/ident?i=int32">int32</a> <a class="d" href="/seamonkey/ident?i=len">len</a>, <span class='v'>void </span>*<a class="d" href="/seamonkey/ident?i=buffer">buffer</a>)
<a class='l d2' name=122 href="#122">122</a> {
<a class='l d2' name=123 href="#123">123</a> 	<span class='v'>int </span><a class="d" href="/seamonkey/ident?i=navMinorVersion">navMinorVersion</a> = <a class="d" href="/seamonkey/ident?i=NPNFuncs">NPNFuncs</a>.<a class="d" href="/seamonkey/ident?i=version">version</a> &amp; 0xFF;
<a class='l d2' name=124 href="#124">124</a>   <a class="d" href="/seamonkey/ident?i=int32">int32</a> <a class="d" href="/seamonkey/ident?i=rv">rv</a> = 0;
<a class='l d2' name=125 href="#125">125</a> 
<a class='l d2' name=126 href="#126">126</a>   <span class='v'>if(</span> <a class="d" href="/seamonkey/ident?i=navMinorVersion">navMinorVersion</a> &gt;= <a class="d" href="/seamonkey/ident?i=NPVERS_HAS_STREAMOUTPUT">NPVERS_HAS_STREAMOUTPUT</a> )
<a class='l d2' name=127 href="#127">127</a> 		<a class="d" href="/seamonkey/ident?i=rv">rv</a> = <a class="d" href="/seamonkey/ident?i=NPNFuncs">NPNFuncs</a>.<a class="d" href="/seamonkey/ident?i=write">write</a>(<a class="d" href="/seamonkey/ident?i=instance">instance</a>, <a class="d" href="/seamonkey/ident?i=stream">stream</a>, <a class="d" href="/seamonkey/ident?i=len">len</a>, <a class="d" href="/seamonkey/ident?i=buffer">buffer</a>);
<a class='l d2' name=128 href="#128">128</a> 	<span class='v'>else
<a class='l d2' name=129 href="#129">129</a> </span>		<a class="d" href="/seamonkey/ident?i=rv">rv</a> = -1;
<a class='l d2' name=130 href="#130">130</a> 
<a class='l d2' name=131 href="#131">131</a>   <span class='v'>return </span><a class="d" href="/seamonkey/ident?i=rv">rv</a>;
<a class='l d2' name=132 href="#132">132</a> }
<a class='l d2' name=133 href="#133">133</a> 
<a class='l d2' name=134 href="#134">134</a> <a class="d" href="/seamonkey/ident?i=NPError">NPError</a> <a class="d" href="/seamonkey/ident?i=NPN_DestroyStream">NPN_DestroyStream</a>(<a class="d" href="/seamonkey/ident?i=NPP">NPP</a> <a class="d" href="/seamonkey/ident?i=instance">instance</a>, <a class="d" href="/seamonkey/ident?i=NPStream">NPStream</a>* <a class="d" href="/seamonkey/ident?i=stream">stream</a>, <a class="d" href="/seamonkey/ident?i=NPError">NPError</a> <a class="d" href="/seamonkey/ident?i=reason">reason</a>)
<a class='l d2' name=135 href="#135">135</a> {
<a class='l d2' name=136 href="#136">136</a> 	<span class='v'>int </span><a class="d" href="/seamonkey/ident?i=navMinorVersion">navMinorVersion</a> = <a class="d" href="/seamonkey/ident?i=NPNFuncs">NPNFuncs</a>.<a class="d" href="/seamonkey/ident?i=version">version</a> &amp; 0xFF;
<a class='l d2' name=137 href="#137">137</a>   <a class="d" href="/seamonkey/ident?i=NPError">NPError</a> <a class="d" href="/seamonkey/ident?i=rv">rv</a> = <a class="d" href="/seamonkey/ident?i=NPERR_NO_ERROR">NPERR_NO_ERROR</a>;
<a class='l d2' name=138 href="#138">138</a> 
<a class='l d2' name=139 href="#139">139</a>   <span class='v'>if(</span> <a class="d" href="/seamonkey/ident?i=navMinorVersion">navMinorVersion</a> &gt;= <a class="d" href="/seamonkey/ident?i=NPVERS_HAS_STREAMOUTPUT">NPVERS_HAS_STREAMOUTPUT</a> )
<a class='l d2' name=140 href="#140">140</a> 		<a class="d" href="/seamonkey/ident?i=rv">rv</a> = <a class="d" href="/seamonkey/ident?i=NPNFuncs">NPNFuncs</a>.<a class="d" href="/seamonkey/ident?i=destroystream">destroystream</a>(<a class="d" href="/seamonkey/ident?i=instance">instance</a>, <a class="d" href="/seamonkey/ident?i=stream">stream</a>, <a class="d" href="/seamonkey/ident?i=reason">reason</a>);
<a class='l d2' name=141 href="#141">141</a> 	<span class='v'>else
<a class='l d2' name=142 href="#142">142</a> </span>		<a class="d" href="/seamonkey/ident?i=rv">rv</a> = <a class="d" href="/seamonkey/ident?i=NPERR_INCOMPATIBLE_VERSION_ERROR">NPERR_INCOMPATIBLE_VERSION_ERROR</a>;
<a class='l d2' name=143 href="#143">143</a> 
<a class='l d2' name=144 href="#144">144</a>   <span class='v'>return </span><a class="d" href="/seamonkey/ident?i=rv">rv</a>;
<a class='l d2' name=145 href="#145">145</a> }
<a class='l d2' name=146 href="#146">146</a> 
<a class='l d2' name=147 href="#147">147</a> <span class='v'>void </span><a class="d" href="/seamonkey/ident?i=NPN_Status">NPN_Status</a>(<a class="d" href="/seamonkey/ident?i=NPP">NPP</a> <a class="d" href="/seamonkey/ident?i=instance">instance</a>, <span class='v'>const </span><span class='v'>char </span>*<a class="d" href="/seamonkey/ident?i=message">message</a>)
<a class='l d2' name=148 href="#148">148</a> {
<a class='l d2' name=149 href="#149">149</a>   <a class="d" href="/seamonkey/ident?i=NPNFuncs">NPNFuncs</a>.<a class="d" href="/seamonkey/ident?i=status">status</a>(<a class="d" href="/seamonkey/ident?i=instance">instance</a>, <a class="d" href="/seamonkey/ident?i=message">message</a>);
<a class='l d2' name=150 href="#150">150</a> }
<a class='l d2' name=151 href="#151">151</a> 
<a class='l d2' name=152 href="#152">152</a> <span class='v'>const </span><span class='v'>char* </span><a class="d" href="/seamonkey/ident?i=NPN_UserAgent">NPN_UserAgent</a>(<a class="d" href="/seamonkey/ident?i=NPP">NPP</a> <a class="d" href="/seamonkey/ident?i=instance">instance</a>)
<a class='l d2' name=153 href="#153">153</a> {
<a class='l d2' name=154 href="#154">154</a>   <span class='v'>const </span><span class='v'>char </span>* <a class="d" href="/seamonkey/ident?i=rv">rv</a> = <a class="d" href="/seamonkey/ident?i=NULL">NULL</a>;
<a class='l d2' name=155 href="#155">155</a>   <a class="d" href="/seamonkey/ident?i=rv">rv</a> = <a class="d" href="/seamonkey/ident?i=NPNFuncs">NPNFuncs</a>.<a class="d" href="/seamonkey/ident?i=uagent">uagent</a>(<a class="d" href="/seamonkey/ident?i=instance">instance</a>);
<a class='l d2' name=156 href="#156">156</a>   <span class='v'>return </span><a class="d" href="/seamonkey/ident?i=rv">rv</a>;
<a class='l d2' name=157 href="#157">157</a> }
<a class='l d2' name=158 href="#158">158</a> 
<a class='l d2' name=159 href="#159">159</a> <span class='v'>void* </span><a class="d" href="/seamonkey/ident?i=NPN_MemAlloc">NPN_MemAlloc</a>(<a class="d" href="/seamonkey/ident?i=uint32">uint32</a> <a class="d" href="/seamonkey/ident?i=size">size</a>)
<a class='l d2' name=160 href="#160">160</a> {
<a class='l d2' name=161 href="#161">161</a>   <span class='v'>void </span>* <a class="d" href="/seamonkey/ident?i=rv">rv</a> = <a class="d" href="/seamonkey/ident?i=NULL">NULL</a>;
<a class='l d2' name=162 href="#162">162</a>   <a class="d" href="/seamonkey/ident?i=rv">rv</a> = <a class="d" href="/seamonkey/ident?i=NPNFuncs">NPNFuncs</a>.<a class="d" href="/seamonkey/ident?i=memalloc">memalloc</a>(<a class="d" href="/seamonkey/ident?i=size">size</a>);
<a class='l d2' name=163 href="#163">163</a>   <span class='v'>return </span><a class="d" href="/seamonkey/ident?i=rv">rv</a>;
<a class='l d2' name=164 href="#164">164</a> }
<a class='l d2' name=165 href="#165">165</a> 
<a class='l d2' name=166 href="#166">166</a> <span class='v'>void </span><a class="d" href="/seamonkey/ident?i=NPN_MemFree">NPN_MemFree</a>(<span class='v'>void* </span><a class="d" href="/seamonkey/ident?i=ptr">ptr</a>)
<a class='l d2' name=167 href="#167">167</a> {
<a class='l d2' name=168 href="#168">168</a>   <a class="d" href="/seamonkey/ident?i=NPNFuncs">NPNFuncs</a>.<a class="d" href="/seamonkey/ident?i=memfree">memfree</a>(<a class="d" href="/seamonkey/ident?i=ptr">ptr</a>);
<a class='l d2' name=169 href="#169">169</a> }
<a class='l d2' name=170 href="#170">170</a> 
<a class='l d2' name=171 href="#171">171</a> <a class="d" href="/seamonkey/ident?i=uint32">uint32</a> <a class="d" href="/seamonkey/ident?i=NPN_MemFlush">NPN_MemFlush</a>(<a class="d" href="/seamonkey/ident?i=uint32">uint32</a> <a class="d" href="/seamonkey/ident?i=size">size</a>)
<a class='l d2' name=172 href="#172">172</a> {
<a class='l d2' name=173 href="#173">173</a>   <a class="d" href="/seamonkey/ident?i=uint32">uint32</a> <a class="d" href="/seamonkey/ident?i=rv">rv</a> = <a class="d" href="/seamonkey/ident?i=NPNFuncs">NPNFuncs</a>.<a class="d" href="/seamonkey/ident?i=memflush">memflush</a>(<a class="d" href="/seamonkey/ident?i=size">size</a>);
<a class='l d2' name=174 href="#174">174</a>   <span class='v'>return </span><a class="d" href="/seamonkey/ident?i=rv">rv</a>;
<a class='l d2' name=175 href="#175">175</a> }
<a class='l d2' name=176 href="#176">176</a> 
<a class='l d2' name=177 href="#177">177</a> <span class='v'>void </span><a class="d" href="/seamonkey/ident?i=NPN_ReloadPlugins">NPN_ReloadPlugins</a>(<a class="d" href="/seamonkey/ident?i=NPBool">NPBool</a> <a class="d" href="/seamonkey/ident?i=reloadPages">reloadPages</a>)
<a class='l d2' name=178 href="#178">178</a> {
<a class='l d2' name=179 href="#179">179</a>   <a class="d" href="/seamonkey/ident?i=NPNFuncs">NPNFuncs</a>.<a class="d" href="/seamonkey/ident?i=reloadplugins">reloadplugins</a>(<a class="d" href="/seamonkey/ident?i=reloadPages">reloadPages</a>);
<a class='l d2' name=180 href="#180">180</a> }
<a class='l d2' name=181 href="#181">181</a> 
<a class='l d2' name=182 href="#182">182</a> <a class="d" href="/seamonkey/ident?i=JRIEnv">JRIEnv</a>* <a class="d" href="/seamonkey/ident?i=NPN_GetJavaEnv">NPN_GetJavaEnv</a>(<span class='v'>void)</span>
<a class='l d2' name=183 href="#183">183</a> {
<a class='l d2' name=184 href="#184">184</a>   <a class="d" href="/seamonkey/ident?i=JRIEnv">JRIEnv</a> * <a class="d" href="/seamonkey/ident?i=rv">rv</a> = <a class="d" href="/seamonkey/ident?i=NULL">NULL</a>;
<a class='l d2' name=185 href="#185">185</a> 	<a class="d" href="/seamonkey/ident?i=rv">rv</a> = <a class="d" href="/seamonkey/ident?i=NPNFuncs">NPNFuncs</a>.<a class="d" href="/seamonkey/ident?i=getJavaEnv">getJavaEnv</a>();
<a class='l d2' name=186 href="#186">186</a>   <span class='v'>return </span><a class="d" href="/seamonkey/ident?i=rv">rv</a>;
<a class='l d2' name=187 href="#187">187</a> }
<a class='l d2' name=188 href="#188">188</a> 
<a class='l d2' name=189 href="#189">189</a> <a class="d" href="/seamonkey/ident?i=jref">jref</a> <a class="d" href="/seamonkey/ident?i=NPN_GetJavaPeer">NPN_GetJavaPeer</a>(<a class="d" href="/seamonkey/ident?i=NPP">NPP</a> <a class="d" href="/seamonkey/ident?i=instance">instance</a>)
<a class='l d2' name=190 href="#190">190</a> {
<a class='l d2' name=191 href="#191">191</a>   <a class="d" href="/seamonkey/ident?i=jref">jref</a> <a class="d" href="/seamonkey/ident?i=rv">rv</a>;
<a class='l d2' name=192 href="#192">192</a> 	<a class="d" href="/seamonkey/ident?i=rv">rv</a> = <a class="d" href="/seamonkey/ident?i=NPNFuncs">NPNFuncs</a>.<a class="d" href="/seamonkey/ident?i=getJavaPeer">getJavaPeer</a>(<a class="d" href="/seamonkey/ident?i=instance">instance</a>);
<a class='l d2' name=193 href="#193">193</a>   <span class='v'>return </span><a class="d" href="/seamonkey/ident?i=rv">rv</a>;
<a class='l d2' name=194 href="#194">194</a> }
<a class='l d2' name=195 href="#195">195</a> 
<a class='l d2' name=196 href="#196">196</a> <a class="d" href="/seamonkey/ident?i=NPError">NPError</a> <a class="d" href="/seamonkey/ident?i=NPN_GetValue">NPN_GetValue</a>(<a class="d" href="/seamonkey/ident?i=NPP">NPP</a> <a class="d" href="/seamonkey/ident?i=instance">instance</a>, <a class="d" href="/seamonkey/ident?i=NPNVariable">NPNVariable</a> <a class="d" href="/seamonkey/ident?i=variable">variable</a>, <span class='v'>void </span>*<a class="d" href="/seamonkey/ident?i=value">value</a>)
<a class='l d2' name=197 href="#197">197</a> {
<a class='l d2' name=198 href="#198">198</a>   <a class="d" href="/seamonkey/ident?i=NPError">NPError</a> <a class="d" href="/seamonkey/ident?i=rv">rv</a> = <a class="d" href="/seamonkey/ident?i=NPNFuncs">NPNFuncs</a>.<a class="d" href="/seamonkey/ident?i=getvalue">getvalue</a>(<a class="d" href="/seamonkey/ident?i=instance">instance</a>, <a class="d" href="/seamonkey/ident?i=variable">variable</a>, <a class="d" href="/seamonkey/ident?i=value">value</a>);
<a class='l d2' name=199 href="#199">199</a>   <span class='v'>return </span><a class="d" href="/seamonkey/ident?i=rv">rv</a>;
<a class='l d2' name=200 href="#200">200</a> }
<a class='l d2' name=201 href="#201">201</a> 
<a class='l d2' name=202 href="#202">202</a> <a class="d" href="/seamonkey/ident?i=NPError">NPError</a> <a class="d" href="/seamonkey/ident?i=NPN_SetValue">NPN_SetValue</a>(<a class="d" href="/seamonkey/ident?i=NPP">NPP</a> <a class="d" href="/seamonkey/ident?i=instance">instance</a>, <a class="d" href="/seamonkey/ident?i=NPPVariable">NPPVariable</a> <a class="d" href="/seamonkey/ident?i=variable">variable</a>, <span class='v'>void </span>*<a class="d" href="/seamonkey/ident?i=value">value</a>)
<a class='l d2' name=203 href="#203">203</a> {
<a class='l d2' name=204 href="#204">204</a>   <a class="d" href="/seamonkey/ident?i=NPError">NPError</a> <a class="d" href="/seamonkey/ident?i=rv">rv</a> = <a class="d" href="/seamonkey/ident?i=NPNFuncs">NPNFuncs</a>.<a class="d" href="/seamonkey/ident?i=setvalue">setvalue</a>(<a class="d" href="/seamonkey/ident?i=instance">instance</a>, <a class="d" href="/seamonkey/ident?i=variable">variable</a>, <a class="d" href="/seamonkey/ident?i=value">value</a>);
<a class='l d2' name=205 href="#205">205</a>   <span class='v'>return </span><a class="d" href="/seamonkey/ident?i=rv">rv</a>;
<a class='l d2' name=206 href="#206">206</a> }
<a class='l d2' name=207 href="#207">207</a> 
<a class='l d2' name=208 href="#208">208</a> <span class='v'>void </span><a class="d" href="/seamonkey/ident?i=NPN_InvalidateRect">NPN_InvalidateRect</a>(<a class="d" href="/seamonkey/ident?i=NPP">NPP</a> <a class="d" href="/seamonkey/ident?i=instance">instance</a>, <a class="d" href="/seamonkey/ident?i=NPRect">NPRect</a> *<a class="d" href="/seamonkey/ident?i=invalidRect">invalidRect</a>)
<a class='l d2' name=209 href="#209">209</a> {
<a class='l d2' name=210 href="#210">210</a>   <a class="d" href="/seamonkey/ident?i=NPNFuncs">NPNFuncs</a>.<a class="d" href="/seamonkey/ident?i=invalidaterect">invalidaterect</a>(<a class="d" href="/seamonkey/ident?i=instance">instance</a>, <a class="d" href="/seamonkey/ident?i=invalidRect">invalidRect</a>);
<a class='l d2' name=211 href="#211">211</a> }
<a class='l d2' name=212 href="#212">212</a> 
<a class='l d2' name=213 href="#213">213</a> <span class='v'>void </span><a class="d" href="/seamonkey/ident?i=NPN_InvalidateRegion">NPN_InvalidateRegion</a>(<a class="d" href="/seamonkey/ident?i=NPP">NPP</a> <a class="d" href="/seamonkey/ident?i=instance">instance</a>, <a class="d" href="/seamonkey/ident?i=NPRegion">NPRegion</a> <a class="d" href="/seamonkey/ident?i=invalidRegion">invalidRegion</a>)
<a class='l d2' name=214 href="#214">214</a> {
<a class='l d2' name=215 href="#215">215</a>   <a class="d" href="/seamonkey/ident?i=NPNFuncs">NPNFuncs</a>.<a class="d" href="/seamonkey/ident?i=invalidateregion">invalidateregion</a>(<a class="d" href="/seamonkey/ident?i=instance">instance</a>, <a class="d" href="/seamonkey/ident?i=invalidRegion">invalidRegion</a>);
<a class='l d2' name=216 href="#216">216</a> }
<a class='l d2' name=217 href="#217">217</a> 
<a class='l d2' name=218 href="#218">218</a> <span class='v'>void </span><a class="d" href="/seamonkey/ident?i=NPN_ForceRedraw">NPN_ForceRedraw</a>(<a class="d" href="/seamonkey/ident?i=NPP">NPP</a> <a class="d" href="/seamonkey/ident?i=instance">instance</a>)
<a class='l d2' name=219 href="#219">219</a> {
<a class='l d2' name=220 href="#220">220</a>   <a class="d" href="/seamonkey/ident?i=NPNFuncs">NPNFuncs</a>.<a class="d" href="/seamonkey/ident?i=forceredraw">forceredraw</a>(<a class="d" href="/seamonkey/ident?i=instance">instance</a>);
<a class='l d2' name=221 href="#221">221</a> }
<a class='l d2' name=222 href="#222">222</a> 
<a class='l d2' name=223 href="#223">223</a> <a class="d" href="/seamonkey/ident?i=NPIdentifier">NPIdentifier</a> <a class="d" href="/seamonkey/ident?i=NPN_GetStringIdentifier">NPN_GetStringIdentifier</a>(<span class='v'>const </span><a class="d" href="/seamonkey/ident?i=NPUTF8">NPUTF8</a> *<a class="d" href="/seamonkey/ident?i=name">name</a>)
<a class='l d2' name=224 href="#224">224</a> {
<a class='l d2' name=225 href="#225">225</a>   <span class='v'>return </span><a class="d" href="/seamonkey/ident?i=NPNFuncs">NPNFuncs</a>.<a class="d" href="/seamonkey/ident?i=getstringidentifier">getstringidentifier</a>(<a class="d" href="/seamonkey/ident?i=name">name</a>);
<a class='l d2' name=226 href="#226">226</a> }
<a class='l d2' name=227 href="#227">227</a> 
<a class='l d2' name=228 href="#228">228</a> <span class='v'>void </span><a class="d" href="/seamonkey/ident?i=NPN_GetStringIdentifiers">NPN_GetStringIdentifiers</a>(<span class='v'>const </span><a class="d" href="/seamonkey/ident?i=NPUTF8">NPUTF8</a> **<a class="d" href="/seamonkey/ident?i=names">names</a>, <a class="d" href="/seamonkey/ident?i=uint32_t">uint32_t</a> <a class="d" href="/seamonkey/ident?i=nameCount">nameCount</a>,
<a class='l d2' name=229 href="#229">229</a>                               <a class="d" href="/seamonkey/ident?i=NPIdentifier">NPIdentifier</a> *<a class="d" href="/seamonkey/ident?i=identifiers">identifiers</a>)
<a class='l d2' name=230 href="#230">230</a> {
<a class='l d2' name=231 href="#231">231</a>   <span class='v'>return </span><a class="d" href="/seamonkey/ident?i=NPNFuncs">NPNFuncs</a>.<a class="d" href="/seamonkey/ident?i=getstringidentifiers">getstringidentifiers</a>(<a class="d" href="/seamonkey/ident?i=names">names</a>, <a class="d" href="/seamonkey/ident?i=nameCount">nameCount</a>, <a class="d" href="/seamonkey/ident?i=identifiers">identifiers</a>);
<a class='l d2' name=232 href="#232">232</a> }
<a class='l d2' name=233 href="#233">233</a> 
<a class='l d2' name=234 href="#234">234</a> <a class="d" href="/seamonkey/ident?i=NPIdentifier">NPIdentifier</a> <a class="d" href="/seamonkey/ident?i=NPN_GetStringIdentifier">NPN_GetStringIdentifier</a>(<a class="d" href="/seamonkey/ident?i=int32_t">int32_t</a> <span class='a'>intid</span>)
<a class='l d2' name=235 href="#235">235</a> {
<a class='l d2' name=236 href="#236">236</a>   <span class='v'>return </span><a class="d" href="/seamonkey/ident?i=NPNFuncs">NPNFuncs</a>.<a class="d" href="/seamonkey/ident?i=getintidentifier">getintidentifier</a>(<span class='a'>intid</span>);
<a class='l d2' name=237 href="#237">237</a> }
<a class='l d2' name=238 href="#238">238</a> 
<a class='l d2' name=239 href="#239">239</a> <span class='v'>bool </span><a class="d" href="/seamonkey/ident?i=NPN_IdentifierIsString">NPN_IdentifierIsString</a>(<a class="d" href="/seamonkey/ident?i=NPIdentifier">NPIdentifier</a> <a class="d" href="/seamonkey/ident?i=identifier">identifier</a>)
<a class='l d2' name=240 href="#240">240</a> {
<a class='l d2' name=241 href="#241">241</a>   <span class='v'>return </span><a class="d" href="/seamonkey/ident?i=NPNFuncs">NPNFuncs</a>.<a class="d" href="/seamonkey/ident?i=identifierisstring">identifierisstring</a>(<a class="d" href="/seamonkey/ident?i=identifier">identifier</a>);
<a class='l d2' name=242 href="#242">242</a> }
<a class='l d2' name=243 href="#243">243</a> 
<a class='l d2' name=244 href="#244">244</a> <a class="d" href="/seamonkey/ident?i=NPUTF8">NPUTF8</a> *<a class="d" href="/seamonkey/ident?i=NPN_UTF8FromIdentifier">NPN_UTF8FromIdentifier</a>(<a class="d" href="/seamonkey/ident?i=NPIdentifier">NPIdentifier</a> <a class="d" href="/seamonkey/ident?i=identifier">identifier</a>)
<a class='l d2' name=245 href="#245">245</a> {
<a class='l d2' name=246 href="#246">246</a>   <span class='v'>return </span><a class="d" href="/seamonkey/ident?i=NPNFuncs">NPNFuncs</a>.<a class="d" href="/seamonkey/ident?i=utf8fromidentifier">utf8fromidentifier</a>(<a class="d" href="/seamonkey/ident?i=identifier">identifier</a>);
<a class='l d2' name=247 href="#247">247</a> }
<a class='l d2' name=248 href="#248">248</a> 
<a class='l d2' name=249 href="#249">249</a> <a class="d" href="/seamonkey/ident?i=int32_t">int32_t</a> <a class="d" href="/seamonkey/ident?i=NPN_IntFromIdentifier">NPN_IntFromIdentifier</a>(<a class="d" href="/seamonkey/ident?i=NPIdentifier">NPIdentifier</a> <a class="d" href="/seamonkey/ident?i=identifier">identifier</a>)
<a class='l d2' name=250 href="#250">250</a> {
<a class='l d2' name=251 href="#251">251</a>   <span class='v'>return </span><a class="d" href="/seamonkey/ident?i=NPNFuncs">NPNFuncs</a>.<a class="d" href="/seamonkey/ident?i=intfromidentifier">intfromidentifier</a>(<a class="d" href="/seamonkey/ident?i=identifier">identifier</a>);
<a class='l d2' name=252 href="#252">252</a> }
<a class='l d2' name=253 href="#253">253</a> 
<a class='l d2' name=254 href="#254">254</a> <a class="d" href="/seamonkey/ident?i=NPObject">NPObject</a> *<a class="d" href="/seamonkey/ident?i=NPN_CreateObject">NPN_CreateObject</a>(<a class="d" href="/seamonkey/ident?i=NPP">NPP</a> <a class="d" href="/seamonkey/ident?i=npp">npp</a>, <a class="d" href="/seamonkey/ident?i=NPClass">NPClass</a> *<a class="d" href="/seamonkey/ident?i=aClass">aClass</a>)
<a class='l d2' name=255 href="#255">255</a> {
<a class='l d2' name=256 href="#256">256</a>   <span class='v'>return </span><a class="d" href="/seamonkey/ident?i=NPNFuncs">NPNFuncs</a>.<a class="d" href="/seamonkey/ident?i=createobject">createobject</a>(<a class="d" href="/seamonkey/ident?i=npp">npp</a>, <a class="d" href="/seamonkey/ident?i=aClass">aClass</a>);
<a class='l d2' name=257 href="#257">257</a> }
<a class='l d2' name=258 href="#258">258</a> 
<a class='l d2' name=259 href="#259">259</a> <a class="d" href="/seamonkey/ident?i=NPObject">NPObject</a> *<a class="d" href="/seamonkey/ident?i=NPN_RetainObject">NPN_RetainObject</a>(<a class="d" href="/seamonkey/ident?i=NPObject">NPObject</a> *<a class="d" href="/seamonkey/ident?i=obj">obj</a>)
<a class='l d2' name=260 href="#260">260</a> {
<a class='l d2' name=261 href="#261">261</a>   <span class='v'>return </span><a class="d" href="/seamonkey/ident?i=NPNFuncs">NPNFuncs</a>.<a class="d" href="/seamonkey/ident?i=retainobject">retainobject</a>(<a class="d" href="/seamonkey/ident?i=obj">obj</a>);
<a class='l d2' name=262 href="#262">262</a> }
<a class='l d2' name=263 href="#263">263</a> 
<a class='l d2' name=264 href="#264">264</a> <span class='v'>void </span><a class="d" href="/seamonkey/ident?i=NPN_ReleaseObject">NPN_ReleaseObject</a>(<a class="d" href="/seamonkey/ident?i=NPObject">NPObject</a> *<a class="d" href="/seamonkey/ident?i=obj">obj</a>)
<a class='l d2' name=265 href="#265">265</a> {
<a class='l d2' name=266 href="#266">266</a>   <span class='v'>return </span><a class="d" href="/seamonkey/ident?i=NPNFuncs">NPNFuncs</a>.<a class="d" href="/seamonkey/ident?i=releaseobject">releaseobject</a>(<a class="d" href="/seamonkey/ident?i=obj">obj</a>);
<a class='l d2' name=267 href="#267">267</a> }
<a class='l d2' name=268 href="#268">268</a> 
<a class='l d2' name=269 href="#269">269</a> <span class='v'>bool </span><a class="d" href="/seamonkey/ident?i=NPN_Invoke">NPN_Invoke</a>(<a class="d" href="/seamonkey/ident?i=NPP">NPP</a> <a class="d" href="/seamonkey/ident?i=npp">npp</a>, <a class="d" href="/seamonkey/ident?i=NPObject">NPObject</a>* <a class="d" href="/seamonkey/ident?i=obj">obj</a>, <a class="d" href="/seamonkey/ident?i=NPIdentifier">NPIdentifier</a> <a class="d" href="/seamonkey/ident?i=methodName">methodName</a>,
<a class='l d2' name=270 href="#270">270</a>                 <span class='v'>const </span><span class='a'>NPVariant</span> *<a class="d" href="/seamonkey/ident?i=args">args</a>, <a class="d" href="/seamonkey/ident?i=uint32_t">uint32_t</a> <a class="d" href="/seamonkey/ident?i=argCount">argCount</a>, <span class='a'>NPVariant</span> *<a class="d" href="/seamonkey/ident?i=result">result</a>)
<a class='l d2' name=271 href="#271">271</a> {
<a class='l d2' name=272 href="#272">272</a>   <span class='v'>return </span><a class="d" href="/seamonkey/ident?i=NPNFuncs">NPNFuncs</a>.<a class="d" href="/seamonkey/ident?i=invoke">invoke</a>(<a class="d" href="/seamonkey/ident?i=npp">npp</a>, <a class="d" href="/seamonkey/ident?i=obj">obj</a>, <a class="d" href="/seamonkey/ident?i=methodName">methodName</a>, <a class="d" href="/seamonkey/ident?i=args">args</a>, <a class="d" href="/seamonkey/ident?i=argCount">argCount</a>, <a class="d" href="/seamonkey/ident?i=result">result</a>);
<a class='l d2' name=273 href="#273">273</a> }
<a class='l d2' name=274 href="#274">274</a> 
<a class='l d2' name=275 href="#275">275</a> <span class='v'>bool </span><a class="d" href="/seamonkey/ident?i=NPN_InvokeDefault">NPN_InvokeDefault</a>(<a class="d" href="/seamonkey/ident?i=NPP">NPP</a> <a class="d" href="/seamonkey/ident?i=npp">npp</a>, <a class="d" href="/seamonkey/ident?i=NPObject">NPObject</a>* <a class="d" href="/seamonkey/ident?i=obj">obj</a>, <span class='v'>const </span><span class='a'>NPVariant</span> *<a class="d" href="/seamonkey/ident?i=args">args</a>,
<a class='l d2' name=276 href="#276">276</a>                        <a class="d" href="/seamonkey/ident?i=uint32_t">uint32_t</a> <a class="d" href="/seamonkey/ident?i=argCount">argCount</a>, <span class='a'>NPVariant</span> *<a class="d" href="/seamonkey/ident?i=result">result</a>)
<a class='l d2' name=277 href="#277">277</a> {
<a class='l d2' name=278 href="#278">278</a>   <span class='v'>return </span><a class="d" href="/seamonkey/ident?i=NPNFuncs">NPNFuncs</a>.<a class="d" href="/seamonkey/ident?i=invokeDefault">invokeDefault</a>(<a class="d" href="/seamonkey/ident?i=npp">npp</a>, <a class="d" href="/seamonkey/ident?i=obj">obj</a>, <a class="d" href="/seamonkey/ident?i=args">args</a>, <a class="d" href="/seamonkey/ident?i=argCount">argCount</a>, <a class="d" href="/seamonkey/ident?i=result">result</a>);
<a class='l d2' name=279 href="#279">279</a> }
<a class='l d2' name=280 href="#280">280</a> 
<a class='l d2' name=281 href="#281">281</a> <span class='v'>bool </span><a class="d" href="/seamonkey/ident?i=NPN_Evaluate">NPN_Evaluate</a>(<a class="d" href="/seamonkey/ident?i=NPP">NPP</a> <a class="d" href="/seamonkey/ident?i=npp">npp</a>, <a class="d" href="/seamonkey/ident?i=NPObject">NPObject</a>* <a class="d" href="/seamonkey/ident?i=obj">obj</a>, <a class="d" href="/seamonkey/ident?i=NPString">NPString</a> *<a class="d" href="/seamonkey/ident?i=script">script</a>,
<a class='l d2' name=282 href="#282">282</a>                   <span class='a'>NPVariant</span> *<a class="d" href="/seamonkey/ident?i=result">result</a>)
<a class='l d2' name=283 href="#283">283</a> {
<a class='l d2' name=284 href="#284">284</a>   <span class='v'>return </span><a class="d" href="/seamonkey/ident?i=NPNFuncs">NPNFuncs</a>.<a class="d" href="/seamonkey/ident?i=evaluate">evaluate</a>(<a class="d" href="/seamonkey/ident?i=npp">npp</a>, <a class="d" href="/seamonkey/ident?i=obj">obj</a>, <a class="d" href="/seamonkey/ident?i=script">script</a>, <a class="d" href="/seamonkey/ident?i=result">result</a>);
<a class='l d2' name=285 href="#285">285</a> }
<a class='l d2' name=286 href="#286">286</a> 
<a class='l d2' name=287 href="#287">287</a> <span class='v'>bool </span><a class="d" href="/seamonkey/ident?i=NPN_GetProperty">NPN_GetProperty</a>(<a class="d" href="/seamonkey/ident?i=NPP">NPP</a> <a class="d" href="/seamonkey/ident?i=npp">npp</a>, <a class="d" href="/seamonkey/ident?i=NPObject">NPObject</a>* <a class="d" href="/seamonkey/ident?i=obj">obj</a>, <a class="d" href="/seamonkey/ident?i=NPIdentifier">NPIdentifier</a> <a class="d" href="/seamonkey/ident?i=propertyName">propertyName</a>,
<a class='l d2' name=288 href="#288">288</a>                      <span class='a'>NPVariant</span> *<a class="d" href="/seamonkey/ident?i=result">result</a>)
<a class='l d2' name=289 href="#289">289</a> {
<a class='l d2' name=290 href="#290">290</a>   <span class='v'>return </span><a class="d" href="/seamonkey/ident?i=NPNFuncs">NPNFuncs</a>.<a class="d" href="/seamonkey/ident?i=getproperty">getproperty</a>(<a class="d" href="/seamonkey/ident?i=npp">npp</a>, <a class="d" href="/seamonkey/ident?i=obj">obj</a>, <a class="d" href="/seamonkey/ident?i=propertyName">propertyName</a>, <a class="d" href="/seamonkey/ident?i=result">result</a>);
<a class='l d2' name=291 href="#291">291</a> }
<a class='l d2' name=292 href="#292">292</a> 
<a class='l d2' name=293 href="#293">293</a> <span class='v'>bool </span><a class="d" href="/seamonkey/ident?i=NPN_SetProperty">NPN_SetProperty</a>(<a class="d" href="/seamonkey/ident?i=NPP">NPP</a> <a class="d" href="/seamonkey/ident?i=npp">npp</a>, <a class="d" href="/seamonkey/ident?i=NPObject">NPObject</a>* <a class="d" href="/seamonkey/ident?i=obj">obj</a>, <a class="d" href="/seamonkey/ident?i=NPIdentifier">NPIdentifier</a> <a class="d" href="/seamonkey/ident?i=propertyName">propertyName</a>,
<a class='l d2' name=294 href="#294">294</a>                      <span class='v'>const </span><span class='a'>NPVariant</span> *<a class="d" href="/seamonkey/ident?i=value">value</a>)
<a class='l d2' name=295 href="#295">295</a> {
<a class='l d2' name=296 href="#296">296</a>   <span class='v'>return </span><a class="d" href="/seamonkey/ident?i=NPNFuncs">NPNFuncs</a>.<a class="d" href="/seamonkey/ident?i=setproperty">setproperty</a>(<a class="d" href="/seamonkey/ident?i=npp">npp</a>, <a class="d" href="/seamonkey/ident?i=obj">obj</a>, <a class="d" href="/seamonkey/ident?i=propertyName">propertyName</a>, <a class="d" href="/seamonkey/ident?i=value">value</a>);
<a class='l d2' name=297 href="#297">297</a> }
<a class='l d2' name=298 href="#298">298</a> 
<a class='l d2' name=299 href="#299">299</a> <span class='v'>bool </span><a class="d" href="/seamonkey/ident?i=NPN_RemoveProperty">NPN_RemoveProperty</a>(<a class="d" href="/seamonkey/ident?i=NPP">NPP</a> <a class="d" href="/seamonkey/ident?i=npp">npp</a>, <a class="d" href="/seamonkey/ident?i=NPObject">NPObject</a>* <a class="d" href="/seamonkey/ident?i=obj">obj</a>, <a class="d" href="/seamonkey/ident?i=NPIdentifier">NPIdentifier</a> <a class="d" href="/seamonkey/ident?i=propertyName">propertyName</a>)
<a class='l d2' name=300 href="#300">300</a> {
<a class='l d2' name=301 href="#301">301</a>   <span class='v'>return </span><a class="d" href="/seamonkey/ident?i=NPNFuncs">NPNFuncs</a>.<a class="d" href="/seamonkey/ident?i=removeproperty">removeproperty</a>(<a class="d" href="/seamonkey/ident?i=npp">npp</a>, <a class="d" href="/seamonkey/ident?i=obj">obj</a>, <a class="d" href="/seamonkey/ident?i=propertyName">propertyName</a>);
<a class='l d2' name=302 href="#302">302</a> }
<a class='l d2' name=303 href="#303">303</a> 
<a class='l d2' name=304 href="#304">304</a> <span class='v'>bool </span><a class="d" href="/seamonkey/ident?i=NPN_Enumerate">NPN_Enumerate</a>(<a class="d" href="/seamonkey/ident?i=NPP">NPP</a> <a class="d" href="/seamonkey/ident?i=npp">npp</a>, <a class="d" href="/seamonkey/ident?i=NPObject">NPObject</a> *<a class="d" href="/seamonkey/ident?i=obj">obj</a>, <a class="d" href="/seamonkey/ident?i=NPIdentifier">NPIdentifier</a> **<a class="d" href="/seamonkey/ident?i=identifier">identifier</a>,
<a class='l d2' name=305 href="#305">305</a>                    <a class="d" href="/seamonkey/ident?i=uint32_t">uint32_t</a> *<a class="d" href="/seamonkey/ident?i=count">count</a>)
<a class='l d2' name=306 href="#306">306</a> {
<a class='l d2' name=307 href="#307">307</a>   <span class='v'>return </span><a class="d" href="/seamonkey/ident?i=NPNFuncs">NPNFuncs</a>.<a class="d" href="/seamonkey/ident?i=enumerate">enumerate</a>(<a class="d" href="/seamonkey/ident?i=npp">npp</a>, <a class="d" href="/seamonkey/ident?i=obj">obj</a>, <a class="d" href="/seamonkey/ident?i=identifier">identifier</a>, <a class="d" href="/seamonkey/ident?i=count">count</a>);
<a class='l d2' name=308 href="#308">308</a> }
<a class='l d2' name=309 href="#309">309</a> 
<a class='l d2' name=310 href="#310">310</a> <span class='v'>bool </span><a class="d" href="/seamonkey/ident?i=NPN_Construct">NPN_Construct</a>(<a class="d" href="/seamonkey/ident?i=NPP">NPP</a> <a class="d" href="/seamonkey/ident?i=npp">npp</a>, <a class="d" href="/seamonkey/ident?i=NPObject">NPObject</a> *<a class="d" href="/seamonkey/ident?i=obj">obj</a>, <span class='v'>const </span><span class='a'>NPVariant</span> *<a class="d" href="/seamonkey/ident?i=args">args</a>,
<a class='l d2' name=311 href="#311">311</a>                    <a class="d" href="/seamonkey/ident?i=uint32_t">uint32_t</a> <a class="d" href="/seamonkey/ident?i=argCount">argCount</a>, <span class='a'>NPVariant</span> *<a class="d" href="/seamonkey/ident?i=result">result</a>)
<a class='l d2' name=312 href="#312">312</a> {
<a class='l d2' name=313 href="#313">313</a>   <span class='v'>return </span><a class="d" href="/seamonkey/ident?i=NPNFuncs">NPNFuncs</a>.<a class="d" href="/seamonkey/ident?i=construct">construct</a>(<a class="d" href="/seamonkey/ident?i=npp">npp</a>, <a class="d" href="/seamonkey/ident?i=obj">obj</a>, <a class="d" href="/seamonkey/ident?i=args">args</a>, <a class="d" href="/seamonkey/ident?i=argCount">argCount</a>, <a class="d" href="/seamonkey/ident?i=result">result</a>);
<a class='l d2' name=314 href="#314">314</a> }
<a class='l d2' name=315 href="#315">315</a> 
<a class='l d2' name=316 href="#316">316</a> <span class='v'>bool </span><a class="d" href="/seamonkey/ident?i=NPN_HasProperty">NPN_HasProperty</a>(<a class="d" href="/seamonkey/ident?i=NPP">NPP</a> <a class="d" href="/seamonkey/ident?i=npp">npp</a>, <a class="d" href="/seamonkey/ident?i=NPObject">NPObject</a>* <a class="d" href="/seamonkey/ident?i=obj">obj</a>, <a class="d" href="/seamonkey/ident?i=NPIdentifier">NPIdentifier</a> <a class="d" href="/seamonkey/ident?i=propertyName">propertyName</a>)
<a class='l d2' name=317 href="#317">317</a> {
<a class='l d2' name=318 href="#318">318</a>   <span class='v'>return </span><a class="d" href="/seamonkey/ident?i=NPNFuncs">NPNFuncs</a>.<a class="d" href="/seamonkey/ident?i=hasproperty">hasproperty</a>(<a class="d" href="/seamonkey/ident?i=npp">npp</a>, <a class="d" href="/seamonkey/ident?i=obj">obj</a>, <a class="d" href="/seamonkey/ident?i=propertyName">propertyName</a>);
<a class='l d2' name=319 href="#319">319</a> }
<a class='l d2' name=320 href="#320">320</a> 
<a class='l d2' name=321 href="#321">321</a> <span class='v'>bool </span><a class="d" href="/seamonkey/ident?i=NPN_HasMethod">NPN_HasMethod</a>(<a class="d" href="/seamonkey/ident?i=NPP">NPP</a> <a class="d" href="/seamonkey/ident?i=npp">npp</a>, <a class="d" href="/seamonkey/ident?i=NPObject">NPObject</a>* <a class="d" href="/seamonkey/ident?i=obj">obj</a>, <a class="d" href="/seamonkey/ident?i=NPIdentifier">NPIdentifier</a> <a class="d" href="/seamonkey/ident?i=methodName">methodName</a>)
<a class='l d2' name=322 href="#322">322</a> {
<a class='l d2' name=323 href="#323">323</a>   <span class='v'>return </span><a class="d" href="/seamonkey/ident?i=NPNFuncs">NPNFuncs</a>.<a class="d" href="/seamonkey/ident?i=hasmethod">hasmethod</a>(<a class="d" href="/seamonkey/ident?i=npp">npp</a>, <a class="d" href="/seamonkey/ident?i=obj">obj</a>, <a class="d" href="/seamonkey/ident?i=methodName">methodName</a>);
<a class='l d2' name=324 href="#324">324</a> }
<a class='l d2' name=325 href="#325">325</a> 
<a class='l d2' name=326 href="#326">326</a> <span class='v'>void </span><a class="d" href="/seamonkey/ident?i=NPN_ReleaseVariantValue">NPN_ReleaseVariantValue</a>(<span class='a'>NPVariant</span> *<a class="d" href="/seamonkey/ident?i=variant">variant</a>)
<a class='l d2' name=327 href="#327">327</a> {
<a class='l d2' name=328 href="#328">328</a>   <a class="d" href="/seamonkey/ident?i=NPNFuncs">NPNFuncs</a>.<a class="d" href="/seamonkey/ident?i=releasevariantvalue">releasevariantvalue</a>(<a class="d" href="/seamonkey/ident?i=variant">variant</a>);
<a class='l d2' name=329 href="#329">329</a> }
<a class='l d2' name=330 href="#330">330</a> 
<a class='l d2' name=331 href="#331">331</a> <span class='v'>void </span><a class="d" href="/seamonkey/ident?i=NPN_SetException">NPN_SetException</a>(<a class="d" href="/seamonkey/ident?i=NPObject">NPObject</a>* <a class="d" href="/seamonkey/ident?i=obj">obj</a>, <span class='v'>const </span><a class="d" href="/seamonkey/ident?i=NPUTF8">NPUTF8</a> *<a class="d" href="/seamonkey/ident?i=message">message</a>)
<a class='l d2' name=332 href="#332">332</a> {
<a class='l d2' name=333 href="#333">333</a>   <a class="d" href="/seamonkey/ident?i=NPNFuncs">NPNFuncs</a>.<a class="d" href="/seamonkey/ident?i=setexception">setexception</a>(<a class="d" href="/seamonkey/ident?i=obj">obj</a>, <a class="d" href="/seamonkey/ident?i=message">message</a>);
<a class='l d2' name=334 href="#334">334</a> }
<a class='l d2' name=335 href="#335">335</a> </span></pre>
</html>
