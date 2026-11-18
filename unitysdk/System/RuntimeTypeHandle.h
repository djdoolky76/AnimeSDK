#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Reflection/TypeAttributes.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/System/Runtime/Serialization/StreamingContext.h"

namespace System { class Object; }
namespace System { class RuntimeType; }
namespace System { class Type; }
namespace System::Reflection { class RuntimeAssembly; }
namespace System::Reflection { class RuntimeModule; }
namespace System::Runtime::Serialization { class SerializationInfo; }

#define SYSTEM_RUNTIMETYPEHANDLE_METHOD_0_OFFSET UNITYSDK_OFFSET(0x358B00)
#define SYSTEM_RUNTIMETYPEHANDLE_METHOD_10_10_OFFSET UNITYSDK_OFFSET(0x1E269AA0)
#define SYSTEM_RUNTIMETYPEHANDLE_METHOD_11_11_OFFSET UNITYSDK_OFFSET(0x1E269AC0)
#define SYSTEM_RUNTIMETYPEHANDLE_METHOD_12_12_OFFSET UNITYSDK_OFFSET(0x1E269B10)
#define SYSTEM_RUNTIMETYPEHANDLE_METHOD_13_13_OFFSET UNITYSDK_OFFSET(0x1E269B60)
#define SYSTEM_RUNTIMETYPEHANDLE_METHOD_14_14_OFFSET UNITYSDK_OFFSET(0x1E269C00)
#define SYSTEM_RUNTIMETYPEHANDLE_METHOD_15_15_OFFSET UNITYSDK_OFFSET(0x1E269C50)
#define SYSTEM_RUNTIMETYPEHANDLE_METHOD_16_16_OFFSET UNITYSDK_OFFSET(0x1E269BB0)
#define SYSTEM_RUNTIMETYPEHANDLE_METHOD_17_17_OFFSET UNITYSDK_OFFSET(0x1E269BD0)
#define SYSTEM_RUNTIMETYPEHANDLE_METHOD_18_18_OFFSET UNITYSDK_OFFSET(0x1E269C90)
#define SYSTEM_RUNTIMETYPEHANDLE_METHOD_19_19_OFFSET UNITYSDK_OFFSET(0x1E269CA0)
#define SYSTEM_RUNTIMETYPEHANDLE_METHOD_1_1_OFFSET UNITYSDK_OFFSET(0x8EB930)
#define SYSTEM_RUNTIMETYPEHANDLE_METHOD_20_20_OFFSET UNITYSDK_OFFSET(0x1E269BE0)
#define SYSTEM_RUNTIMETYPEHANDLE_METHOD_21_21_OFFSET UNITYSDK_OFFSET(0x1E269CD0)
#define SYSTEM_RUNTIMETYPEHANDLE_METHOD_22_22_OFFSET UNITYSDK_OFFSET(0x1E269D10)
#define SYSTEM_RUNTIMETYPEHANDLE_METHOD_23_23_OFFSET UNITYSDK_OFFSET(0x1E269D30)
#define SYSTEM_RUNTIMETYPEHANDLE_METHOD_24_24_OFFSET UNITYSDK_OFFSET(0x1E269D40)
#define SYSTEM_RUNTIMETYPEHANDLE_METHOD_25_25_OFFSET UNITYSDK_OFFSET(0x1E269DA0)
#define SYSTEM_RUNTIMETYPEHANDLE_METHOD_26_26_OFFSET UNITYSDK_OFFSET(0x1E269DE0)
#define SYSTEM_RUNTIMETYPEHANDLE_METHOD_27_27_OFFSET UNITYSDK_OFFSET(0x1E269E10)
#define SYSTEM_RUNTIMETYPEHANDLE_METHOD_28_28_OFFSET UNITYSDK_OFFSET(0x1E269E30)
#define SYSTEM_RUNTIMETYPEHANDLE_METHOD_29_29_OFFSET UNITYSDK_OFFSET(0x1E269E60)
#define SYSTEM_RUNTIMETYPEHANDLE_METHOD_2_2_OFFSET UNITYSDK_OFFSET(0x8EB950)
#define SYSTEM_RUNTIMETYPEHANDLE_METHOD_30_30_OFFSET UNITYSDK_OFFSET(0x1E262190)
#define SYSTEM_RUNTIMETYPEHANDLE_METHOD_31_31_OFFSET UNITYSDK_OFFSET(0x1E269ED0)
#define SYSTEM_RUNTIMETYPEHANDLE_METHOD_32_32_OFFSET UNITYSDK_OFFSET(0x1E269F00)
#define SYSTEM_RUNTIMETYPEHANDLE_METHOD_33_33_OFFSET UNITYSDK_OFFSET(0x1E269F40)
#define SYSTEM_RUNTIMETYPEHANDLE_METHOD_34_34_OFFSET UNITYSDK_OFFSET(0x1E269FA0)
#define SYSTEM_RUNTIMETYPEHANDLE_METHOD_35_35_OFFSET UNITYSDK_OFFSET(0x1E26A000)
#define SYSTEM_RUNTIMETYPEHANDLE_METHOD_36_36_OFFSET UNITYSDK_OFFSET(0x1E26A030)
#define SYSTEM_RUNTIMETYPEHANDLE_METHOD_3_3_OFFSET UNITYSDK_OFFSET(0x282350)
#define SYSTEM_RUNTIMETYPEHANDLE_METHOD_4_4_OFFSET UNITYSDK_OFFSET(0x8EB960)
#define SYSTEM_RUNTIMETYPEHANDLE_METHOD_5_5_OFFSET UNITYSDK_OFFSET(0x8EB970)
#define SYSTEM_RUNTIMETYPEHANDLE_METHOD_6_6_OFFSET UNITYSDK_OFFSET(0x3D5D40)
#define SYSTEM_RUNTIMETYPEHANDLE_METHOD_7_7_OFFSET UNITYSDK_OFFSET(0x359320)
#define SYSTEM_RUNTIMETYPEHANDLE_METHOD_8_8_OFFSET UNITYSDK_OFFSET(0x1E269A60)
#define SYSTEM_RUNTIMETYPEHANDLE_METHOD_9_9_OFFSET UNITYSDK_OFFSET(0x1E269A80)

