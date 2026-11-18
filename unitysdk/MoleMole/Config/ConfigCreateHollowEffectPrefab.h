#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigUIBaseActionNode.h"

class ADCIIHIOAMH;
namespace MoleMole::Config { class BoolUISpecialNum; }
namespace MoleMole::Config { class StringUISpecialNum; }

#define MOLEMOLE_CONFIG_CONFIGCREATEHOLLOWEFFECTPREFAB_GETUIANIMATIONNODE_OFFSET UNITYSDK_OFFSET(0x16408E20)
#define MOLEMOLE_CONFIG_CONFIGCREATEHOLLOWEFFECTPREFAB__CTOR_OFFSET UNITYSDK_OFFSET(0x16408E90)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigCreateHollowEffectPrefab_TypeDefinitionIndex = 39049;

	class ConfigCreateHollowEffectPrefab : public ::MoleMole::Config::ConfigUIBaseActionNode
	{
	public:
		::MoleMole::Config::BoolUISpecialNum* WaitForComplete; // 0x18
		::MoleMole::Config::StringUISpecialNum* Prefab; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCREATEHOLLOWEFFECTPREFAB__CTOR_OFFSET))(this);
		}

		::ADCIIHIOAMH* GetUIAnimationNode()
		{
			return ((::ADCIIHIOAMH*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCREATEHOLLOWEFFECTPREFAB_GETUIANIMATIONNODE_OFFSET))(this);
		}
	};
}
