// (C) Copyright Vesa Karvonen 2004.
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE.)

#define ORDER_PP_NAT_PRED(d) ORDER_PP_NAT_PRED_##d
#define ORDER_PP_NAT_PRED_0 ORDER_PP_NAT_PRED_A
#define ORDER_PP_NAT_PRED_1 (0)
#define ORDER_PP_NAT_PRED_2 (1)
#define ORDER_PP_NAT_PRED_3 (2)
#define ORDER_PP_NAT_PRED_4 (3)
#define ORDER_PP_NAT_PRED_5 (4)
#define ORDER_PP_NAT_PRED_6 (5)
#define ORDER_PP_NAT_PRED_7 (6)
#define ORDER_PP_NAT_PRED_8 (7)
#define ORDER_PP_NAT_PRED_9 (8)
#define ORDER_PP_NAT_PRED_00 ()(01)
#define ORDER_PP_NAT_PRED_01 (00)
#define ORDER_PP_NAT_PRED_02 (01)
#define ORDER_PP_NAT_PRED_03 (02)
#define ORDER_PP_NAT_PRED_04 (03)
#define ORDER_PP_NAT_PRED_05 (04)
#define ORDER_PP_NAT_PRED_06 (05)
#define ORDER_PP_NAT_PRED_07 (06)
#define ORDER_PP_NAT_PRED_08 (07)
#define ORDER_PP_NAT_PRED_09 (08)
#define ORDER_PP_NAT_PRED_A(d) ORDER_PP_NAT_PRED_A_##d
#define ORDER_PP_NAT_PRED_A_0 (9)ORDER_PP_NAT_PRED_B
#define ORDER_PP_NAT_PRED_A_1 (9)(0)
#define ORDER_PP_NAT_PRED_A_2 (9)(1)
#define ORDER_PP_NAT_PRED_A_3 (9)(2)
#define ORDER_PP_NAT_PRED_A_4 (9)(3)
#define ORDER_PP_NAT_PRED_A_5 (9)(4)
#define ORDER_PP_NAT_PRED_A_6 (9)(5)
#define ORDER_PP_NAT_PRED_A_7 (9)(6)
#define ORDER_PP_NAT_PRED_A_8 (9)(7)
#define ORDER_PP_NAT_PRED_A_9 (9)(8)
#define ORDER_PP_NAT_PRED_A_01 (09)
#define ORDER_PP_NAT_PRED_A_02 (9)(01)
#define ORDER_PP_NAT_PRED_A_03 (9)(02)
#define ORDER_PP_NAT_PRED_A_04 (9)(03)
#define ORDER_PP_NAT_PRED_A_05 (9)(04)
#define ORDER_PP_NAT_PRED_A_06 (9)(05)
#define ORDER_PP_NAT_PRED_A_07 (9)(06)
#define ORDER_PP_NAT_PRED_A_08 (9)(07)
#define ORDER_PP_NAT_PRED_A_09 (9)(08)
#define ORDER_PP_NAT_PRED_B(d) ORDER_PP_NAT_PRED_B_##d
#define ORDER_PP_NAT_PRED_B_0 (9)ORDER_PP_NAT_PRED_A
#define ORDER_PP_NAT_PRED_B_1 (9)(0)
#define ORDER_PP_NAT_PRED_B_2 (9)(1)
#define ORDER_PP_NAT_PRED_B_3 (9)(2)
#define ORDER_PP_NAT_PRED_B_4 (9)(3)
#define ORDER_PP_NAT_PRED_B_5 (9)(4)
#define ORDER_PP_NAT_PRED_B_6 (9)(5)
#define ORDER_PP_NAT_PRED_B_7 (9)(6)
#define ORDER_PP_NAT_PRED_B_8 (9)(7)
#define ORDER_PP_NAT_PRED_B_9 (9)(8)
#define ORDER_PP_NAT_PRED_B_01 (09)
#define ORDER_PP_NAT_PRED_B_02 (9)(01)
#define ORDER_PP_NAT_PRED_B_03 (9)(02)
#define ORDER_PP_NAT_PRED_B_04 (9)(03)
#define ORDER_PP_NAT_PRED_B_05 (9)(04)
#define ORDER_PP_NAT_PRED_B_06 (9)(05)
#define ORDER_PP_NAT_PRED_B_07 (9)(06)
#define ORDER_PP_NAT_PRED_B_08 (9)(07)
#define ORDER_PP_NAT_PRED_B_09 (9)(08)

