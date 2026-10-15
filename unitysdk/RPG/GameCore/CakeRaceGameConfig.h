#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CakeRaceCellType.h"
#include "unitysdk/RPG/GameCore/CakeRacePickupItemType.h"
#include "unitysdk/RPG/GameCore/LittleGameConstConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class CakeRaceCatAIConfig; }
namespace RPG::GameCore { class CakeRaceCatCommonConfig; }
namespace RPG::GameCore { class CakeRaceCellCommonConfig; }
namespace RPG::GameCore { class CakeRaceCellConfig; }
namespace RPG::GameCore { class CakeRaceGameConfig; }
namespace RPG::GameCore { class CakeRaceGameSceneConfig; }
namespace RPG::GameCore { class CakeRaceGameSyncConfig; }
namespace RPG::GameCore { class CakeRaceHalfGravityConfig; }
namespace RPG::GameCore { class CakeRaceHitConfig; }
namespace RPG::GameCore { class CakeRaceMoveConfig; }
namespace RPG::GameCore { class CakeRacePickupItemConfig; }
namespace RPG::GameCore { class CakeRaceSparkleInitConfig; }
namespace RPG::GameCore { class CakeRaceTrapCellConfig; }
namespace RPG::GameCore { class CakeRaceTutorialConfig; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_CAKERACEGAMECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D521D80)
#define RPG_GAMECORE_CAKERACEGAMECONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D521D90)
#define RPG_GAMECORE_CAKERACEGAMECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D521D50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CakeRaceGameConfig_TypeDefinitionIndex = 18397;

	class CakeRaceGameConfig : public ::RPG::GameCore::LittleGameConstConfig
	{
	public:
		::RPG::GameCore::CakeRaceGameSyncConfig* SyncConfig; // 0x10
		::RPG::GameCore::CakeRaceGameSceneConfig* SceneConfig; // 0x18
		::RPG::GameCore::CakeRaceCatCommonConfig* CatCommonConfig; // 0x20
		::RPG::GameCore::CakeRaceCellCommonConfig* CellCommonConfig; // 0x28
		::Il2CppArray<::RPG::GameCore::CakeRaceMoveConfig*>* MoveConfig; // 0x30
		::Il2CppArray<::RPG::GameCore::CakeRaceTrapCellConfig*>* TrapConfig; // 0x38
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::CakeRaceCatAIConfig*>* CatAIConfigs; // 0x40
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CakeRaceCellType, ::RPG::GameCore::CakeRaceCellConfig*>* CellTypeConfigs; // 0x48
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CakeRacePickupItemType, ::RPG::GameCore::CakeRacePickupItemConfig*>* PickupItemTypeConfigs; // 0x50
		::Il2CppArray<::RPG::GameCore::CakeRaceHitConfig*>* HitConfigs; // 0x58
		::RPG::GameCore::CakeRaceHalfGravityConfig* HalfGravityConfig; // 0x60
		::System::UInt32 MaxFightEndDelayTimeMsAfterCatReachEnd; // 0x68
		::System::UInt32 FightEffectShowBeginDelayMs; // 0x6C
		::System::UInt32 ReviveOnSameRowMaxNums; // 0x70
		::System::Byte _padding0[0x4];
		::RPG::GameCore::CakeRaceTutorialConfig* TutorialConfig; // 0x78
		::RPG::GameCore::CakeRaceSparkleInitConfig* SparkleInitConfig; // 0x80
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACEGAMECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::CakeRaceGameConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CakeRaceGameConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACEGAMECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::CakeRaceGameConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CakeRaceGameConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACEGAMECONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
