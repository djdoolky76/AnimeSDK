#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define SYSTEM_RUNTIME_COMPILERSERVICES_REFSAFETYRULESATTRIBUTE_72210B6E28E1DD38_CTOR_OFFSET UNITYSDK_OFFSET(0x1C9DB260)

namespace System::Runtime::CompilerServices
{
	inline static constexpr unsigned int RefSafetyRulesAttribute_72210B6E28E1DD38_TypeDefinitionIndex = 41922;

	class RefSafetyRulesAttribute_72210B6E28E1DD38 : public ::System::Attribute
	{
	public:
		::System::Int32 Version; // 0x10
		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_REFSAFETYRULESATTRIBUTE_72210B6E28E1DD38_CTOR_OFFSET))(this, a1);
		}

	};
}
