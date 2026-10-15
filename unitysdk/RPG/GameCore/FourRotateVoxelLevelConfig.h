#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FourRotateVoxelAnimalType.h"
#include "unitysdk/RPG/GameCore/FourRotateVoxelEnvType.h"
#include "unitysdk/RPG/GameCore/FourRotateVoxelGameModeType.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/MVector3.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FourRotateVoxelAnimalConfig; }
namespace RPG::GameCore { class FourRotateVoxelGameModeConfig; }
namespace RPG::GameCore { class FourRotateVoxelLevelConfig; }
namespace RPG::GameCore { class FourRotateVoxelLevelEnvConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_FOURROTATEVOXELLEVELCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6EF9A0)
#define RPG_GAMECORE_FOURROTATEVOXELLEVELCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6EECF0)

namespace RPG::GameCore
{
	class FourRotateVoxelLevelConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* ScenePrefabPath; // 0x10
		::System::String* GlobalDataPrefabPath; // 0x18
		::System::String* DefaultEnvProfilePath; // 0x20
		::System::String* HintLineEffectPath; // 0x28
		::System::String* Replace2DBrickMeshPath; // 0x30
		::System::Single DissolveScale; // 0x38
		::RPG::MVector3 GlobalOrverrideLightDir; // 0x3C
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::FourRotateVoxelGameModeType, ::RPG::GameCore::FourRotateVoxelGameModeConfig*>* GameModeConfigs; // 0x48
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::FourRotateVoxelEnvType, ::RPG::GameCore::FourRotateVoxelLevelEnvConfig*>* EnvConfigDict; // 0x50
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::FourRotateVoxelAnimalType, ::RPG::GameCore::FourRotateVoxelAnimalConfig*>* AnimalConfigDict; // 0x58
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FOURROTATEVOXELLEVELCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FourRotateVoxelLevelConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FourRotateVoxelLevelConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FOURROTATEVOXELLEVELCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
