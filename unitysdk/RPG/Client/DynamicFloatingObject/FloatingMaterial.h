#pragma once
#include "unitysdk/unitysdk.h"

#define RPG_CLIENT_DYNAMICFLOATINGOBJECT_FLOATINGMATERIAL_CTOR_OFFSET UNITYSDK_OFFSET(0xD6BD8E0)

namespace RPG::Client::DynamicFloatingObject
{
	inline static constexpr unsigned int FloatingMaterial_TypeDefinitionIndex = 75698;

	class FloatingMaterial
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DYNAMICFLOATINGOBJECT_FLOATINGMATERIAL_CTOR_OFFSET))(this);
		}

	};
}
