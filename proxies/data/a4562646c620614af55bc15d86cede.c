(function(){/*

 Copyright The Closure Library Authors.
 SPDX-License-Identifier: Apache-2.0
*/
'use strict';var e=this||self;function f(a,b){a=a.split(".");var c=e;a[0]in c||"undefined"==typeof c.execScript||c.execScript("var "+a[0]);for(var d;a.length&&(d=a.shift());)a.length||void 0===b?c[d]&&c[d]!==Object.prototype[d]?c=c[d]:c=c[d]={}:c[d]=b};(class{constructor(a,b){this.g=b===g?a:""}}).prototype.toString=function(){return this.g.toString()};var g={};var h="function"===typeof Uint8Array;const l=Symbol("IS_REPEATED_FIELD");function m(a){Array.isArray(a)&&!Object.isFrozen(a)&&(a[l]=!0);return a};function n(){}let p;function q(a,b,c){a.i=null;p&&(b||(b=p),p=null);var d=a.constructor.o;b||(b=d?[d]:[]);a.j=d?0:-1;a.g=b;a:{if(b=a.g.length)if(--b,d=a.g[b],!(null===d||"object"!=typeof d||Array.isArray(d)||h&&d instanceof Uint8Array)){a.l=b-a.j;a.h=d;break a}a.l=Number.MAX_VALUE}a.m={};if(c)for(b=0;b<c.length;b++)if(d=c[b],d<a.l){d+=a.j;var k=a.g[d];k?m(k):a.g[d]=r}else t(a),(k=a.h[d])?m(k):a.h[d]=r}const r=Object.freeze(m([]));function t(a){let b=a.l+a.j;a.g[b]||(a.h=a.g[b]={})}
function u(a,b){if(b<a.l){b+=a.j;var c=a.g[b];return c!==r?c:a.g[b]=m([])}if(a.h)return c=a.h[b],c!==r?c:a.h[b]=m([])}function v(a,b){a=u(a,b);return null==a?a:!!a}function w(a,b){a=u(a,b);return null==a?0:a}function x(a){a=v(a,1);return null==a?!1:a}function y(a,b,c){b<a.l?a.g[b+a.j]=c:(t(a),a.h[b]=c)}function z(a,b,c,d){c!==d?y(a,b,c):b<a.l?a.g[b+a.j]=null:(t(a),delete a.h[b])}function A(a,b,c){a.i||(a.i={});if(!a.i[c]){let d=u(a,c);d&&(a.i[c]=new b(d))}return a.i[c]}
function B(a){if(a.i)for(var b in a.i){var c=a.i[b];if(Array.isArray(c))for(var d=0;d<c.length;d++)c[d]&&B(c[d]);else c&&B(c)}return a.g}function C(a,b){p=b=b?JSON.parse(b):null;a=new a(b);p=null;return a}n.prototype.toString=function(){return B(this).toString()};var E=class extends n{constructor(a){super();q(this,a,D)}},D=[17];var G=class extends n{constructor(a){super();q(this,a,F)}},F=[8];var I=class extends n{constructor(a){super();q(this,a,H)}},H=[27];var J=class extends n{constructor(){super();q(this,void 0,null)}};var K=class extends n{constructor(a){super();q(this,a,null)}};var M=class extends n{constructor(a){super();q(this,a,L)}},L=[1,2,3];var O=class extends n{constructor(){super();q(this,void 0,N)}},N=[12];var P={};var Q=class{};class R extends Q{constructor(a){super();if(P!==P)throw Error("Bad secret");this.g=a}toString(){return this.g}};var aa="href rel src srcdoc action formaction sandbox cite srccite poster icon style".split(" ");(function(a){if(!Array.isArray(a)||!Array.isArray(a.raw))throw new TypeError("safeAttr is a template literal tag function and should be called using the tagged template syntax. For example, safeAttr`foo`;");const b=a[0].toLowerCase();aa.forEach(c=>{if(0===c.indexOf(b))throw Error(`Prefix '${a[0]}' does not guarantee the attribute `+"to be safe as it is also a prefix for "+`the security sensitive attribute '${c}'. `+"Please use native or safe DOM APIs to set the attribute.");});return new R(b)})`x-`;function S(a,b){a=a.getElementsByTagName("META");for(let c=0;c<a.length;++c)if(a[c].getAttribute("name")===b)return a[c].getAttribute("content")||"";return""};function T(a,b){b=new CustomEvent(b);a.body.dispatchEvent(b)}
var ba=class{constructor(a){this.body=a;S(a,"sampling_mod");var b=S(a,"namespace");if(!b){b="ns-"+(0,Math.random)().toString(36).substr(2,5);a:{var c=a.getElementsByTagName("META");for(let d=0;d<c.length;++d)if("namespace"===c[d].getAttribute("name")&&c[d].getAttribute("index")===(0).toString()){c[d].setAttribute("content",b);break a}c=a.querySelector("#mys-meta");c||(c=document.createElement("div"),c.id="mys-meta",c.style.position="absolute",c.style.display="none",a.appendChild(c));a=document.createElement("META");
a.setAttribute("name","namespace");a.setAttribute("content",b);a.setAttribute("index",(0).toString());c.appendChild(a)}}}addEventListener(a,b){this.body.addEventListener(a,b)}};function U(a){var b=document;a=String(a);"application/xhtml+xml"===b.contentType&&(a=a.toLowerCase());return b.createElement(a)};function V(a){if(1>=a.h.offsetWidth||1>=a.h.offsetHeight)return!1;a.g.remove();T(a.context,"spanReady");return!0}
var ca=class{constructor(a,b){this.context=a;this.i=b;this.h=U("SPAN");this.g=U("DIV");this.h.style.fontSize="6px";this.h.textContent="go";this.g.style.position="absolute";this.g.style.top="100%";this.g.style.left="100%";this.g.style.width="1px";this.g.style.height="0";this.g.style.overflow="hidden";this.g.style.visibility="hidden";this.g.appendChild(this.h)}wait(){if(!x(this.i)&&(T(this.context,"spanStart"),this.context.body.appendChild(this.g),!V(this)))return new Promise(a=>{const b=setInterval(()=>
{V(this)&&(clearInterval(b),a())},w(this.i,3))})}};var da=class{constructor(a){this.h=0;this.i=A(a,I,1);this.g=A(a,G,12)||new G;this.h=a=w(a,2);2===a&&(y(this.g,6,!1),y(this.g,7,!1));A(this.i,E,10)||new E}};function W(a){a.g&=-31}function X(a,b){a.g|=b}var ea=class{constructor(a,b){this.context=a;this.j=b;new O;this.g=0}h(){}};function Y(a){C(M,S(a.context.body,"engine_msg")||"[]");return a.g.h()||Promise.resolve()}function fa(a){var b;W(a.g);X(a.g,1);null===(b=window.AFMA_Communicator)||void 0===b?void 0:b.addEventListener("onshow",()=>{X(a.g,32)});let c=0;const d=a.context.body;d.addEventListener("browserRender",()=>{++c;if(1===c)T(a.context,"overallStart"),Y(a).then(()=>{T(a.context,"overallQuiet")});else{var k=d.clientHeight;d.clientWidth&&k&&Y(a)}})}
var ha=class{constructor(a,b,c){this.context=new ba(a);this.g=c(this.context,b)}};function ia(a){a.i.length=0;a.h=!0}function Z(a,b){a.g=!0;const c=()=>{a.h=!1;const d=a.i.shift();return void 0===d?(a.g=!1,Promise.resolve()):Z(a,d())};return b?b.then(c,()=>{if(a.h)return c();a.g=!1;return Promise.reject()}):c()}function ja(a,b){for(const c of b)a.i.push(c);if(!a.g)return Z(a)}var ka=class{constructor(){this.h=this.g=!1;this.i=[]}};var la=class extends ea{constructor(){super(...arguments);this.i=new ka}h(){ia(this.i);return ja(this.i,[()=>{},()=>{let a;var b=this.j;const c=new J;z(c,3,100,0);z(c,4,1E4,0);v(b.g,4)?(z(c,6,!0,!1),z(c,7,"monospace",""),z(c,8,"IMWimw0.!?@","")):(v(b.g,5)&&z(c,9,!0,!1),z(c,5,!0,!1));v(b.g,3)&&z(c,2,!0,!1);2===b.h&&z(c,2,!0,!1);c&&(a=(new ca(this.context,c)).wait());T(this.context,"browserStart");T(this.context,"browserStartEnd");W(this);X(this,2);return a},()=>{T(this.context,"browserReady");T(this.context,
"browserReadyEnd");X(this,4);T(this.context,"overallReady")},()=>{T(this.context,"browserQuiet");T(this.context,"browserQuietEnd");X(this,8)}])}};(function(a){let b=null;f("mys.engine.init",(c,d)=>{c=C(K,S(d,"render_config")||"[]");b=new ha(d,c,a);fa(b)});f("mys.engine.stage",()=>b?b.g.g:0)})(function(a,b){b=new da(b);return new la(a,b)});}).call(this);