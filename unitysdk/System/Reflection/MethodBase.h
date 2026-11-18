#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Reflection/CallingConventions.h"
#include "unitysdk/System/Reflection/MemberInfo.h"
#include "unitysdk/System/RuntimeMethodHandle.h"
#include "unitysdk/System/RuntimeTypeHandle.h"

namespace System { class Object; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Reflection { class MethodBody; }
namespace System::Reflection { class ParameterInfo; }

#define SYSTEM_REFLECTION_METHODBASE_METHOD_0_OFFSET UNITYSDK_OFFSET(0x1C896DB0)
#define SYSTEM_REFLECTION_METHODBASE_METHOD_13_13_OFFSET UNITYSDK_OFFSET(0x1C896DF0)
#define SYSTEM_REFLECTION_METHODBASE_METHOD_14_14_OFFSET UNITYSDK_OFFSET(0x1C896E00)
#define SYSTEM_REFLECTION_METHODBASE_METHOD_15_15_OFFSET UNITYSDK_OFFSET(0x1C896E60)
#define SYSTEM_REFLECTION_METHODBASE_METHOD_16_16_OFFSET UNITYSDK_OFFSET(0x1C896E70)
#define SYSTEM_REFLECTION_METHODBASE_METHOD_17_17_OFFSET UNITYSDK_OFFSET(0x1C896E80)
#define SYSTEM_REFLECTION_METHODBASE_METHOD_18_18_OFFSET UNITYSDK_OFFSET(0x1C896E90)
#define SYSTEM_REFLECTION_METHODBASE_METHOD_19_19_OFFSET UNITYSDK_OFFSET(0x1C896EE0)
#define SYSTEM_REFLECTION_METHODBASE_METHOD_1_1_OFFSET UNITYSDK_OFFSET(0x1C896BB0)
#define SYSTEM_REFLECTION_METHODBASE_METHOD_20_20_OFFSET UNITYSDK_OFFSET(0x1C896F10)
#define SYSTEM_REFLECTION_METHODBASE_METHOD_21_21_OFFSET UNITYSDK_OFFSET(0x1C896F30)
#define SYSTEM_REFLECTION_METHODBASE_METHOD_22_22_OFFSET UNITYSDK_OFFSET(0x1C896F50)
#define SYSTEM_REFLECTION_METHODBASE_METHOD_23_23_OFFSET UNITYSDK_OFFSET(0x1C896F70)
#define SYSTEM_REFLECTION_METHODBASE_METHOD_24_24_OFFSET UNITYSDK_OFFSET(0x1C896F90)
#define SYSTEM_REFLECTION_METHODBASE_METHOD_25_25_OFFSET UNITYSDK_OFFSET(0x1C896FB0)
#define SYSTEM_REFLECTION_METHODBASE_METHOD_26_26_OFFSET UNITYSDK_OFFSET(0x1C896FD0)
#define SYSTEM_REFLECTION_METHODBASE_METHOD_27_27_OFFSET UNITYSDK_OFFSET(0x1C896FF0)
#define SYSTEM_REFLECTION_METHODBASE_METHOD_28_28_OFFSET UNITYSDK_OFFSET(0x1C897060)
#define SYSTEM_REFLECTION_METHODBASE_METHOD_29_29_OFFSET UNITYSDK_OFFSET(0x1C8970B0)
#define SYSTEM_REFLECTION_METHODBASE_METHOD_2_2_OFFSET UNITYSDK_OFFSET(0x1C896D00)
#define SYSTEM_REFLECTION_METHODBASE_METHOD_30_30_OFFSET UNITYSDK_OFFSET(0x1C897370)
#define SYSTEM_REFLECTION_METHODBASE_METHOD_31_31_OFFSET UNITYSDK_OFFSET(0x1C897480)
#define SYSTEM_REFLECTION_METHODBASE_METHOD_32_32_OFFSET UNITYSDK_OFFSET(0x1C8975D0)
#define SYSTEM_REFLECTION_METHODBASE_METHOD_33_33_OFFSET UNITYSDK_OFFSET(0x1C8975E0)
#define SYSTEM_REFLECTION_METHODBASE_METHOD_34_34_OFFSET UNITYSDK_OFFSET(0x1C897610)
#define SYSTEM_REFLECTION_METHODBASE_METHOD_35_35_OFFSET UNITYSDK_OFFSET(0x1C897630)
#define SYSTEM_REFLECTION_METHODBASE_METHOD_36_36_OFFSET UNITYSDK_OFFSET(0x1C897660)
#define SYSTEM_REFLECTION_METHODBASE_METHOD_37_37_OFFSET UNITYSDK_OFFSET(0x1C897670)
#define SYSTEM_REFLECTION_METHODBASE_METHOD_38_38_OFFSET UNITYSDK_OFFSET(0x1C896CF0)
#define SYSTEM_REFLECTION_METHODBASE_METHOD_39_39_OFFSET UNITYSDK_OFFSET(0x1C897620)
#define SYSTEM_REFLECTION_METHODBASE_METHOD_3_3_OFFSET UNITYSDK_OFFSET(0x1C88B330)
#define SYSTEM_REFLECTION_METHODBASE_METHOD_4_4_OFFSET UNITYSDK_OFFSET(0x1C8902D0)
#define SYSTEM_REFLECTION_METHODBASE_METHOD_5_5_OFFSET UNITYSDK_OFFSET(0x1C896DC0)
#define SYSTEM_REFLECTION_METHODBASE_METHOD_6_6_OFFSET UNITYSDK_OFFSET(0x1C896DD0)
#define SYSTEM_REFLECTION_METHODBASE_METHOD_7_7_OFFSET UNITYSDK_OFFSET(0x1C896DE0)

namespace System::Reflection
{
	inline static constexpr unsigned int MethodBase_TypeDefinitionIndex = 549;

