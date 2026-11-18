#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define IFIX_PRESERVEATTRIBUTE_BEA4BFEDB861B960__CTOR_OFFSET UNITYSDK_OFFSET(0x20045070)

namespace IFix
{
	inline static constexpr unsigned int PreserveAttribute_BEA4BFEDB861B960_TypeDefinitionIndex = 96716;

	class PreserveAttribute_BEA4BFEDB861B960 : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFIX_PRESERVEATTRIBUTE_BEA4BFEDB861B960__CTOR_OFFSET))(this);
		}
	};
}
