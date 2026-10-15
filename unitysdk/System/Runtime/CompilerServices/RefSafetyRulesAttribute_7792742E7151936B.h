#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define SYSTEM_RUNTIME_COMPILERSERVICES_REFSAFETYRULESATTRIBUTE_7792742E7151936B_CTOR_OFFSET UNITYSDK_OFFSET(0x1F186A60)

namespace System::Runtime::CompilerServices
{
	inline static constexpr unsigned int RefSafetyRulesAttribute_7792742E7151936B_TypeDefinitionIndex = 45896;

	class RefSafetyRulesAttribute_7792742E7151936B : public ::System::Attribute
	{
	public:
		::System::Int32 Version; // 0x10
		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_REFSAFETYRULESATTRIBUTE_7792742E7151936B_CTOR_OFFSET))(this, a1);
		}

	};
}
