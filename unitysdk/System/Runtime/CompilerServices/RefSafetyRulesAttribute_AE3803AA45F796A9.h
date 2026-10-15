#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define SYSTEM_RUNTIME_COMPILERSERVICES_REFSAFETYRULESATTRIBUTE_AE3803AA45F796A9_CTOR_OFFSET UNITYSDK_OFFSET(0x1C3F0400)

namespace System::Runtime::CompilerServices
{
	inline static constexpr unsigned int RefSafetyRulesAttribute_AE3803AA45F796A9_TypeDefinitionIndex = 45167;

	class RefSafetyRulesAttribute_AE3803AA45F796A9 : public ::System::Attribute
	{
	public:
		::System::Int32 Version; // 0x10
		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_REFSAFETYRULESATTRIBUTE_AE3803AA45F796A9_CTOR_OFFSET))(this, a1);
		}

	};
}
