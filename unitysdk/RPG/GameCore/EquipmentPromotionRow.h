#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class EquipmentPromotionRow; }
namespace RPG::GameCore { class ItemConfig; }

#define RPG_GAMECORE_EQUIPMENTPROMOTIONROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D67FCD0)
#define RPG_GAMECORE_EQUIPMENTPROMOTIONROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D67F2F0)

namespace RPG::GameCore
{
	class EquipmentPromotionRow : public ::System::Object
	{
	public:
		::Il2CppArray<::RPG::GameCore::ItemConfig*>* PromotionCostList; // 0x10
		::RPG::GameCore::FixPoint BaseDefenceAdd; // 0x18
		::RPG::GameCore::FixPoint BaseAttackAdd; // 0x20
		::System::UInt32 EquipmentID; // 0x28
		::System::Byte _padding0[0x4];
		::RPG::GameCore::FixPoint BaseDefence; // 0x30
		::System::UInt32 WorldLevelRequire; // 0x38
		::System::UInt32 Promotion; // 0x3C
		::RPG::GameCore::FixPoint BaseHP; // 0x40
		::RPG::GameCore::FixPoint BaseAttack; // 0x48
		::RPG::GameCore::FixPoint BaseHPAdd; // 0x50
		::System::UInt32 MaxLevel; // 0x58
		::System::UInt32 PlayerLevelRequire; // 0x5C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EQUIPMENTPROMOTIONROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::EquipmentPromotionRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::EquipmentPromotionRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EQUIPMENTPROMOTIONROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
