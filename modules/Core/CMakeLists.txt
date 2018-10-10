# Copyright (c) 2017-2018 Marcus Meeßen
# Copyright (c) 2018      MASKOR Institute FH Aachen
#
# CuteVR 'Core' module

find_package(OpenVR 1.0 REQUIRED)
find_package(Qt5 5.4.0 REQUIRED COMPONENTS Gui)

cpack_add_component(Core REQUIRED
        GROUP Library)

# collect sources
set(_SOURCES)
set(_TESTS)

# create module
add_library(Core SHARED "") # LEGACY: CMake 3.10 requires source files
decorate_module(Core "${_SOURCES}" "Qt5::Core;Qt5::Gui" "OpenVR::OpenVR")
test_module(Core "${_TESTS}")
install_module(Core "Qt5::Core;Qt5::Gui" "(Internal|Emulator)")