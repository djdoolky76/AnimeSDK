#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define SYSTEM_RUNTIME_COMPILERSERVICES_FRIENDACCESSALLOWEDATTRIBUTE_CTOR_OFFSET UNITYSDK_OFFSET(0x1DAC9C70)

namespace System::Runtime::CompilerServices
{
	inline static constexpr unsigned int FriendAccessAllowedAttribute_TypeDefinitionIndex = 1388;

	class FriendAccessAllowedAttribute : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_FRIENDACCESSALLOWEDATTRIBUTE_CTOR_OFFSET))(this);
		}

	};
}
