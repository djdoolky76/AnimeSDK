#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Reflection/Module.h"

#define SYSTEM_REFLECTION_RUNTIMEMODULE_METHOD_0_OFFSET UNITYSDK_OFFSET(0x1E399560)

namespace System::Reflection
{
	inline static constexpr unsigned int RuntimeModule_TypeDefinitionIndex = 596;

	class RuntimeModule : public ::System::Reflection::Module
	{
	public:
		::System::Void Method_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_RUNTIMEMODULE_METHOD_0_OFFSET))(this);
		}
	};
}
