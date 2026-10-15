#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define SYSTEM_RUNTIME_COMPILERSERVICES_REFSAFETYRULESATTRIBUTE_64ACD7F55C37D6C0_CTOR_OFFSET UNITYSDK_OFFSET(0x1C41E790)

namespace System::Runtime::CompilerServices
{
	inline static constexpr unsigned int RefSafetyRulesAttribute_64ACD7F55C37D6C0_TypeDefinitionIndex = 35874;

	class RefSafetyRulesAttribute_64ACD7F55C37D6C0 : public ::System::Attribute
	{
	public:
		::System::Int32 Version; // 0x10
		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_REFSAFETYRULESATTRIBUTE_64ACD7F55C37D6C0_CTOR_OFFSET))(this, a1);
		}

	};
}
