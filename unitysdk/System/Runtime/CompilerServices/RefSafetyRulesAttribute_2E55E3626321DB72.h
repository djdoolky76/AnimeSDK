#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define SYSTEM_RUNTIME_COMPILERSERVICES_REFSAFETYRULESATTRIBUTE_2E55E3626321DB72_CTOR_OFFSET UNITYSDK_OFFSET(0x1F163A70)

namespace System::Runtime::CompilerServices
{
	inline static constexpr unsigned int RefSafetyRulesAttribute_2E55E3626321DB72_TypeDefinitionIndex = 38114;

	class RefSafetyRulesAttribute_2E55E3626321DB72 : public ::System::Attribute
	{
	public:
		::System::Int32 Version; // 0x10
		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_REFSAFETYRULESATTRIBUTE_2E55E3626321DB72_CTOR_OFFSET))(this, a1);
		}

	};
}
