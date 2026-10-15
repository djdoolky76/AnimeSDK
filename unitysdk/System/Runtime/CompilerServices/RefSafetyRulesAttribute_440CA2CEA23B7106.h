#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define SYSTEM_RUNTIME_COMPILERSERVICES_REFSAFETYRULESATTRIBUTE_440CA2CEA23B7106_CTOR_OFFSET UNITYSDK_OFFSET(0x1ED42650)

namespace System::Runtime::CompilerServices
{
	inline static constexpr unsigned int RefSafetyRulesAttribute_440CA2CEA23B7106_TypeDefinitionIndex = 37945;

	class RefSafetyRulesAttribute_440CA2CEA23B7106 : public ::System::Attribute
	{
	public:
		::System::Int32 Version; // 0x10
		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_REFSAFETYRULESATTRIBUTE_440CA2CEA23B7106_CTOR_OFFSET))(this, a1);
		}

	};
}
