/* This file was automatically generated by CasADi.
   The CasADi copyright holders make no ownership claim of its contents. */
#ifdef __cplusplus
extern "C" {
#endif

/* How to prefix internal symbols */
#ifdef CASADI_CODEGEN_PREFIX
  #define CASADI_NAMESPACE_CONCAT(NS, ID) _CASADI_NAMESPACE_CONCAT(NS, ID)
  #define _CASADI_NAMESPACE_CONCAT(NS, ID) NS ## ID
  #define CASADI_PREFIX(ID) CASADI_NAMESPACE_CONCAT(CODEGEN_PREFIX, ID)
#else
  #define CASADI_PREFIX(ID) cassie_bias_vector_ ## ID
#endif

#include <math.h>

#ifndef casadi_real
#define casadi_real double
#endif

#ifndef casadi_int
#define casadi_int long long int
#endif

/* Add prefix to internal symbols */
#define casadi_f0 CASADI_PREFIX(f0)
#define casadi_s0 CASADI_PREFIX(s0)

/* Symbol visibility in DLLs */
#ifndef CASADI_SYMBOL_EXPORT
  #if defined(_WIN32) || defined(__WIN32__) || defined(__CYGWIN__)
    #if defined(STATIC_LINKED)
      #define CASADI_SYMBOL_EXPORT
    #else
      #define CASADI_SYMBOL_EXPORT __declspec(dllexport)
    #endif
  #elif defined(__GNUC__) && defined(GCC_HASCLASSVISIBILITY)
    #define CASADI_SYMBOL_EXPORT __attribute__ ((visibility ("default")))
  #else
    #define CASADI_SYMBOL_EXPORT
  #endif
#endif

static const casadi_int casadi_s0[12] = {8, 1, 0, 8, 0, 1, 2, 3, 4, 5, 6, 7};

/* cassie_bias_vector:(i0[8],i1[8])->(o0[8]) */
static int casadi_f0(const casadi_real** arg, casadi_real** res, casadi_int* iw, casadi_real* w, int mem) {
  casadi_real a0, a1, a10, a100, a101, a102, a103, a104, a105, a106, a107, a108, a109, a11, a110, a111, a112, a113, a114, a115, a116, a117, a118, a119, a12, a120, a121, a122, a123, a124, a125, a126, a127, a128, a129, a13, a130, a131, a132, a133, a134, a135, a136, a137, a138, a139, a14, a140, a141, a142, a143, a144, a145, a146, a147, a148, a149, a15, a150, a151, a152, a153, a154, a155, a156, a157, a158, a159, a16, a160, a161, a162, a163, a164, a165, a166, a167, a168, a169, a17, a170, a171, a172, a173, a174, a175, a176, a177, a178, a179, a18, a180, a181, a182, a183, a184, a185, a186, a187, a188, a189, a19, a190, a191, a192, a193, a194, a2, a20, a21, a22, a23, a24, a25, a26, a27, a28, a29, a3, a30, a31, a32, a33, a34, a35, a36, a37, a38, a39, a4, a40, a41, a42, a43, a44, a45, a46, a47, a48, a49, a5, a50, a51, a52, a53, a54, a55, a56, a57, a58, a59, a6, a60, a61, a62, a63, a64, a65, a66, a67, a68, a69, a7, a70, a71, a72, a73, a74, a75, a76, a77, a78, a79, a8, a80, a81, a82, a83, a84, a85, a86, a87, a88, a89, a9, a90, a91, a92, a93, a94, a95, a96, a97, a98, a99;
  a0=-1.7929999999999995e-02;
  a1=1.9656080000000000e+00;
  a2=9.8100000000000005e+00;
  a3=arg[0]? arg[0][0] : 0;
  a4=sin(a3);
  a4=(a2*a4);
  a5=(a1*a4);
  a0=(a0*a5);
  a5=9.9999999999999978e-05;
  a3=cos(a3);
  a2=(a2*a3);
  a1=(a1*a2);
  a5=(a5*a1);
  a0=(a0+a5);
  a5=arg[0]? arg[0][1] : 0;
  a1=cos(a5);
  a3=4.8966386501092529e-12;
  a6=arg[0]? arg[0][2] : 0;
  a7=cos(a6);
  a8=(a3*a7);
  a6=sin(a6);
  a8=(a8+a6);
  a9=1.8000000000000002e-02;
  a10=arg[1]? arg[1][2] : 0;
  a11=(a3*a6);
  a11=(a7-a11);
  a12=arg[1]? arg[1][0] : 0;
  a13=(a1*a12);
  a14=(a11*a13);
  a15=4.8965831389580217e-12;
  a16=(a15*a7);
  a16=(a6+a16);
  a17=arg[1]? arg[1][1] : 0;
  a18=-4.4408920985006262e-16;
  a19=(a18*a12);
  a19=(a17+a19);
  a20=(a16*a19);
  a21=(a3*a7);
  a22=5.5511151231257827e-17;
  a23=(a22*a6);
  a21=(a21-a23);
  a5=sin(a5);
  a23=(a5*a12);
  a24=(a21*a23);
  a20=(a20-a24);
  a14=(a14+a20);
  a20=(a10*a14);
  a24=(a17*a23);
  a25=(a8*a24);
  a22=(a22*a7);
  a3=(a3*a6);
  a22=(a22+a3);
  a3=(a17*a13);
  a26=(a22*a3);
  a25=(a25+a26);
  a20=(a20-a25);
  a25=(a9*a20);
  a26=-1.1700000000000000e-02;
  a27=(a15*a24);
  a27=(a3-a27);
  a28=(a26*a27);
  a25=(a25+a28);
  a28=5.0000000000000002e-05;
  a29=5.7922799999999999e+00;
  a30=8.9999999999999997e-02;
  a12=(a30*a12);
  a31=(a1*a12);
  a32=(a17*a31);
  a33=(a5*a4);
  a34=-4.3565151486291145e-15;
  a35=(a34*a1);
  a33=(a33+a35);
  a35=(a18*a1);
  a35=(a35*a2);
  a33=(a33-a35);
  a32=(a32+a33);
  a33=(a15*a32);
  a35=(a18*a5);
  a35=(a35*a2);
  a4=(a1*a4);
  a34=(a34*a5);
  a4=(a4-a34);
  a35=(a35+a4);
  a12=(a5*a12);
  a17=(a17*a12);
  a35=(a35-a17);
  a33=(a33-a35);
  a17=5.9459999999999999e-02;
  a4=(a8*a13);
  a6=(a15*a6);
  a6=(a6-a7);
  a7=(a6*a19);
  a34=(a22*a23);
  a7=(a7-a34);
  a4=(a4+a7);
  a7=(a10*a4);
  a34=(a11*a24);
  a36=(a21*a3);
  a34=(a34+a36);
  a7=(a7+a34);
  a34=(a17*a7);
  a36=(a28*a20);
  a34=(a34+a36);
  a34=(a33+a34);
  a34=(a29*a34);
  a36=(a28*a34);
  a37=-3.5810000000000002e-02;
  a38=(a11*a32);
  a39=(a21*a35);
  a40=1.9346813700545316e-30;
  a2=(a2+a40);
  a40=(a16*a2);
  a39=(a39+a40);
  a38=(a38+a39);
  a39=(a8*a12);
  a40=(a22*a31);
  a39=(a39+a40);
  a40=(a10*a39);
  a38=(a38-a40);
  a40=(a37*a20);
  a41=(a17*a27);
  a40=(a40-a41);
  a40=(a38-a40);
  a40=(a29*a40);
  a41=(a37*a40);
  a36=(a36-a41);
  a25=(a25+a36);
  a36=(a26*a4);
  a41=4.9799999999999997e-02;
  a42=(a15*a13);
  a42=(a42+a23);
  a42=(a10+a42);
  a43=(a41*a42);
  a36=(a36+a43);
  a43=(a11*a12);
  a44=(a21*a31);
  a43=(a43+a44);
  a44=(a37*a4);
  a45=(a17*a42);
  a44=(a44-a45);
  a44=(a43-a44);
  a44=(a29*a44);
  a45=(a17*a44);
  a46=(a28*a42);
  a47=(a37*a14);
  a46=(a46-a47);
  a46=(a39-a46);
  a46=(a29*a46);
  a47=(a28*a46);
  a45=(a45-a47);
  a36=(a36+a45);
  a45=(a14*a36);
  a47=5.6300000000000003e-02;
  a48=(a47*a14);
  a49=(a37*a46);
  a50=(a15*a12);
  a50=(a50-a31);
  a51=(a17*a14);
  a52=(a28*a4);
  a51=(a51-a52);
  a51=(a50-a51);
  a51=(a29*a51);
  a52=(a17*a51);
  a49=(a49-a52);
  a48=(a48+a49);
  a49=(a42*a48);
  a45=(a45-a49);
  a49=(a43*a51);
  a52=(a50*a44);
  a49=(a49-a52);
  a45=(a45+a49);
  a25=(a25+a45);
  a45=arg[0]? arg[0][3] : 0;
  a49=cos(a45);
  a52=2.6478432734699997e-03;
  a53=arg[1]? arg[1][3] : 0;
  a54=(a49*a14);
  a45=sin(a45);
  a55=(a45*a4);
  a54=(a54-a55);
  a55=(a53*a54);
  a56=(a49*a20);
  a57=(a45*a7);
  a56=(a56-a57);
  a55=(a55+a56);
  a56=(a52*a55);
  a57=4.1239300000000000e-02;
  a58=1.0300800000000001e+00;
  a59=1.2000000000000000e-01;
  a60=(a59*a7);
  a33=(a33+a60);
  a60=4.5862000000000000e-02;
  a61=(a49*a4);
  a62=(a45*a14);
  a61=(a61+a62);
  a62=(a53*a61);
  a63=(a45*a20);
  a64=(a49*a7);
  a63=(a63+a64);
  a62=(a62+a63);
  a63=(a60*a62);
  a64=(a57*a55);
  a63=(a63+a64);
  a63=(a33+a63);
  a63=(a58*a63);
  a64=(a57*a63);
  a65=-1.6676000000000000e-03;
  a66=4.4999999999999997e-03;
  a67=(a66*a20);
  a68=(a59*a27);
  a67=(a67-a68);
  a38=(a38-a67);
  a67=(a49*a38);
  a10=(a10*a43);
  a68=(a8*a32);
  a69=(a22*a35);
  a2=(a6*a2);
  a69=(a69+a2);
  a68=(a68+a69);
  a10=(a10+a68);
  a68=(a66*a7);
  a68=(a10-a68);
  a69=(a45*a68);
  a67=(a67-a69);
  a69=(a66*a14);
  a69=(a39+a69);
  a2=(a49*a69);
  a70=(a66*a4);
  a71=(a59*a42);
  a70=(a70-a71);
  a70=(a43-a70);
  a71=(a45*a70);
  a2=(a2+a71);
  a71=(a53*a2);
  a67=(a67-a71);
  a71=(a65*a55);
  a72=(a60*a27);
  a71=(a71-a72);
  a71=(a67-a71);
  a71=(a58*a71);
  a72=(a65*a71);
  a64=(a64-a72);
  a56=(a56+a64);
  a64=7.6406108317899997e-03;
  a72=(a53+a42);
  a73=(a64*a72);
  a70=(a49*a70);
  a69=(a45*a69);
  a70=(a70-a69);
  a69=(a65*a61);
  a74=(a60*a72);
  a69=(a69-a74);
  a69=(a70-a69);
  a69=(a58*a69);
  a74=(a60*a69);
  a75=(a57*a72);
  a76=(a65*a54);
  a75=(a75-a76);
  a75=(a2-a75);
  a75=(a58*a75);
  a76=(a57*a75);
  a74=(a74-a76);
  a73=(a73+a74);
  a74=(a54*a73);
  a76=5.3485317591400001e-03;
  a77=(a76*a54);
  a78=(a65*a75);
  a79=(a59*a14);
  a79=(a50-a79);
  a80=(a60*a54);
  a81=(a57*a61);
  a80=(a80-a81);
  a80=(a79-a80);
  a80=(a58*a80);
  a81=(a60*a80);
  a78=(a78-a81);
  a77=(a77+a78);
  a78=(a72*a77);
  a74=(a74-a78);
  a78=(a70*a80);
  a81=(a79*a69);
  a78=(a78-a81);
  a74=(a74+a78);
  a56=(a56+a74);
  a74=arg[0]? arg[0][4] : 0;
  a78=cos(a74);
  a81=3.5999999999999921e-04;
  a82=arg[1]? arg[1][4] : 0;
  a83=(a78*a54);
  a84=sin(a74);
  a85=(a84*a61);
  a83=(a83-a85);
  a85=(a82*a83);
  a86=(a78*a55);
  a87=(a84*a62);
  a86=(a86-a87);
  a85=(a85+a86);
  a86=(a81*a85);
  a87=3.3399999999999999e-04;
  a88=(a78*a61);
  a89=(a84*a54);
  a88=(a88+a89);
  a89=(a82*a88);
  a90=(a84*a55);
  a91=(a78*a62);
  a90=(a90+a91);
  a89=(a89+a90);
  a90=(a87*a89);
  a86=(a86-a90);
  a90=1.1689999999999995e-03;
  a91=7.6300000000000001e-01;
  a92=6.0679999999999998e-02;
  a93=(a92*a62);
  a94=4.7410000000000001e-02;
  a55=(a94*a55);
  a93=(a93+a55);
  a33=(a33+a93);
  a93=1.8337999999999993e-01;
  a55=(a93*a89);
  a95=(a90*a85);
  a55=(a55+a95);
  a55=(a33+a55);
  a55=(a91*a55);
  a95=(a90*a55);
  a96=2.1229999999999996e-04;
  a97=(a92*a27);
  a67=(a67+a97);
  a97=(a78*a67);
  a53=(a53*a70);
  a68=(a49*a68);
  a38=(a45*a38);
  a68=(a68+a38);
  a53=(a53+a68);
  a68=(a94*a27);
  a68=(a53-a68);
  a38=(a84*a68);
  a97=(a97-a38);
  a38=(a94*a72);
  a38=(a2-a38);
  a98=(a78*a38);
  a99=(a92*a72);
  a99=(a70+a99);
  a100=(a84*a99);
  a98=(a98+a100);
  a100=(a82*a98);
  a97=(a97-a100);
  a100=(a96*a85);
  a101=(a93*a27);
  a100=(a100-a101);
  a100=(a97-a100);
  a100=(a91*a100);
  a101=(a96*a100);
  a95=(a95-a101);
  a86=(a86+a95);
  a95=3.4099999999999998e-02;
  a101=(a82+a72);
  a102=(a95*a101);
  a99=(a78*a99);
  a38=(a84*a38);
  a99=(a99-a38);
  a38=(a96*a88);
  a103=(a93*a101);
  a38=(a38-a103);
  a38=(a99-a38);
  a38=(a91*a38);
  a103=(a93*a38);
  a104=(a90*a101);
  a105=(a96*a83);
  a104=(a104-a105);
  a104=(a98-a104);
  a104=(a91*a104);
  a105=(a90*a104);
  a103=(a103-a105);
  a102=(a102+a103);
  a103=(a83*a102);
  a105=(a87*a88);
  a106=(a95*a83);
  a105=(a105+a106);
  a106=(a96*a104);
  a107=(a92*a54);
  a108=(a94*a61);
  a107=(a107-a108);
  a107=(a79-a107);
  a108=(a93*a83);
  a109=(a90*a88);
  a108=(a108-a109);
  a108=(a107-a108);
  a108=(a91*a108);
  a109=(a93*a108);
  a106=(a106-a109);
  a105=(a105+a106);
  a106=(a101*a105);
  a103=(a103-a106);
  a106=(a99*a108);
  a109=(a107*a38);
  a106=(a106-a109);
  a103=(a103+a106);
  a86=(a86+a103);
  a103=arg[0]? arg[0][5] : 0;
  a106=cos(a103);
  a109=2.1002990493400008e-03;
  a110=arg[1]? arg[1][5] : 0;
  a111=(a106*a83);
  a103=sin(a103);
  a112=(a103*a88);
  a111=(a111-a112);
  a112=(a110*a111);
  a113=(a106*a85);
  a114=(a103*a89);
  a113=(a113-a114);
  a112=(a112+a113);
  a113=(a109*a112);
  a114=-2.5463555055700001e-03;
  a115=(a106*a88);
  a116=(a103*a83);
  a115=(a115+a116);
  a116=(a110*a115);
  a117=(a103*a85);
  a118=(a106*a89);
  a117=(a117+a118);
  a116=(a116+a117);
  a117=(a114*a116);
  a113=(a113-a117);
  a117=-2.2588613590000001e-02;
  a118=1.0300000000000000e+00;
  a119=4.3475999999999998e-01;
  a120=(a119*a89);
  a121=2.0000000000000000e-02;
  a122=(a121*a85);
  a120=(a120+a122);
  a33=(a33+a120);
  a120=1.2114746600000000e-01;
  a122=(a120*a116);
  a123=(a117*a112);
  a122=(a122+a123);
  a122=(a33+a122);
  a122=(a118*a122);
  a123=(a117*a122);
  a124=3.2585742700000000e-03;
  a125=(a119*a27);
  a97=(a97+a125);
  a125=(a106*a97);
  a126=(a82*a99);
  a68=(a78*a68);
  a67=(a84*a67);
  a68=(a68+a67);
  a126=(a126+a68);
  a68=(a121*a27);
  a68=(a126-a68);
  a67=(a103*a68);
  a125=(a125-a67);
  a67=(a121*a101);
  a67=(a98-a67);
  a127=(a106*a67);
  a128=(a119*a101);
  a128=(a99+a128);
  a129=(a103*a128);
  a127=(a127+a129);
  a129=(a110*a127);
  a125=(a125-a129);
  a129=(a124*a112);
  a130=(a120*a27);
  a129=(a129-a130);
  a129=(a125-a129);
  a129=(a118*a129);
  a130=(a124*a129);
  a123=(a123-a130);
  a113=(a113+a123);
  a123=2.6819940744800000e-02;
  a130=(a110+a101);
  a131=(a123*a130);
  a128=(a106*a128);
  a67=(a103*a67);
  a128=(a128-a67);
  a67=(a124*a115);
  a132=(a120*a130);
  a67=(a67-a132);
  a67=(a128-a67);
  a67=(a118*a67);
  a132=(a120*a67);
  a133=(a117*a130);
  a134=(a124*a111);
  a133=(a133-a134);
  a133=(a127-a133);
  a133=(a118*a133);
  a134=(a117*a133);
  a132=(a132-a134);
  a131=(a131+a132);
  a132=(a111*a131);
  a134=(a114*a115);
  a135=2.5539486410499999e-02;
  a136=(a135*a111);
  a134=(a134+a136);
  a136=(a124*a133);
  a137=(a119*a83);
  a138=(a121*a88);
  a137=(a137-a138);
  a137=(a107-a137);
  a138=(a120*a111);
  a139=(a117*a115);
  a138=(a138-a139);
  a138=(a137-a138);
  a138=(a118*a138);
  a139=(a120*a138);
  a136=(a136-a139);
  a134=(a134+a136);
  a136=(a130*a134);
  a132=(a132-a136);
  a136=(a128*a138);
  a139=(a137*a67);
  a136=(a136-a139);
  a132=(a132+a136);
  a113=(a113+a132);
  a132=arg[0]? arg[0][7] : 0;
  a136=cos(a132);
  a139=2.8699999999999998e-04;
  a140=arg[1]? arg[1][7] : 0;
  a141=(a136*a111);
  a132=sin(a132);
  a142=(a132*a115);
  a141=(a141-a142);
  a142=(a140*a141);
  a143=(a136*a112);
  a144=(a132*a116);
  a143=(a143-a144);
  a142=(a142+a143);
  a143=(a139*a142);
  a144=2.7479999999999991e-02;
  a145=1.4979999999999999e-01;
  a146=4.0799999999999997e-01;
  a147=(a146*a116);
  a148=-4.0000000000000001e-02;
  a149=(a148*a112);
  a147=(a147+a149);
  a147=(a33+a147);
  a149=4.7399999999999977e-03;
  a150=(a136*a115);
  a151=(a132*a111);
  a150=(a150+a151);
  a151=(a140*a150);
  a152=(a132*a112);
  a153=(a136*a116);
  a152=(a152+a153);
  a151=(a151+a152);
  a152=(a149*a151);
  a153=(a144*a142);
  a152=(a152+a153);
  a147=(a147+a152);
  a147=(a145*a147);
  a152=(a144*a147);
  a153=-1.3999999999999991e-04;
  a154=(a146*a27);
  a154=(a125+a154);
  a155=(a136*a154);
  a110=(a110*a128);
  a68=(a106*a68);
  a97=(a103*a97);
  a68=(a68+a97);
  a110=(a110+a68);
  a68=(a148*a27);
  a68=(a110-a68);
  a97=(a132*a68);
  a155=(a155-a97);
  a97=(a148*a130);
  a97=(a127-a97);
  a156=(a136*a97);
  a157=(a146*a130);
  a157=(a128+a157);
  a158=(a132*a157);
  a156=(a156+a158);
  a158=(a140*a156);
  a155=(a155-a158);
  a142=(a153*a142);
  a158=(a149*a27);
  a142=(a142-a158);
  a155=(a155-a142);
  a155=(a145*a155);
  a142=(a153*a155);
  a152=(a152-a142);
  a143=(a143+a152);
  a152=4.4900000000000002e-04;
  a142=(a140+a130);
  a158=(a152*a142);
  a157=(a136*a157);
  a97=(a132*a97);
  a157=(a157-a97);
  a97=(a153*a150);
  a159=(a149*a142);
  a97=(a97-a159);
  a97=(a157-a97);
  a97=(a145*a97);
  a159=(a149*a97);
  a160=(a144*a142);
  a161=(a153*a141);
  a160=(a160-a161);
  a160=(a156-a160);
  a160=(a145*a160);
  a161=(a144*a160);
  a159=(a159-a161);
  a158=(a158+a159);
  a159=(a141*a158);
  a161=1.7099999999999998e-04;
  a162=(a161*a141);
  a163=(a153*a160);
  a164=(a146*a111);
  a165=(a148*a115);
  a164=(a164-a165);
  a164=(a137-a164);
  a165=(a149*a141);
  a166=(a144*a150);
  a165=(a165-a166);
  a165=(a164-a165);
  a165=(a145*a165);
  a166=(a149*a165);
  a163=(a163-a166);
  a162=(a162+a163);
  a163=(a142*a162);
  a159=(a159-a163);
  a163=(a157*a165);
  a166=(a164*a97);
  a163=(a163-a166);
  a159=(a159+a163);
  a143=(a143+a159);
  a159=(a136*a143);
  a140=(a140*a157);
  a68=(a136*a68);
  a154=(a132*a154);
  a68=(a68+a154);
  a140=(a140+a68);
  a68=(a144*a27);
  a154=(a153*a151);
  a68=(a68+a154);
  a140=(a140-a68);
  a145=(a145*a140);
  a140=(a153*a145);
  a68=(a149*a147);
  a140=(a140-a68);
  a161=(a161*a151);
  a140=(a140-a161);
  a139=(a139*a150);
  a161=(a144*a165);
  a153=(a153*a97);
  a161=(a161-a153);
  a139=(a139+a161);
  a161=(a142*a139);
  a158=(a150*a158);
  a161=(a161-a158);
  a164=(a164*a160);
  a158=(a156*a165);
  a164=(a164-a158);
  a161=(a161+a164);
  a140=(a140+a161);
  a161=(a132*a140);
  a159=(a159-a161);
  a161=(a150*a97);
  a164=(a141*a160);
  a161=(a161-a164);
  a147=(a147+a161);
  a161=(a148*a147);
  a159=(a159+a161);
  a113=(a113+a159);
  a159=-9.1210632404432879e-01;
  a161=arg[0]? arg[0][6] : 0;
  a164=cos(a161);
  a158=(a159*a164);
  a153=-4.0991685501621838e-01;
  a151=sin(a161);
  a68=(a153*a151);
  a158=(a158+a68);
  a68=3.0199999999999975e-05;
  a154=arg[1]? arg[1][6] : 0;
  a153=(a153*a164);
  a159=(a159*a151);
  a153=(a153-a159);
  a159=(a153*a115);
  a163=-9.0952133923639877e-01;
  a166=(a163*a164);
  a167=4.0828535283930928e-01;
  a168=(a167*a151);
  a166=(a166-a168);
  a168=(a166*a111);
  a169=-6.8841160995732439e-02;
  a170=(a169*a164);
  a171=3.6947588489951361e-02;
  a172=(a171*a151);
  a170=(a170-a172);
  a172=(a170*a130);
  a168=(a168+a172);
  a159=(a159+a168);
  a168=(a154*a159);
  a172=(a158*a112);
  a171=(a171*a164);
  a169=(a169*a151);
  a171=(a171+a169);
  a169=(a171*a27);
  a167=(a167*a164);
  a163=(a163*a151);
  a167=(a167+a163);
  a163=(a167*a116);
  a169=(a169-a163);
  a172=(a172+a169);
  a168=(a168+a172);
  a172=(a68*a168);
  a169=2.2000000000000001e-03;
  a163=1.2600000000000000e-01;
  a151=5.4977824579255999e-03;
  a164=-3.0589999999999999e-02;
  a173=(a164*a27);
  a174=9.2000000000000003e-04;
  a175=(a174*a116);
  a173=(a173+a175);
  a173=(a110-a173);
  a175=(a151*a173);
  a176=-7.7935897572995613e-02;
  a177=(a174*a112);
  a178=-1.2690000000000000e-02;
  a179=(a178*a27);
  a177=(a177-a179);
  a125=(a125-a177);
  a177=(a176*a125);
  a179=9.9694321315586321e-01;
  a180=(a178*a116);
  a181=(a164*a112);
  a180=(a180+a181);
  a33=(a33+a180);
  a180=(a179*a33);
  a177=(a177+a180);
  a175=(a175+a177);
  a177=8.1000000000000003e-02;
  a180=(a153*a112);
  a181=(a170*a27);
  a182=(a166*a116);
  a181=(a181-a182);
  a180=(a180+a181);
  a181=(a158*a115);
  a182=(a167*a111);
  a183=(a171*a130);
  a182=(a182+a183);
  a181=(a181+a182);
  a182=(a154*a181);
  a180=(a180-a182);
  a182=(a177*a180);
  a168=(a169*a168);
  a182=(a182-a168);
  a175=(a175-a182);
  a175=(a163*a175);
  a182=(a169*a175);
  a172=(a172+a182);
  a182=1.0300000000000001e-03;
  a168=(a151*a115);
  a183=(a176*a111);
  a184=(a179*a130);
  a183=(a183+a184);
  a168=(a168+a183);
  a168=(a154+a168);
  a183=(a182*a168);
  a184=(a164*a130);
  a185=(a174*a111);
  a184=(a184-a185);
  a184=(a127-a184);
  a185=(a153*a184);
  a186=(a174*a115);
  a187=(a178*a130);
  a186=(a186-a187);
  a186=(a128-a186);
  a187=(a166*a186);
  a188=(a178*a111);
  a189=(a164*a115);
  a188=(a188-a189);
  a188=(a137-a188);
  a189=(a170*a188);
  a187=(a187+a189);
  a185=(a185+a187);
  a187=(a177*a168);
  a187=(a185+a187);
  a187=(a163*a187);
  a189=(a177*a187);
  a190=(a158*a184);
  a191=(a167*a186);
  a192=(a171*a188);
  a191=(a191+a192);
  a190=(a190+a191);
  a191=(a169*a168);
  a191=(a190-a191);
  a191=(a163*a191);
  a192=(a169*a191);
  a189=(a189-a192);
  a183=(a183+a189);
  a189=(a159*a183);
  a192=1.0499999999999999e-03;
  a193=(a192*a159);
  a184=(a151*a184);
  a186=(a176*a186);
  a188=(a179*a188);
  a186=(a186+a188);
  a184=(a184+a186);
  a186=(a177*a159);
  a188=(a169*a181);
  a186=(a186-a188);
  a186=(a184-a186);
  a186=(a163*a186);
  a188=(a177*a186);
  a193=(a193-a188);
  a188=(a168*a193);
  a189=(a189-a188);
  a188=(a185*a186);
  a194=(a184*a187);
  a188=(a188-a194);
  a189=(a189+a188);
  a172=(a172+a189);
  a189=(a158*a172);
  a192=(a192*a180);
  a180=(a177*a175);
  a192=(a192-a180);
  a68=(a68*a181);
  a180=(a169*a186);
  a68=(a68+a180);
  a180=(a168*a68);
  a183=(a181*a183);
  a180=(a180-a183);
  a184=(a184*a191);
  a183=(a190*a186);
  a184=(a184-a183);
  a180=(a180+a184);
  a192=(a192+a180);
  a180=(a153*a192);
  a184=(a151*a112);
  a183=(a179*a27);
  a188=(a176*a116);
  a183=(a183-a188);
  a184=(a184+a183);
  a182=(a182*a184);
  a183=(a153*a173);
  a188=(a166*a125);
  a194=(a170*a33);
  a188=(a188+a194);
  a183=(a183+a188);
  a188=(a154*a190);
  a183=(a183-a188);
  a188=(a177*a184);
  a183=(a183+a188);
  a183=(a163*a183);
  a177=(a177*a183);
  a188=(a154*a185);
  a173=(a158*a173);
  a125=(a167*a125);
  a33=(a171*a33);
  a125=(a125+a33);
  a173=(a173+a125);
  a188=(a188+a173);
  a184=(a169*a184);
  a188=(a188-a184);
  a163=(a163*a188);
  a169=(a169*a163);
  a177=(a177-a169);
  a182=(a182+a177);
  a193=(a181*a193);
  a68=(a159*a68);
  a193=(a193-a68);
  a190=(a190*a187);
  a185=(a185*a191);
  a190=(a190-a185);
  a193=(a193+a190);
  a182=(a182+a193);
  a193=(a151*a182);
  a180=(a180+a193);
  a189=(a189+a180);
  a180=(a159*a186);
  a193=(a168*a187);
  a180=(a180-a193);
  a163=(a163+a180);
  a180=(a171*a163);
  a168=(a168*a191);
  a186=(a181*a186);
  a168=(a168-a186);
  a183=(a183+a168);
  a168=(a170*a183);
  a181=(a181*a187);
  a159=(a159*a191);
  a181=(a181-a159);
  a175=(a175+a181);
  a181=(a179*a175);
  a168=(a168+a181);
  a180=(a180+a168);
  a168=(a164*a180);
  a181=(a167*a163);
  a159=(a166*a183);
  a191=(a176*a175);
  a159=(a159+a191);
  a181=(a181+a159);
  a159=(a174*a181);
  a168=(a168-a159);
  a189=(a189+a168);
  a113=(a113+a189);
  a189=(a106*a113);
  a112=(a114*a112);
  a135=(a135*a116);
  a112=(a112-a135);
  a135=(a117*a27);
  a116=(a124*a116);
  a135=(a135+a116);
  a110=(a110-a135);
  a118=(a118*a110);
  a110=(a124*a118);
  a135=(a120*a122);
  a110=(a110-a135);
  a112=(a112+a110);
  a109=(a109*a115);
  a114=(a114*a111);
  a109=(a109+a114);
  a114=(a117*a138);
  a124=(a124*a67);
  a114=(a114-a124);
  a109=(a109+a114);
  a114=(a130*a109);
  a131=(a115*a131);
  a114=(a114-a131);
  a137=(a137*a133);
  a131=(a127*a138);
  a137=(a137-a131);
  a114=(a114+a137);
  a112=(a112+a114);
  a143=(a132*a143);
  a140=(a136*a140);
  a143=(a143+a140);
  a140=(a146*a147);
  a143=(a143-a140);
  a112=(a112+a143);
  a167=(a167*a172);
  a166=(a166*a192);
  a176=(a176*a182);
  a166=(a166+a176);
  a167=(a167+a166);
  a158=(a158*a163);
  a153=(a153*a183);
  a151=(a151*a175);
  a153=(a153+a151);
  a158=(a158+a153);
  a174=(a174*a158);
  a153=(a178*a180);
  a174=(a174-a153);
  a167=(a167+a174);
  a112=(a112+a167);
  a167=(a103*a112);
  a189=(a189-a167);
  a167=(a115*a67);
  a174=(a111*a133);
  a167=(a167-a174);
  a122=(a122+a167);
  a122=(a122+a147);
  a122=(a122+a180);
  a180=(a121*a122);
  a189=(a189+a180);
  a86=(a86+a189);
  a189=(a78*a86);
  a85=(a87*a85);
  a180=(a95*a89);
  a85=(a85-a180);
  a180=(a90*a27);
  a89=(a96*a89);
  a180=(a180+a89);
  a126=(a126-a180);
  a91=(a91*a126);
  a126=(a96*a91);
  a180=(a93*a55);
  a126=(a126-a180);
  a85=(a85+a126);
  a81=(a81*a88);
  a87=(a87*a83);
  a81=(a81+a87);
  a87=(a90*a108);
  a96=(a96*a38);
  a87=(a87-a96);
  a81=(a81+a87);
  a87=(a101*a81);
  a102=(a88*a102);
  a87=(a87-a102);
  a107=(a107*a104);
  a102=(a98*a108);
  a107=(a107-a102);
  a87=(a87+a107);
  a85=(a85+a87);
  a113=(a103*a113);
  a112=(a106*a112);
  a113=(a113+a112);
  a112=(a119*a122);
  a113=(a113-a112);
  a85=(a85+a113);
  a113=(a84*a85);
  a189=(a189-a113);
  a113=(a88*a38);
  a112=(a83*a104);
  a113=(a113-a112);
  a55=(a55+a113);
  a55=(a55+a122);
  a122=(a94*a55);
  a189=(a189+a122);
  a56=(a56+a189);
  a189=(a49*a56);
  a122=(a57*a27);
  a113=(a65*a62);
  a122=(a122+a113);
  a53=(a53-a122);
  a58=(a58*a53);
  a53=(a65*a58);
  a122=(a60*a63);
  a53=(a53-a122);
  a76=(a76*a62);
  a53=(a53-a76);
  a52=(a52*a61);
  a76=(a57*a80);
  a65=(a65*a69);
  a76=(a76-a65);
  a52=(a52+a76);
  a76=(a72*a52);
  a73=(a61*a73);
  a76=(a76-a73);
  a79=(a79*a75);
  a73=(a2*a80);
  a79=(a79-a73);
  a76=(a76+a79);
  a53=(a53+a76);
  a86=(a84*a86);
  a85=(a78*a85);
  a86=(a86+a85);
  a85=(a92*a55);
  a86=(a86-a85);
  a53=(a53+a86);
  a86=(a45*a53);
  a189=(a189-a86);
  a86=(a54*a80);
  a85=(a72*a69);
  a86=(a86-a85);
  a86=(a58+a86);
  a85=(a83*a108);
  a76=(a101*a38);
  a85=(a85-a76);
  a85=(a91+a85);
  a76=(a111*a138);
  a79=(a130*a67);
  a76=(a76-a79);
  a76=(a118+a76);
  a79=(a141*a165);
  a73=(a142*a97);
  a79=(a79-a73);
  a79=(a145+a79);
  a73=(a136*a79);
  a142=(a142*a160);
  a165=(a150*a165);
  a142=(a142-a165);
  a142=(a155+a142);
  a165=(a132*a142);
  a73=(a73-a165);
  a76=(a76+a73);
  a76=(a76+a158);
  a165=(a106*a76);
  a130=(a130*a133);
  a138=(a115*a138);
  a130=(a130-a138);
  a130=(a129+a130);
  a132=(a132*a79);
  a136=(a136*a142);
  a132=(a132+a136);
  a130=(a130+a132);
  a130=(a130+a181);
  a136=(a103*a130);
  a165=(a165-a136);
  a85=(a85+a165);
  a136=(a78*a85);
  a101=(a101*a104);
  a108=(a88*a108);
  a101=(a101-a108);
  a101=(a100+a101);
  a103=(a103*a76);
  a106=(a106*a130);
  a103=(a103+a106);
  a101=(a101+a103);
  a106=(a84*a101);
  a136=(a136-a106);
  a86=(a86+a136);
  a106=(a45*a86);
  a72=(a72*a75);
  a80=(a61*a80);
  a72=(a72-a80);
  a72=(a71+a72);
  a84=(a84*a85);
  a78=(a78*a101);
  a84=(a84+a78);
  a72=(a72+a84);
  a78=(a49*a72);
  a106=(a106+a78);
  a78=(a66*a106);
  a189=(a189-a78);
  a25=(a25+a189);
  a189=(a8*a25);
  a78=(a28*a27);
  a101=(a37*a7);
  a78=(a78+a101);
  a10=(a10-a78);
  a29=(a29*a10);
  a10=(a37*a29);
  a78=(a17*a34);
  a10=(a10-a78);
  a47=(a47*a7);
  a10=(a10-a47);
  a9=(a9*a4);
  a47=(a26*a42);
  a9=(a9+a47);
  a47=(a28*a51);
  a37=(a37*a44);
  a47=(a47-a37);
  a9=(a9+a47);
  a47=(a42*a9);
  a36=(a4*a36);
  a47=(a47-a36);
  a50=(a50*a46);
  a36=(a39*a51);
  a50=(a50-a36);
  a47=(a47+a50);
  a10=(a10+a47);
  a56=(a45*a56);
  a53=(a49*a53);
  a56=(a56+a53);
  a49=(a49*a86);
  a45=(a45*a72);
  a49=(a49-a45);
  a66=(a66*a49);
  a45=(a61*a69);
  a72=(a54*a75);
  a45=(a45-a72);
  a63=(a63+a45);
  a63=(a63+a55);
  a55=(a59*a63);
  a66=(a66-a55);
  a56=(a56+a66);
  a10=(a10+a56);
  a56=(a11*a10);
  a26=(a26*a20);
  a41=(a41*a27);
  a26=(a26+a41);
  a17=(a17*a40);
  a28=(a28*a29);
  a17=(a17-a28);
  a26=(a26+a17);
  a48=(a4*a48);
  a9=(a14*a9);
  a48=(a48-a9);
  a39=(a39*a44);
  a43=(a43*a46);
  a39=(a39-a43);
  a48=(a48+a39);
  a26=(a26+a48);
  a64=(a64*a27);
  a60=(a60*a71);
  a57=(a57*a58);
  a60=(a60-a57);
  a64=(a64+a60);
  a61=(a61*a77);
  a54=(a54*a52);
  a61=(a61-a54);
  a2=(a2*a69);
  a70=(a70*a75);
  a2=(a2-a70);
  a61=(a61+a2);
  a64=(a64+a61);
  a95=(a95*a27);
  a93=(a93*a100);
  a90=(a90*a91);
  a93=(a93-a90);
  a95=(a95+a93);
  a88=(a88*a105);
  a83=(a83*a81);
  a88=(a88-a83);
  a98=(a98*a38);
  a99=(a99*a104);
  a98=(a98-a99);
  a88=(a88+a98);
  a95=(a95+a88);
  a123=(a123*a27);
  a120=(a120*a129);
  a117=(a117*a118);
  a120=(a120-a117);
  a123=(a123+a120);
  a115=(a115*a134);
  a111=(a111*a109);
  a115=(a115-a111);
  a127=(a127*a67);
  a128=(a128*a133);
  a127=(a127-a128);
  a115=(a115+a127);
  a123=(a123+a115);
  a152=(a152*a27);
  a149=(a149*a155);
  a144=(a144*a145);
  a149=(a149-a144);
  a152=(a152+a149);
  a150=(a150*a162);
  a141=(a141*a139);
  a150=(a150-a141);
  a156=(a156*a97);
  a157=(a157*a160);
  a156=(a156-a157);
  a150=(a150+a156);
  a152=(a152+a150);
  a146=(a146*a132);
  a148=(a148*a73);
  a146=(a146-a148);
  a146=(a152+a146);
  a123=(a123+a146);
  a171=(a171*a172);
  a170=(a170*a192);
  a179=(a179*a182);
  a170=(a170+a179);
  a171=(a171+a170);
  a178=(a178*a181);
  a164=(a164*a158);
  a178=(a178-a164);
  a171=(a171+a178);
  a123=(a123+a171);
  a119=(a119*a103);
  a121=(a121*a165);
  a119=(a119-a121);
  a119=(a123+a119);
  a95=(a95+a119);
  a92=(a92*a84);
  a94=(a94*a136);
  a92=(a92-a94);
  a92=(a95+a92);
  a64=(a64+a92);
  a59=(a59*a106);
  a59=(a64+a59);
  a26=(a26+a59);
  a59=(a15*a26);
  a56=(a56+a59);
  a189=(a189+a56);
  a56=6.4400000000000013e-03;
  a59=(a56*a24);
  a92=5.5700000000000000e-02;
  a94=1.3166080000000000e+00;
  a24=(a92*a24);
  a35=(a35+a24);
  a35=(a94*a35);
  a24=(a92*a35);
  a59=(a59+a24);
  a24=8.4199999999999998e-04;
  a24=(a24*a19);
  a136=(a23*a24);
  a84=(a92*a23);
  a84=(a12-a84);
  a84=(a94*a84);
  a119=(a92*a84);
  a121=6.0800000000000003e-03;
  a165=(a121*a23);
  a119=(a119-a165);
  a165=(a19*a119);
  a136=(a136+a165);
  a59=(a59+a136);
  a189=(a189-a59);
  a189=(a1*a189);
  a119=(a13*a119);
  a56=(a56*a13);
  a59=(a92*a13);
  a59=(a31-a59);
  a59=(a94*a59);
  a136=(a92*a59);
  a56=(a56-a136);
  a23=(a23*a56);
  a119=(a119+a23);
  a12=(a12*a59);
  a31=(a31*a84);
  a12=(a12-a31);
  a119=(a119+a12);
  a6=(a6*a25);
  a16=(a16*a10);
  a6=(a6+a16);
  a119=(a119+a6);
  a18=(a18*a119);
  a6=(a92*a3);
  a32=(a32-a6);
  a94=(a94*a32);
  a92=(a92*a94);
  a121=(a121*a3);
  a92=(a92-a121);
  a56=(a19*a56);
  a13=(a13*a24);
  a56=(a56-a13);
  a92=(a92+a56);
  a25=(a22*a25);
  a10=(a21*a10);
  a10=(a10-a26);
  a25=(a25+a10);
  a92=(a92+a25);
  a92=(a5*a92);
  a18=(a18-a92);
  a189=(a189+a18);
  a59=(a19*a59);
  a94=(a94-a59);
  a59=(a14*a51);
  a18=(a42*a44);
  a59=(a59-a18);
  a29=(a29+a59);
  a29=(a29+a49);
  a8=(a8*a29);
  a42=(a42*a46);
  a51=(a4*a51);
  a42=(a42-a51);
  a40=(a40+a42);
  a40=(a40+a106);
  a11=(a11*a40);
  a4=(a4*a44);
  a14=(a14*a46);
  a4=(a4-a14);
  a34=(a34+a4);
  a34=(a34+a63);
  a15=(a15*a34);
  a11=(a11+a15);
  a8=(a8+a11);
  a94=(a94+a8);
  a5=(a5*a94);
  a19=(a19*a84);
  a35=(a35+a19);
  a22=(a22*a29);
  a21=(a21*a40);
  a21=(a21-a34);
  a22=(a22+a21);
  a35=(a35+a22);
  a1=(a1*a35);
  a5=(a5+a1);
  a30=(a30*a5);
  a189=(a189+a30);
  a0=(a0+a189);
  a189=1.;
  a0=(a0+a189);
  if (res[0]!=0) res[0][0]=a0;
  a119=(a119+a189);
  if (res[0]!=0) res[0][1]=a119;
  a26=(a26+a189);
  if (res[0]!=0) res[0][2]=a26;
  a64=(a64+a189);
  if (res[0]!=0) res[0][3]=a64;
  a64=2300.;
  a64=(a64*a74);
  a74=4.5999999999999996e+00;
  a74=(a74*a82);
  a64=(a64+a74);
  a95=(a95+a64);
  a95=(a95+a189);
  if (res[0]!=0) res[0][4]=a95;
  a123=(a123+a189);
  if (res[0]!=0) res[0][5]=a123;
  a123=2000.;
  a123=(a123*a161);
  a161=4.;
  a161=(a161*a154);
  a123=(a123+a161);
  a182=(a182+a123);
  a182=(a182+a189);
  if (res[0]!=0) res[0][6]=a182;
  a152=(a152+a189);
  if (res[0]!=0) res[0][7]=a152;
  return 0;
}

CASADI_SYMBOL_EXPORT int cassie_bias_vector(const casadi_real** arg, casadi_real** res, casadi_int* iw, casadi_real* w, int mem){
  return casadi_f0(arg, res, iw, w, mem);
}

CASADI_SYMBOL_EXPORT int cassie_bias_vector_alloc_mem(void) {
  return 0;
}

CASADI_SYMBOL_EXPORT int cassie_bias_vector_init_mem(int mem) {
  return 0;
}

CASADI_SYMBOL_EXPORT void cassie_bias_vector_free_mem(int mem) {
}

CASADI_SYMBOL_EXPORT int cassie_bias_vector_checkout(void) {
  return 0;
}

CASADI_SYMBOL_EXPORT void cassie_bias_vector_release(int mem) {
}

CASADI_SYMBOL_EXPORT void cassie_bias_vector_incref(void) {
}

CASADI_SYMBOL_EXPORT void cassie_bias_vector_decref(void) {
}

CASADI_SYMBOL_EXPORT casadi_int cassie_bias_vector_n_in(void) { return 2;}

CASADI_SYMBOL_EXPORT casadi_int cassie_bias_vector_n_out(void) { return 1;}

CASADI_SYMBOL_EXPORT casadi_real cassie_bias_vector_default_in(casadi_int i){
  switch (i) {
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT const char* cassie_bias_vector_name_in(casadi_int i){
  switch (i) {
    case 0: return "i0";
    case 1: return "i1";
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT const char* cassie_bias_vector_name_out(casadi_int i){
  switch (i) {
    case 0: return "o0";
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT const casadi_int* cassie_bias_vector_sparsity_in(casadi_int i) {
  switch (i) {
    case 0: return casadi_s0;
    case 1: return casadi_s0;
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT const casadi_int* cassie_bias_vector_sparsity_out(casadi_int i) {
  switch (i) {
    case 0: return casadi_s0;
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT int cassie_bias_vector_work(casadi_int *sz_arg, casadi_int* sz_res, casadi_int *sz_iw, casadi_int *sz_w) {
  if (sz_arg) *sz_arg = 2;
  if (sz_res) *sz_res = 1;
  if (sz_iw) *sz_iw = 0;
  if (sz_w) *sz_w = 0;
  return 0;
}


#ifdef __cplusplus
} /* extern "C" */
#endif
