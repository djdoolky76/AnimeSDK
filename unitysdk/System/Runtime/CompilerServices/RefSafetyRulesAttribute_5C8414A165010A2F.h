#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define SYSTEM_RUNTIME_COMPILERSERVICES_REFSAFETYRULESATTRIBUTE_5C8414A165010A2F_CTOR_OFFSET UNITYSDK_OFFSET(0x1EE81100)

namespace System::Runtime::CompilerServices
{
	class RefSafetyRulesAttribute_5C8414A165010A2F : public ::System::Attribute
	{
	public:
		::System::Int32 Version; // 0x10
		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_REFSAFETYRULESATTRIBUTE_5C8414A165010A2F_CTOR_OFFSET))(this, a1);
		}

	};
}
