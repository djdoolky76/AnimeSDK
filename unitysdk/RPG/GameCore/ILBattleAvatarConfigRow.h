#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/ILBattleAvatarTag.h"
#include "unitysdk/RPG/GameCore/ILBattleCharacterLocation.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
class GLNNKBLJPLJ;
namespace RPG::GameCore { class ILBattleAvatarConfigRow; }
namespace System { class String; }

#define RPG_GAMECORE_ILBATTLEAVATARCONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1EE80280)
#define RPG_GAMECORE_ILBATTLEAVATARCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1EE7F770)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ILBattleAvatarConfigRow_TypeDefinitionIndex = 13936;

	class ILBattleAvatarConfigRow : public ::System::Object
	{
	public:
		::System::String* DefaultAvatarModelPath; // 0x10
		::System::String* DefaultAvatarHeadIconPath; // 0x18
		::GLNNKBLJPLJ* Defence; // 0x20
		::System::String* UltraSkillCutInPrefabPath; // 0x28
		::Il2CppArray<::System::UInt32>* SkillList; // 0x30
		::GLNNKBLJPLJ* Attack; // 0x38
		::System::String* JsonPath; // 0x40
		::System::String* DefaultAvatarMiniIconPath; // 0x48
		::Il2CppArray<::RPG::GameCore::ILBattleAvatarTag>* TagList; // 0x50
		::GLNNKBLJPLJ* HP; // 0x58
		::System::String* AvatarSideIconPath; // 0x60
		::System::String* AvatarShopIconPath; // 0x68
		::System::String* DefaultAvatarRoundIconPath; // 0x70
		::System::String* AIPath; // 0x78
		::Il2CppArray<::System::UInt32>* PromotionIDList; // 0x80
		::RPG::GameCore::ILBattleCharacterLocation AvatarType; // 0x88
		::System::Byte _padding0[0x4];
		::RPG::Client::TextID AvatarDesc3; // 0x90
		::System::UInt32 Rarity; // 0xA0
		::System::UInt32 ID; // 0xA4
		::RPG::Client::TextID AvatarDesc1; // 0xA8
		::RPG::Client::TextID FullName; // 0xB8
		::RPG::GameCore::FixPoint ElementMastery; // 0xC8
		::RPG::GameCore::FixPoint CriticalChanceBase; // 0xD0
		::RPG::Client::TextID AvatarDesc2; // 0xD8
		::RPG::GameCore::FixPoint CriticalDamageBase; // 0xE8
		::RPG::GameCore::FixPoint MoveSpeed; // 0xF0
		::RPG::Client::TextID AvatarName; // 0xF8
		::System::Boolean FormalAvatar; // 0x108
		::System::Byte _padding1[0x3];
		::RPG::GameCore::ILBattleAvatarTag MainTag; // 0x10C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ILBATTLEAVATARCONFIGROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::ILBattleAvatarConfigRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ILBattleAvatarConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ILBATTLEAVATARCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
