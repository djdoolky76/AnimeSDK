#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define SYSTEM_RUNTIME_COMPILERSERVICES_REFSAFETYRULESATTRIBUTE_5BF2FD75B4C8C6C5_CTOR_OFFSET UNITYSDK_OFFSET(0x1CC8F1F0)

namespace System::Runtime::CompilerServices
{
	inline static constexpr unsigned int RefSafetyRulesAttribute_5BF2FD75B4C8C6C5_TypeDefinitionIndex = 43837;

	class RefSafetyRulesAttribute_5BF2FD75B4C8C6C5 : public ::System::Attribute
	{
	public:
		::System::Int32 Version; // 0x10
		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_REFSAFETYRULESATTRIBUTE_5BF2FD75B4C8C6C5_CTOR_OFFSET))(this, a1);
		}

	};
}
