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

#define RPG_GAMECORE_ILBATTLEAVATARCONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1E988600)
#define RPG_GAMECORE_ILBATTLEAVATARCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1E987AF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ILBattleAvatarConfigRow_TypeDefinitionIndex = 13936;

	class ILBattleAvatarConfigRow : public ::System::Object
	{
	public:
		::System::String* JsonPath; // 0x10
		::GLNNKBLJPLJ* Defence; // 0x18
		::Il2CppArray<::RPG::GameCore::ILBattleAvatarTag>* TagList; // 0x20
		::System::String* UltraSkillCutInPrefabPath; // 0x28
		::GLNNKBLJPLJ* Attack; // 0x30
		::System::String* DefaultAvatarMiniIconPath; // 0x38
		::System::String* DefaultAvatarHeadIconPath; // 0x40
		::System::String* AvatarSideIconPath; // 0x48
		::System::String* DefaultAvatarRoundIconPath; // 0x50
		::System::String* AvatarShopIconPath; // 0x58
		::Il2CppArray<::System::UInt32>* SkillList; // 0x60
		::System::String* AIPath; // 0x68
		::Il2CppArray<::System::UInt32>* PromotionIDList; // 0x70
		::System::String* DefaultAvatarModelPath; // 0x78
		::GLNNKBLJPLJ* HP; // 0x80
		::RPG::GameCore::FixPoint CriticalDamageBase; // 0x88
		::RPG::GameCore::FixPoint MoveSpeed; // 0x90
		::RPG::Client::TextID AvatarDesc1; // 0x98
		::RPG::GameCore::ILBattleAvatarTag MainTag; // 0xA8
		::System::Byte _padding0[0x4];
		::RPG::Client::TextID AvatarDesc2; // 0xB0
		::RPG::Client::TextID FullName; // 0xC0
		::RPG::GameCore::FixPoint ElementMastery; // 0xD0
		::RPG::GameCore::FixPoint CriticalChanceBase; // 0xD8
		::System::UInt32 ID; // 0xE0
		::System::Boolean FormalAvatar; // 0xE4
		::System::Byte _padding1[0x3];
		::RPG::Client::TextID AvatarName; // 0xE8
		::RPG::GameCore::ILBattleCharacterLocation AvatarType; // 0xF8
		::System::UInt32 Rarity; // 0xFC
		::RPG::Client::TextID AvatarDesc3; // 0x100
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
