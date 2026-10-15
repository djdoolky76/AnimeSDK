#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define SYSTEM_RUNTIME_COMPILERSERVICES_REFSAFETYRULESATTRIBUTE_177A5B9AA0CC3EFE_CTOR_OFFSET UNITYSDK_OFFSET(0x1DD0A6E0)

namespace System::Runtime::CompilerServices
{
	inline static constexpr unsigned int RefSafetyRulesAttribute_177A5B9AA0CC3EFE_TypeDefinitionIndex = 9937;

	class RefSafetyRulesAttribute_177A5B9AA0CC3EFE : public ::System::Attribute
	{
	public:
		::System::Int32 Version; // 0x10
		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_REFSAFETYRULESATTRIBUTE_177A5B9AA0CC3EFE_CTOR_OFFSET))(this, a1);
		}

	};
}
