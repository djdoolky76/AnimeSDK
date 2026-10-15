#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/LevelDimensionCategory.h"
#include "unitysdk/RPG/GameCore/MapCameraType.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FloorCustomValueConfig; }
namespace RPG::GameCore { class FloorSavedValueConfig; }
namespace RPG::GameCore { class HoyoTagContainer; }
namespace RPG::GameCore { class LevelBattleAreaInfo; }
namespace RPG::GameCore { class RtLevelDimensionInfo; }
namespace RPG::GameCore { class SavedValueDimensionConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_RTLEVELDIMENSIONINFO_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA5E680)
#define RPG_GAMECORE_RTLEVELDIMENSIONINFO_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA5E110)

namespace RPG::GameCore
{
	class RtLevelDimensionInfo : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 ID; // 0x10
		::RPG::GameCore::LevelDimensionCategory Category; // 0x14
		::System::String* DefaultEnviroProfile; // 0x18
		::RPG::GameCore::MapCameraType CameraType; // 0x20
		::System::Byte _padding0[0x4];
		::Il2CppArray<::RPG::GameCore::LevelBattleAreaInfo*>* BattleAreaList; // 0x28
		::System::String* CameraPrefabPath; // 0x30
		::Il2CppArray<::RPG::GameCore::FloorCustomValueConfig*>* ConstValues; // 0x38
		::Il2CppArray<::RPG::GameCore::FloorSavedValueConfig*>* SavedValues; // 0x40
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::SavedValueDimensionConfig*>* SavedValueConfigDict; // 0x48
		::RPG::GameCore::HoyoTagContainer* TagContainer; // 0x50
		::System::Boolean IsExclusiveSaveMapSection; // 0x58
		::System::Boolean UnlockAllMapSectionOnInitial; // 0x59
		::System::Byte _padding1[0x6];
		::Il2CppArray<::System::UInt32>* GroupIndexList; // 0x60
		::Il2CppArray<::System::UInt32>* ExclusiveSavedGroupIDList; // 0x68
		::System::UInt32 StartGroupIndex; // 0x70
		::System::UInt32 StartAnchorID; // 0x74
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTLEVELDIMENSIONINFO_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RtLevelDimensionInfo* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RtLevelDimensionInfo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTLEVELDIMENSIONINFO_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
