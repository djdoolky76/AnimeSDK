#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define XLUA_ADDITIONALPROPERTIESATTRIBUTE_CTOR_OFFSET UNITYSDK_OFFSET(0x1C4E2D00)

namespace XLua
{
	class AdditionalPropertiesAttribute : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + XLUA_ADDITIONALPROPERTIESATTRIBUTE_CTOR_OFFSET))(this);
		}

	};
}