	class MethodBase : public ::System::Reflection::MemberInfo
	{
	public:
		::System::Void Method_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_METHODBASE_METHOD_0_OFFSET))(this);
		}

		static ::System::Reflection::MethodBase* Method_1_1(::System::RuntimeMethodHandle handle)
		{
			return ((::System::Reflection::MethodBase*(*)(::System::RuntimeMethodHandle))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_METHODBASE_METHOD_1_1_OFFSET))(handle);
		}

		static ::System::Reflection::MethodBase* Method_2_2(::System::RuntimeMethodHandle handle, ::System::RuntimeTypeHandle declaringType)
		{
			return ((::System::Reflection::MethodBase*(*)(::System::RuntimeMethodHandle, ::System::RuntimeTypeHandle))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_METHODBASE_METHOD_2_2_OFFSET))(handle, declaringType);
		}

		static ::System::Boolean Method_3_3(::System::Reflection::MethodBase* left, ::System::Reflection::MethodBase* right)
		{
			return ((::System::Boolean(*)(::System::Reflection::MethodBase*, ::System::Reflection::MethodBase*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_METHODBASE_METHOD_3_3_OFFSET))(left, right);
		}

		static ::System::Boolean Method_4_4(::System::Reflection::MethodBase* left, ::System::Reflection::MethodBase* right)
		{
			return ((::System::Boolean(*)(::System::Reflection::MethodBase*, ::System::Reflection::MethodBase*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_METHODBASE_METHOD_4_4_OFFSET))(left, right);
		}

		::System::Boolean Method_5_5(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_METHODBASE_METHOD_5_5_OFFSET))(this, obj);
		}

		::System::Int32 Method_6_6()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_METHODBASE_METHOD_6_6_OFFSET))(this);
		}

		::Il2CppArray<::System::Reflection::ParameterInfo*>* Method_7_7()
		{
			return ((::Il2CppArray<::System::Reflection::ParameterInfo*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_METHODBASE_METHOD_7_7_OFFSET))(this);
		}

		::System::Reflection::CallingConventions Method_13_13()
		{
			return ((::System::Reflection::CallingConventions(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_METHODBASE_METHOD_13_13_OFFSET))(this);
		}

		::Il2CppArray<::System::Type*>* Method_14_14()
		{
			return ((::Il2CppArray<::System::Type*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_METHODBASE_METHOD_14_14_OFFSET))(this);
		}

		::System::Boolean Method_15_15()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_METHODBASE_METHOD_15_15_OFFSET))(this);
		}

		::System::Boolean Method_16_16()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_METHODBASE_METHOD_16_16_OFFSET))(this);
		}

		::System::Boolean Method_17_17()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_METHODBASE_METHOD_17_17_OFFSET))(this);
		}

		::System::Boolean Method_18_18()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_METHODBASE_METHOD_18_18_OFFSET))(this);
		}

		::System::Object* Method_19_19(::System::Object* obj, ::Il2CppArray<::System::Object*>* parameters)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Object*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_METHODBASE_METHOD_19_19_OFFSET))(this, obj, parameters);
		}

		::System::Boolean Method_20_20()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_METHODBASE_METHOD_20_20_OFFSET))(this);
		}

		::System::Boolean Method_21_21()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_METHODBASE_METHOD_21_21_OFFSET))(this);
		}

		::System::Boolean Method_22_22()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_METHODBASE_METHOD_22_22_OFFSET))(this);
		}

		::System::Boolean Method_23_23()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_METHODBASE_METHOD_23_23_OFFSET))(this);
		}

		::System::Boolean Method_24_24()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_METHODBASE_METHOD_24_24_OFFSET))(this);
		}

		::System::Boolean Method_25_25()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_METHODBASE_METHOD_25_25_OFFSET))(this);
		}

		::System::Boolean Method_26_26()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_METHODBASE_METHOD_26_26_OFFSET))(this);
		}

		::System::Boolean Method_27_27()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_METHODBASE_METHOD_27_27_OFFSET))(this);
		}

		::System::Reflection::MethodBody* Method_28_28()
		{
			return ((::System::Reflection::MethodBody*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_METHODBASE_METHOD_28_28_OFFSET))(this);
		}

		static ::System::String* Method_29_29(::Il2CppArray<::System::Type*>* parameterTypes, ::System::Reflection::CallingConventions callingConvention, ::System::Boolean serialization)
		{
			return ((::System::String*(*)(::Il2CppArray<::System::Type*>*, ::System::Reflection::CallingConventions, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_METHODBASE_METHOD_29_29_OFFSET))(parameterTypes, callingConvention, serialization);
		}

		::System::String* Method_30_30(::System::Boolean serialization)
		{
			return ((::System::String*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_METHODBASE_METHOD_30_30_OFFSET))(this, serialization);
		}

		::Il2CppArray<::System::Type*>* Method_31_31()
		{
			return ((::Il2CppArray<::System::Type*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_METHODBASE_METHOD_31_31_OFFSET))(this);
		}

		::Il2CppArray<::System::Reflection::ParameterInfo*>* Method_32_32()
		{
			return ((::Il2CppArray<::System::Reflection::ParameterInfo*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_METHODBASE_METHOD_32_32_OFFSET))(this);
		}

		::System::Int32 Method_33_33()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_METHODBASE_METHOD_33_33_OFFSET))(this);
		}

		static ::System::Reflection::MethodBase* Method_34_34(::System::RuntimeMethodHandle handle)
		{
			return ((::System::Reflection::MethodBase*(*)(::System::RuntimeMethodHandle))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_METHODBASE_METHOD_34_34_OFFSET))(handle);
		}

		static ::System::Reflection::MethodBase* Method_35_35(::System::RuntimeMethodHandle handle, ::System::RuntimeTypeHandle reflectedType)
		{
			return ((::System::Reflection::MethodBase*(*)(::System::RuntimeMethodHandle, ::System::RuntimeTypeHandle))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_METHODBASE_METHOD_35_35_OFFSET))(handle, reflectedType);
		}

		static ::System::Reflection::MethodBody* Method_36_36(::System::IntPtr handle)
		{
			return ((::System::Reflection::MethodBody*(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_METHODBASE_METHOD_36_36_OFFSET))(handle);
		}

		static ::System::Reflection::MethodBody* Method_37_37(::System::IntPtr handle)
		{
			return ((::System::Reflection::MethodBody*(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_METHODBASE_METHOD_37_37_OFFSET))(handle);
		}

		static ::System::Reflection::MethodBase* Method_38_38(::System::IntPtr method_handle, ::System::IntPtr type_handle)
		{
			return ((::System::Reflection::MethodBase*(*)(::System::IntPtr, ::System::IntPtr))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_METHODBASE_METHOD_38_38_OFFSET))(method_handle, type_handle);
		}

		static ::System::Reflection::MethodBase* Method_39_39(::System::IntPtr method_handle, ::System::IntPtr type_handle, ::System::Boolean genericCheck)
		{
			return ((::System::Reflection::MethodBase*(*)(::System::IntPtr, ::System::IntPtr, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_METHODBASE_METHOD_39_39_OFFSET))(method_handle, type_handle, genericCheck);
		}
	};
}
