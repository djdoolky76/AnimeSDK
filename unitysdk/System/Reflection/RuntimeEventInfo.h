#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Reflection/EventInfo.h"
#include "unitysdk/System/Runtime/Serialization/StreamingContext.h"

namespace System { class RuntimeType; }
namespace System::Reflection { class Module; }
namespace System::Reflection { class RuntimeModule; }
namespace System::Runtime::Serialization { class SerializationInfo; }

#define SYSTEM_REFLECTION_RUNTIMEEVENTINFO_METHOD_0_OFFSET UNITYSDK_OFFSET(0x1E48EC60)
#define SYSTEM_REFLECTION_RUNTIMEEVENTINFO_METHOD_1_1_OFFSET UNITYSDK_OFFSET(0x1E48E940)
#define SYSTEM_REFLECTION_RUNTIMEEVENTINFO_METHOD_2_2_OFFSET UNITYSDK_OFFSET(0x1E48EA60)
#define SYSTEM_REFLECTION_RUNTIMEEVENTINFO_METHOD_3_3_OFFSET UNITYSDK_OFFSET(0x1E48EAD0)
#define SYSTEM_REFLECTION_RUNTIMEEVENTINFO_METHOD_4_4_OFFSET UNITYSDK_OFFSET(0x1E48E9D0)
#define SYSTEM_REFLECTION_RUNTIMEEVENTINFO_METHOD_5_5_OFFSET UNITYSDK_OFFSET(0x1E48EB40)

namespace System::Reflection
{
	inline static constexpr unsigned int RuntimeEventInfo_TypeDefinitionIndex = 586;

	class RuntimeEventInfo : public ::System::Reflection::EventInfo
	{
	public:
		::System::Void Method_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_RUNTIMEEVENTINFO_METHOD_0_OFFSET))(this);
		}

		::System::Reflection::Module* Method_1_1()
		{
			return ((::System::Reflection::Module*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_RUNTIMEEVENTINFO_METHOD_1_1_OFFSET))(this);
		}

		::System::RuntimeType* Method_2_2()
		{
			return ((::System::RuntimeType*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_RUNTIMEEVENTINFO_METHOD_2_2_OFFSET))(this);
		}

		::System::RuntimeType* Method_3_3()
		{
			return ((::System::RuntimeType*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_RUNTIMEEVENTINFO_METHOD_3_3_OFFSET))(this);
		}

		::System::Reflection::RuntimeModule* Method_4_4()
		{
			return ((::System::Reflection::RuntimeModule*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_RUNTIMEEVENTINFO_METHOD_4_4_OFFSET))(this);
		}

		::System::Void Method_5_5(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_RUNTIMEEVENTINFO_METHOD_5_5_OFFSET))(this, info, context);
		}
	};
}
