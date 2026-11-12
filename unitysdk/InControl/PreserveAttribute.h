#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define INCONTROL_PRESERVEATTRIBUTE_CTOR_OFFSET UNITYSDK_OFFSET(0x1CBFFBA0)

namespace InControl
{
	inline static constexpr unsigned int PreserveAttribute_TypeDefinitionIndex = 41887;

	class PreserveAttribute : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_PRESERVEATTRIBUTE_CTOR_OFFSET))(this);
		}

	};
}
