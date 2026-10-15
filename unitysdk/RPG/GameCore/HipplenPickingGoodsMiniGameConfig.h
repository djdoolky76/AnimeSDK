#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class HipplenGameAtmosphereConfig; }
namespace RPG::GameCore { class HipplenMiniGameGoodsConfig; }
namespace RPG::GameCore { class HipplenMiniGameGradeConfig; }
namespace RPG::GameCore { class HipplenMiniGameLoadCharacter; }
namespace RPG::GameCore { class HipplenPickingGoodsMiniGameConfig; }
namespace RPG::GameCore { class HipplenPickingGoodsNPCConfig; }
namespace RPG::GameCore { class TaskConfig; }

#define RPG_GAMECORE_HIPPLENPICKINGGOODSMINIGAMECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D76F250)
#define RPG_GAMECORE_HIPPLENPICKINGGOODSMINIGAMECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D76EEE0)

namespace RPG::GameCore
{
	class HipplenPickingGoodsMiniGameConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::HipplenMiniGameGradeConfig*>* GradeConfigList; // 0x10
		::System::Single HintInterval; // 0x18
		::System::Byte _padding0[0x4];
		::Il2CppArray<::RPG::GameCore::HipplenMiniGameGoodsConfig*>* InitialGoodsList; // 0x20
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnInit; // 0x28
		::Il2CppArray<::RPG::GameCore::HipplenPickingGoodsNPCConfig*>* NPCConfigList; // 0x30
		::RPG::GameCore::HipplenGameAtmosphereConfig* AtmosphereConfig; // 0x38
		::RPG::GameCore::HipplenMiniGameLoadCharacter* InitNpc; // 0x40
		::System::UInt32 GameTotalTime; // 0x48
		::System::Single NpcFadeInTime; // 0x4C
		::System::Single NpcFadeOutTime; // 0x50
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HIPPLENPICKINGGOODSMINIGAMECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::HipplenPickingGoodsMiniGameConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::HipplenPickingGoodsMiniGameConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HIPPLENPICKINGGOODSMINIGAMECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
