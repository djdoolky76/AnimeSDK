#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Reflection/RuntimeAssembly.h"

namespace System { class String; }
namespace System { class Type; }
namespace System::Reflection { class Module; }

#define SYSTEM_REFLECTION_MONOASSEMBLY_METHOD_0_OFFSET UNITYSDK_OFFSET(0x1E0E3E10)
#define SYSTEM_REFLECTION_MONOASSEMBLY_METHOD_1_1_OFFSET UNITYSDK_OFFSET(0x1E0E39B0)
#define SYSTEM_REFLECTION_MONOASSEMBLY_METHOD_2_2_OFFSET UNITYSDK_OFFSET(0x1E0E3A70)
#define SYSTEM_REFLECTION_MONOASSEMBLY_METHOD_3_3_OFFSET UNITYSDK_OFFSET(0x1E0E3C20)

namespace System::Reflection
{
	inline static constexpr unsigned int MonoAssembly_TypeDefinitionIndex = 584;

	class MonoAssembly : public ::System::Reflection::RuntimeAssembly
	{
	public:
		::System::Void Method_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOASSEMBLY_METHOD_0_OFFSET))(this);
		}

		::System::Type* Method_1_1(::System::String* name, ::System::Boolean throwOnError, ::System::Boolean ignoreCase)
		{
			return ((::System::Type*(*)(::PVOID, ::System::String*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOASSEMBLY_METHOD_1_1_OFFSET))(this, name, throwOnError, ignoreCase);
		}

		::System::Reflection::Module* Method_2_2(::System::String* name)
		{
			return ((::System::Reflection::Module*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOASSEMBLY_METHOD_2_2_OFFSET))(this, name);
		}

		::Il2CppArray<::System::Reflection::Module*>* Method_3_3(::System::Boolean getResourceModules)
		{
			return ((::Il2CppArray<::System::Reflection::Module*>*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOASSEMBLY_METHOD_3_3_OFFSET))(this, getResourceModules);
		}
	};
}
