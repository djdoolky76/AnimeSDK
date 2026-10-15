#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/RogueMagicEffectType.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PassiveUnitEffectTypeMatchFactorConfig; }

#define RPG_GAMECORE_PASSIVEUNITEFFECTTYPEMATCHFACTORCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D8F0B40)
#define RPG_GAMECORE_PASSIVEUNITEFFECTTYPEMATCHFACTORCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D8F0A00)

namespace RPG::GameCore
{
	class PassiveUnitEffectTypeMatchFactorConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::RogueMagicEffectType PassiveUnitEffectType; // 0x10
		::System::Single PassiveUnitEffectTypeMatchFactor; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PASSIVEUNITEFFECTTYPEMATCHFACTORCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::PassiveUnitEffectTypeMatchFactorConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PassiveUnitEffectTypeMatchFactorConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PASSIVEUNITEFFECTTYPEMATCHFACTORCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
