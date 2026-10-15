#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define SYSTEM_RUNTIME_COMPILERSERVICES_REFSAFETYRULESATTRIBUTE_64F519CA84E7CF8D_CTOR_OFFSET UNITYSDK_OFFSET(0x1EBBDF40)

namespace System::Runtime::CompilerServices
{
	inline static constexpr unsigned int RefSafetyRulesAttribute_64F519CA84E7CF8D_TypeDefinitionIndex = 43977;

	class RefSafetyRulesAttribute_64F519CA84E7CF8D : public ::System::Attribute
	{
	public:
		::System::Int32 Version; // 0x10
		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_REFSAFETYRULESATTRIBUTE_64F519CA84E7CF8D_CTOR_OFFSET))(this, a1);
		}

	};
}
