#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define SYSTEM_RUNTIME_COMPILERSERVICES_REFSAFETYRULESATTRIBUTE_3AAE6D02FA7911EE_CTOR_OFFSET UNITYSDK_OFFSET(0x16737C50)

namespace System::Runtime::CompilerServices
{
	inline static constexpr unsigned int RefSafetyRulesAttribute_3AAE6D02FA7911EE_TypeDefinitionIndex = 39904;

	class RefSafetyRulesAttribute_3AAE6D02FA7911EE : public ::System::Attribute
	{
	public:
		::System::Int32 Version; // 0x10
		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_REFSAFETYRULESATTRIBUTE_3AAE6D02FA7911EE_CTOR_OFFSET))(this, a1);
		}

	};
}
