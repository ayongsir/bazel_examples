load("@rules_cc//cc:defs.bzl", "cc_test")

cc_import(
    name = "gtest_static",
    hdrs = ["gtest/gtest.h"],
    static_library = "lib/libgtest.a",
)

cc_import(
    name = "gtest_static_main",
    hdrs = ["gtest/gtest.h"],
    static_library = "lib/libgtest_main.a",
)

cc_test(
    name = "hello_test",
    srcs = [ 
        "hello_test.cc", 
    ],  
    deps = [ 
        "//hello:hello",
        ":gtest_static",
        ":gtest_static_main",
    ],
    copts = ["-Igtest/"],
    linkopts = ["-pthread"],
)