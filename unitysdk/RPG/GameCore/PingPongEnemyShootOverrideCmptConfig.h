#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LittleGameComponentConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PingPongEnemyShootOverrideCmptConfig; }
namespace RPG::GameCore { class PingPongEnemyShootOverrideConfig; }

#define RPG_GAMECORE_PINGPONGENEMYSHOOTOVERRIDECMPTCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D8E92C0)
#define RPG_GAMECORE_PINGPONGENEMYSHOOTOVERRIDECMPTCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D8E92D0)
#define RPG_GAMECORE_PINGPONGENEMYSHOOTOVERRIDECMPTCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D8E9270)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PingPongEnemyShootOverrideCmptConfig_TypeDefinitionIndex = 18940;

	class PingPongEnemyShootOverrideCmptConfig : public ::RPG::GameCore::LittleGameComponentConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::PingPongEnemyShootOverrideConfig*>* OverrideList; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PINGPONGENEMYSHOOTOVERRIDECMPTCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::PingPongEnemyShootOverrideCmptConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PingPongEnemyShootOverrideCmptConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PINGPONGENEMYSHOOTOVERRIDECMPTCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::PingPongEnemyShootOverrideCmptConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PingPongEnemyShootOverrideCmptConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PINGPONGENEMYSHOOTOVERRIDECMPTCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
