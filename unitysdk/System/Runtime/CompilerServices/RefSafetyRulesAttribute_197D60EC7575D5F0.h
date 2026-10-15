#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define SYSTEM_RUNTIME_COMPILERSERVICES_REFSAFETYRULESATTRIBUTE_197D60EC7575D5F0_CTOR_OFFSET UNITYSDK_OFFSET(0x1DD99FF0)

namespace System::Runtime::CompilerServices
{
	class RefSafetyRulesAttribute_197D60EC7575D5F0 : public ::System::Attribute
	{
	public:
		::System::Int32 Version; // 0x10
		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_REFSAFETYRULESATTRIBUTE_197D60EC7575D5F0_CTOR_OFFSET))(this, a1);
		}

	};
}
