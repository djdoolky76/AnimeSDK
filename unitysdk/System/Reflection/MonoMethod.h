#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Reflection/BindingFlags.h"
#include "unitysdk/System/Reflection/CallingConventions.h"
#include "unitysdk/System/Reflection/MethodAttributes.h"
#include "unitysdk/System/Reflection/MethodImplAttributes.h"
#include "unitysdk/System/Reflection/PInvokeAttributes.h"
#include "unitysdk/System/Reflection/RuntimeMethodInfo.h"
#include "unitysdk/System/RuntimeMethodHandle.h"

namespace System { class Exception; }
namespace System { class Object; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Globalization { class CultureInfo; }
namespace System::Reflection { class Binder; }
namespace System::Reflection { class CustomAttributeData; }
namespace System::Reflection { class ICustomAttributeProvider; }
namespace System::Reflection { class MethodBase; }
namespace System::Reflection { class MethodBody; }
namespace System::Reflection { class MethodInfo; }
namespace System::Reflection { class ParameterInfo; }

#define SYSTEM_REFLECTION_MONOMETHOD_METHOD_0_OFFSET UNITYSDK_OFFSET(0x1DB599C0)
#define SYSTEM_REFLECTION_MONOMETHOD_METHOD_10_10_OFFSET UNITYSDK_OFFSET(0x1DB59C10)
#define SYSTEM_REFLECTION_MONOMETHOD_METHOD_11_11_OFFSET UNITYSDK_OFFSET(0x1DB59C60)
#define SYSTEM_REFLECTION_MONOMETHOD_METHOD_12_12_OFFSET UNITYSDK_OFFSET(0x1DB59C70)
#define SYSTEM_REFLECTION_MONOMETHOD_METHOD_13_13_OFFSET UNITYSDK_OFFSET(0x1DB59F00)
#define SYSTEM_REFLECTION_MONOMETHOD_METHOD_14_14_OFFSET UNITYSDK_OFFSET(0x1DB5A380)
#define SYSTEM_REFLECTION_MONOMETHOD_METHOD_15_15_OFFSET UNITYSDK_OFFSET(0x1DB5A390)
#define SYSTEM_REFLECTION_MONOMETHOD_METHOD_16_16_OFFSET UNITYSDK_OFFSET(0x1DB5A3A0)
#define SYSTEM_REFLECTION_MONOMETHOD_METHOD_17_17_OFFSET UNITYSDK_OFFSET(0x1DB5A400)
#define SYSTEM_REFLECTION_MONOMETHOD_METHOD_18_18_OFFSET UNITYSDK_OFFSET(0x1DB5A410)
#define SYSTEM_REFLECTION_MONOMETHOD_METHOD_19_19_OFFSET UNITYSDK_OFFSET(0x1DB5A470)
#define SYSTEM_REFLECTION_MONOMETHOD_METHOD_1_1_OFFSET UNITYSDK_OFFSET(0x1DB599D0)
#define SYSTEM_REFLECTION_MONOMETHOD_METHOD_20_20_OFFSET UNITYSDK_OFFSET(0x1DB5A4D0)
#define SYSTEM_REFLECTION_MONOMETHOD_METHOD_21_21_OFFSET UNITYSDK_OFFSET(0x1DB5A4E0)
#define SYSTEM_REFLECTION_MONOMETHOD_METHOD_22_22_OFFSET UNITYSDK_OFFSET(0x1DB5A4F0)
#define SYSTEM_REFLECTION_MONOMETHOD_METHOD_23_23_OFFSET UNITYSDK_OFFSET(0x1DB5A500)
#define SYSTEM_REFLECTION_MONOMETHOD_METHOD_24_24_OFFSET UNITYSDK_OFFSET(0x1DB5A520)
#define SYSTEM_REFLECTION_MONOMETHOD_METHOD_25_25_OFFSET UNITYSDK_OFFSET(0x1DB5A740)
#define SYSTEM_REFLECTION_MONOMETHOD_METHOD_26_26_OFFSET UNITYSDK_OFFSET(0x1DB5AA80)
#define SYSTEM_REFLECTION_MONOMETHOD_METHOD_27_27_OFFSET UNITYSDK_OFFSET(0x1DB5AA70)
#define SYSTEM_REFLECTION_MONOMETHOD_METHOD_28_28_OFFSET UNITYSDK_OFFSET(0x1DB5AA90)
#define SYSTEM_REFLECTION_MONOMETHOD_METHOD_29_29_OFFSET UNITYSDK_OFFSET(0x1DB5AAD0)
#define SYSTEM_REFLECTION_MONOMETHOD_METHOD_2_2_OFFSET UNITYSDK_OFFSET(0x1DB59A20)
#define SYSTEM_REFLECTION_MONOMETHOD_METHOD_30_30_OFFSET UNITYSDK_OFFSET(0x1DB5AA60)
#define SYSTEM_REFLECTION_MONOMETHOD_METHOD_31_31_OFFSET UNITYSDK_OFFSET(0x1DB5ABB0)
#define SYSTEM_REFLECTION_MONOMETHOD_METHOD_32_32_OFFSET UNITYSDK_OFFSET(0x1DB5A260)
#define SYSTEM_REFLECTION_MONOMETHOD_METHOD_33_33_OFFSET UNITYSDK_OFFSET(0x1DB5ABE0)
#define SYSTEM_REFLECTION_MONOMETHOD_METHOD_34_34_OFFSET UNITYSDK_OFFSET(0x1DB5ABF0)
#define SYSTEM_REFLECTION_MONOMETHOD_METHOD_35_35_OFFSET UNITYSDK_OFFSET(0x1DB5AC70)
#define SYSTEM_REFLECTION_MONOMETHOD_METHOD_3_3_OFFSET UNITYSDK_OFFSET(0x1DB59A30)
#define SYSTEM_REFLECTION_MONOMETHOD_METHOD_4_4_OFFSET UNITYSDK_OFFSET(0x1DB59A40)
#define SYSTEM_REFLECTION_MONOMETHOD_METHOD_5_5_OFFSET UNITYSDK_OFFSET(0x1DB59A50)
#define SYSTEM_REFLECTION_MONOMETHOD_METHOD_6_6_OFFSET UNITYSDK_OFFSET(0x1DB59AB0)
#define SYSTEM_REFLECTION_MONOMETHOD_METHOD_7_7_OFFSET UNITYSDK_OFFSET(0x1DB59AC0)
#define SYSTEM_REFLECTION_MONOMETHOD_METHOD_8_8_OFFSET UNITYSDK_OFFSET(0x1DB59B20)
#define SYSTEM_REFLECTION_MONOMETHOD_METHOD_9_9_OFFSET UNITYSDK_OFFSET(0x1DB59BD0)

namespace System::Reflection
{
	inline static constexpr unsigned int MonoMethod_TypeDefinitionIndex = 593;

