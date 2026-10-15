#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define SYSTEM_RUNTIME_COMPILERSERVICES_REFSAFETYRULESATTRIBUTE_ADC36E8CBF934D26_CTOR_OFFSET UNITYSDK_OFFSET(0x1CBDF620)

namespace System::Runtime::CompilerServices
{
	class RefSafetyRulesAttribute_ADC36E8CBF934D26 : public ::System::Attribute
	{
	public:
		::System::Int32 Version; // 0x10
		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_REFSAFETYRULESATTRIBUTE_ADC36E8CBF934D26_CTOR_OFFSET))(this, a1);
		}

	};
}
