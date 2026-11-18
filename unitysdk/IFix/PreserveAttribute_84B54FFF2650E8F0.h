#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define IFIX_PRESERVEATTRIBUTE_84B54FFF2650E8F0__CTOR_OFFSET UNITYSDK_OFFSET(0x1F02E330)

namespace IFix
{
	inline static constexpr unsigned int PreserveAttribute_84B54FFF2650E8F0_TypeDefinitionIndex = 96575;

	class PreserveAttribute_84B54FFF2650E8F0 : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFIX_PRESERVEATTRIBUTE_84B54FFF2650E8F0__CTOR_OFFSET))(this);
		}
	};
}
