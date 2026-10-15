#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ELevelPerformanceType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AudioStateConfig; }
namespace RPG::GameCore { class CreateCharacter; }
namespace RPG::GameCore { class EntityVisiableInfo; }
namespace RPG::GameCore { class LevelPerformanceInitialize; }
namespace RPG::GameCore { class PerformanceCaptureNPC; }
namespace RPG::GameCore { class PerformanceOverrideCharacterOutfit; }
namespace RPG::GameCore { class PerformancePropVisiableInfo; }
namespace RPG::GameCore { class StageItemAlias; }
namespace RPG::GameCore { class TaskConfig; }
namespace System { class String; }

#define RPG_GAMECORE_LEVELPERFORMANCEINITIALIZE_AFOANPPKNEB_OFFSET UNITYSDK_OFFSET(0x1D79CB50)
#define RPG_GAMECORE_LEVELPERFORMANCEINITIALIZE_CJPOMBDNEKH_OFFSET UNITYSDK_OFFSET(0x1D79CB60)
#define RPG_GAMECORE_LEVELPERFORMANCEINITIALIZE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D79C0D0)
#define RPG_GAMECORE_LEVELPERFORMANCEINITIALIZE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D79C0F0)
#define RPG_GAMECORE_LEVELPERFORMANCEINITIALIZE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D79C080)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelPerformanceInitialize_TypeDefinitionIndex = 21856;

	class LevelPerformanceInitialize : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::ELevelPerformanceType PerformanceType; // 0x18
		::System::Byte _padding0[0x4];
		::System::String* AreaPrefabPath; // 0x20
		::System::Boolean IsLocal; // 0x28
		::System::Boolean MuteSFX; // 0x29
		::System::Byte _padding1[0x6];
		::Il2CppArray<::RPG::GameCore::CreateCharacter*>* CreateCharacterList; // 0x30
		::Il2CppArray<::RPG::GameCore::PerformanceCaptureNPC*>* CaptureNPCList; // 0x38
		::System::Boolean HideNPC; // 0x40
		::System::Byte _padding2[0x7];
		::Il2CppArray<::RPG::GameCore::EntityVisiableInfo*>* EntityVisiableList; // 0x48
		::System::Boolean HideStillNPC; // 0x50
		::System::Boolean HideMunicipalCrowd; // 0x51
		::System::Boolean HideMunicipalPedestrian; // 0x52
		::System::Boolean HideMunicipalAudience; // 0x53
		::System::Boolean HideMunicipalOther; // 0x54
		::System::Boolean HideMonster; // 0x55
		::System::Boolean HideProp; // 0x56
		::System::Byte _padding3[0x1];
		::Il2CppArray<::RPG::GameCore::PerformancePropVisiableInfo*>* PropVisiableList; // 0x58
		::System::Boolean HideLocalPlayer; // 0x60
		::System::Byte _padding4[0x7];
		::System::String* FirstCameraAnchor; // 0x68
		::System::Boolean UseNewStreamingSourceType; // 0x70
		::System::Byte _padding5[0x7];
		::Il2CppArray<::System::String*>* StreamingSourcesInBlackMask; // 0x78
		::Il2CppArray<::System::String*>* StreamingSourcesAfterBlackMask; // 0x80
		::Il2CppArray<::RPG::GameCore::StageItemAlias*>* MarkStreamingItems; // 0x88
		::System::Boolean ResetEnvironment; // 0x90
		::System::Boolean ResetMonster; // 0x91
		::System::Byte _padding6[0x6];
		::Il2CppArray<::RPG::GameCore::AudioStateConfig*>* AudioStateList; // 0x98
		::Il2CppArray<::RPG::GameCore::PerformanceOverrideCharacterOutfit*>* OverrideCharacterOutfits; // 0xA0
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnLoadBeginImmediately; // 0xA8
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELPERFORMANCEINITIALIZE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::LevelPerformanceInitialize* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LevelPerformanceInitialize*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELPERFORMANCEINITIALIZE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::LevelPerformanceInitialize* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LevelPerformanceInitialize*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELPERFORMANCEINITIALIZE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		::System::Void AFOANPPKNEB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELPERFORMANCEINITIALIZE_AFOANPPKNEB_OFFSET))(this);
		}

		::System::Void CJPOMBDNEKH(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELPERFORMANCEINITIALIZE_CJPOMBDNEKH_OFFSET))(this, a1);
		}

	};
}
