#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define SYSTEM_RUNTIME_COMPILERSERVICES_REFSAFETYRULESATTRIBUTE_722742AAF260BE47_CTOR_OFFSET UNITYSDK_OFFSET(0x1BB40B20)

namespace System::Runtime::CompilerServices
{
	inline static constexpr unsigned int RefSafetyRulesAttribute_722742AAF260BE47_TypeDefinitionIndex = 6165;

	class RefSafetyRulesAttribute_722742AAF260BE47 : public ::System::Attribute
	{
	public:
		::System::Int32 Version; // 0x10
		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_REFSAFETYRULESATTRIBUTE_722742AAF260BE47_CTOR_OFFSET))(this, a1);
		}

	};
}
