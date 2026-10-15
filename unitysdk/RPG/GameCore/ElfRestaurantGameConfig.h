#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LittleGameConstConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ElfChefConfig; }
namespace RPG::GameCore { class ElfCustomerConfig; }
namespace RPG::GameCore { class ElfDialogTipConfig; }
namespace RPG::GameCore { class ElfDrinkMachineCommonConfig; }
namespace RPG::GameCore { class ElfFarmConfig; }
namespace RPG::GameCore { class ElfGlobalEffectConfig; }
namespace RPG::GameCore { class ElfHeadWaiterTalkConfig; }
namespace RPG::GameCore { class ElfNormalEventConfig; }
namespace RPG::GameCore { class ElfPhaseConfig; }
namespace RPG::GameCore { class ElfRestaurantGameConfig; }
namespace RPG::GameCore { class ElfSkillConfig; }
namespace RPG::GameCore { class ElfSuperEventConfig; }
namespace RPG::GameCore { class ElfWaiterConfig; }
namespace RPG::GameCore { class ElfWaveCustomerConfig; }

#define RPG_GAMECORE_ELFRESTAURANTGAMECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D637AD0)
#define RPG_GAMECORE_ELFRESTAURANTGAMECONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D637AE0)
#define RPG_GAMECORE_ELFRESTAURANTGAMECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D637AA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ElfRestaurantGameConfig_TypeDefinitionIndex = 18455;

	class ElfRestaurantGameConfig : public ::RPG::GameCore::LittleGameConstConfig
	{
	public:
		::System::Single MaxGameTime; // 0x10
		::System::Single TakeOutWaitTime; // 0x14
		::RPG::GameCore::ElfPhaseConfig* PhaseConfig; // 0x18
		::RPG::GameCore::ElfGlobalEffectConfig* EffectConfig; // 0x20
		::RPG::GameCore::ElfSkillConfig* SkillConfig; // 0x28
		::RPG::GameCore::ElfWaveCustomerConfig* WaveCustomerConfig; // 0x30
		::RPG::GameCore::ElfCustomerConfig* CustomerConfig; // 0x38
		::RPG::GameCore::ElfWaiterConfig* WaiterConfig; // 0x40
		::RPG::GameCore::ElfChefConfig* ChefConfig; // 0x48
		::RPG::GameCore::ElfDrinkMachineCommonConfig* DrinkMachineConfig; // 0x50
		::RPG::GameCore::ElfDialogTipConfig* DialogConfig; // 0x58
		::RPG::GameCore::ElfNormalEventConfig* NormalEventConfig; // 0x60
		::RPG::GameCore::ElfSuperEventConfig* SuperEventConfig; // 0x68
		::RPG::GameCore::ElfHeadWaiterTalkConfig* HeadWaiterTalkConfig; // 0x70
		::RPG::GameCore::ElfFarmConfig* FarmConfig; // 0x78
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ELFRESTAURANTGAMECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ElfRestaurantGameConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ElfRestaurantGameConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ELFRESTAURANTGAMECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ElfRestaurantGameConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ElfRestaurantGameConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ELFRESTAURANTGAMECONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
