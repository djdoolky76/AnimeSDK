#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/AbilityTargetting.h"
#include "unitysdk/MoleMole/Config/ConfigEntityFilter.h"
#include "unitysdk/MoleMole/Config/ConfigEntitySummonTagFilter___c__DisplayClass5_0.h"

namespace MoleMole::Battle { class Entity; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_CONFIGENTITYSUMMONTAGFILTER_MATCHSUMMONTAG_OFFSET UNITYSDK_OFFSET(0x1923EC50)
#define MOLEMOLE_CONFIG_CONFIGENTITYSUMMONTAGFILTER_VALUEPASS_OFFSET UNITYSDK_OFFSET(0x1923EB80)
#define MOLEMOLE_CONFIG_CONFIGENTITYSUMMONTAGFILTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1923F060)
#define MOLEMOLE_CONFIG_CONFIGENTITYSUMMONTAGFILTER__MATCHSUMMONTAG_G__CHECKISSAMESUMMONER_5_1_OFFSET UNITYSDK_OFFSET(0x1923F0B0)
#define MOLEMOLE_CONFIG_CONFIGENTITYSUMMONTAGFILTER__MATCHSUMMONTAG_G__CHECKISSELFSUMMONER_5_2_OFFSET UNITYSDK_OFFSET(0x1923F070)
#define MOLEMOLE_CONFIG_CONFIGENTITYSUMMONTAGFILTER__MATCHSUMMONTAG_G__CHECKSUMMONER_5_0_OFFSET UNITYSDK_OFFSET(0x1923EFE0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigEntitySummonTagFilter_TypeDefinitionIndex = 54459;

	class ConfigEntitySummonTagFilter : public ::MoleMole::Config::ConfigEntityFilter
	{
	public:
		::System::Collections::Generic::List_1<::System::String*>* SummonTag; // 0x18
		::MoleMole::Config::AbilityTargetting MpPeerIdTarget; // 0x20
		::System::Boolean IsSelfSummoner; // 0x24
		::System::Boolean IsSameSummoner; // 0x25

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYSUMMONTAGFILTER__CTOR_OFFSET))(this);
		}

		::System::Boolean ValuePass(::MoleMole::Battle::Entity* owner, ::MoleMole::Battle::Entity* target, ::MoleMole::Battle::Entity* abilityTargettingSelf, ::MoleMole::Battle::Entity* abilityTargettingTarget, ::MoleMole::Battle::Entity* abilityTargettingCaster, ::MoleMole::Battle::Entity* abilityTargettingOther)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYSUMMONTAGFILTER_VALUEPASS_OFFSET))(this, owner, target, abilityTargettingSelf, abilityTargettingTarget, abilityTargettingCaster, abilityTargettingOther);
		}

		::System::Boolean MatchSummonTag(::MoleMole::Battle::Entity* entity, ::MoleMole::Battle::Entity* owner, ::System::UInt32 peerID)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::System::UInt32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYSUMMONTAGFILTER_MATCHSUMMONTAG_OFFSET))(this, entity, owner, peerID);
		}

		::System::Boolean _MatchSummonTag_g__CheckSummoner_5_0(::MoleMole::Config::ConfigEntitySummonTagFilter___c__DisplayClass5_0& param_0)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::ConfigEntitySummonTagFilter___c__DisplayClass5_0&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYSUMMONTAGFILTER__MATCHSUMMONTAG_G__CHECKSUMMONER_5_0_OFFSET))(this, param_0);
		}

		::System::Boolean _MatchSummonTag_g__CheckIsSameSummoner_5_1(::MoleMole::Config::ConfigEntitySummonTagFilter___c__DisplayClass5_0& param_0)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::ConfigEntitySummonTagFilter___c__DisplayClass5_0&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYSUMMONTAGFILTER__MATCHSUMMONTAG_G__CHECKISSAMESUMMONER_5_1_OFFSET))(this, param_0);
		}

		::System::Boolean _MatchSummonTag_g__CheckIsSelfSummoner_5_2(::MoleMole::Config::ConfigEntitySummonTagFilter___c__DisplayClass5_0& param_0)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::ConfigEntitySummonTagFilter___c__DisplayClass5_0&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYSUMMONTAGFILTER__MATCHSUMMONTAG_G__CHECKISSELFSUMMONER_5_2_OFFSET))(this, param_0);
		}
	};
}
