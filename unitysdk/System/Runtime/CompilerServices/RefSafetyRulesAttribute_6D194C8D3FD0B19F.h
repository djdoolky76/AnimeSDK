#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define SYSTEM_RUNTIME_COMPILERSERVICES_REFSAFETYRULESATTRIBUTE_6D194C8D3FD0B19F_CTOR_OFFSET UNITYSDK_OFFSET(0x1ED58D80)

namespace System::Runtime::CompilerServices
{
	inline static constexpr unsigned int RefSafetyRulesAttribute_6D194C8D3FD0B19F_TypeDefinitionIndex = 35348;

	class RefSafetyRulesAttribute_6D194C8D3FD0B19F : public ::System::Attribute
	{
	public:
		::System::Int32 Version; // 0x10
		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_REFSAFETYRULESATTRIBUTE_6D194C8D3FD0B19F_CTOR_OFFSET))(this, a1);
		}

	};
}
