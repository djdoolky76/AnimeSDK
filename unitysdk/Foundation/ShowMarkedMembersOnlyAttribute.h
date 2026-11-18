#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define FOUNDATION_SHOWMARKEDMEMBERSONLYATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1F4DE160)

namespace Foundation
{
	inline static constexpr unsigned int ShowMarkedMembersOnlyAttribute_TypeDefinitionIndex = 8039;

	class ShowMarkedMembersOnlyAttribute : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_SHOWMARKEDMEMBERSONLYATTRIBUTE__CTOR_OFFSET))(this);
		}
	};
}
