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

#define RPG_GAMECORE_AETHERDIVIDESPIRITROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1E5FB010)
#define RPG_GAMECORE_AETHERDIVIDESPIRITROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1E5F8E60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AetherDivideSpiritRow_TypeDefinitionIndex = 10920;

	class AetherDivideSpiritRow : public ::System::Object
	{
	public:
		::System::String* WaitingAvatarHeadIconPath; // 0x10
		::System::String* AvatarVOTag; // 0x18
		::System::String* MiddleAvatarHeadIconPath; // 0x20
		::System::String* AvatarSideIconPath; // 0x28
		::System::String* AtlasAvatarHeadIconPath; // 0x30
		::System::String* ManikinAvatarModelPath; // 0x38
		::System::String* JsonPath; // 0x40
		::Il2CppArray<::RPG::GameCore::AetherPassiveSkillType>* PassiveSkillSlotList; // 0x48
		::System::String* TeamRightPrefabPath; // 0x50
		::System::String* TeamLeftPrefabPath; // 0x58
		::System::String* DefaultAvatarModelPath; // 0x60
		::System::String* ManikinJsonPath; // 0x68
		::System::String* AIPath; // 0x70
		::Il2CppArray<::System::UInt32>* SkillList; // 0x78
		::System::String* ActionAvatarHeadIconPath; // 0x80
		::System::String* UltraSkillCutInPrefabPath; // 0x88
		::System::String* DefaultAvatarHeadIconPath; // 0x90
		::Il2CppArray<::System::UInt32>* RecommendPassiveSkillList; // 0x98
		::System::String* SideAvatarHeadIconPath; // 0xA0
		::System::UInt32 ExpItemID; // 0xA8
		::System::Byte _padding0[0x4];
		::RPG::Client::TextID AvatarName; // 0xB0
		::RPG::GameCore::AetherRarityType Rarity; // 0xC0
		::System::UInt32 AvatarID; // 0xC4
		::RPG::Client::TextID SpiritUnlockDescription; // 0xC8
		::RPG::GameCore::FixPoint SPMax; // 0xD8
		::RPG::Client::TextID SpiritDescription; // 0xE0
		::RPG::GameCore::AttackDamageType DamageType; // 0xF0
		::RPG::GameCore::AetherSpiritType SpiritType; // 0xF4
		::System::UInt32 GymLocation; // 0xF8
		::System::UInt32 MaxPromotion; // 0xFC
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
