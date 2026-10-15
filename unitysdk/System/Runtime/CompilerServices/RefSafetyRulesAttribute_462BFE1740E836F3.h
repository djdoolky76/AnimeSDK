#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define SYSTEM_RUNTIME_COMPILERSERVICES_REFSAFETYRULESATTRIBUTE_462BFE1740E836F3_CTOR_OFFSET UNITYSDK_OFFSET(0x1DCAE210)

namespace System::Runtime::CompilerServices
{
	inline static constexpr unsigned int RefSafetyRulesAttribute_462BFE1740E836F3_TypeDefinitionIndex = 10178;

	class RefSafetyRulesAttribute_462BFE1740E836F3 : public ::System::Attribute
	{
	public:
		::System::Int32 Version; // 0x10
		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_REFSAFETYRULESATTRIBUTE_462BFE1740E836F3_CTOR_OFFSET))(this, a1);
		}

	};
}
