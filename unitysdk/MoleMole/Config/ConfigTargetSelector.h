#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MOLEMOLE_CONFIG_CONFIGTARGETSELECTOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1BA43A40)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigTargetSelector_TypeDefinitionIndex = 76134;

	class ConfigTargetSelector : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGTARGETSELECTOR__CTOR_OFFSET))(this);
		}
	};
}
