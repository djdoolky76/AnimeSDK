#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FiveDimEffectItem; }
namespace RPG::GameCore { class FiveDimPlayerEffectConfig; }

#define RPG_GAMECORE_FIVEDIMPLAYEREFFECTCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6D23C0)
#define RPG_GAMECORE_FIVEDIMPLAYEREFFECTCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6D1B00)

namespace RPG::GameCore
{
	class FiveDimPlayerEffectConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::FiveDimEffectItem*>* InvulnerableEffects; // 0x10
		::Il2CppArray<::RPG::GameCore::FiveDimEffectItem*>* JumpEnergyEffects; // 0x18
		::Il2CppArray<::RPG::GameCore::FiveDimEffectItem*>* GroundJumpEffect; // 0x20
		::Il2CppArray<::RPG::GameCore::FiveDimEffectItem*>* AirJumpEffect; // 0x28
		::Il2CppArray<::RPG::GameCore::FiveDimEffectItem*>* SkillUpgradeEffects; // 0x30
		::Il2CppArray<::RPG::GameCore::FiveDimEffectItem*>* DirectionDissolveEffects; // 0x38
		::Il2CppArray<::RPG::GameCore::FiveDimEffectItem*>* TeleportFadeOutEffects; // 0x40
		::Il2CppArray<::RPG::GameCore::FiveDimEffectItem*>* TeleportFadeInEffects; // 0x48
		::Il2CppArray<::RPG::GameCore::FiveDimEffectItem*>* AvatarInvincibleEffects; // 0x50
		::Il2CppArray<::RPG::GameCore::FiveDimEffectItem*>* AvatarDeadEffects; // 0x58
		::Il2CppArray<::RPG::GameCore::FiveDimEffectItem*>* AvatarResetEffects; // 0x60
		::Il2CppArray<::RPG::GameCore::FiveDimEffectItem*>* RunSmokeEffects; // 0x68
		::Il2CppArray<::RPG::GameCore::FiveDimEffectItem*>* RunBrakeEffects; // 0x70
		::Il2CppArray<::RPG::GameCore::FiveDimEffectItem*>* DashTrailEffects; // 0x78
		::Il2CppArray<::RPG::GameCore::FiveDimEffectItem*>* UpgradedDashTrailEffects; // 0x80
		::Il2CppArray<::RPG::GameCore::FiveDimEffectItem*>* DashAimEffects; // 0x88
		::Il2CppArray<::RPG::GameCore::FiveDimEffectItem*>* UpgradedDashAimEffects; // 0x90
		::Il2CppArray<::RPG::GameCore::FiveDimEffectItem*>* DashAimNoArrowEffects; // 0x98
		::Il2CppArray<::RPG::GameCore::FiveDimEffectItem*>* UpgradedDashAimNoArrowEffects; // 0xA0
		::Il2CppArray<::RPG::GameCore::FiveDimEffectItem*>* DashAvatarEffects; // 0xA8
		::Il2CppArray<::RPG::GameCore::FiveDimEffectItem*>* UpgradedDashAvatarEffects; // 0xB0
		::Il2CppArray<::RPG::GameCore::FiveDimEffectItem*>* MascotEffects; // 0xB8
		::Il2CppArray<::RPG::GameCore::FiveDimEffectItem*>* MusicFallEffects; // 0xC0
		::Il2CppArray<::RPG::GameCore::FiveDimEffectItem*>* MascotMusicFallEffects; // 0xC8
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMPLAYEREFFECTCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimPlayerEffectConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimPlayerEffectConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMPLAYEREFFECTCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
