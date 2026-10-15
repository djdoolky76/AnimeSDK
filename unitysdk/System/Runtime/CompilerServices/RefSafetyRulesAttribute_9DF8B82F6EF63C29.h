#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define SYSTEM_RUNTIME_COMPILERSERVICES_REFSAFETYRULESATTRIBUTE_9DF8B82F6EF63C29_CTOR_OFFSET UNITYSDK_OFFSET(0x1EE463C0)

namespace System::Runtime::CompilerServices
{
	class RefSafetyRulesAttribute_9DF8B82F6EF63C29 : public ::System::Attribute
	{
	public:
		::System::Int32 Version; // 0x10
		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_REFSAFETYRULESATTRIBUTE_9DF8B82F6EF63C29_CTOR_OFFSET))(this, a1);
		}

	};
}
