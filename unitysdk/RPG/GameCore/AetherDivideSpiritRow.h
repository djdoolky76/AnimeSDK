#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/AetherPassiveSkillType.h"
#include "unitysdk/RPG/GameCore/AetherRarityType.h"
#include "unitysdk/RPG/GameCore/AetherSpiritType.h"
#include "unitysdk/RPG/GameCore/AttackDamageType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AetherDivideSpiritRow; }
namespace System { class String; }

#define RPG_GAMECORE_AETHERDIVIDESPIRITROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1DE92590)
#define RPG_GAMECORE_AETHERDIVIDESPIRITROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1DE903E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AetherDivideSpiritRow_TypeDefinitionIndex = 10920;

	class AetherDivideSpiritRow : public ::System::Object
	{
	public:
		::System::String* ActionAvatarHeadIconPath; // 0x10
		::System::String* AvatarSideIconPath; // 0x18
		::System::String* ManikinJsonPath; // 0x20
		::Il2CppArray<::RPG::GameCore::AetherPassiveSkillType>* PassiveSkillSlotList; // 0x28
		::System::String* DefaultAvatarModelPath; // 0x30
		::System::String* JsonPath; // 0x38
		::Il2CppArray<::System::UInt32>* RecommendPassiveSkillList; // 0x40
		::System::String* TeamRightPrefabPath; // 0x48
		::System::String* AvatarVOTag; // 0x50
		::System::String* UltraSkillCutInPrefabPath; // 0x58
		::System::String* MiddleAvatarHeadIconPath; // 0x60
		::System::String* DefaultAvatarHeadIconPath; // 0x68
		::Il2CppArray<::System::UInt32>* SkillList; // 0x70
		::System::String* SideAvatarHeadIconPath; // 0x78
		::System::String* WaitingAvatarHeadIconPath; // 0x80
		::System::String* AtlasAvatarHeadIconPath; // 0x88
		::System::String* TeamLeftPrefabPath; // 0x90
		::System::String* AIPath; // 0x98
		::System::String* ManikinAvatarModelPath; // 0xA0
		::System::UInt32 GymLocation; // 0xA8
		::System::Byte _padding0[0x4];
		::RPG::Client::TextID AvatarName; // 0xB0
		::RPG::Client::TextID SpiritUnlockDescription; // 0xC0
		::System::UInt32 MaxPromotion; // 0xD0
		::RPG::GameCore::AetherSpiritType SpiritType; // 0xD4
		::RPG::Client::TextID SpiritDescription; // 0xD8
		::System::UInt32 ExpItemID; // 0xE8
		::System::UInt32 AvatarID; // 0xEC
		::RPG::GameCore::AetherRarityType Rarity; // 0xF0
		::RPG::GameCore::AttackDamageType DamageType; // 0xF4
		::RPG::GameCore::FixPoint SPMax; // 0xF8
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AETHERDIVIDESPIRITROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::AetherDivideSpiritRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AetherDivideSpiritRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AETHERDIVIDESPIRITROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
