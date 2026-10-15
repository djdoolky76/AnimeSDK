#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define SYSTEM_RUNTIME_COMPILERSERVICES_UNSAFEVALUETYPEATTRIBUTE_CTOR_OFFSET UNITYSDK_OFFSET(0x1C2C80A0)

namespace System::Runtime::CompilerServices
{
	class UnsafeValueTypeAttribute : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_UNSAFEVALUETYPEATTRIBUTE_CTOR_OFFSET))(this);
		}

	};
}
