#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define SYSTEM_RUNTIME_COMPILERSERVICES_REFSAFETYRULESATTRIBUTE_16C9FC8B770D22B9_CTOR_OFFSET UNITYSDK_OFFSET(0x1C876DB0)

namespace System::Runtime::CompilerServices
{
	class RefSafetyRulesAttribute_16C9FC8B770D22B9 : public ::System::Attribute
	{
	public:
		::System::Int32 Version; // 0x10
		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_REFSAFETYRULESATTRIBUTE_16C9FC8B770D22B9_CTOR_OFFSET))(this, a1);
		}

	};
}
