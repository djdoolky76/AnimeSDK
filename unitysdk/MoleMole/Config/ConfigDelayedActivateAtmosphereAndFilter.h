#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigUIBaseActionNode.h"

class ADCIIHIOAMH;

#define MOLEMOLE_CONFIG_CONFIGDELAYEDACTIVATEATMOSPHEREANDFILTER_GETUIANIMATIONNODE_OFFSET UNITYSDK_OFFSET(0xFABCF20)
#define MOLEMOLE_CONFIG_CONFIGDELAYEDACTIVATEATMOSPHEREANDFILTER__CTOR_OFFSET UNITYSDK_OFFSET(0xFABCFE0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigDelayedActivateAtmosphereAndFilter_TypeDefinitionIndex = 80152;

	class ConfigDelayedActivateAtmosphereAndFilter : public ::MoleMole::Config::ConfigUIBaseActionNode
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDELAYEDACTIVATEATMOSPHEREANDFILTER__CTOR_OFFSET))(this);
		}

		::ADCIIHIOAMH* GetUIAnimationNode()
		{
			return ((::ADCIIHIOAMH*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDELAYEDACTIVATEATMOSPHEREANDFILTER_GETUIANIMATIONNODE_OFFSET))(this);
		}
	};
}