#define ORDER_PP_NAT_SUCC(d) ORDER_PP_NAT_SUCC_##d
#define ORDER_PP_NAT_SUCC_ (00)
#define ORDER_PP_NAT_SUCC_0 (1)
#define ORDER_PP_NAT_SUCC_1 (2)
#define ORDER_PP_NAT_SUCC_2 (3)
#define ORDER_PP_NAT_SUCC_3 (4)
#define ORDER_PP_NAT_SUCC_4 (5)
#define ORDER_PP_NAT_SUCC_5 (6)
#define ORDER_PP_NAT_SUCC_6 (7)
#define ORDER_PP_NAT_SUCC_7 (8)
#define ORDER_PP_NAT_SUCC_8 (9)
#define ORDER_PP_NAT_SUCC_9 (0)ORDER_PP_NAT_SUCC_B
#define ORDER_PP_NAT_SUCC_00 (01)
#define ORDER_PP_NAT_SUCC_01 (02)
#define ORDER_PP_NAT_SUCC_02 (03)
#define ORDER_PP_NAT_SUCC_03 (04)
#define ORDER_PP_NAT_SUCC_04 (05)
#define ORDER_PP_NAT_SUCC_05 (06)
#define ORDER_PP_NAT_SUCC_06 (07)
#define ORDER_PP_NAT_SUCC_07 (08)
#define ORDER_PP_NAT_SUCC_08 (09)
#define ORDER_PP_NAT_SUCC_09 (0)(01)
#define ORDER_PP_NAT_SUCC_B(d) ORDER_PP_NAT_SUCC_B_##d
#define ORDER_PP_NAT_SUCC_B_0 (1)
#define ORDER_PP_NAT_SUCC_B_1 (2)
#define ORDER_PP_NAT_SUCC_B_2 (3)
#define ORDER_PP_NAT_SUCC_B_3 (4)
#define ORDER_PP_NAT_SUCC_B_4 (5)
#define ORDER_PP_NAT_SUCC_B_5 (6)
#define ORDER_PP_NAT_SUCC_B_6 (7)
#define ORDER_PP_NAT_SUCC_B_7 (8)
#define ORDER_PP_NAT_SUCC_B_8 (9)
#define ORDER_PP_NAT_SUCC_B_9 (0)ORDER_PP_NAT_SUCC
#define ORDER_PP_NAT_SUCC_B_00 (01)
#define ORDER_PP_NAT_SUCC_B_01 (02)
#define ORDER_PP_NAT_SUCC_B_02 (03)
#define ORDER_PP_NAT_SUCC_B_03 (04)
#define ORDER_PP_NAT_SUCC_B_04 (05)
#define ORDER_PP_NAT_SUCC_B_05 (06)
#define ORDER_PP_NAT_SUCC_B_06 (07)
#define ORDER_PP_NAT_SUCC_B_07 (08)
#define ORDER_PP_NAT_SUCC_B_08 (09)
#define ORDER_PP_NAT_SUCC_B_09 (0)(01)

