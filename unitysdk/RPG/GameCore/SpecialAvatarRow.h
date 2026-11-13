#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/SkillTreeTemplateType.h"
#include "unitysdk/RPG/GameCore/SpecialAvatarType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_3.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AbilityPropertyValue; }
namespace RPG::GameCore { class SpecialAvatarRow; }
namespace System { class String; }

#define RPG_GAMECORE_SPECIALAVATARROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1E3A32A0)
#define RPG_GAMECORE_SPECIALAVATARROW_FROMBINARYWITHOUTNEW_OFFSET UNITYSDK_OFFSET(0x1E3A0060)
#define RPG_GAMECORE_SPECIALAVATARROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1E3A0FC0)
#define RPG_GAMECORE_SPECIALAVATARROW_FROMTABLEOFFSET_OFFSET UNITYSDK_OFFSET(0x1E3A32B0)
#define RPG_GAMECORE_SPECIALAVATARROW_RESET_OFFSET UNITYSDK_OFFSET(0x1E3A3310)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SpecialAvatarRow_TypeDefinitionIndex = 15272;

	class SpecialAvatarRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* ExRankIDList; // 0x10
		::System::String* LevelAreaPrefab; // 0x18
		::System::String* AnchorName; // 0x20
		::System::String* JsonPath; // 0x28
		::System::String* AIPath; // 0x30
		::System::String* PlayerJsonPath; // 0x38
		::Il2CppArray<::RPG::GameCore::AbilityPropertyValue*>* OverrideProperty; // 0x40
		::Il2CppArray<::System::String*>* AbilityNameList; // 0x48
		::System::String* CustomSkillTreeKey; // 0x50
		::System::UInt32 AvatarSkinID; // 0x58
		::System::UInt32 PlayerID; // 0x5C
		::System::Boolean DisableSwitch; // 0x60
		::System::Boolean HasJoinHint; // 0x61
		::System::Boolean LockBattleInfo; // 0x62
		::System::Boolean IsProtected; // 0x63
		::System::UInt32 EquipmentLevel; // 0x64
		::RPG::GameCore::SkillTreeTemplateType SkillTreeTemplate; // 0x68
		::System::UInt32 PlaneID; // 0x6C
		::System::UInt32 EnhancedID; // 0x70
		::System::UInt32 Rank; // 0x74
		::System::UInt32 WorldLevel; // 0x78
		::System::UInt32 MainMissionID; // 0x7C
		::RPG::GameCore::SpecialAvatarType Type; // 0x80
		::System::UInt32 RelicPropertyTypeExtra; // 0x84
		::System::UInt32 RelicSubValue; // 0x88
		::System::Boolean IsUseWorldLevel; // 0x8C
		::System::Boolean LockMazeSkill; // 0x8D
		::System::Byte _padding0[0x2];
		::System::UInt32 EquipmentID; // 0x90
		::System::UInt32 RelicMainValue; // 0x94
		::System::UInt32 RelicPropertyType; // 0x98
		::System::UInt32 EquipmentPromotion; // 0x9C
		::System::UInt32 AvatarID; // 0xA0
		::System::UInt32 SpecialAvatarID; // 0xA4
		::System::UInt32 Level; // 0xA8
		::System::Boolean HasLeaveHint; // 0xAC
		::System::Boolean HaveActionDelay; // 0xAD
		::System::Boolean IsAutoBattle; // 0xAE
		::System::Byte _padding1[0x1];
		::System::UInt32 Promotion; // 0xB0
		::System::UInt32 EquipmentRank; // 0xB4
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SPECIALAVATARROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinaryWithoutNew(::FCOEMCEDLNL* a1, ::RPG::GameCore::SpecialAvatarRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SpecialAvatarRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SPECIALAVATARROW_FROMBINARYWITHOUTNEW_OFFSET))(a1, a2);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::SpecialAvatarRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SpecialAvatarRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SPECIALAVATARROW_FROMBINARY_OFFSET))(a1, a2);
		}

		::System::Void FromTableOffset(::System::ValueTuple_3<::System::Int32, ::System::Int32, ::System::Byte> a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::ValueTuple_3<::System::Int32, ::System::Int32, ::System::Byte>))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SPECIALAVATARROW_FROMTABLEOFFSET_OFFSET))(this, a1);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SPECIALAVATARROW_RESET_OFFSET))(this);
		}

	};
}
