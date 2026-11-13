#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define HDG_BUTTONATTRIBUTE_CTOR_OFFSET UNITYSDK_OFFSET(0x1A691230)

namespace Hdg
{
	inline static constexpr unsigned int ButtonAttribute_TypeDefinitionIndex = 47964;

	class ButtonAttribute : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HDG_BUTTONATTRIBUTE_CTOR_OFFSET))(this);
		}

	};
}
