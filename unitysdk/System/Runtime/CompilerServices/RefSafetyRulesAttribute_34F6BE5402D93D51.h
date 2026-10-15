#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define SYSTEM_RUNTIME_COMPILERSERVICES_REFSAFETYRULESATTRIBUTE_34F6BE5402D93D51_CTOR_OFFSET UNITYSDK_OFFSET(0x1ED08A30)

namespace System::Runtime::CompilerServices
{
	inline static constexpr unsigned int RefSafetyRulesAttribute_34F6BE5402D93D51_TypeDefinitionIndex = 44993;

	class RefSafetyRulesAttribute_34F6BE5402D93D51 : public ::System::Attribute
	{
	public:
		::System::Int32 Version; // 0x10
		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_REFSAFETYRULESATTRIBUTE_34F6BE5402D93D51_CTOR_OFFSET))(this, a1);
		}

	};
}
