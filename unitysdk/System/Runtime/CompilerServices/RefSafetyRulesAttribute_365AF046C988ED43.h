#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define SYSTEM_RUNTIME_COMPILERSERVICES_REFSAFETYRULESATTRIBUTE_365AF046C988ED43_CTOR_OFFSET UNITYSDK_OFFSET(0x166C7010)

namespace System::Runtime::CompilerServices
{
	inline static constexpr unsigned int RefSafetyRulesAttribute_365AF046C988ED43_TypeDefinitionIndex = 45120;

	class RefSafetyRulesAttribute_365AF046C988ED43 : public ::System::Attribute
	{
	public:
		::System::Int32 Version; // 0x10
		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_REFSAFETYRULESATTRIBUTE_365AF046C988ED43_CTOR_OFFSET))(this, a1);
		}

	};
}