namespace System
{
	inline static constexpr unsigned int RuntimeTypeHandle_TypeDefinitionIndex = 409;

	struct alignas(4) RuntimeTypeHandle
	{
		::System::IntPtr value; // 0x10

		::System::Void Method_0(::System::IntPtr val)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPEHANDLE_METHOD_0_OFFSET))(this, val);
		}

		::System::Void Method_1_1(::System::RuntimeType* type)
		{
			return ((::System::Void(*)(::PVOID, ::System::RuntimeType*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPEHANDLE_METHOD_1_1_OFFSET))(this, type);
		}

		::System::Void Method_2_2(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPEHANDLE_METHOD_2_2_OFFSET))(this, info, context);
		}

		::System::IntPtr Method_3_3()
		{
			return ((::System::IntPtr(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPEHANDLE_METHOD_3_3_OFFSET))(this);
		}

		::System::Void Method_4_4(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPEHANDLE_METHOD_4_4_OFFSET))(this, info, context);
		}

		::System::Boolean Method_5_5(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPEHANDLE_METHOD_5_5_OFFSET))(this, obj);
		}

		/*
		::System::Boolean Method_6_6(::System::RuntimeTypeHandle handle)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::RuntimeTypeHandle))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPEHANDLE_METHOD_6_6_OFFSET))(this, handle);
		}
		*/

		::System::Int32 Method_7_7()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPEHANDLE_METHOD_7_7_OFFSET))(this);
		}

		static ::System::Reflection::TypeAttributes Method_8_8(::System::RuntimeType* type)
		{
			return ((::System::Reflection::TypeAttributes(*)(::System::RuntimeType*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPEHANDLE_METHOD_8_8_OFFSET))(type);
		}

		static ::System::Int32 Method_9_9(::System::RuntimeType* type)
		{
			return ((::System::Int32(*)(::System::RuntimeType*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPEHANDLE_METHOD_9_9_OFFSET))(type);
		}

		static ::System::Int32 Method_10_10(::System::RuntimeType* type)
		{
			return ((::System::Int32(*)(::System::RuntimeType*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPEHANDLE_METHOD_10_10_OFFSET))(type);
		}

		static ::System::Type* Method_11_11(::System::RuntimeType* type)
		{
			return ((::System::Type*(*)(::System::RuntimeType*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPEHANDLE_METHOD_11_11_OFFSET))(type);
		}

		static ::System::Type* Method_12_12(::System::RuntimeType* type)
		{
			return ((::System::Type*(*)(::System::RuntimeType*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPEHANDLE_METHOD_12_12_OFFSET))(type);
		}

		static ::System::Boolean Method_13_13(::System::RuntimeType* type)
		{
			return ((::System::Boolean(*)(::System::RuntimeType*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPEHANDLE_METHOD_13_13_OFFSET))(type);
		}

		static ::System::Boolean Method_14_14(::System::RuntimeType* type)
		{
			return ((::System::Boolean(*)(::System::RuntimeType*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPEHANDLE_METHOD_14_14_OFFSET))(type);
		}

		static ::System::Boolean Method_15_15(::System::RuntimeType* type)
		{
			return ((::System::Boolean(*)(::System::RuntimeType*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPEHANDLE_METHOD_15_15_OFFSET))(type);
		}

		static ::System::Boolean Method_16_16(::System::RuntimeType* type)
		{
			return ((::System::Boolean(*)(::System::RuntimeType*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPEHANDLE_METHOD_16_16_OFFSET))(type);
		}

		static ::System::Boolean Method_17_17(::System::RuntimeType* type)
		{
			return ((::System::Boolean(*)(::System::RuntimeType*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPEHANDLE_METHOD_17_17_OFFSET))(type);
		}

		static ::System::Boolean Method_18_18(::System::RuntimeType* type)
		{
			return ((::System::Boolean(*)(::System::RuntimeType*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPEHANDLE_METHOD_18_18_OFFSET))(type);
		}

		static ::System::Boolean Method_19_19(::System::RuntimeType* type, ::System::Object* o)
		{
			return ((::System::Boolean(*)(::System::RuntimeType*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPEHANDLE_METHOD_19_19_OFFSET))(type, o);
		}

		static ::System::Boolean Method_20_20(::System::RuntimeType* type)
		{
			return ((::System::Boolean(*)(::System::RuntimeType*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPEHANDLE_METHOD_20_20_OFFSET))(type);
		}

		static ::System::Boolean Method_21_21(::System::RuntimeType* type)
		{
			return ((::System::Boolean(*)(::System::RuntimeType*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPEHANDLE_METHOD_21_21_OFFSET))(type);
		}

		static ::System::Boolean Method_22_22(::System::RuntimeType* type)
		{
			return ((::System::Boolean(*)(::System::RuntimeType*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPEHANDLE_METHOD_22_22_OFFSET))(type);
		}

		static ::System::Boolean Method_23_23(::System::RuntimeType* type, ::System::Boolean isGenericCOM)
		{
			return ((::System::Boolean(*)(::System::RuntimeType*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPEHANDLE_METHOD_23_23_OFFSET))(type, isGenericCOM);
		}

		static ::System::Boolean Method_24_24(::System::RuntimeType* type)
		{
			return ((::System::Boolean(*)(::System::RuntimeType*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPEHANDLE_METHOD_24_24_OFFSET))(type);
		}

		static ::System::Boolean Method_25_25(::System::RuntimeType* type)
		{
			return ((::System::Boolean(*)(::System::RuntimeType*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPEHANDLE_METHOD_25_25_OFFSET))(type);
		}

		static ::System::Boolean Method_26_26(::System::RuntimeType* type)
		{
			return ((::System::Boolean(*)(::System::RuntimeType*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPEHANDLE_METHOD_26_26_OFFSET))(type);
		}

		static ::System::Int32 Method_27_27(::System::RuntimeType* type)
		{
			return ((::System::Int32(*)(::System::RuntimeType*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPEHANDLE_METHOD_27_27_OFFSET))(type);
		}

		static ::System::Reflection::RuntimeAssembly* Method_28_28(::System::RuntimeType* type)
		{
			return ((::System::Reflection::RuntimeAssembly*(*)(::System::RuntimeType*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPEHANDLE_METHOD_28_28_OFFSET))(type);
		}

		static ::System::RuntimeType* Method_29_29(::System::RuntimeType* type)
		{
			return ((::System::RuntimeType*(*)(::System::RuntimeType*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPEHANDLE_METHOD_29_29_OFFSET))(type);
		}

		static ::System::Reflection::RuntimeModule* Method_30_30(::System::RuntimeType* type)
		{
			return ((::System::Reflection::RuntimeModule*(*)(::System::RuntimeType*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPEHANDLE_METHOD_30_30_OFFSET))(type);
		}

		static ::System::Boolean Method_31_31(::System::RuntimeType* type)
		{
			return ((::System::Boolean(*)(::System::RuntimeType*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPEHANDLE_METHOD_31_31_OFFSET))(type);
		}

		static ::System::RuntimeType* Method_32_32(::System::RuntimeType* type)
		{
			return ((::System::RuntimeType*(*)(::System::RuntimeType*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPEHANDLE_METHOD_32_32_OFFSET))(type);
		}

		static ::System::Boolean Method_33_33(::System::RuntimeType* type, ::System::RuntimeType* target)
		{
			return ((::System::Boolean(*)(::System::RuntimeType*, ::System::RuntimeType*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPEHANDLE_METHOD_33_33_OFFSET))(type, target);
		}

		static ::System::Boolean Method_34_34(::System::Type* a, ::System::Type* b)
		{
			return ((::System::Boolean(*)(::System::Type*, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPEHANDLE_METHOD_34_34_OFFSET))(a, b);
		}

		static ::System::Boolean Method_35_35(::System::RuntimeType* type)
		{
			return ((::System::Boolean(*)(::System::RuntimeType*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPEHANDLE_METHOD_35_35_OFFSET))(type);
		}

		static ::System::IntPtr Method_36_36(::System::RuntimeType* type)
		{
			return ((::System::IntPtr(*)(::System::RuntimeType*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPEHANDLE_METHOD_36_36_OFFSET))(type);
		}
	};
}
