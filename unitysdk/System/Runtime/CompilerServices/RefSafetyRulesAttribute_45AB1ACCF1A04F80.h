#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define SYSTEM_RUNTIME_COMPILERSERVICES_REFSAFETYRULESATTRIBUTE_45AB1ACCF1A04F80_CTOR_OFFSET UNITYSDK_OFFSET(0x1CC943E0)

namespace System::Runtime::CompilerServices
{
	class RefSafetyRulesAttribute_45AB1ACCF1A04F80 : public ::System::Attribute
	{
	public:
		::System::Int32 Version; // 0x10
		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_REFSAFETYRULESATTRIBUTE_45AB1ACCF1A04F80_CTOR_OFFSET))(this, a1);
		}

	};
}
