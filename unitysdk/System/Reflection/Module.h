#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Runtime/Serialization/StreamingContext.h"
#include "unitysdk/System/Guid.h"

namespace System { class Exception; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Reflection { class Assembly; }
namespace System::Reflection { class TypeFilter; }
namespace System::Runtime::Serialization { class SerializationInfo; }

#define SYSTEM_REFLECTION_MODULE_METHOD_0_OFFSET UNITYSDK_OFFSET(0x1CC34670)
#define SYSTEM_REFLECTION_MODULE_METHOD_10_10_OFFSET UNITYSDK_OFFSET(0x1CC34A00)
#define SYSTEM_REFLECTION_MODULE_METHOD_11_11_OFFSET UNITYSDK_OFFSET(0x1CC34A30)
#define SYSTEM_REFLECTION_MODULE_METHOD_12_12_OFFSET UNITYSDK_OFFSET(0x1CC34B30)
#define SYSTEM_REFLECTION_MODULE_METHOD_13_13_OFFSET UNITYSDK_OFFSET(0x1CC34B70)
#define SYSTEM_REFLECTION_MODULE_METHOD_14_14_OFFSET UNITYSDK_OFFSET(0x1CC34BB0)
#define SYSTEM_REFLECTION_MODULE_METHOD_15_15_OFFSET UNITYSDK_OFFSET(0x1CC34A70)
#define SYSTEM_REFLECTION_MODULE_METHOD_16_16_OFFSET UNITYSDK_OFFSET(0x1CC34BF0)
#define SYSTEM_REFLECTION_MODULE_METHOD_17_17_OFFSET UNITYSDK_OFFSET(0x1CC34C30)
#define SYSTEM_REFLECTION_MODULE_METHOD_18_18_OFFSET UNITYSDK_OFFSET(0x1CC34C70)
#define SYSTEM_REFLECTION_MODULE_METHOD_19_19_OFFSET UNITYSDK_OFFSET(0x1CC34CB0)
#define SYSTEM_REFLECTION_MODULE_METHOD_1_1_OFFSET UNITYSDK_OFFSET(0x1CC34CF0)
#define SYSTEM_REFLECTION_MODULE_METHOD_2_2_OFFSET UNITYSDK_OFFSET(0x1CC34680)
#define SYSTEM_REFLECTION_MODULE_METHOD_3_3_OFFSET UNITYSDK_OFFSET(0x1CC346D0)
#define SYSTEM_REFLECTION_MODULE_METHOD_4_4_OFFSET UNITYSDK_OFFSET(0x1CC346E0)
#define SYSTEM_REFLECTION_MODULE_METHOD_5_5_OFFSET UNITYSDK_OFFSET(0x1CC34740)
#define SYSTEM_REFLECTION_MODULE_METHOD_6_6_OFFSET UNITYSDK_OFFSET(0x1CC348C0)
#define SYSTEM_REFLECTION_MODULE_METHOD_7_7_OFFSET UNITYSDK_OFFSET(0x1CC34720)
#define SYSTEM_REFLECTION_MODULE_METHOD_8_8_OFFSET UNITYSDK_OFFSET(0x1CC349E0)
#define SYSTEM_REFLECTION_MODULE_METHOD_9_9_OFFSET UNITYSDK_OFFSET(0x1CC349F0)

namespace System::Reflection
{
	inline static constexpr unsigned int Module_TypeDefinitionIndex = 582;

	class Module : public ::System::Object
	{
	public:
		static ::System::Reflection::TypeFilter** StaticGet_Field_0()
		{
			return (::System::Reflection::TypeFilter**)Il2CppClass::FromTypeDefinitionIndex(Module_TypeDefinitionIndex)->GetStaticField(0x14F0);
		}
		static ::System::Reflection::TypeFilter** StaticGet_Field_1()
		{
			return (::System::Reflection::TypeFilter**)Il2CppClass::FromTypeDefinitionIndex(Module_TypeDefinitionIndex)->GetStaticField(0x14F8);
		}
		// static const ::System::Reflection::BindingFlags Field_2 = 0x1C; // 0x0
		::System::IntPtr Field_3; // 0x10
		::System::Reflection::Assembly* Field_4; // 0x18
		::System::String* Field_5; // 0x20
		::System::String* Field_6; // 0x28
		::System::String* Field_7; // 0x30
		::System::Boolean Field_8; // 0x38
		::System::Byte _padding0[0x3];
		::System::Int32 Field_9; // 0x3C

		::System::Void Method_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MODULE_METHOD_0_OFFSET))(this);
		}

		static ::System::Void Method_1_1()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MODULE_METHOD_1_1_OFFSET))();
		}

		::System::Void Method_2_2(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MODULE_METHOD_2_2_OFFSET))(this, info, context);
		}

		::System::String* Method_3_3()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MODULE_METHOD_3_3_OFFSET))(this);
		}

		::System::Guid Method_4_4()
		{
			return ((::System::Guid(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MODULE_METHOD_4_4_OFFSET))(this);
		}

		static ::System::Boolean Method_5_5(::System::Type* m, ::System::Object* filterCriteria)
		{
			return ((::System::Boolean(*)(::System::Type*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MODULE_METHOD_5_5_OFFSET))(m, filterCriteria);
		}

		static ::System::Boolean Method_6_6(::System::Type* m, ::System::Object* filterCriteria)
		{
			return ((::System::Boolean(*)(::System::Type*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MODULE_METHOD_6_6_OFFSET))(m, filterCriteria);
		}

		::System::String* Method_7_7()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MODULE_METHOD_7_7_OFFSET))(this);
		}

		::System::Boolean Method_8_8(::System::Object* o)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MODULE_METHOD_8_8_OFFSET))(this, o);
		}

		::System::Int32 Method_9_9()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MODULE_METHOD_9_9_OFFSET))(this);
		}

		static ::System::Boolean Method_10_10(::System::Reflection::Module* left, ::System::Reflection::Module* right)
		{
			return ((::System::Boolean(*)(::System::Reflection::Module*, ::System::Reflection::Module*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MODULE_METHOD_10_10_OFFSET))(left, right);
		}

		::System::Reflection::Assembly* Method_11_11()
		{
			return ((::System::Reflection::Assembly*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MODULE_METHOD_11_11_OFFSET))(this);
		}

		::System::String* Method_12_12()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MODULE_METHOD_12_12_OFFSET))(this);
		}

		::System::Guid Method_13_13()
		{
			return ((::System::Guid(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MODULE_METHOD_13_13_OFFSET))(this);
		}

		::System::String* Method_14_14()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MODULE_METHOD_14_14_OFFSET))(this);
		}

		static ::System::Exception* Method_15_15()
		{
			return ((::System::Exception*(*)())((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MODULE_METHOD_15_15_OFFSET))();
		}

		::System::Boolean Method_16_16()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MODULE_METHOD_16_16_OFFSET))(this);
		}

		::Il2CppArray<::System::Object*>* Method_17_17(::System::Boolean inherit)
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MODULE_METHOD_17_17_OFFSET))(this, inherit);
		}

		::Il2CppArray<::System::Object*>* Method_18_18(::System::Type* attributeType, ::System::Boolean inherit)
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID, ::System::Type*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MODULE_METHOD_18_18_OFFSET))(this, attributeType, inherit);
		}

		::System::Boolean Method_19_19(::System::Type* attributeType, ::System::Boolean inherit)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Type*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MODULE_METHOD_19_19_OFFSET))(this, attributeType, inherit);
		}
	};
}
