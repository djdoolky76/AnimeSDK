#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/AbilityTargetting.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Battle { class Entity; }

#define MOLEMOLE_CONFIG_CONFIGENTITYFILTER_GETMATCHPEERID_OFFSET UNITYSDK_OFFSET(0x1640D0F0)
#define MOLEMOLE_CONFIG_CONFIGENTITYFILTER_PASS_OFFSET UNITYSDK_OFFSET(0x1640CFF0)
#define MOLEMOLE_CONFIG_CONFIGENTITYFILTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1640D2B0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigEntityFilter_TypeDefinitionIndex = 54299;

	class ConfigEntityFilter : public ::System::Object
	{
	public:
		::System::Boolean isNot; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYFILTER__CTOR_OFFSET))(this);
		}

		::System::Boolean Pass(::MoleMole::Battle::Entity* owner, ::MoleMole::Battle::Entity* target, ::MoleMole::Battle::Entity* abilityTargettingSelf, ::MoleMole::Battle::Entity* abilityTargettingTarget, ::MoleMole::Battle::Entity* abilityTargettingCaster, ::MoleMole::Battle::Entity* abilityTargettingOther)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYFILTER_PASS_OFFSET))(this, owner, target, abilityTargettingSelf, abilityTargettingTarget, abilityTargettingCaster, abilityTargettingOther);
		}

		::System::UInt32 GetMatchPeerID(::MoleMole::Config::AbilityTargetting mpPeerIdTarget, ::MoleMole::Battle::Entity* owner, ::MoleMole::Battle::Entity* target, ::MoleMole::Battle::Entity* abilityTargettingSelf, ::MoleMole::Battle::Entity* abilityTargettingTarget, ::MoleMole::Battle::Entity* abilityTargettingCaster, ::MoleMole::Battle::Entity* abilityTargettingOther)
		{
			return ((::System::UInt32(*)(::PVOID, ::MoleMole::Config::AbilityTargetting, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYFILTER_GETMATCHPEERID_OFFSET))(this, mpPeerIdTarget, owner, target, abilityTargettingSelf, abilityTargettingTarget, abilityTargettingCaster, abilityTargettingOther);
		}
	};
}
