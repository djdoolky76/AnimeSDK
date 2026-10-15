#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define SYSTEM_RUNTIME_COMPILERSERVICES_REFSAFETYRULESATTRIBUTE_F92AB9318DAE4C51_CTOR_OFFSET UNITYSDK_OFFSET(0x1F29BC90)

namespace System::Runtime::CompilerServices
{
	inline static constexpr unsigned int RefSafetyRulesAttribute_F92AB9318DAE4C51_TypeDefinitionIndex = 35438;

	class RefSafetyRulesAttribute_F92AB9318DAE4C51 : public ::System::Attribute
	{
	public:
		::System::Int32 Version; // 0x10
		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_REFSAFETYRULESATTRIBUTE_F92AB9318DAE4C51_CTOR_OFFSET))(this, a1);
		}

	};
}
