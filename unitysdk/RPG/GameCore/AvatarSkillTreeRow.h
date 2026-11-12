#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AvatarSkillTreeAnchorType.h"
#include "unitysdk/RPG/GameCore/AvatarSkillTreePointTriggerKey.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_3.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AvatarPropertyValue; }
namespace RPG::GameCore { class AvatarSkillTreeRow; }
namespace RPG::GameCore { class ItemConfig; }
namespace System { class String; }

#define RPG_GAMECORE_AVATARSKILLTREEROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1E64F760)
#define RPG_GAMECORE_AVATARSKILLTREEROW_FROMBINARYWITHOUTNEW_OFFSET UNITYSDK_OFFSET(0x1E64D180)
#define RPG_GAMECORE_AVATARSKILLTREEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1E64D950)
#define RPG_GAMECORE_AVATARSKILLTREEROW_FROMTABLEOFFSET_OFFSET UNITYSDK_OFFSET(0x1E64F6C0)
#define RPG_GAMECORE_AVATARSKILLTREEROW_RESET_OFFSET UNITYSDK_OFFSET(0x1E64F720)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AvatarSkillTreeRow_TypeDefinitionIndex = 12791;

	class AvatarSkillTreeRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* PrePoint; // 0x10
		::Il2CppArray<::RPG::GameCore::ItemConfig*>* MaterialList; // 0x18
		::System::String* PointName; // 0x20
		::System::String* SimplePointDesc; // 0x28
		::System::String* IconPath; // 0x30
		::Il2CppArray<::System::UInt32>* ExtraEffectIDList; // 0x38
		::Il2CppArray<::RPG::GameCore::AvatarPropertyValue*>* StatusAddList; // 0x40
		::System::String* PointDesc; // 0x48
		::Il2CppArray<::System::UInt32>* SimpleExtraEffectIDList; // 0x50
		::System::String* AbilityName; // 0x58
		::Il2CppArray<::System::UInt32>* LevelUpSkillID; // 0x60
		::Il2CppArray<::RPG::GameCore::FixPoint>* ParamList; // 0x68
		::System::Boolean DefaultUnlock; // 0x70
		::System::Byte _padding0[0x3];
		::System::UInt32 MaxLevel; // 0x74
		::RPG::GameCore::AvatarSkillTreeAnchorType AnchorType; // 0x78
		::System::UInt32 PointID; // 0x7C
		::System::UInt32 AvatarPromotionLimit; // 0x80
		::System::UInt32 EnhancedID; // 0x84
		::System::UInt32 AvatarLevelLimit; // 0x88
		::RPG::GameCore::AvatarSkillTreePointTriggerKey PointTriggerKey; // 0x8C
		::System::UInt32 Level; // 0x90
		::System::UInt32 PointType; // 0x94
		::System::UInt32 AvatarID; // 0x98
		::System::UInt32 RecommendPriority; // 0x9C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARSKILLTREEROW_CTOR_OFFSET))(this);
		}

		::System::Void FromTableOffset(::System::ValueTuple_3<::System::Int32, ::System::Int32, ::System::Byte> a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::ValueTuple_3<::System::Int32, ::System::Int32, ::System::Byte>))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARSKILLTREEROW_FROMTABLEOFFSET_OFFSET))(this, a1);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARSKILLTREEROW_RESET_OFFSET))(this);
		}

		static ::System::Void FromBinaryWithoutNew(::FCOEMCEDLNL* a1, ::RPG::GameCore::AvatarSkillTreeRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AvatarSkillTreeRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARSKILLTREEROW_FROMBINARYWITHOUTNEW_OFFSET))(a1, a2);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::AvatarSkillTreeRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AvatarSkillTreeRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARSKILLTREEROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
