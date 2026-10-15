#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define SYSTEM_RUNTIME_COMPILERSERVICES_REFSAFETYRULESATTRIBUTE_A751398D7D224B52_CTOR_OFFSET UNITYSDK_OFFSET(0x1BBDD290)

namespace System::Runtime::CompilerServices
{
	class RefSafetyRulesAttribute_A751398D7D224B52 : public ::System::Attribute
	{
	public:
		::System::Int32 Version; // 0x10
		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_REFSAFETYRULESATTRIBUTE_A751398D7D224B52_CTOR_OFFSET))(this, a1);
		}

	};
}
