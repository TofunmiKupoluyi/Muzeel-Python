<!DOCTYPE html><html><head></head><body><script>
(function(){/*

 Copyright The Closure Library Authors.
 SPDX-License-Identifier: Apache-2.0
*/
var aa="function"==typeof Object.defineProperties?Object.defineProperty:function(a,b,c){if(a==Array.prototype||a==Object.prototype)return a;a[b]=c.value;return a};function ba(a){a=["object"==typeof globalThis&&globalThis,a,"object"==typeof window&&window,"object"==typeof self&&self,"object"==typeof global&&global];for(var b=0;b<a.length;++b){var c=a[b];if(c&&c.Math==Math)return c}throw Error("Cannot find global object");}var ca=ba(this);
function da(a,b){if(b)a:{var c=ca;a=a.split(".");for(var d=0;d<a.length-1;d++){var e=a[d];if(!(e in c))break a;c=c[e]}a=a[a.length-1];d=c[a];b=b(d);b!=d&&null!=b&&aa(c,a,{configurable:!0,writable:!0,value:b})}}da("Array.prototype.find",function(a){return a?a:function(b,c){a:{var d=this;d instanceof String&&(d=String(d));for(var e=d.length,f=0;f<e;f++){var g=d[f];if(b.call(c,g,f,d)){b=g;break a}}b=void 0}return b}});var k=this||self;function q(a){return a};var ea=Array.prototype.forEach?function(a,b){Array.prototype.forEach.call(a,b,void 0)}:function(a,b){for(var c=a.length,d="string"===typeof a?a.split(""):a,e=0;e<c;e++)e in d&&b.call(void 0,d[e],e,a)};var r;var v;a:{var fa=k.navigator;if(fa){var ha=fa.userAgent;if(ha){v=ha;break a}}v=""};function w(a,b,c){this.g=c===ia?a:""}w.prototype.toString=function(){return this.g.toString()};var ia={};function y(a){y[" "](a);return a}y[" "]=function(){};var ja=-1!=v.toLowerCase().indexOf("webkit")&&-1==v.indexOf("Edge");var ka={v:{value:!0,configurable:!0}};var la=Object,ma=la.freeze,z=[];Array.isArray(z)&&!Object.isFrozen(z)&&Object.defineProperties(z,ka);ma.call(la,z);function na(a,b){var c=void 0===c?{}:c;this.error=a;this.context=b.context;this.msg=b.message||"";this.id=b.id||"jserror";this.meta=c};function A(a,b,c){a.addEventListener&&a.addEventListener(b,c,!1)};var oa=/^(?:([^:/?#.]+):)?(?:\/\/(?:([^\\/?#]*)@)?([^\\/?#]*?)(?::([0-9]+))?(?=[\\/?#]|$))?([^?#]+)?(?:\?([^#]*))?(?:#([\s\S]*))?$/;function B(a){try{var b;if(b=!!a&&null!=a.location.href)a:{try{y(a.foo);b=!0;break a}catch(c){}b=!1}return b}catch(c){return!1}}function pa(a,b){var c=[k.top],d=[],e=0;b=b||1024;for(var f;f=c[e++];){a&&!B(f)||d.push(f);try{if(f.frames)for(var g=f.frames.length,l=0;l<g&&c.length<b;++l)c.push(f.frames[l])}catch(h){}}return d}function qa(a,b){if(a)for(var c in a)Object.prototype.hasOwnProperty.call(a,c)&&b.call(void 0,a[c],c,a)};function ra(a,b){k.google_image_requests||(k.google_image_requests=[]);var c=k.document.createElement("img");if(b){var d=function(e){b&&b(e);c.removeEventListener&&c.removeEventListener("load",d,!1);c.removeEventListener&&c.removeEventListener("error",d,!1)};A(c,"load",d);A(c,"error",d)}c.src=a;k.google_image_requests.push(c)};var C=null;function sa(){if(!C)b:{var a=pa();for(var b=0;b<a.length;b++)try{var c=a[b].frames.google_esf;if(c&&B(c)){C=c;break b}}catch(d){}C=null}(a=C)?((b=a.esf_propArray)||(b=a.esf_propArray={}),a=b):a=null;a=a?a[2]:void 0;return a};var ta=document,D=window;var ua=/#(R?S)-(.*)/,va=/^(\d+)-(.*)/;var Aa=!!window.google_async_iframe_id,E=Aa&&window.parent||window;var Ba=/^https?:\/\/(\w|-)+\.cdn\.ampproject\.(net|org)(\?|\/|$)/;function Ca(a,b){this.g=a;this.h=b}function Da(a,b){this.url=a;this.l=!!b;this.depth=null};function F(){this.i="&";this.h={};this.s=0;this.g=[]}function G(a,b){var c={};c[a]=b;return[c]}function Ea(a,b,c,d,e){var f=[];qa(a,function(g,l){(g=Fa(g,b,c,d,e))&&f.push(l+"="+g)});return f.join(b)}
function Fa(a,b,c,d,e){if(null==a)return"";b=b||"&";c=c||",$";"string"==typeof c&&(c=c.split(""));if(a instanceof Array){if(d=d||0,d<c.length){for(var f=[],g=0;g<a.length;g++)f.push(Fa(a[g],b,c,d+1,e));return f.join(c[d])}}else if("object"==typeof a)return e=e||0,2>e?encodeURIComponent(Ea(a,b,c,d,e+1)):"...";return encodeURIComponent(String(a))}
function Ga(a,b,c){b=b+"//pagead2.googlesyndication.com"+c;var d=Ha(a)-c.length;if(0>d)return"";a.g.sort(function(n,p){return n-p});c=null;for(var e="",f=0;f<a.g.length;f++)for(var g=a.g[f],l=a.h[g],h=0;h<l.length;h++){if(!d){c=null==c?g:c;break}var m=Ea(l[h],a.i,",$");if(m){m=e+m;if(d>=m.length){d-=m.length;b+=m;e=a.i;break}c=null==c?g:c}}a="";null!=c&&(a=e+"trn="+c);return b+a}function Ha(a){var b=1,c;for(c in a.h)b=c.length>b?c.length:b;return 3997-b-a.i.length-1};function H(a,b,c,d,e,f){if((d?a.g:Math.random())<(e||.01))try{if(c instanceof F)var g=c;else g=new F,qa(c,function(h,m){var n=g,p=n.s++;h=G(m,h);n.g.push(p);n.h[p]=h});var l=Ga(g,a.h,"/pagead/gen_204?id="+b+"&");l&&("undefined"!==typeof f?ra(l,void 0===f?null:f):ra(l,null))}catch(h){}};var I=null;function Ia(){var a=k.performance;return a&&a.now&&a.timing?Math.floor(a.now()+a.timing.navigationStart):Date.now()}function Ja(){var a=void 0===a?k:a;return(a=a.performance)&&a.now?a.now():null};function Ka(a,b){var c=Ja()||Ia();this.label=a;this.type=b;this.value=c;this.duration=0;this.uniqueId=Math.random();this.slotId=void 0};var J=k.performance,La=!!(J&&J.mark&&J.measure&&J.clearMarks),L=function(a){var b=!1,c;return function(){b||(c=a(),b=!0);return c}}(function(){var a;if(a=La){var b;if(null===I){I="";try{a="";try{a=k.top.location.hash}catch(c){a=k.location.hash}a&&(I=(b=a.match(/\bdeid=([\d,]+)/))?b[1]:"")}catch(c){}}b=I;a=!!b.indexOf&&0<=b.indexOf("1337")}return a});
function M(){var a=N;this.h=[];this.i=a||k;var b=null;a&&(a.google_js_reporting_queue=a.google_js_reporting_queue||[],this.h=a.google_js_reporting_queue,b=a.google_measure_js_timing);this.g=L()||(null!=b?b:1>Math.random())}function Ma(a){a&&J&&L()&&(J.clearMarks("goog_"+a.label+"_"+a.uniqueId+"_start"),J.clearMarks("goog_"+a.label+"_"+a.uniqueId+"_end"))}M.prototype.start=function(a,b){if(!this.g)return null;a=new Ka(a,b);b="goog_"+a.label+"_"+a.uniqueId+"_start";J&&L()&&J.mark(b);return a};
M.prototype.end=function(a){if(this.g&&"number"===typeof a.value){a.duration=(Ja()||Ia())-a.value;var b="goog_"+a.label+"_"+a.uniqueId+"_end";J&&L()&&J.mark(b);!this.g||2048<this.h.length||this.h.push(a)}};function Na(){var a=O;this.i=P;this.u=!0;this.g=null;this.o=this.m;this.j=void 0===a?null:a;this.h=!1}
Na.prototype.m=function(a,b,c,d,e){e=e||"jserror";try{var f=new F;f.g.push(1);f.h[1]=G("context",a);b.error&&b.meta&&b.id||(b=new na(b,{message:Q(b)}));if(b.msg){var g=b.msg.substring(0,512);f.g.push(2);f.h[2]=G("msg",g)}var l=b.meta||{};if(this.g)try{this.g(l)}catch(K){}if(d)try{d(l)}catch(K){}b=[l];f.g.push(3);f.h[3]=b;d=k;b=[];g=null;do{var h=d;if(B(h)){var m=h.location.href;g=h.document&&h.document.referrer||null}else m=g,g=null;b.push(new Da(m||""));try{d=h.parent}catch(K){d=null}}while(d&&h!=
d);m=0;for(var n=b.length-1;m<=n;++m)b[m].depth=n-m;h=k;if(h.location&&h.location.ancestorOrigins&&h.location.ancestorOrigins.length==b.length-1)for(n=1;n<b.length;++n){var p=b[n];p.url||(p.url=h.location.ancestorOrigins[n-1]||"",p.l=!0)}var t=new Da(k.location.href,!1);h=null;var U=b.length-1;for(p=U;0<=p;--p){var u=b[p];!h&&Ba.test(u.url)&&(h=u);if(u.url&&!u.l){t=u;break}}u=null;var Wa=b.length&&b[U].url;0!=t.depth&&Wa&&(u=b[U]);var x=new Ca(t,u);if(x.h){var Xa=x.h.url||"";f.g.push(4);f.h[4]=G("top",
Xa)}var V={url:x.g.url||""};if(x.g.url){var W=x.g.url.match(oa),wa=W[1],xa=W[3],ya=W[4];t="";wa&&(t+=wa+":");xa&&(t+="//",t+=xa,ya&&(t+=":"+ya));var za=t}else za="";V=[V,{url:za}];f.g.push(5);f.h[5]=V;H(this.i,e,f,this.h,c)}catch(K){try{H(this.i,e,{context:"ecmserr",rctx:a,msg:Q(K),url:x&&x.g.url},this.h,c)}catch(bb){}}return!0};
function Q(a){var b=a.toString();a.name&&-1==b.indexOf(a.name)&&(b+=": "+a.name);a.message&&-1==b.indexOf(a.message)&&(b+=": "+a.message);if(a.stack){a=a.stack;try{-1==a.indexOf(b)&&(a=b+"\n"+a);for(var c;a!=c;)c=a,a=a.replace(/((https?:\/..*\/)[^\/:]*:\d+(?:.|\n)*)\2/,"$1");b=a.replace(/\n */g,"\n")}catch(d){}}return b};var P,R;if(Aa&&!B(E)){var S="."+ta.domain;try{for(;2<S.split(".").length&&!B(E);)ta.domain=S=S.substr(S.indexOf(".")+1),E=window.parent}catch(a){}B(E)||(E=window)}var N=E,O=new M;function Oa(){if(!N.google_measure_js_timing){var a=O;a.g=!1;a.h!=a.i.google_js_reporting_queue&&(L()&&ea(a.h,Ma),a.h.length=0)}}P=new function(){var a=void 0===a?D:a;this.h="http:"===a.location.protocol?"http:":"https:";this.g=Math.random()};"number"!==typeof N.google_srt&&(N.google_srt=Math.random());var Pa=P,T=N.google_srt;
0<=T&&1>=T&&(Pa.g=T);R=new Na;R.g=function(){};R.h=!0;"complete"==N.document.readyState?Oa():O.g&&A(N,"load",function(){Oa()});function Qa(a){R.g=function(b){ea(a,function(c){c(b)})}}function X(a){H(P,"rsra",a,!0,void 0,void 0)};var Y;if(Y=ja){var Z="IFRAME",Ra=document;Z=String(Z);"application/xhtml+xml"===Ra.contentType&&(Z=Z.toLowerCase());Y="srcdoc"in Ra.createElement(Z)}var Sa=Y;
function Ta(a,b){a.open("text/html","replace");if(void 0===r){var c=null;var d=k.trustedTypes;if(d&&d.createPolicy){try{c=d.createPolicy("goog#html",{createHTML:q,createScript:q,createScriptURL:q})}catch(e){k.console&&k.console.error(e.message)}r=c}else r=c}b=(c=r)?c.createHTML(b):b;b=new w(b,null,ia);a.write(b instanceof w&&b.constructor===w?b.g:"type_error:SafeHtml");a.close()};function Ua(a,b){var c,d=null==(c=pa(!0,void 0).find(function(e){return!!e.google_reactive_sra_lookup}))?void 0:c.google_reactive_sra_lookup;if(d)return X({context:"grsl",params:b}),d[a];if(c=sa())return X({context:"esrsp",params:b}),c[a];X({context:"norsp",params:b});return null};(function(a){try{var b=/\/(r\d+|dev)\/r\d+\/zrt_lookup\.html/.exec(a.location.pathname);b&&b[1]&&Qa([function(c){c.shv=b[1]}])}catch(c){}})(window);function Va(){var a,b=null==(a=ua.exec("#"+D.name)||ua.exec(D.location.href))?void 0:a[2];if(b&&(a=b=decodeURIComponent(b),b=va.exec(a))&&(b=+b[1],!isNaN(b)&&(a=Ua(b,a)))){a=a.creative;b=null;try{b=D.frameElement}catch(d){}var c;if(c=b)try{c=B(b.contentWindow)}catch(d){c=!1}c?Sa?b.srcdoc=a:(b=b.contentWindow)&&Ta(b.document,a):Ta(D.document,a)}}var Ya;
try{R.j&&R.j.g?(Ya=R.j.start((200).toString(),3),Va(),R.j.end(Ya)):Va()}catch(a){var Za=R.u;try{Ma(Ya),Za=R.o(200,new na(a,{message:Q(a)}),void 0,void 0)}catch(b){R.m(217,b)}if(Za){var $a,ab;null==($a=window.console)||null==(ab=$a.error)||ab.call($a,a)}else throw a;};}).call(this);
</script></body></html>