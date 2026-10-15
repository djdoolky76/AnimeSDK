#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define SYSTEM_RUNTIME_COMPILERSERVICES_CUSTOMCONSTANTATTRIBUTE_CTOR_OFFSET UNITYSDK_OFFSET(0x1C2C75E0)

namespace System::Runtime::CompilerServices
{
	inline static constexpr unsigned int CustomConstantAttribute_TypeDefinitionIndex = 1382;

	class CustomConstantAttribute : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_CUSTOMCONSTANTATTRIBUTE_CTOR_OFFSET))(this);
		}

	};
}
