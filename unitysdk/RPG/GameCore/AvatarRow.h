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

#define RPG_GAMECORE_AVATARROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1C2E76C0)
#define RPG_GAMECORE_AVATARROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1C2D9900)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AvatarRow_TypeDefinitionIndex = 12775;

	class AvatarRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Single>* AssistBgOffset; // 0x10
		::Il2CppArray<::System::Single>* AvatarSelfShowOffset; // 0x18
		::System::String* JsonPath; // 0x20
		::System::String* AvatarCutinImgPath; // 0x28
		::System::String* ManikinJsonPath; // 0x30
		::System::String* SideAvatarHeadIconPath; // 0x38
		::System::String* UIAvatarModelPath; // 0x40
		::System::String* UltraSkillCutInPrefabPath; // 0x48
		::System::String* AvatarCutinBgImgPath; // 0x50
		::Il2CppArray<::RPG::GameCore::ElementResistanceConfig*>* DamageTypeResistance; // 0x58
		::Il2CppArray<::System::UInt32>* RankIDList; // 0x60
		::System::String* WaitingAvatarHeadIconPath; // 0x68
		::Il2CppArray<::System::Single>* PlayerCardOffset; // 0x70
		::System::String* ActionAvatarHeadIconPath; // 0x78
		::Il2CppArray<::RPG::GameCore::AvatarBaseType>* SubAvatarTypeList; // 0x80
		::System::String* AvatarMiniIconPath; // 0x88
		::System::String* AvatarGachaResultImgPath; // 0x90
		::Il2CppArray<::System::Single>* AssistOffset; // 0x98
		::System::String* AvatarSideIconPath; // 0xA0
		::System::String* AvatarCutinFrontImgPath; // 0xA8
		::System::String* AvatarVOTag; // 0xB0
		::System::String* DefaultAvatarHeadIconPath; // 0xB8
		::System::String* AIPath; // 0xC0
		::System::String* DefaultAvatarModelPath; // 0xC8
		::Il2CppArray<::System::Single>* AvatarTrialOffset; // 0xD0
		::Il2CppArray<::System::UInt32>* SkillList; // 0xD8
		::System::String* SkilltreePrefabPath; // 0xE0
		::Il2CppArray<::System::Single>* AvatarDropOffset; // 0xE8
		::RPG::Client::TextID AvatarDesc; // 0xF0
		::RPG::GameCore::AttackDamageType DamageType; // 0x100
		::System::UInt32 AdventurePlayerID; // 0x104
		::RPG::Client::TextID AvatarFullName; // 0x108
		::System::UInt32 MaxPromotion; // 0x118
		::System::UInt32 ExpGroup; // 0x11C
		::RPG::GameCore::CombatPowerAvatarRarityType Rarity; // 0x120
		::System::UInt32 NatureID; // 0x124
		::RPG::Client::TextID AvatarName; // 0x128
		::System::Boolean Release; // 0x138
		::System::Byte _padding0[0x3];
		::System::UInt32 AvatarID; // 0x13C
		::RPG::Client::TextID AvatarInitialSkinName; // 0x140
		::System::UInt32 MaxRank; // 0x150
		::RPG::GameCore::AvatarBaseType AvatarBaseType; // 0x154
		::RPG::Client::TextID AvatarInitialSkinDesc; // 0x158
		::RPG::GameCore::FixPoint SPNeed; // 0x168
		::RPG::Client::TextID AvatarCutinIntroText; // 0x170
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