#define ORDER_PP_NAT_TIMES_DIGIT_0 1 ORDER_PP_NAT_EAT
#define ORDER_PP_NAT_TIMES_DIGIT_1(d) ORDER_PP_NAT_TIMES_DIGIT_LOOKUP_##d(,1_B,0,,00,,000,,0000,,00000,,000000,,0000000,,00000000,,000000000)
#define ORDER_PP_NAT_TIMES_DIGIT_1_B(d) ORDER_PP_NAT_TIMES_DIGIT_LOOKUP_##d(,1,0,,00,,000,,0000,,00000,,000000,,0000000,,00000000,,000000000)
#define ORDER_PP_NAT_TIMES_DIGIT_2(d) ORDER_PP_NAT_TIMES_DIGIT_LOOKUP_##d(,2_B,00,,0000,,000000,,00000000,0,,0,00,0,0000,0,000000,0,00000000)
#define ORDER_PP_NAT_TIMES_DIGIT_2_B(d) ORDER_PP_NAT_TIMES_DIGIT_LOOKUP_##d(,2,00,,0000,,000000,,00000000,0,,0,00,0,0000,0,000000,0,00000000)
#define ORDER_PP_NAT_TIMES_DIGIT_3(d) ORDER_PP_NAT_TIMES_DIGIT_LOOKUP_##d(,3_B,000,,000000,,000000000,0,00,0,00000,0,00000000,00,0,00,0000,00,0000000)
#define ORDER_PP_NAT_TIMES_DIGIT_3_B(d) ORDER_PP_NAT_TIMES_DIGIT_LOOKUP_##d(,3,000,,000000,,000000000,0,00,0,00000,0,00000000,00,0,00,0000,00,0000000)
#define ORDER_PP_NAT_TIMES_DIGIT_4(d) ORDER_PP_NAT_TIMES_DIGIT_LOOKUP_##d(,4_B,0000,,00000000,0,00,0,000000,00,,00,0000,00,00000000,000,00,000,000000)
#define ORDER_PP_NAT_TIMES_DIGIT_4_B(d) ORDER_PP_NAT_TIMES_DIGIT_LOOKUP_##d(,4,0000,,00000000,0,00,0,000000,00,,00,0000,00,00000000,000,00,000,000000)
#define ORDER_PP_NAT_TIMES_DIGIT_5(d) ORDER_PP_NAT_TIMES_DIGIT_LOOKUP_##d(,5_B,00000,0,,0,00000,00,,00,00000,000,,000,00000,0000,,0000,00000)
#define ORDER_PP_NAT_TIMES_DIGIT_5_B(d) ORDER_PP_NAT_TIMES_DIGIT_LOOKUP_##d(,5,00000,0,,0,00000,00,,00,00000,000,,000,00000,0000,,0000,00000)
#define ORDER_PP_NAT_TIMES_DIGIT_6(d) ORDER_PP_NAT_TIMES_DIGIT_LOOKUP_##d(,6_B,000000,0,00,0,00000000,00,0000,000,,000,000000,0000,00,0000,00000000,00000,0000)
#define ORDER_PP_NAT_TIMES_DIGIT_6_B(d) ORDER_PP_NAT_TIMES_DIGIT_LOOKUP_##d(,6,000000,0,00,0,00000000,00,0000,000,,000,000000,0000,00,0000,00000000,00000,0000)
#define ORDER_PP_NAT_TIMES_DIGIT_7(d) ORDER_PP_NAT_TIMES_DIGIT_LOOKUP_##d(,7_B,0000000,0,0000,00,0,00,00000000,000,00000,0000,00,0000,000000000,00000,000000,000000,000)
#define ORDER_PP_NAT_TIMES_DIGIT_7_B(d) ORDER_PP_NAT_TIMES_DIGIT_LOOKUP_##d(,7,0000000,0,0000,00,0,00,00000000,000,00000,0000,00,0000,000000000,00000,000000,000000,000)
#define ORDER_PP_NAT_TIMES_DIGIT_8(d) ORDER_PP_NAT_TIMES_DIGIT_LOOKUP_##d(,8_B,00000000,0,000000,00,0000,000,00,0000,,0000,00000000,00000,000000,000000,0000,0000000,00)
#define ORDER_PP_NAT_TIMES_DIGIT_8_B(d) ORDER_PP_NAT_TIMES_DIGIT_LOOKUP_##d(,8,00000000,0,000000,00,0000,000,00,0000,,0000,00000000,00000,000000,000000,0000,0000000,00)
#define ORDER_PP_NAT_TIMES_DIGIT_9(d) ORDER_PP_NAT_TIMES_DIGIT_LOOKUP_##d(,9_B,000000000,0,00000000,00,0000000,000,000000,0000,00000,00000,0000,000000,000,0000000,00,00000000,0)
#define ORDER_PP_NAT_TIMES_DIGIT_9_B(d) ORDER_PP_NAT_TIMES_DIGIT_LOOKUP_##d(,9,000000000,0,00000000,00,0000000,000,000000,0000,00000,00000,0000,000000,000,0000000,00,00000000,0)

