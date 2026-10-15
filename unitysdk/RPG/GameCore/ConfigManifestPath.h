#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ConfigManifestPath; }
namespace System { class String; }

#define RPG_GAMECORE_CONFIGMANIFESTPATH_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5D5D70)
#define RPG_GAMECORE_CONFIGMANIFESTPATH_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D5D56C0)

namespace RPG::GameCore
{
	class ConfigManifestPath : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::System::String*>* AdventureAbilityConfig; // 0x10
		::Il2CppArray<::System::String*>* TurnBasedAbilityConfig; // 0x18
		::Il2CppArray<::System::String*>* RtAbilityConfig; // 0x20
		::Il2CppArray<::System::String*>* BattleLineupConfig; // 0x28
		::Il2CppArray<::System::String*>* BattleLineupAvatarConfig; // 0x30
		::Il2CppArray<::System::String*>* BattleLineupMazeBuffConfig; // 0x38
		::Il2CppArray<::System::String*>* BattleLineupSkillTreePresetConfig; // 0x40
		::Il2CppArray<::System::String*>* BattleLineupCEPresetConfig; // 0x48
		::Il2CppArray<::System::String*>* BattleLineupDevPresetConfig; // 0x50
		::Il2CppArray<::System::String*>* GlobalModifierConfig; // 0x58
		::Il2CppArray<::System::String*>* AdventureModifierConfig; // 0x60
		::Il2CppArray<::System::String*>* GlobalRtModifierConfig; // 0x68
		::Il2CppArray<::System::String*>* ComplexSkillAIGlobalGroupConfig; // 0x70
		::Il2CppArray<::System::String*>* GlobalTaskTemplate; // 0x78
		::Il2CppArray<::System::String*>* CommonSkillPoolConfig; // 0x80
		::Il2CppArray<::System::String*>* GlobalFormationAsset; // 0x88
		::Il2CppArray<::System::String*>* TargetAliasConfig; // 0x90
		::Il2CppArray<::System::String*>* TargetOperationConfig; // 0x98
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONFIGMANIFESTPATH_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ConfigManifestPath* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ConfigManifestPath*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONFIGMANIFESTPATH_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
