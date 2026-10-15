#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TriggerRogueShopEnterBattle; }

#define RPG_GAMECORE_TRIGGERROGUESHOPENTERBATTLE_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC58B70)
#define RPG_GAMECORE_TRIGGERROGUESHOPENTERBATTLE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DC58B80)
#define RPG_GAMECORE_TRIGGERROGUESHOPENTERBATTLE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC58AB0)

namespace RPG::GameCore
{
	class TriggerRogueShopEnterBattle : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERROGUESHOPENTERBATTLE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TriggerRogueShopEnterBattle* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TriggerRogueShopEnterBattle*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERROGUESHOPENTERBATTLE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::TriggerRogueShopEnterBattle* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TriggerRogueShopEnterBattle*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERROGUESHOPENTERBATTLE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
