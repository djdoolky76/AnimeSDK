#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define MESSAGEPACK_IGNOREMEMBERATTRIBUTE_CTOR_OFFSET UNITYSDK_OFFSET(0x20976C80)

namespace MessagePack
{
	inline static constexpr unsigned int IgnoreMemberAttribute_TypeDefinitionIndex = 6175;

	class IgnoreMemberAttribute : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_IGNOREMEMBERATTRIBUTE_CTOR_OFFSET))(this);
		}

	};
}
