#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueAdventureWolfGunSpecialTargetConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueAdventureWolfGunSpecialTargetRuanMeiConfig; }

#define RPG_GAMECORE_ROGUEADVENTUREWOLFGUNSPECIALTARGETRUANMEICONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D9A46D0)
#define RPG_GAMECORE_ROGUEADVENTUREWOLFGUNSPECIALTARGETRUANMEICONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D9A46E0)
#define RPG_GAMECORE_ROGUEADVENTUREWOLFGUNSPECIALTARGETRUANMEICONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D9A4770)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueAdventureWolfGunSpecialTargetRuanMeiConfig_TypeDefinitionIndex = 17900;

	class RogueAdventureWolfGunSpecialTargetRuanMeiConfig : public ::RPG::GameCore::RogueAdventureWolfGunSpecialTargetConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEADVENTUREWOLFGUNSPECIALTARGETRUANMEICONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueAdventureWolfGunSpecialTargetRuanMeiConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueAdventureWolfGunSpecialTargetRuanMeiConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEADVENTUREWOLFGUNSPECIALTARGETRUANMEICONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueAdventureWolfGunSpecialTargetRuanMeiConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueAdventureWolfGunSpecialTargetRuanMeiConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEADVENTUREWOLFGUNSPECIALTARGETRUANMEICONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
