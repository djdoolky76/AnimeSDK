#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Reflection/BindingFlags.h"
#include "unitysdk/System/Reflection/CallingConventions.h"
#include "unitysdk/System/Reflection/MethodAttributes.h"
#include "unitysdk/System/Reflection/MethodImplAttributes.h"
#include "unitysdk/System/Reflection/RuntimeConstructorInfo.h"
#include "unitysdk/System/RuntimeMethodHandle.h"

namespace System { class Exception; }
namespace System { class Object; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Globalization { class CultureInfo; }
namespace System::Reflection { class Binder; }
namespace System::Reflection { class CustomAttributeData; }
namespace System::Reflection { class MethodBody; }
namespace System::Reflection { class ParameterInfo; }

#define SYSTEM_REFLECTION_MONOCMETHOD_METHOD_0_OFFSET UNITYSDK_OFFSET(0x1CC35950)
#define SYSTEM_REFLECTION_MONOCMETHOD_METHOD_10_10_OFFSET UNITYSDK_OFFSET(0x1CC35480)
#define SYSTEM_REFLECTION_MONOCMETHOD_METHOD_11_11_OFFSET UNITYSDK_OFFSET(0x1CC35490)
#define SYSTEM_REFLECTION_MONOCMETHOD_METHOD_12_12_OFFSET UNITYSDK_OFFSET(0x1CC354A0)
#define SYSTEM_REFLECTION_MONOCMETHOD_METHOD_13_13_OFFSET UNITYSDK_OFFSET(0x1CC35500)
#define SYSTEM_REFLECTION_MONOCMETHOD_METHOD_14_14_OFFSET UNITYSDK_OFFSET(0x1CC35580)
#define SYSTEM_REFLECTION_MONOCMETHOD_METHOD_15_15_OFFSET UNITYSDK_OFFSET(0x1CC35040)
#define SYSTEM_REFLECTION_MONOCMETHOD_METHOD_16_16_OFFSET UNITYSDK_OFFSET(0x1CC35590)
#define SYSTEM_REFLECTION_MONOCMETHOD_METHOD_17_17_OFFSET UNITYSDK_OFFSET(0x1CC355F0)
#define SYSTEM_REFLECTION_MONOCMETHOD_METHOD_18_18_OFFSET UNITYSDK_OFFSET(0x1CC35600)
#define SYSTEM_REFLECTION_MONOCMETHOD_METHOD_19_19_OFFSET UNITYSDK_OFFSET(0x1CC35610)
#define SYSTEM_REFLECTION_MONOCMETHOD_METHOD_1_1_OFFSET UNITYSDK_OFFSET(0x1CC34D80)
#define SYSTEM_REFLECTION_MONOCMETHOD_METHOD_20_20_OFFSET UNITYSDK_OFFSET(0x1CC35620)
#define SYSTEM_REFLECTION_MONOCMETHOD_METHOD_21_21_OFFSET UNITYSDK_OFFSET(0x1CC35630)
#define SYSTEM_REFLECTION_MONOCMETHOD_METHOD_22_22_OFFSET UNITYSDK_OFFSET(0x1CC358C0)
#define SYSTEM_REFLECTION_MONOCMETHOD_METHOD_23_23_OFFSET UNITYSDK_OFFSET(0x1CC35940)
#define SYSTEM_REFLECTION_MONOCMETHOD_METHOD_2_2_OFFSET UNITYSDK_OFFSET(0x1CC34DE0)
#define SYSTEM_REFLECTION_MONOCMETHOD_METHOD_3_3_OFFSET UNITYSDK_OFFSET(0x1CC34E20)
#define SYSTEM_REFLECTION_MONOCMETHOD_METHOD_4_4_OFFSET UNITYSDK_OFFSET(0x1CC34E60)
#define SYSTEM_REFLECTION_MONOCMETHOD_METHOD_5_5_OFFSET UNITYSDK_OFFSET(0x1CC34EB0)
#define SYSTEM_REFLECTION_MONOCMETHOD_METHOD_6_6_OFFSET UNITYSDK_OFFSET(0x1CC34EC0)
#define SYSTEM_REFLECTION_MONOCMETHOD_METHOD_7_7_OFFSET UNITYSDK_OFFSET(0x1CC350A0)
#define SYSTEM_REFLECTION_MONOCMETHOD_METHOD_8_8_OFFSET UNITYSDK_OFFSET(0x1CC35350)
#define SYSTEM_REFLECTION_MONOCMETHOD_METHOD_9_9_OFFSET UNITYSDK_OFFSET(0x1CC35450)

namespace System::Reflection
{
	inline static constexpr unsigned int MonoCMethod_TypeDefinitionIndex = 595;

	class MonoCMethod : public ::System::Reflection::RuntimeConstructorInfo
	{
	public:
		::System::IntPtr Field_0; // 0x10
		::System::String* Field_1; // 0x18
		::System::Type* Field_2; // 0x20

