// (C) Copyright Vesa Karvonen 2004.
//
// Distributed under the Boost Software License, Version 1.0.

#define ORDER_PP_DEF_8cat(...) 8EVAL_CAT,(,__VA_ARGS__,0cat),

#ifdef ORDER_PP_DEBUG
# define ORDER_PP_8EVAL_CAT(P,e,ts,G,...) (,P##e,ORDER_PP_ASSERT_SYNTAX(ORDER_PP_DEF_FIRST P##ts())ORDER_PP_DEF_FIRST P##ts,8EVAL_CAT_B,,P##e,ORDER_PP_TUPLE_REST P##ts,P##__VA_ARGS__)
# define ORDER_PP_8EVAL_CAT_B(P,v,r,e,t,...) (,P##e,ORDER_PP_ASSERT_SYNTAX(ORDER_PP_DEF_##t())ORDER_PP_DEF_##t,8EVAL_CAT_B,r##v,P##e,P##__VA_ARGS__)
#else
# define ORDER_PP_8EVAL_CAT(P,e,ts,G,...) (,P##e,ORDER_PP_DEF_FIRST P##ts,8EVAL_CAT_B,,P##e,ORDER_PP_TUPLE_REST P##ts,P##__VA_ARGS__)
# define ORDER_PP_8EVAL_CAT_B(P,v,r,e,t,...) (,P##e,ORDER_PP_DEF_##t,8EVAL_CAT_B,r##v,P##e,P##__VA_ARGS__)
#endif
#define ORDER_PP_DEF_0cat 0EVAL_CAT,
#define ORDER_PP_0EVAL_CAT(P,e1,G,eval_cat_b,r,e2,K,...) ORDER_PP_##K(,P##r,P##__VA_ARGS__)
