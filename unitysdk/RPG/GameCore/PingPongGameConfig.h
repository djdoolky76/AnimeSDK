#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LittleGameConstConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PingPongAddPointConfig; }
namespace RPG::GameCore { class PingPongBallConfig; }
namespace RPG::GameCore { class PingPongBaseStateConfig; }
namespace RPG::GameCore { class PingPongDropItemConfig; }
namespace RPG::GameCore { class PingPongEnemyCommonConfig; }
namespace RPG::GameCore { class PingPongGameConfig; }
namespace RPG::GameCore { class PingPongProjectileGroup; }
namespace RPG::GameCore { class PingPongRacketConfig; }
namespace RPG::GameCore { class PingPongSkillConfig; }

#define RPG_GAMECORE_PINGPONGGAMECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D917590)
#define RPG_GAMECORE_PINGPONGGAMECONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D9175A0)
#define RPG_GAMECORE_PINGPONGGAMECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D917560)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PingPongGameConfig_TypeDefinitionIndex = 16975;

	class PingPongGameConfig : public ::RPG::GameCore::LittleGameConstConfig
	{
	public:
		::RPG::GameCore::PingPongBaseStateConfig* BaseState; // 0x10
		::RPG::GameCore::PingPongAddPointConfig* AddPoint; // 0x18
		::RPG::GameCore::PingPongRacketConfig* Racket; // 0x20
		::RPG::GameCore::PingPongBallConfig* Ball; // 0x28
		::RPG::GameCore::PingPongEnemyCommonConfig* Enemy; // 0x30
		::RPG::GameCore::PingPongSkillConfig* Skill; // 0x38
		::Il2CppArray<::RPG::GameCore::PingPongProjectileGroup*>* ProjectileList; // 0x40
		::RPG::GameCore::PingPongDropItemConfig* DropItem; // 0x48
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PINGPONGGAMECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::PingPongGameConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PingPongGameConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PINGPONGGAMECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::PingPongGameConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PingPongGameConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PINGPONGGAMECONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
