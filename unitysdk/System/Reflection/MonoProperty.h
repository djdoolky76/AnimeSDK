#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Reflection/BindingFlags.h"
#include "unitysdk/System/Reflection/MonoPropertyInfo.h"
#include "unitysdk/System/Reflection/PInfo.h"
#include "unitysdk/System/Reflection/PropertyAttributes.h"
#include "unitysdk/System/Reflection/RuntimePropertyInfo.h"

namespace System { class Object; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Globalization { class CultureInfo; }
namespace System::Reflection { class Binder; }
namespace System::Reflection { class CustomAttributeData; }
namespace System::Reflection { class MethodInfo; }
namespace System::Reflection { class MonoProperty_GetterAdapter; }
namespace System::Reflection { class ParameterInfo; }

#define SYSTEM_REFLECTION_MONOPROPERTY_METHOD_0_OFFSET UNITYSDK_OFFSET(0x1DD19E20)
#define SYSTEM_REFLECTION_MONOPROPERTY_METHOD_10_10_OFFSET UNITYSDK_OFFSET(0x1DD19490)
#define SYSTEM_REFLECTION_MONOPROPERTY_METHOD_11_11_OFFSET UNITYSDK_OFFSET(0x1DD19530)
#define SYSTEM_REFLECTION_MONOPROPERTY_METHOD_12_12_OFFSET UNITYSDK_OFFSET(0x1DD197C0)
#define SYSTEM_REFLECTION_MONOPROPERTY_METHOD_13_13_OFFSET UNITYSDK_OFFSET(0x1DD19860)
#define SYSTEM_REFLECTION_MONOPROPERTY_METHOD_14_14_OFFSET UNITYSDK_OFFSET(0x1DD19870)
#define SYSTEM_REFLECTION_MONOPROPERTY_METHOD_15_15_OFFSET UNITYSDK_OFFSET(0x1DD19880)
#define SYSTEM_REFLECTION_MONOPROPERTY_METHOD_18_18_OFFSET UNITYSDK_OFFSET(0x1DD19890)
#define SYSTEM_REFLECTION_MONOPROPERTY_METHOD_19_19_OFFSET UNITYSDK_OFFSET(0x1DD198D0)
#define SYSTEM_REFLECTION_MONOPROPERTY_METHOD_1_1_OFFSET UNITYSDK_OFFSET(0x1DD18EF0)
#define SYSTEM_REFLECTION_MONOPROPERTY_METHOD_20_20_OFFSET UNITYSDK_OFFSET(0x1DD19B00)
#define SYSTEM_REFLECTION_MONOPROPERTY_METHOD_21_21_OFFSET UNITYSDK_OFFSET(0x1DD19DA0)
#define SYSTEM_REFLECTION_MONOPROPERTY_METHOD_2_2_OFFSET UNITYSDK_OFFSET(0x1DD18F20)
#define SYSTEM_REFLECTION_MONOPROPERTY_METHOD_3_3_OFFSET UNITYSDK_OFFSET(0x1DD18F50)
#define SYSTEM_REFLECTION_MONOPROPERTY_METHOD_4_4_OFFSET UNITYSDK_OFFSET(0x1DD18FA0)
#define SYSTEM_REFLECTION_MONOPROPERTY_METHOD_5_5_OFFSET UNITYSDK_OFFSET(0x1DD18FF0)
#define SYSTEM_REFLECTION_MONOPROPERTY_METHOD_6_6_OFFSET UNITYSDK_OFFSET(0x1DD190E0)
#define SYSTEM_REFLECTION_MONOPROPERTY_METHOD_7_7_OFFSET UNITYSDK_OFFSET(0x1DD19110)
#define SYSTEM_REFLECTION_MONOPROPERTY_METHOD_8_8_OFFSET UNITYSDK_OFFSET(0x1DD19140)
#define SYSTEM_REFLECTION_MONOPROPERTY_METHOD_9_9_OFFSET UNITYSDK_OFFSET(0x1DD19170)

namespace System::Reflection
{
	inline static constexpr unsigned int MonoProperty_TypeDefinitionIndex = 603;

	class MonoProperty : public ::System::Reflection::RuntimePropertyInfo
	{
	public:
		::System::IntPtr Field_0; // 0x10
		::System::IntPtr Field_1; // 0x18
		::System::Reflection::MonoPropertyInfo Field_2; // 0x20
		::System::Reflection::PInfo Field_3; // 0x50
		::System::Byte _padding0[0x4];
		::System::Reflection::MonoProperty_GetterAdapter* Field_4; // 0x58