#define ORDER_PP_NAT_TIMES_DIGIT_LOOKUP_0(P,x,...) )(,ORDER_PP_NAT_TIMES_DIGIT_##x
#define ORDER_PP_NAT_TIMES_DIGIT_LOOKUP_1(P,x,B,...) P##B)(,ORDER_PP_NAT_TIMES_DIGIT_##x
#define ORDER_PP_NAT_TIMES_DIGIT_LOOKUP_2(P,x,B,c,C,...) P##C)(P##c,ORDER_PP_NAT_TIMES_DIGIT_##x
#define ORDER_PP_NAT_TIMES_DIGIT_LOOKUP_3(P,x,B,c,C,d,D,...) P##D)(P##d,ORDER_PP_NAT_TIMES_DIGIT_##x
#define ORDER_PP_NAT_TIMES_DIGIT_LOOKUP_4(P,x,B,c,C,d,D,e,E,...) P##E)(P##e,ORDER_PP_NAT_TIMES_DIGIT_##x
#define ORDER_PP_NAT_TIMES_DIGIT_LOOKUP_5(P,x,B,c,C,d,D,e,E,f,F,...) P##F)(P##f,ORDER_PP_NAT_TIMES_DIGIT_##x
#define ORDER_PP_NAT_TIMES_DIGIT_LOOKUP_6(P,x,B,c,C,d,D,e,E,f,F,g,G,...) P##G)(P##g,ORDER_PP_NAT_TIMES_DIGIT_##x
#define ORDER_PP_NAT_TIMES_DIGIT_LOOKUP_7(P,x,B,c,C,d,D,e,E,f,F,g,G,h,H,...) P##H)(P##h,ORDER_PP_NAT_TIMES_DIGIT_##x
#define ORDER_PP_NAT_TIMES_DIGIT_LOOKUP_8(P,x,B,c,C,d,D,e,E,f,F,g,G,h,H,i,I,...) P##I)(P##i,ORDER_PP_NAT_TIMES_DIGIT_##x
#define ORDER_PP_NAT_TIMES_DIGIT_LOOKUP_9(P,x,B,c,C,d,D,e,E,f,F,g,G,h,H,i,I,j,J) P##J)(P##j,ORDER_PP_NAT_TIMES_DIGIT_##x

#define ORDER_PP_NAT_TIMES_DIGIT_LOOKUP_00(P,...) 1
#define ORDER_PP_NAT_TIMES_DIGIT_LOOKUP_01(P,x,B,...) B##1
#define ORDER_PP_NAT_TIMES_DIGIT_LOOKUP_02(P,x,B,c,C,...) ORDER_PP_NAT_TIMES_DIGIT_TERMINATE_##c(,P##C)
#define ORDER_PP_NAT_TIMES_DIGIT_LOOKUP_03(P,x,B,c,C,d,D,...) ORDER_PP_NAT_TIMES_DIGIT_TERMINATE_##d(,P##D)
#define ORDER_PP_NAT_TIMES_DIGIT_LOOKUP_04(P,x,B,c,C,d,D,e,E,...) ORDER_PP_NAT_TIMES_DIGIT_TERMINATE_##e(,P##E)
#define ORDER_PP_NAT_TIMES_DIGIT_LOOKUP_05(P,x,B,c,C,d,D,e,E,f,F,...) ORDER_PP_NAT_TIMES_DIGIT_TERMINATE_##f(,P##F)
#define ORDER_PP_NAT_TIMES_DIGIT_LOOKUP_06(P,x,B,c,C,d,D,e,E,f,F,g,G,...) ORDER_PP_NAT_TIMES_DIGIT_TERMINATE_##g(,P##G)
#define ORDER_PP_NAT_TIMES_DIGIT_LOOKUP_07(P,x,B,c,C,d,D,e,E,f,F,g,G,h,H,...) ORDER_PP_NAT_TIMES_DIGIT_TERMINATE_##h(,P##H)
#define ORDER_PP_NAT_TIMES_DIGIT_LOOKUP_08(P,x,B,c,C,d,D,e,E,f,F,g,G,h,H,i,I,...) ORDER_PP_NAT_TIMES_DIGIT_TERMINATE_##i(,P##I)
#define ORDER_PP_NAT_TIMES_DIGIT_LOOKUP_09(P,x,B,c,C,d,D,e,E,f,F,g,G,h,H,i,I,j,J) ORDER_PP_NAT_TIMES_DIGIT_TERMINATE_##j(,P##J)

