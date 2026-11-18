#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BBDGELOKMMC.h"
#include "unitysdk/MoleMole/Config/ConfigEntityFilter.h"

namespace MoleMole::Battle { class Entity; }

#define MOLEMOLE_CONFIG_CONFIGSELFHEIGHTWITHTARGETHEIGHTFILTER_VALUEPASS_OFFSET UNITYSDK_OFFSET(0x1C6D6EF0)
#define MOLEMOLE_CONFIG_CONFIGSELFHEIGHTWITHTARGETHEIGHTFILTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1C6D7240)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigSelfHeightWithTargetHeightFilter_TypeDefinitionIndex = 91807;

	class ConfigSelfHeightWithTargetHeightFilter : public ::MoleMole::Config::ConfigEntityFilter
	{
	public:
		::System::Single Height; // 0x18
		::BBDGELOKMMC CompareType; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSELFHEIGHTWITHTARGETHEIGHTFILTER__CTOR_OFFSET))(this);
		}

		::System::Boolean ValuePass(::MoleMole::Battle::Entity* owner, ::MoleMole::Battle::Entity* target, ::MoleMole::Battle::Entity* abilityTargettingSelf, ::MoleMole::Battle::Entity* abilityTargettingTarget, ::MoleMole::Battle::Entity* abilityTargettingCaster, ::MoleMole::Battle::Entity* abilityTargettingOther)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSELFHEIGHTWITHTARGETHEIGHTFILTER_VALUEPASS_OFFSET))(this, owner, target, abilityTargettingSelf, abilityTargettingTarget, abilityTargettingCaster, abilityTargettingOther);
		}
	};
}