	class MonoMethod : public ::System::Reflection::RuntimeMethodInfo
	{
	public:
		::System::IntPtr Field_0; // 0x10
		::System::String* Field_1; // 0x18
		::System::Type* Field_2; // 0x20

		::System::Void Method_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOMETHOD_METHOD_0_OFFSET))(this);
		}

		static ::System::String* Method_1_1(::System::Reflection::MethodBase* method)
		{
			return ((::System::String*(*)(::System::Reflection::MethodBase*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOMETHOD_METHOD_1_1_OFFSET))(method);
		}

		static ::System::Reflection::MonoMethod* Method_2_2(::System::Reflection::MonoMethod* method, ::System::Boolean definition)
		{
			return ((::System::Reflection::MonoMethod*(*)(::System::Reflection::MonoMethod*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOMETHOD_METHOD_2_2_OFFSET))(method, definition);
		}

		::System::Reflection::MethodInfo* Method_3_3()
		{
			return ((::System::Reflection::MethodInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOMETHOD_METHOD_3_3_OFFSET))(this);
		}

		::System::Reflection::MethodInfo* Method_4_4()
		{
			return ((::System::Reflection::MethodInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOMETHOD_METHOD_4_4_OFFSET))(this);
		}

		::System::Type* Method_5_5()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOMETHOD_METHOD_5_5_OFFSET))(this);
		}

		::System::Reflection::ICustomAttributeProvider* Method_6_6()
		{
			return ((::System::Reflection::ICustomAttributeProvider*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOMETHOD_METHOD_6_6_OFFSET))(this);
		}

		::System::Reflection::MethodImplAttributes Method_7_7()
		{
			return ((::System::Reflection::MethodImplAttributes(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOMETHOD_METHOD_7_7_OFFSET))(this);
		}

		::Il2CppArray<::System::Reflection::ParameterInfo*>* Method_8_8()
		{
			return ((::Il2CppArray<::System::Reflection::ParameterInfo*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOMETHOD_METHOD_8_8_OFFSET))(this);
		}

		::Il2CppArray<::System::Reflection::ParameterInfo*>* Method_9_9()
		{
			return ((::Il2CppArray<::System::Reflection::ParameterInfo*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOMETHOD_METHOD_9_9_OFFSET))(this);
		}

		::System::Int32 Method_10_10()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOMETHOD_METHOD_10_10_OFFSET))(this);
		}

		::System::Object* Method_11_11(::System::Object* obj, ::Il2CppArray<::System::Object*>* parameters, ::System::Exception*& exc)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Object*, ::Il2CppArray<::System::Object*>*, ::System::Exception*&))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOMETHOD_METHOD_11_11_OFFSET))(this, obj, parameters, exc);
		}

		::System::Object* Method_12_12(::System::Object* obj, ::System::Reflection::BindingFlags invokeAttr, ::System::Reflection::Binder* binder, ::Il2CppArray<::System::Object*>* parameters, ::System::Globalization::CultureInfo* culture)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Object*, ::System::Reflection::BindingFlags, ::System::Reflection::Binder*, ::Il2CppArray<::System::Object*>*, ::System::Globalization::CultureInfo*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOMETHOD_METHOD_12_12_OFFSET))(this, obj, invokeAttr, binder, parameters, culture);
		}

		static ::System::Void Method_13_13(::System::Reflection::Binder* binder, ::Il2CppArray<::System::Object*>* args, ::Il2CppArray<::System::Reflection::ParameterInfo*>* pinfo, ::System::Globalization::CultureInfo* culture, ::System::Reflection::BindingFlags invokeAttr)
		{
			return ((::System::Void(*)(::System::Reflection::Binder*, ::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Reflection::ParameterInfo*>*, ::System::Globalization::CultureInfo*, ::System::Reflection::BindingFlags))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOMETHOD_METHOD_13_13_OFFSET))(binder, args, pinfo, culture, invokeAttr);
		}

		::System::RuntimeMethodHandle Method_14_14()
		{
			return ((::System::RuntimeMethodHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOMETHOD_METHOD_14_14_OFFSET))(this);
		}

		::System::Reflection::MethodAttributes Method_15_15()
		{
			return ((::System::Reflection::MethodAttributes(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOMETHOD_METHOD_15_15_OFFSET))(this);
		}

		::System::Reflection::CallingConventions Method_16_16()
		{
			return ((::System::Reflection::CallingConventions(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOMETHOD_METHOD_16_16_OFFSET))(this);
		}

		::System::Type* Method_17_17()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOMETHOD_METHOD_17_17_OFFSET))(this);
		}

		::System::Type* Method_18_18()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOMETHOD_METHOD_18_18_OFFSET))(this);
		}

		::System::String* Method_19_19()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOMETHOD_METHOD_19_19_OFFSET))(this);
		}

		::System::Boolean Method_20_20(::System::Type* attributeType, ::System::Boolean inherit)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Type*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOMETHOD_METHOD_20_20_OFFSET))(this, attributeType, inherit);
		}

		::Il2CppArray<::System::Object*>* Method_21_21(::System::Boolean inherit)
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOMETHOD_METHOD_21_21_OFFSET))(this, inherit);
		}

		::Il2CppArray<::System::Object*>* Method_22_22(::System::Type* attributeType, ::System::Boolean inherit)
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID, ::System::Type*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOMETHOD_METHOD_22_22_OFFSET))(this, attributeType, inherit);
		}

		::System::Void Method_23_23(::System::Reflection::PInvokeAttributes& flags, ::System::String*& entryPoint, ::System::String*& dllName)
		{
			return ((::System::Void(*)(::PVOID, ::System::Reflection::PInvokeAttributes&, ::System::String*&, ::System::String*&))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOMETHOD_METHOD_23_23_OFFSET))(this, flags, entryPoint, dllName);
		}

		::Il2CppArray<::System::Object*>* Method_24_24()
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOMETHOD_METHOD_24_24_OFFSET))(this);
		}

		::System::Reflection::MethodInfo* Method_25_25(::Il2CppArray<::System::Type*>* methodInstantiation)
		{
			return ((::System::Reflection::MethodInfo*(*)(::PVOID, ::Il2CppArray<::System::Type*>*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOMETHOD_METHOD_25_25_OFFSET))(this, methodInstantiation);
		}

		::System::Reflection::MethodInfo* Method_26_26(::Il2CppArray<::System::Type*>* types)
		{
			return ((::System::Reflection::MethodInfo*(*)(::PVOID, ::Il2CppArray<::System::Type*>*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOMETHOD_METHOD_26_26_OFFSET))(this, types);
		}

		::Il2CppArray<::System::Type*>* Method_27_27()
		{
			return ((::Il2CppArray<::System::Type*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOMETHOD_METHOD_27_27_OFFSET))(this);
		}

		::System::Reflection::MethodInfo* Method_28_28()
		{
			return ((::System::Reflection::MethodInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOMETHOD_METHOD_28_28_OFFSET))(this);
		}

		::System::Reflection::MethodInfo* Method_29_29()
		{
			return ((::System::Reflection::MethodInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOMETHOD_METHOD_29_29_OFFSET))(this);
		}

		::System::Boolean Method_30_30()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOMETHOD_METHOD_30_30_OFFSET))(this);
		}

		::System::Boolean Method_31_31()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOMETHOD_METHOD_31_31_OFFSET))(this);
		}

		::System::Boolean Method_32_32()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOMETHOD_METHOD_32_32_OFFSET))(this);
		}

		::System::Reflection::MethodBody* Method_33_33()
		{
			return ((::System::Reflection::MethodBody*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOMETHOD_METHOD_33_33_OFFSET))(this);
		}

		::System::Collections::Generic::IList_1<::System::Reflection::CustomAttributeData*>* Method_34_34()
		{
			return ((::System::Collections::Generic::IList_1<::System::Reflection::CustomAttributeData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOMETHOD_METHOD_34_34_OFFSET))(this);
		}

		::System::Boolean Method_35_35()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOMETHOD_METHOD_35_35_OFFSET))(this);
		}
	};
}
