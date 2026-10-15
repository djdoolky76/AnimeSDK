#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AABGIFAEEEK.h"
#include "unitysdk/ACINIALAFDE.h"
#include "unitysdk/RPG/GameCore/AvatarRowWrapperDeriveType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/AvatarRowWrapperExtraParam.h"
class AGGHHCLPALK;
class JGGNIOIBDBC;
class NMBMHCNGCFG;
namespace RPG::GameCore { class BattleGridFightAvatarData; }
namespace RPG::GameCore { class LineUpCharacter; }
namespace System { class String; }

#define RPG_GAMECORE_LINEUPCHARACTER_CTOR_OFFSET UNITYSDK_OFFSET(0xE6FFFD0)
#define RPG_GAMECORE_LINEUPCHARACTER_DEEPCOPY_OFFSET UNITYSDK_OFFSET(0xE7000A0)
#define RPG_GAMECORE_LINEUPCHARACTER_GETAVATARROWWRAPPEREXTRAPARAM_OFFSET UNITYSDK_OFFSET(0xE700580)
#define RPG_GAMECORE_LINEUPCHARACTER_GET_AVATARDERIVETYPE_OFFSET UNITYSDK_OFFSET(0xE700530)
#define RPG_GAMECORE_LINEUPCHARACTER_GET_CHARACTERSPRATIO_OFFSET UNITYSDK_OFFSET(0xE7004E0)
#define RPG_GAMECORE_LINEUPCHARACTER_RESET_OFFSET UNITYSDK_OFFSET(0xE700050)
#define RPG_GAMECORE_LINEUPCHARACTER_TOSTRING_OFFSET UNITYSDK_OFFSET(0xE700690)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LineUpCharacter_TypeDefinitionIndex = 56331;

	class LineUpCharacter : public ::System::Object
	{
	public:
		::NMBMHCNGCFG* BattleRelicItemModule; // 0x10
		::Il2CppArray<::System::UInt32>* SpiritPassiveList; // 0x18
		::Il2CppArray<::AGGHHCLPALK*>* ChangedSkillTreePointList; // 0x20
		::Il2CppArray<::AGGHHCLPALK*>* SkillTreePointList; // 0x28
		::Il2CppArray<::JGGNIOIBDBC*>* BattleEquipmentList; // 0x30
		::RPG::GameCore::BattleGridFightAvatarData* BattleGridAvatarData; // 0x38
		::System::UInt32 CharacterRowIndex; // 0x40
		::System::UInt32 AssistUid; // 0x44
		::System::UInt32 EnhancedID; // 0x48
		::System::UInt32 CharacterPromotion; // 0x4C
		::System::UInt32 CharacterRank; // 0x50
		::System::UInt32 CharacterLevel; // 0x54
		::System::UInt32 WorldLevel; // 0x58
		::System::UInt32 TotalPower; // 0x5C
		::RPG::GameCore::FixPoint CharacterSP_Denominator; // 0x60
		::AABGIFAEEEK SpiritLineupType; // 0x68
		::System::UInt32 SpecialAvatarID; // 0x6C
		::RPG::GameCore::FixPoint CharacterSP_Numerator; // 0x70
		::RPG::GameCore::FixPoint CharacterHPRatio; // 0x78
		::System::UInt32 Index; // 0x80
		::ACINIALAFDE CharacterAvatarType; // 0x84
		::System::UInt32 CharacterID; // 0x88
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LINEUPCHARACTER_CTOR_OFFSET))(this);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LINEUPCHARACTER_RESET_OFFSET))(this);
		}

		::RPG::GameCore::LineUpCharacter* DeepCopy()
		{
			return ((::RPG::GameCore::LineUpCharacter*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LINEUPCHARACTER_DEEPCOPY_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint get_CharacterSPRatio()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LINEUPCHARACTER_GET_CHARACTERSPRATIO_OFFSET))(this);
		}

		::RPG::GameCore::AvatarRowWrapperDeriveType get_AvatarDeriveType()
		{
			return ((::RPG::GameCore::AvatarRowWrapperDeriveType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LINEUPCHARACTER_GET_AVATARDERIVETYPE_OFFSET))(this);
		}

		::RPG::GameCore::AvatarRowWrapperExtraParam GetAvatarRowWrapperExtraParam()
		{
			return ((::RPG::GameCore::AvatarRowWrapperExtraParam(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LINEUPCHARACTER_GETAVATARROWWRAPPEREXTRAPARAM_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LINEUPCHARACTER_TOSTRING_OFFSET))(this);
		}

	};
}