		::System::Void Method_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOPROPERTY_METHOD_0_OFFSET))(this);
		}

		::System::Void Method_1_1(::System::Reflection::PInfo flags)
		{
			return ((::System::Void(*)(::PVOID, ::System::Reflection::PInfo))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOPROPERTY_METHOD_1_1_OFFSET))(this, flags);
		}

		::System::Reflection::PropertyAttributes Method_2_2()
		{
			return ((::System::Reflection::PropertyAttributes(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOPROPERTY_METHOD_2_2_OFFSET))(this);
		}

		::System::Boolean Method_3_3()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOPROPERTY_METHOD_3_3_OFFSET))(this);
		}

		::System::Boolean Method_4_4()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOPROPERTY_METHOD_4_4_OFFSET))(this);
		}

		::System::Type* Method_5_5()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOPROPERTY_METHOD_5_5_OFFSET))(this);
		}

		::System::Type* Method_6_6()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOPROPERTY_METHOD_6_6_OFFSET))(this);
		}

		::System::Type* Method_7_7()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOPROPERTY_METHOD_7_7_OFFSET))(this);
		}

		::System::String* Method_8_8()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOPROPERTY_METHOD_8_8_OFFSET))(this);
		}

		::Il2CppArray<::System::Reflection::MethodInfo*>* Method_9_9(::System::Boolean nonPublic)
		{
			return ((::Il2CppArray<::System::Reflection::MethodInfo*>*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOPROPERTY_METHOD_9_9_OFFSET))(this, nonPublic);
		}

		::System::Reflection::MethodInfo* Method_10_10(::System::Boolean nonPublic)
		{
			return ((::System::Reflection::MethodInfo*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOPROPERTY_METHOD_10_10_OFFSET))(this, nonPublic);
		}

		::Il2CppArray<::System::Reflection::ParameterInfo*>* Method_11_11()
		{
			return ((::Il2CppArray<::System::Reflection::ParameterInfo*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOPROPERTY_METHOD_11_11_OFFSET))(this);
		}

		::System::Reflection::MethodInfo* Method_12_12(::System::Boolean nonPublic)
		{
			return ((::System::Reflection::MethodInfo*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOPROPERTY_METHOD_12_12_OFFSET))(this, nonPublic);
		}

		::System::Boolean Method_13_13(::System::Type* attributeType, ::System::Boolean inherit)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Type*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOPROPERTY_METHOD_13_13_OFFSET))(this, attributeType, inherit);
		}

		::Il2CppArray<::System::Object*>* Method_14_14(::System::Boolean inherit)
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOPROPERTY_METHOD_14_14_OFFSET))(this, inherit);
		}

		::Il2CppArray<::System::Object*>* Method_15_15(::System::Type* attributeType, ::System::Boolean inherit)
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID, ::System::Type*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOPROPERTY_METHOD_15_15_OFFSET))(this, attributeType, inherit);
		}

		::System::Object* Method_18_18(::System::Object* obj, ::Il2CppArray<::System::Object*>* index)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Object*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOPROPERTY_METHOD_18_18_OFFSET))(this, obj, index);
		}

		::System::Object* Method_19_19(::System::Object* obj, ::System::Reflection::BindingFlags invokeAttr, ::System::Reflection::Binder* binder, ::Il2CppArray<::System::Object*>* index, ::System::Globalization::CultureInfo* culture)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Object*, ::System::Reflection::BindingFlags, ::System::Reflection::Binder*, ::Il2CppArray<::System::Object*>*, ::System::Globalization::CultureInfo*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOPROPERTY_METHOD_19_19_OFFSET))(this, obj, invokeAttr, binder, index, culture);
		}

		::System::Void Method_20_20(::System::Object* obj, ::System::Object* value, ::System::Reflection::BindingFlags invokeAttr, ::System::Reflection::Binder* binder, ::Il2CppArray<::System::Object*>* index, ::System::Globalization::CultureInfo* culture)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Object*, ::System::Reflection::BindingFlags, ::System::Reflection::Binder*, ::Il2CppArray<::System::Object*>*, ::System::Globalization::CultureInfo*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOPROPERTY_METHOD_20_20_OFFSET))(this, obj, value, invokeAttr, binder, index, culture);
		}

		::System::Collections::Generic::IList_1<::System::Reflection::CustomAttributeData*>* Method_21_21()
		{
			return ((::System::Collections::Generic::IList_1<::System::Reflection::CustomAttributeData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOPROPERTY_METHOD_21_21_OFFSET))(this);
		}
	};
}
