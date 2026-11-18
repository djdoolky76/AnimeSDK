#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Reflection/FieldInfo.h"
#include "unitysdk/System/Runtime/Serialization/StreamingContext.h"

namespace System { class RuntimeType; }
namespace System::Reflection { class Module; }
namespace System::Reflection { class RuntimeModule; }
namespace System::Runtime::Serialization { class SerializationInfo; }

#define SYSTEM_REFLECTION_RUNTIMEFIELDINFO_METHOD_0_OFFSET UNITYSDK_OFFSET(0x1DD9E790)
#define SYSTEM_REFLECTION_RUNTIMEFIELDINFO_METHOD_1_1_OFFSET UNITYSDK_OFFSET(0x1DD9E450)
#define SYSTEM_REFLECTION_RUNTIMEFIELDINFO_METHOD_2_2_OFFSET UNITYSDK_OFFSET(0x1DD9E570)
#define SYSTEM_REFLECTION_RUNTIMEFIELDINFO_METHOD_3_3_OFFSET UNITYSDK_OFFSET(0x1DD9E5E0)
#define SYSTEM_REFLECTION_RUNTIMEFIELDINFO_METHOD_4_4_OFFSET UNITYSDK_OFFSET(0x1DD9E4E0)
#define SYSTEM_REFLECTION_RUNTIMEFIELDINFO_METHOD_5_5_OFFSET UNITYSDK_OFFSET(0x1DD9E650)

namespace System::Reflection
{
	inline static constexpr unsigned int RuntimeFieldInfo_TypeDefinitionIndex = 588;

	class RuntimeFieldInfo : public ::System::Reflection::FieldInfo
	{
	public:
		::System::Void Method_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_RUNTIMEFIELDINFO_METHOD_0_OFFSET))(this);
		}

		::System::Reflection::Module* Method_1_1()
		{
			return ((::System::Reflection::Module*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_RUNTIMEFIELDINFO_METHOD_1_1_OFFSET))(this);
		}

		::System::RuntimeType* Method_2_2()
		{
			return ((::System::RuntimeType*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_RUNTIMEFIELDINFO_METHOD_2_2_OFFSET))(this);
		}

		::System::RuntimeType* Method_3_3()
		{
			return ((::System::RuntimeType*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_RUNTIMEFIELDINFO_METHOD_3_3_OFFSET))(this);
		}

		::System::Reflection::RuntimeModule* Method_4_4()
		{
			return ((::System::Reflection::RuntimeModule*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_RUNTIMEFIELDINFO_METHOD_4_4_OFFSET))(this);
		}

		::System::Void Method_5_5(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_RUNTIMEFIELDINFO_METHOD_5_5_OFFSET))(this, info, context);
		}
	};
}
