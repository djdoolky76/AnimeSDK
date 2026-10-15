#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define SYSTEM_RUNTIME_COMPILERSERVICES_REFSAFETYRULESATTRIBUTE_7F19F28B085EA899_CTOR_OFFSET UNITYSDK_OFFSET(0x1C4E2CF0)

namespace System::Runtime::CompilerServices
{
	inline static constexpr unsigned int RefSafetyRulesAttribute_7F19F28B085EA899_TypeDefinitionIndex = 5595;

	class RefSafetyRulesAttribute_7F19F28B085EA899 : public ::System::Attribute
	{
	public:
		::System::Int32 Version; // 0x10
		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_REFSAFETYRULESATTRIBUTE_7F19F28B085EA899_CTOR_OFFSET))(this, a1);
		}

	};
}
