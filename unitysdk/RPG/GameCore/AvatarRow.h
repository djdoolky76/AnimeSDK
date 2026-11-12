#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/AttackDamageType.h"
#include "unitysdk/RPG/GameCore/AvatarBaseType.h"
#include "unitysdk/RPG/GameCore/CombatPowerAvatarRarityType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AvatarRow; }
namespace RPG::GameCore { class ElementResistanceConfig; }
namespace System { class String; }

#define RPG_GAMECORE_AVATARROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1E641F20)
#define RPG_GAMECORE_AVATARROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1E634160)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AvatarRow_TypeDefinitionIndex = 12775;

	class AvatarRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* RankIDList; // 0x10
		::System::String* AvatarMiniIconPath; // 0x18
		::System::String* UIAvatarModelPath; // 0x20
		::Il2CppArray<::System::Single>* AssistBgOffset; // 0x28
		::Il2CppArray<::System::Single>* AssistOffset; // 0x30
		::System::String* ActionAvatarHeadIconPath; // 0x38
		::System::String* AvatarCutinFrontImgPath; // 0x40
		::System::String* SkilltreePrefabPath; // 0x48
		::System::String* AvatarVOTag; // 0x50
		::System::String* AvatarSideIconPath; // 0x58
		::System::String* SideAvatarHeadIconPath; // 0x60
		::System::String* AvatarCutinImgPath; // 0x68
		::Il2CppArray<::System::Single>* AvatarSelfShowOffset; // 0x70
		::System::String* DefaultAvatarHeadIconPath; // 0x78
		::Il2CppArray<::System::Single>* PlayerCardOffset; // 0x80
		::Il2CppArray<::RPG::GameCore::AvatarBaseType>* SubAvatarTypeList; // 0x88
		::System::String* UltraSkillCutInPrefabPath; // 0x90
		::System::String* ManikinJsonPath; // 0x98
		::System::String* AvatarGachaResultImgPath; // 0xA0
		::Il2CppArray<::System::UInt32>* SkillList; // 0xA8
		::System::String* WaitingAvatarHeadIconPath; // 0xB0
		::Il2CppArray<::RPG::GameCore::ElementResistanceConfig*>* DamageTypeResistance; // 0xB8
		::System::String* JsonPath; // 0xC0
		::System::String* AvatarCutinBgImgPath; // 0xC8
		::System::String* AIPath; // 0xD0
		::System::String* DefaultAvatarModelPath; // 0xD8
		::Il2CppArray<::System::Single>* AvatarDropOffset; // 0xE0
		::Il2CppArray<::System::Single>* AvatarTrialOffset; // 0xE8
		::System::UInt32 AvatarID; // 0xF0
		::System::UInt32 AdventurePlayerID; // 0xF4
		::RPG::Client::TextID AvatarInitialSkinName; // 0xF8
		::System::UInt32 MaxRank; // 0x108
		::System::UInt32 ExpGroup; // 0x10C
		::RPG::GameCore::CombatPowerAvatarRarityType Rarity; // 0x110
		::System::Boolean Release; // 0x114
		::System::Byte _padding0[0x3];
		::RPG::Client::TextID AvatarDesc; // 0x118
		::RPG::GameCore::FixPoint SPNeed; // 0x128
		::RPG::Client::TextID AvatarFullName; // 0x130
		::RPG::GameCore::AttackDamageType DamageType; // 0x140
		::RPG::GameCore::AvatarBaseType AvatarBaseType; // 0x144
		::RPG::Client::TextID AvatarInitialSkinDesc; // 0x148
		::RPG::Client::TextID AvatarCutinIntroText; // 0x158
		::System::UInt32 MaxPromotion; // 0x168
		::System::UInt32 NatureID; // 0x16C
		::RPG::Client::TextID AvatarName; // 0x170
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::AvatarRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AvatarRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
