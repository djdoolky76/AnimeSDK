#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define SYSTEM_RUNTIME_COMPILERSERVICES_REFSAFETYRULESATTRIBUTE_C09C8DAE4376D98A_CTOR_OFFSET UNITYSDK_OFFSET(0xE9D6950)

namespace System::Runtime::CompilerServices
{
	inline static constexpr unsigned int RefSafetyRulesAttribute_C09C8DAE4376D98A_TypeDefinitionIndex = 47061;

	class RefSafetyRulesAttribute_C09C8DAE4376D98A : public ::System::Attribute
	{
	public:
		::System::Int32 Version; // 0x10
		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_REFSAFETYRULESATTRIBUTE_C09C8DAE4376D98A_CTOR_OFFSET))(this, a1);
		}

	};
}
