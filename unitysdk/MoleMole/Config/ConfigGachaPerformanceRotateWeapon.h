#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigUIBaseActionNode.h"

class ADCIIHIOAMH;

#define MOLEMOLE_CONFIG_CONFIGGACHAPERFORMANCEROTATEWEAPON_GETUIANIMATIONNODE_OFFSET UNITYSDK_OFFSET(0xFFD4750)
#define MOLEMOLE_CONFIG_CONFIGGACHAPERFORMANCEROTATEWEAPON__CTOR_OFFSET UNITYSDK_OFFSET(0xFFD47C0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigGachaPerformanceRotateWeapon_TypeDefinitionIndex = 92676;

	class ConfigGachaPerformanceRotateWeapon : public ::MoleMole::Config::ConfigUIBaseActionNode
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGGACHAPERFORMANCEROTATEWEAPON__CTOR_OFFSET))(this);
		}

		::ADCIIHIOAMH* GetUIAnimationNode()
		{
			return ((::ADCIIHIOAMH*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGGACHAPERFORMANCEROTATEWEAPON_GETUIANIMATIONNODE_OFFSET))(this);
		}
	};
}
