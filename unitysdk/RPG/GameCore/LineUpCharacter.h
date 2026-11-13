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

#define RPG_GAMECORE_LINEUPCHARACTER_CTOR_OFFSET UNITYSDK_OFFSET(0x192590E0)
#define RPG_GAMECORE_LINEUPCHARACTER_DEEPCOPY_OFFSET UNITYSDK_OFFSET(0x192591C0)
#define RPG_GAMECORE_LINEUPCHARACTER_GETAVATARROWWRAPPEREXTRAPARAM_OFFSET UNITYSDK_OFFSET(0x19259840)
#define RPG_GAMECORE_LINEUPCHARACTER_GET_AVATARDERIVETYPE_OFFSET UNITYSDK_OFFSET(0x192597F0)
#define RPG_GAMECORE_LINEUPCHARACTER_GET_CHARACTERSPRATIO_OFFSET UNITYSDK_OFFSET(0x192597A0)
#define RPG_GAMECORE_LINEUPCHARACTER_RESET_OFFSET UNITYSDK_OFFSET(0x19259170)
#define RPG_GAMECORE_LINEUPCHARACTER_TOSTRING_OFFSET UNITYSDK_OFFSET(0x19259950)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LineUpCharacter_TypeDefinitionIndex = 57545;

	class LineUpCharacter : public ::System::Object
	{
	public:
		::Il2CppArray<::JGGNIOIBDBC*>* BattleEquipmentList; // 0x10
		::RPG::GameCore::BattleGridFightAvatarData* BattleGridAvatarData; // 0x18
		::Il2CppArray<::OECEIBFKDGD>* SkillChangeDataList; // 0x20
		::Il2CppArray<::System::UInt32>* SpiritPassiveList; // 0x28
		::Il2CppArray<::AGGHHCLPALK*>* SkillTreePointList; // 0x30
		::Il2CppArray<::System::UInt32>* ExRankIDList; // 0x38
		::NMBMHCNGCFG* BattleRelicItemModule; // 0x40
		::Il2CppArray<::AGGHHCLPALK*>* ChangedSkillTreePointList; // 0x48
		::RPG::GameCore::FixPoint CharacterSP_Denominator; // 0x50
		::System::UInt32 CharacterLevel; // 0x58
		::AABGIFAEEEK SpiritLineupType; // 0x5C
		::System::UInt32 CharacterPromotion; // 0x60
		::System::Byte _padding0[0x4];
		::RPG::GameCore::FixPoint CharacterHPRatio; // 0x68
		::System::UInt32 CharacterRowIndex; // 0x70
		::System::UInt32 WorldLevel; // 0x74
		::System::UInt32 SpecialAvatarID; // 0x78
		::System::UInt32 CharacterID; // 0x7C
		::System::UInt32 TotalPower; // 0x80
		::System::UInt32 CharacterRank; // 0x84
		::System::UInt32 Index; // 0x88
		::ACINIALAFDE CharacterAvatarType; // 0x8C
		::RPG::GameCore::FixPoint CharacterSP_Numerator; // 0x90
		::System::UInt32 AssistUid; // 0x98
		::System::UInt32 EnhancedID; // 0x9C
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
