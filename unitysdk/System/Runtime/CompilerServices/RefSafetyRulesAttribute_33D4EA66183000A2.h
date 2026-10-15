#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define SYSTEM_RUNTIME_COMPILERSERVICES_REFSAFETYRULESATTRIBUTE_33D4EA66183000A2_CTOR_OFFSET UNITYSDK_OFFSET(0x1EC34D00)

namespace System::Runtime::CompilerServices
{
	inline static constexpr unsigned int RefSafetyRulesAttribute_33D4EA66183000A2_TypeDefinitionIndex = 9950;

	class RefSafetyRulesAttribute_33D4EA66183000A2 : public ::System::Attribute
	{
	public:
		::System::Int32 Version; // 0x10
		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_REFSAFETYRULESATTRIBUTE_33D4EA66183000A2_CTOR_OFFSET))(this, a1);
		}

	};
}
