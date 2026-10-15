#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueAdventureWolfGunSpecialTargetConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueAdventureWolfGunSpecialTargetCoinConfig; }

#define RPG_GAMECORE_ROGUEADVENTUREWOLFGUNSPECIALTARGETCOINCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D9A4480)
#define RPG_GAMECORE_ROGUEADVENTUREWOLFGUNSPECIALTARGETCOINCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D9A4490)
#define RPG_GAMECORE_ROGUEADVENTUREWOLFGUNSPECIALTARGETCOINCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D9A4440)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueAdventureWolfGunSpecialTargetCoinConfig_TypeDefinitionIndex = 17899;

	class RogueAdventureWolfGunSpecialTargetCoinConfig : public ::RPG::GameCore::RogueAdventureWolfGunSpecialTargetConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEADVENTUREWOLFGUNSPECIALTARGETCOINCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueAdventureWolfGunSpecialTargetCoinConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueAdventureWolfGunSpecialTargetCoinConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEADVENTUREWOLFGUNSPECIALTARGETCOINCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueAdventureWolfGunSpecialTargetCoinConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueAdventureWolfGunSpecialTargetCoinConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEADVENTUREWOLFGUNSPECIALTARGETCOINCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
