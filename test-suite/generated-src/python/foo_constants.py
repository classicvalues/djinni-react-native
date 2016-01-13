# AUTOGENERATED FILE - DO NOT MODIFY!
# This file generated by Djinni from foo_constants.djinni

from djinni.support import MultiSet # default imported in all files
from djinni.exception import CPyException # default imported in all files
from djinni.pycffi_marshal import CPyBoxedI32, CPyPrimitive, CPyRecord, CPyString

from some_const_record import SomeConstRecord
from some_const_record_helper import SomeConstRecordHelper
from PyCFFIlib_cffi import ffi, lib

from djinni import exception # this forces run of __init__.py which gives cpp option to call back into py to create exception

class FooConstants:
    c_data_set = MultiSet()

    @staticmethod
    def check_c_data_set_empty():
        assert len(FooConstants.c_data_set) == 0

    BOOL_CONSTANT = True
    I8_CONSTANT = 1
    I16_CONSTANT = 2
    I32_CONSTANT = 3
    I64_CONSTANT = 4
    F32_CONSTANT = 5.0
    F64_CONSTANT = 6.0
    STRING_CONSTANT = "string-constant"
    OPTIONAL_INTEGER_CONSTANT = 1


    def __init__(self, some_integer, some_string):
        self.some_integer = some_integer
        self.some_string = some_string

FooConstants.OBJECT_CONSTANT = FooConstants(
    FooConstants.I32_CONSTANT,
    FooConstants.STRING_CONSTANT)

FooConstants.SOME_RECORD = SomeConstRecord(
    28,
    FooConstants.I16_CONSTANT)

