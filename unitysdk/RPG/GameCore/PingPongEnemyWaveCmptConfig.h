#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LittleGameComponentConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PingPongEnemyWaveCmptConfig; }

#define RPG_GAMECORE_PINGPONGENEMYWAVECMPTCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D917380)
#define RPG_GAMECORE_PINGPONGENEMYWAVECMPTCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D917390)
#define RPG_GAMECORE_PINGPONGENEMYWAVECMPTCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D9172C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PingPongEnemyWaveCmptConfig_TypeDefinitionIndex = 18935;

	class PingPongEnemyWaveCmptConfig : public ::RPG::GameCore::LittleGameComponentConfig
	{
	public:
		::System::UInt32 WaveIndex; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PINGPONGENEMYWAVECMPTCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::PingPongEnemyWaveCmptConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PingPongEnemyWaveCmptConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PINGPONGENEMYWAVECMPTCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::PingPongEnemyWaveCmptConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PingPongEnemyWaveCmptConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PINGPONGENEMYWAVECMPTCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