#define ORDER_PP_NAT_TIMES_DIGIT_TERMINATE_(P,x) x##1
#define ORDER_PP_NAT_TIMES_DIGIT_TERMINATE_0(P,x) P##x)(01,
#define ORDER_PP_NAT_TIMES_DIGIT_TERMINATE_00(P,x) P##x)(001,
#define ORDER_PP_NAT_TIMES_DIGIT_TERMINATE_000(P,x) P##x)(0001,
#define ORDER_PP_NAT_TIMES_DIGIT_TERMINATE_0000(P,x) P##x)(00001,
#define ORDER_PP_NAT_TIMES_DIGIT_TERMINATE_00000(P,x) P##x)(000001,
#define ORDER_PP_NAT_TIMES_DIGIT_TERMINATE_000000(P,x) P##x)(0000001,
#define ORDER_PP_NAT_TIMES_DIGIT_TERMINATE_0000000(P,x) P##x)(00000001,
#define ORDER_PP_NAT_TIMES_DIGIT_TERMINATE_00000000(P,x) P##x)(000000001,

#define ORDER_PP_NAT_TIMES_DIGIT_PLUS_(x) (0)ORDER_PP_NAT_TIMES_DIGIT_CARRY_0_##x
#define ORDER_PP_NAT_TIMES_DIGIT_PLUS_0(x) (1)ORDER_PP_NAT_TIMES_DIGIT_CARRY_0_##x
#define ORDER_PP_NAT_TIMES_DIGIT_PLUS_00(x) (2)ORDER_PP_NAT_TIMES_DIGIT_CARRY_0_##x
#define ORDER_PP_NAT_TIMES_DIGIT_PLUS_000(x) (3)ORDER_PP_NAT_TIMES_DIGIT_CARRY_0_##x
#define ORDER_PP_NAT_TIMES_DIGIT_PLUS_0000(x) (4)ORDER_PP_NAT_TIMES_DIGIT_CARRY_0_##x
#define ORDER_PP_NAT_TIMES_DIGIT_PLUS_00000(x) (5)ORDER_PP_NAT_TIMES_DIGIT_CARRY_0_##x
#define ORDER_PP_NAT_TIMES_DIGIT_PLUS_000000(x) (6)ORDER_PP_NAT_TIMES_DIGIT_CARRY_0_##x
#define ORDER_PP_NAT_TIMES_DIGIT_PLUS_0000000(x) (7)ORDER_PP_NAT_TIMES_DIGIT_CARRY_0_##x
#define ORDER_PP_NAT_TIMES_DIGIT_PLUS_00000000(x) (8)ORDER_PP_NAT_TIMES_DIGIT_CARRY_0_##x
#define ORDER_PP_NAT_TIMES_DIGIT_PLUS_000000000(x) (9)ORDER_PP_NAT_TIMES_DIGIT_CARRY_0_##x
#define ORDER_PP_NAT_TIMES_DIGIT_PLUS_0000000000(x) (0)ORDER_PP_NAT_TIMES_DIGIT_CARRY_1_##x
#define ORDER_PP_NAT_TIMES_DIGIT_PLUS_00000000000(x) (1)ORDER_PP_NAT_TIMES_DIGIT_CARRY_1_##x
#define ORDER_PP_NAT_TIMES_DIGIT_PLUS_000000000000(x) (2)ORDER_PP_NAT_TIMES_DIGIT_CARRY_1_##x
#define ORDER_PP_NAT_TIMES_DIGIT_PLUS_0000000000000(x) (3)ORDER_PP_NAT_TIMES_DIGIT_CARRY_1_##x
#define ORDER_PP_NAT_TIMES_DIGIT_PLUS_00000000000000(x) (4)ORDER_PP_NAT_TIMES_DIGIT_CARRY_1_##x
#define ORDER_PP_NAT_TIMES_DIGIT_PLUS_000000000000000(x) (5)ORDER_PP_NAT_TIMES_DIGIT_CARRY_1_##x
#define ORDER_PP_NAT_TIMES_DIGIT_PLUS_0000000000000000(x) (6)ORDER_PP_NAT_TIMES_DIGIT_CARRY_1_##x
#define ORDER_PP_NAT_TIMES_DIGIT_PLUS_00000000000000000(x) (7)ORDER_PP_NAT_TIMES_DIGIT_CARRY_1_##x
#define ORDER_PP_NAT_TIMES_DIGIT_PLUS_000000000000000000(x) (8)ORDER_PP_NAT_TIMES_DIGIT_CARRY_1_##x
#define ORDER_PP_NAT_TIMES_DIGIT_PLUS_0000000000000000000(x) (9)ORDER_PP_NAT_TIMES_DIGIT_CARRY_1_##x

