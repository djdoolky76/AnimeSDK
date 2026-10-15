#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define SYSTEM_RUNTIME_COMPILERSERVICES_REFSAFETYRULESATTRIBUTE_80E11DC864740D4E_CTOR_OFFSET UNITYSDK_OFFSET(0x1BBD9100)

namespace System::Runtime::CompilerServices
{
	class RefSafetyRulesAttribute_80E11DC864740D4E : public ::System::Attribute
	{
	public:
		::System::Int32 Version; // 0x10
		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_REFSAFETYRULESATTRIBUTE_80E11DC864740D4E_CTOR_OFFSET))(this, a1);
		}

	};
}
