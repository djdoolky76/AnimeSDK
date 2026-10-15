#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ArmorTypeEnum.h"
#include "unitysdk/RPG/GameCore/AttackDamageType.h"
#include "unitysdk/RPG/GameCore/AvatarBaseType.h"
#include "unitysdk/RPG/GameCore/CharacterCollisionType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/ResilienceEnum.h"
#include "unitysdk/RPG/GameCore/RtBehaviorFlag.h"
#include "unitysdk/RPG/GameCore/WeaponTypeEnum.h"
#include "unitysdk/RPG/MVector3.h"
class ENEIHJJPNPI;
class FCOEMCEDLNL;
namespace RPG::GameCore { class CharacterPhaseAnimConfig; }
namespace RPG::GameCore { class RtCharacterConfig; }
namespace RPG::GameCore { class RtCharacterMotionParam; }
namespace RPG::GameCore { class RtSkillConfig; }
namespace RPG::GameCore { class SkillAbilityConfig; }
namespace RPG::GameCore { class SkillTransitAnimConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_RTCHARACTERCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA1F350)
#define RPG_GAMECORE_RTCHARACTERCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA29020)
#define RPG_GAMECORE_RTCHARACTERCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA28D10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RtCharacterConfig_TypeDefinitionIndex = 17650;

	class RtCharacterConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Boolean IsHero; // 0x10
		::System::Byte _padding0[0x7];
		::Il2CppArray<::System::String*>* Tags; // 0x18
		::Il2CppArray<::RPG::GameCore::RtBehaviorFlag>* DefaultFlags; // 0x20
		::RPG::MVector3 CharacterHUDOffset; // 0x28
		::RPG::MVector3 BuffPanelOffset; // 0x34
		::Il2CppArray<::System::String*>* HideWeaponList; // 0x40
		::RPG::MVector3 HitBoxOffset; // 0x48
		::RPG::GameCore::CharacterCollisionType HitBoxType; // 0x54
		::System::Single HitBoxWidth; // 0x58
		::System::Single HitBoxLength; // 0x5C
		::System::Single HitBoxHeight; // 0x60
		::System::Byte _padding1[0x4];
		::System::String* HitBoxAttachPoint; // 0x68
		::System::Single VisualRadius; // 0x70
		::RPG::GameCore::ResilienceEnum Resilience; // 0x74
		::Il2CppArray<::System::String*>* AnimEventConfigList; // 0x78
		::Il2CppArray<::System::String*>* DisableAnimEventLayers; // 0x80
		::Il2CppArray<::RPG::GameCore::RtSkillConfig*>* SkillList; // 0x88
		::Il2CppArray<::System::String*>* AbilityList; // 0x90
		::Il2CppArray<::RPG::GameCore::SkillAbilityConfig*>* SkillAbilityList; // 0x98
		::ENEIHJJPNPI* DynamicValues; // 0xA0
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* CustomValues; // 0xA8
		::RPG::GameCore::WeaponTypeEnum WeaponType; // 0xB0
		::RPG::GameCore::ArmorTypeEnum ArmorType; // 0xB4
		::Il2CppArray<::RPG::GameCore::SkillTransitAnimConfig*>* SkillReadyTransits; // 0xB8
		::RPG::GameCore::CharacterPhaseAnimConfig* PhaseAnimConfig; // 0xC0
		::System::String* CharacterReplaceMaterialConfigPath; // 0xC8
		::System::String* CommonAnimZoneConfigPath; // 0xD0
		::System::String* AnimZoneConfigPath; // 0xD8
		::RPG::GameCore::AvatarBaseType AvatarType; // 0xE0
		::RPG::GameCore::AttackDamageType DamageType; // 0xE4
		::Il2CppArray<::RPG::GameCore::AttackDamageType>* Weakness; // 0xE8
		::RPG::GameCore::RtCharacterMotionParam* MotionParam; // 0xF0
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::FixPoint>* AnimDurationMap; // 0xF8
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTCHARACTERCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RtCharacterConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RtCharacterConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTCHARACTERCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RtCharacterConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RtCharacterConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTCHARACTERCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
