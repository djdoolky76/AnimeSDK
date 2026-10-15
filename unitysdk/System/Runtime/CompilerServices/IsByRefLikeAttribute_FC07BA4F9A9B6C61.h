#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define SYSTEM_RUNTIME_COMPILERSERVICES_ISBYREFLIKEATTRIBUTE_FC07BA4F9A9B6C61_CTOR_OFFSET UNITYSDK_OFFSET(0x1EE189C0)

namespace System::Runtime::CompilerServices
{
	inline static constexpr unsigned int IsByRefLikeAttribute_FC07BA4F9A9B6C61_TypeDefinitionIndex = 4962;

	class IsByRefLikeAttribute_FC07BA4F9A9B6C61 : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_ISBYREFLIKEATTRIBUTE_FC07BA4F9A9B6C61_CTOR_OFFSET))(this);
		}

	};
}
