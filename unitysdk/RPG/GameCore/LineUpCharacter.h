#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AABGIFAEEEK.h"
#include "unitysdk/ACINIALAFDE.h"
#include "unitysdk/OECEIBFKDGD.h"
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

#define RPG_GAMECORE_LINEUPCHARACTER_CTOR_OFFSET UNITYSDK_OFFSET(0xF202D60)
#define RPG_GAMECORE_LINEUPCHARACTER_DEEPCOPY_OFFSET UNITYSDK_OFFSET(0xF202E40)
#define RPG_GAMECORE_LINEUPCHARACTER_GETAVATARROWWRAPPEREXTRAPARAM_OFFSET UNITYSDK_OFFSET(0xF2034A0)
#define RPG_GAMECORE_LINEUPCHARACTER_GET_AVATARDERIVETYPE_OFFSET UNITYSDK_OFFSET(0xF203450)
#define RPG_GAMECORE_LINEUPCHARACTER_GET_CHARACTERSPRATIO_OFFSET UNITYSDK_OFFSET(0xF203400)
#define RPG_GAMECORE_LINEUPCHARACTER_RESET_OFFSET UNITYSDK_OFFSET(0xF202DF0)
#define RPG_GAMECORE_LINEUPCHARACTER_TOSTRING_OFFSET UNITYSDK_OFFSET(0xF2035B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LineUpCharacter_TypeDefinitionIndex = 57545;

	class LineUpCharacter : public ::System::Object
	{
	public:
		::Il2CppArray<::AGGHHCLPALK*>* SkillTreePointList; // 0x10
		::NMBMHCNGCFG* BattleRelicItemModule; // 0x18
		::Il2CppArray<::AGGHHCLPALK*>* ChangedSkillTreePointList; // 0x20
		::Il2CppArray<::JGGNIOIBDBC*>* BattleEquipmentList; // 0x28
		::Il2CppArray<::System::UInt32>* ExRankIDList; // 0x30
		::RPG::GameCore::BattleGridFightAvatarData* BattleGridAvatarData; // 0x38
		::Il2CppArray<::OECEIBFKDGD>* SkillChangeDataList; // 0x40
		::Il2CppArray<::System::UInt32>* SpiritPassiveList; // 0x48
		::ACINIALAFDE CharacterAvatarType; // 0x50
		::System::UInt32 CharacterRowIndex; // 0x54
		::System::UInt32 CharacterID; // 0x58
		::System::UInt32 CharacterRank; // 0x5C
		::RPG::GameCore::FixPoint CharacterHPRatio; // 0x60
		::AABGIFAEEEK SpiritLineupType; // 0x68
		::System::UInt32 SpecialAvatarID; // 0x6C
		::System::UInt32 EnhancedID; // 0x70
		::System::UInt32 TotalPower; // 0x74
		::RPG::GameCore::FixPoint CharacterSP_Denominator; // 0x78
		::System::UInt32 CharacterLevel; // 0x80
		::System::Byte _padding0[0x4];
		::RPG::GameCore::FixPoint CharacterSP_Numerator; // 0x88
		::System::UInt32 Index; // 0x90
		::System::UInt32 CharacterPromotion; // 0x94
		::System::UInt32 WorldLevel; // 0x98
		::System::UInt32 AssistUid; // 0x9C
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
