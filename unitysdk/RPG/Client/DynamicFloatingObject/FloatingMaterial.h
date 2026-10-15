#pragma once
#include "unitysdk/unitysdk.h"

#define RPG_CLIENT_DYNAMICFLOATINGOBJECT_FLOATINGMATERIAL_CTOR_OFFSET UNITYSDK_OFFSET(0xCCFC2E0)

namespace RPG::Client::DynamicFloatingObject
{
	class FloatingMaterial
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DYNAMICFLOATINGOBJECT_FLOATINGMATERIAL_CTOR_OFFSET))(this);
		}

	};
}
