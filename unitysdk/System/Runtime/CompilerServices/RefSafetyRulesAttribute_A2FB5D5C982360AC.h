#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define SYSTEM_RUNTIME_COMPILERSERVICES_REFSAFETYRULESATTRIBUTE_A2FB5D5C982360AC_CTOR_OFFSET UNITYSDK_OFFSET(0xB0BF460)

namespace System::Runtime::CompilerServices
{
	class RefSafetyRulesAttribute_A2FB5D5C982360AC : public ::System::Attribute
	{
	public:
		::System::Int32 Version; // 0x10
		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_REFSAFETYRULESATTRIBUTE_A2FB5D5C982360AC_CTOR_OFFSET))(this, a1);
		}

	};
}
