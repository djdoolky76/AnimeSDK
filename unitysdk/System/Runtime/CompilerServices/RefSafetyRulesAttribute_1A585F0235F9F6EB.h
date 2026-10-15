#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define SYSTEM_RUNTIME_COMPILERSERVICES_REFSAFETYRULESATTRIBUTE_1A585F0235F9F6EB_CTOR_OFFSET UNITYSDK_OFFSET(0x1C52F3E0)

namespace System::Runtime::CompilerServices
{
	inline static constexpr unsigned int RefSafetyRulesAttribute_1A585F0235F9F6EB_TypeDefinitionIndex = 36078;

	class RefSafetyRulesAttribute_1A585F0235F9F6EB : public ::System::Attribute
	{
	public:
		::System::Int32 Version; // 0x10
		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_REFSAFETYRULESATTRIBUTE_1A585F0235F9F6EB_CTOR_OFFSET))(this, a1);
		}

	};
}
