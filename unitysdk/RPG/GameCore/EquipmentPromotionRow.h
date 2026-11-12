#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class EquipmentPromotionRow; }
namespace RPG::GameCore { class ItemConfig; }

#define RPG_GAMECORE_EQUIPMENTPROMOTIONROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1E88C000)
#define RPG_GAMECORE_EQUIPMENTPROMOTIONROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1E88B620)

namespace RPG::GameCore
{
	inline static constexpr unsigned int EquipmentPromotionRow_TypeDefinitionIndex = 13312;

	class EquipmentPromotionRow : public ::System::Object
	{
	public:
		::Il2CppArray<::RPG::GameCore::ItemConfig*>* PromotionCostList; // 0x10
		::RPG::GameCore::FixPoint BaseAttack; // 0x18
		::System::UInt32 WorldLevelRequire; // 0x20
		::System::UInt32 MaxLevel; // 0x24
		::RPG::GameCore::FixPoint BaseAttackAdd; // 0x28
		::RPG::GameCore::FixPoint BaseHPAdd; // 0x30
		::RPG::GameCore::FixPoint BaseDefenceAdd; // 0x38
		::RPG::GameCore::FixPoint BaseHP; // 0x40
		::System::UInt32 Promotion; // 0x48
		::System::UInt32 PlayerLevelRequire; // 0x4C
		::RPG::GameCore::FixPoint BaseDefence; // 0x50
		::System::UInt32 EquipmentID; // 0x58
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