#define ORDER_PP_NAT_TIMES_DIGIT_PLUS_1(x) (00)
#define ORDER_PP_NAT_TIMES_DIGIT_PLUS_01(x) (01)
#define ORDER_PP_NAT_TIMES_DIGIT_PLUS_001(x) (02)
#define ORDER_PP_NAT_TIMES_DIGIT_PLUS_0001(x) (03)
#define ORDER_PP_NAT_TIMES_DIGIT_PLUS_00001(x) (04)
#define ORDER_PP_NAT_TIMES_DIGIT_PLUS_000001(x) (05)
#define ORDER_PP_NAT_TIMES_DIGIT_PLUS_0000001(x) (06)
#define ORDER_PP_NAT_TIMES_DIGIT_PLUS_00000001(x) (07)
#define ORDER_PP_NAT_TIMES_DIGIT_PLUS_000000001(x) (08)
#define ORDER_PP_NAT_TIMES_DIGIT_PLUS_0000000001(x) (09)
#define ORDER_PP_NAT_TIMES_DIGIT_PLUS_00000000001(x) (0)(01)
#define ORDER_PP_NAT_TIMES_DIGIT_PLUS_000000000001(x) (1)(01)
#define ORDER_PP_NAT_TIMES_DIGIT_PLUS_0000000000001(x) (2)(01)
#define ORDER_PP_NAT_TIMES_DIGIT_PLUS_00000000000001(x) (3)(01)
#define ORDER_PP_NAT_TIMES_DIGIT_PLUS_000000000000001(x) (4)(01)
#define ORDER_PP_NAT_TIMES_DIGIT_PLUS_0000000000000001(x) (5)(01)
#define ORDER_PP_NAT_TIMES_DIGIT_PLUS_00000000000000001(x) (6)(01)
#define ORDER_PP_NAT_TIMES_DIGIT_PLUS_000000000000000001(x) (7)(01)
#define ORDER_PP_NAT_TIMES_DIGIT_PLUS_0000000000000000001(x) (8)(01)
#define ORDER_PP_NAT_TIMES_DIGIT_PLUS_00000000000000000001(x) (9)(01)

#define ORDER_PP_NAT_TIMES_DIGIT_CARRY_0_A(l,r) ORDER_PP_NAT_TIMES_DIGIT_PLUS_##l##r(B)
#define ORDER_PP_NAT_TIMES_DIGIT_CARRY_0_B(l,r) ORDER_PP_NAT_TIMES_DIGIT_PLUS_##l##r(A)
#define ORDER_PP_NAT_TIMES_DIGIT_CARRY_1_A(l,r) ORDER_PP_NAT_TIMES_DIGIT_PLUS_0##l##r(B)
#define ORDER_PP_NAT_TIMES_DIGIT_CARRY_1_B(l,r) ORDER_PP_NAT_TIMES_DIGIT_PLUS_0##l##r(A)
