#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Reflection/PropertyInfo.h"
#include "unitysdk/System/Runtime/Serialization/StreamingContext.h"

namespace System { class RuntimeType; }
namespace System { class String; }
namespace System::Reflection { class Module; }
namespace System::Reflection { class RuntimeModule; }
namespace System::Runtime::Serialization { class SerializationInfo; }

#define SYSTEM_REFLECTION_RUNTIMEPROPERTYINFO_METHOD_0_OFFSET UNITYSDK_OFFSET(0x1DB5B130)
#define SYSTEM_REFLECTION_RUNTIMEPROPERTYINFO_METHOD_1_1_OFFSET UNITYSDK_OFFSET(0x1DB5AC80)
#define SYSTEM_REFLECTION_RUNTIMEPROPERTYINFO_METHOD_2_2_OFFSET UNITYSDK_OFFSET(0x1DB5ADA0)
#define SYSTEM_REFLECTION_RUNTIMEPROPERTYINFO_METHOD_3_3_OFFSET UNITYSDK_OFFSET(0x1DB5AE10)
#define SYSTEM_REFLECTION_RUNTIMEPROPERTYINFO_METHOD_4_4_OFFSET UNITYSDK_OFFSET(0x1DB5AD10)
#define SYSTEM_REFLECTION_RUNTIMEPROPERTYINFO_METHOD_5_5_OFFSET UNITYSDK_OFFSET(0x1DB5AE80)
#define SYSTEM_REFLECTION_RUNTIMEPROPERTYINFO_METHOD_6_6_OFFSET UNITYSDK_OFFSET(0x1DB5AE90)
#define SYSTEM_REFLECTION_RUNTIMEPROPERTYINFO_METHOD_7_7_OFFSET UNITYSDK_OFFSET(0x1DB5AFE0)
#define SYSTEM_REFLECTION_RUNTIMEPROPERTYINFO_METHOD_8_8_OFFSET UNITYSDK_OFFSET(0x1DB5B120)

namespace System::Reflection
{
	inline static constexpr unsigned int RuntimePropertyInfo_TypeDefinitionIndex = 602;

	class RuntimePropertyInfo : public ::System::Reflection::PropertyInfo
	{
	public:
		::System::Void Method_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_RUNTIMEPROPERTYINFO_METHOD_0_OFFSET))(this);
		}

		::System::Reflection::Module* Method_1_1()
		{
			return ((::System::Reflection::Module*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_RUNTIMEPROPERTYINFO_METHOD_1_1_OFFSET))(this);
		}

		::System::RuntimeType* Method_2_2()
		{
			return ((::System::RuntimeType*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_RUNTIMEPROPERTYINFO_METHOD_2_2_OFFSET))(this);
		}

		::System::RuntimeType* Method_3_3()
		{
			return ((::System::RuntimeType*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_RUNTIMEPROPERTYINFO_METHOD_3_3_OFFSET))(this);
		}

		::System::Reflection::RuntimeModule* Method_4_4()
		{
			return ((::System::Reflection::RuntimeModule*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_RUNTIMEPROPERTYINFO_METHOD_4_4_OFFSET))(this);
		}

		::System::String* Method_5_5()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_RUNTIMEPROPERTYINFO_METHOD_5_5_OFFSET))(this);
		}

		::System::String* Method_6_6(::System::Boolean serialization)
		{
			return ((::System::String*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_RUNTIMEPROPERTYINFO_METHOD_6_6_OFFSET))(this, serialization);
		}

		::System::Void Method_7_7(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_RUNTIMEPROPERTYINFO_METHOD_7_7_OFFSET))(this, info, context);
		}

		::System::String* Method_8_8()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_RUNTIMEPROPERTYINFO_METHOD_8_8_OFFSET))(this);
		}
	};
}
