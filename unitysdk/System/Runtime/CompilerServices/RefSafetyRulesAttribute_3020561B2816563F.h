#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define SYSTEM_RUNTIME_COMPILERSERVICES_REFSAFETYRULESATTRIBUTE_3020561B2816563F_CTOR_OFFSET UNITYSDK_OFFSET(0x1F191DF0)

namespace System::Runtime::CompilerServices
{
	inline static constexpr unsigned int RefSafetyRulesAttribute_3020561B2816563F_TypeDefinitionIndex = 44325;

	class RefSafetyRulesAttribute_3020561B2816563F : public ::System::Attribute
	{
	public:
		::System::Int32 Version; // 0x10
		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_REFSAFETYRULESATTRIBUTE_3020561B2816563F_CTOR_OFFSET))(this, a1);
		}

	};
}
