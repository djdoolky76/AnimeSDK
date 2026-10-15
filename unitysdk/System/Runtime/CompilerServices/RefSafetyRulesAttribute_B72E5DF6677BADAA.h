#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define SYSTEM_RUNTIME_COMPILERSERVICES_REFSAFETYRULESATTRIBUTE_B72E5DF6677BADAA_CTOR_OFFSET UNITYSDK_OFFSET(0x1C52A320)

namespace System::Runtime::CompilerServices
{
	class RefSafetyRulesAttribute_B72E5DF6677BADAA : public ::System::Attribute
	{
	public:
		::System::Int32 Version; // 0x10
		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_REFSAFETYRULESATTRIBUTE_B72E5DF6677BADAA_CTOR_OFFSET))(this, a1);
		}

	};
}
