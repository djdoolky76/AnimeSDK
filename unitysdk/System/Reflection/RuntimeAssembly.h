#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Reflection/Assembly.h"
#include "unitysdk/System/Threading/StackCrawlMark.h"
#include "unitysdk/System/Runtime/Serialization/StreamingContext.h"

namespace System { class String; }
namespace System::Reflection { class AssemblyName; }
namespace System::Runtime::Serialization { class SerializationInfo; }
namespace System::Security::Policy { class Evidence; }

#define SYSTEM_REFLECTION_RUNTIMEASSEMBLY_METHOD_0_OFFSET UNITYSDK_OFFSET(0x1DF81950)
#define SYSTEM_REFLECTION_RUNTIMEASSEMBLY_METHOD_1_1_OFFSET UNITYSDK_OFFSET(0x1DF816D0)
#define SYSTEM_REFLECTION_RUNTIMEASSEMBLY_METHOD_2_2_OFFSET UNITYSDK_OFFSET(0x1DF81760)
#define SYSTEM_REFLECTION_RUNTIMEASSEMBLY_METHOD_3_3_OFFSET UNITYSDK_OFFSET(0x1DF81820)
#define SYSTEM_REFLECTION_RUNTIMEASSEMBLY_METHOD_4_4_OFFSET UNITYSDK_OFFSET(0x1DF81940)

namespace System::Reflection
{
	inline static constexpr unsigned int RuntimeAssembly_TypeDefinitionIndex = 583;

	class RuntimeAssembly : public ::System::Reflection::Assembly
	{
	public:
		::System::Void Method_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_RUNTIMEASSEMBLY_METHOD_0_OFFSET))(this);
		}

		::System::Void Method_1_1(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_RUNTIMEASSEMBLY_METHOD_1_1_OFFSET))(this, info, context);
		}

		static ::System::Reflection::RuntimeAssembly* Method_2_2(::System::String* partialName, ::System::Security::Policy::Evidence* securityEvidence, ::System::Threading::StackCrawlMark& stackMark)
		{
			return ((::System::Reflection::RuntimeAssembly*(*)(::System::String*, ::System::Security::Policy::Evidence*, ::System::Threading::StackCrawlMark&))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_RUNTIMEASSEMBLY_METHOD_2_2_OFFSET))(partialName, securityEvidence, stackMark);
		}

		static ::System::Reflection::RuntimeAssembly* Method_3_3(::System::Reflection::AssemblyName* an, ::System::Security::Policy::Evidence* securityEvidence, ::System::Threading::StackCrawlMark& stackMark)
		{
			return ((::System::Reflection::RuntimeAssembly*(*)(::System::Reflection::AssemblyName*, ::System::Security::Policy::Evidence*, ::System::Threading::StackCrawlMark&))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_RUNTIMEASSEMBLY_METHOD_3_3_OFFSET))(an, securityEvidence, stackMark);
		}

		::System::Reflection::AssemblyName* Method_4_4(::System::Boolean copiedName)
		{
			return ((::System::Reflection::AssemblyName*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_RUNTIMEASSEMBLY_METHOD_4_4_OFFSET))(this, copiedName);
		}
	};
}
