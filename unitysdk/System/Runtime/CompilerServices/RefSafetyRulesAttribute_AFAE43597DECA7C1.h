#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define SYSTEM_RUNTIME_COMPILERSERVICES_REFSAFETYRULESATTRIBUTE_AFAE43597DECA7C1_CTOR_OFFSET UNITYSDK_OFFSET(0x1C57E360)

namespace System::Runtime::CompilerServices
{
	inline static constexpr unsigned int RefSafetyRulesAttribute_AFAE43597DECA7C1_TypeDefinitionIndex = 41641;

	class RefSafetyRulesAttribute_AFAE43597DECA7C1 : public ::System::Attribute
	{
	public:
		::System::Int32 Version; // 0x10
		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_REFSAFETYRULESATTRIBUTE_AFAE43597DECA7C1_CTOR_OFFSET))(this, a1);
		}

	};
}
