// (C) Copyright Vesa Karvonen 2004.
//
// Distributed under the Boost Software License, Version 1.0.

#define ORDER_PP_MACRO(t) ORDER_PP_MACRO_TEST(ORDER_PP_DEF_##t())(t)

#define ORDER_PP_MACRO_TEST(def_t) ORDER_PP_MACRO_TEST_B(def_t,ORDER_PP_COMMA_0,)
#define ORDER_PP_MACRO_TEST_B(_,x,...) ORDER_PP_TUPLE_AT_1(ORDER_PP_MACRO_,x,1,)

#define ORDER_PP_MACRO_1(t) ORDER_PP_DEF_##t
#define ORDER_PP_MACRO_0(t) 8MACRO,t,

#ifdef ORDER_PP_DEBUG
#define ORDER_PP_8MACRO(P,e,t,G,...) (,P##e,ORDER_PP_ASSERT_SYNTAX(ORDER_PP_DEF_##t())ORDER_PP_DEF_##t,P##__VA_ARGS__)
#else
#define ORDER_PP_8MACRO(P,e,t,G,...) (,P##e,ORDER_PP_DEF_##t,P##__VA_ARGS__)
#endif