		::System::Void Method_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOCMETHOD_METHOD_0_OFFSET))(this);
		}

		::System::Reflection::MethodImplAttributes Method_1_1()
		{
			return ((::System::Reflection::MethodImplAttributes(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOCMETHOD_METHOD_1_1_OFFSET))(this);
		}

		::Il2CppArray<::System::Reflection::ParameterInfo*>* Method_2_2()
		{
			return ((::Il2CppArray<::System::Reflection::ParameterInfo*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOCMETHOD_METHOD_2_2_OFFSET))(this);
		}

		::Il2CppArray<::System::Reflection::ParameterInfo*>* Method_3_3()
		{
			return ((::Il2CppArray<::System::Reflection::ParameterInfo*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOCMETHOD_METHOD_3_3_OFFSET))(this);
		}

		::System::Int32 Method_4_4()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOCMETHOD_METHOD_4_4_OFFSET))(this);
		}

		::System::Object* Method_5_5(::System::Object* obj, ::Il2CppArray<::System::Object*>* parameters, ::System::Exception*& exc)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Object*, ::Il2CppArray<::System::Object*>*, ::System::Exception*&))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOCMETHOD_METHOD_5_5_OFFSET))(this, obj, parameters, exc);
		}

		::System::Object* Method_6_6(::System::Object* obj, ::System::Reflection::BindingFlags invokeAttr, ::System::Reflection::Binder* binder, ::Il2CppArray<::System::Object*>* parameters, ::System::Globalization::CultureInfo* culture)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Object*, ::System::Reflection::BindingFlags, ::System::Reflection::Binder*, ::Il2CppArray<::System::Object*>*, ::System::Globalization::CultureInfo*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOCMETHOD_METHOD_6_6_OFFSET))(this, obj, invokeAttr, binder, parameters, culture);
		}

		::System::Object* Method_7_7(::System::Object* obj, ::System::Reflection::BindingFlags invokeAttr, ::System::Reflection::Binder* binder, ::Il2CppArray<::System::Object*>* parameters, ::System::Globalization::CultureInfo* culture)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Object*, ::System::Reflection::BindingFlags, ::System::Reflection::Binder*, ::Il2CppArray<::System::Object*>*, ::System::Globalization::CultureInfo*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOCMETHOD_METHOD_7_7_OFFSET))(this, obj, invokeAttr, binder, parameters, culture);
		}

		::System::Object* Method_8_8(::System::Object* obj, ::Il2CppArray<::System::Object*>* parameters)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Object*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOCMETHOD_METHOD_8_8_OFFSET))(this, obj, parameters);
		}

		::System::Object* Method_9_9(::System::Reflection::BindingFlags invokeAttr, ::System::Reflection::Binder* binder, ::Il2CppArray<::System::Object*>* parameters, ::System::Globalization::CultureInfo* culture)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Reflection::BindingFlags, ::System::Reflection::Binder*, ::Il2CppArray<::System::Object*>*, ::System::Globalization::CultureInfo*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOCMETHOD_METHOD_9_9_OFFSET))(this, invokeAttr, binder, parameters, culture);
		}

		::System::RuntimeMethodHandle Method_10_10()
		{
			return ((::System::RuntimeMethodHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOCMETHOD_METHOD_10_10_OFFSET))(this);
		}

		::System::Reflection::MethodAttributes Method_11_11()
		{
			return ((::System::Reflection::MethodAttributes(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOCMETHOD_METHOD_11_11_OFFSET))(this);
		}

		::System::Reflection::CallingConventions Method_12_12()
		{
			return ((::System::Reflection::CallingConventions(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOCMETHOD_METHOD_12_12_OFFSET))(this);
		}

		::System::Boolean Method_13_13()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOCMETHOD_METHOD_13_13_OFFSET))(this);
		}

		::System::Type* Method_14_14()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOCMETHOD_METHOD_14_14_OFFSET))(this);
		}

		::System::Type* Method_15_15()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOCMETHOD_METHOD_15_15_OFFSET))(this);
		}

		::System::String* Method_16_16()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOCMETHOD_METHOD_16_16_OFFSET))(this);
		}

		::System::Boolean Method_17_17(::System::Type* attributeType, ::System::Boolean inherit)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Type*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOCMETHOD_METHOD_17_17_OFFSET))(this, attributeType, inherit);
		}

		::Il2CppArray<::System::Object*>* Method_18_18(::System::Boolean inherit)
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOCMETHOD_METHOD_18_18_OFFSET))(this, inherit);
		}

		::Il2CppArray<::System::Object*>* Method_19_19(::System::Type* attributeType, ::System::Boolean inherit)
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID, ::System::Type*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOCMETHOD_METHOD_19_19_OFFSET))(this, attributeType, inherit);
		}

		::System::Reflection::MethodBody* Method_20_20()
		{
			return ((::System::Reflection::MethodBody*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOCMETHOD_METHOD_20_20_OFFSET))(this);
		}

		::System::String* Method_21_21()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOCMETHOD_METHOD_21_21_OFFSET))(this);
		}

		::System::Collections::Generic::IList_1<::System::Reflection::CustomAttributeData*>* Method_22_22()
		{
			return ((::System::Collections::Generic::IList_1<::System::Reflection::CustomAttributeData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOCMETHOD_METHOD_22_22_OFFSET))(this);
		}

		::System::Boolean Method_23_23()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOCMETHOD_METHOD_23_23_OFFSET))(this);
		}
	};
}
