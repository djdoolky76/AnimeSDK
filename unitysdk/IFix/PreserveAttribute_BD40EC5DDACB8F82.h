#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define IFIX_PRESERVEATTRIBUTE_BD40EC5DDACB8F82__CTOR_OFFSET UNITYSDK_OFFSET(0x1E5F4360)

namespace IFix
{
	inline static constexpr unsigned int PreserveAttribute_BD40EC5DDACB8F82_TypeDefinitionIndex = 34045;

	class PreserveAttribute_BD40EC5DDACB8F82 : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFIX_PRESERVEATTRIBUTE_BD40EC5DDACB8F82__CTOR_OFFSET))(this);
		}
	};
}
