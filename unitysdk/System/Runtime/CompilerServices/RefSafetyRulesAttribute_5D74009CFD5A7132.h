#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define SYSTEM_RUNTIME_COMPILERSERVICES_REFSAFETYRULESATTRIBUTE_5D74009CFD5A7132_CTOR_OFFSET UNITYSDK_OFFSET(0x1F113520)

namespace System::Runtime::CompilerServices
{
	inline static constexpr unsigned int RefSafetyRulesAttribute_5D74009CFD5A7132_TypeDefinitionIndex = 45183;

	class RefSafetyRulesAttribute_5D74009CFD5A7132 : public ::System::Attribute
	{
	public:
		::System::Int32 Version; // 0x10
		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_REFSAFETYRULESATTRIBUTE_5D74009CFD5A7132_CTOR_OFFSET))(this, a1);
		}

	};
}
