#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define SYSTEM_RUNTIME_COMPILERSERVICES_REFSAFETYRULESATTRIBUTE_3B1F66A180BA1E4E_CTOR_OFFSET UNITYSDK_OFFSET(0x1F4CE620)

namespace System::Runtime::CompilerServices
{
	inline static constexpr unsigned int RefSafetyRulesAttribute_3B1F66A180BA1E4E_TypeDefinitionIndex = 6686;

	class RefSafetyRulesAttribute_3B1F66A180BA1E4E : public ::System::Attribute
	{
	public:
		::System::Int32 Version; // 0x10
		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_REFSAFETYRULESATTRIBUTE_3B1F66A180BA1E4E_CTOR_OFFSET))(this, a1);
		}

	};
}
