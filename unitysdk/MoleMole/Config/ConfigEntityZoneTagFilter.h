#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/AbilityTargetting.h"
#include "unitysdk/MoleMole/Config/ConfigEntityFilter.h"

namespace MoleMole::Battle { class Entity; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_CONFIGENTITYZONETAGFILTER_MATCHZONETAG_OFFSET UNITYSDK_OFFSET(0x19B17D60)
#define MOLEMOLE_CONFIG_CONFIGENTITYZONETAGFILTER_VALUEPASS_OFFSET UNITYSDK_OFFSET(0x19B17C90)
#define MOLEMOLE_CONFIG_CONFIGENTITYZONETAGFILTER__CTOR_OFFSET UNITYSDK_OFFSET(0x19B17E90)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigEntityZoneTagFilter_TypeDefinitionIndex = 85501;

	class ConfigEntityZoneTagFilter : public ::MoleMole::Config::ConfigEntityFilter
	{
	public:
		::System::Collections::Generic::List_1<::System::String*>* ZoneTags; // 0x18
		::MoleMole::Config::AbilityTargetting MpPeerIdTarget; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYZONETAGFILTER__CTOR_OFFSET))(this);
		}

		::System::Boolean ValuePass(::MoleMole::Battle::Entity* owner, ::MoleMole::Battle::Entity* target, ::MoleMole::Battle::Entity* abilityTargettingSelf, ::MoleMole::Battle::Entity* abilityTargettingTarget, ::MoleMole::Battle::Entity* abilityTargettingCaster, ::MoleMole::Battle::Entity* abilityTargettingOther)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYZONETAGFILTER_VALUEPASS_OFFSET))(this, owner, target, abilityTargettingSelf, abilityTargettingTarget, abilityTargettingCaster, abilityTargettingOther);
		}

		::System::Boolean MatchZoneTag(::MoleMole::Battle::Entity* entity, ::System::UInt32 peerID)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::UInt32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYZONETAGFILTER_MATCHZONETAG_OFFSET))(this, entity, peerID);
		}
	};
}
