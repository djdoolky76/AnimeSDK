#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define SYSTEM_RUNTIME_COMPILERSERVICES_REFSAFETYRULESATTRIBUTE_D842781341CE8C8D_CTOR_OFFSET UNITYSDK_OFFSET(0x1F637CD0)

namespace System::Runtime::CompilerServices
{
	class RefSafetyRulesAttribute_D842781341CE8C8D : public ::System::Attribute
	{
	public:
		::System::Int32 Version; // 0x10
		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_REFSAFETYRULESATTRIBUTE_D842781341CE8C8D_CTOR_OFFSET))(this, a1);
		}

	};
}
