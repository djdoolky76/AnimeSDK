#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class EquipmentGrowUpBeforeData; }

#define RPG_CLIENT_EQUIPMENTGROWUPBEFOREDATA_COPYTO_OFFSET UNITYSDK_OFFSET(0x1A6F5C40)
#define RPG_CLIENT_EQUIPMENTGROWUPBEFOREDATA_CTOR_OFFSET UNITYSDK_OFFSET(0x1A6F5CC0)

namespace RPG::Client
{
	inline static constexpr unsigned int EquipmentGrowUpBeforeData_TypeDefinitionIndex = 67604;

	class EquipmentGrowUpBeforeData : public ::System::Object
	{
	public:
		::RPG::GameCore::FixPoint AttackBefore; // 0x10
		::System::UInt32 LevelBefore; // 0x18
		::System::UInt32 RankBefore; // 0x1C
		::System::UInt32 PromotionBefore; // 0x20
		::System::UInt32 ExpBefore; // 0x24
		::System::UInt32 MaxLevelBefore; // 0x28
		::System::Byte _padding0[0x4];
		::RPG::GameCore::FixPoint DefenseBefore; // 0x30
		::RPG::GameCore::FixPoint HpMaxBefore; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EQUIPMENTGROWUPBEFOREDATA_CTOR_OFFSET))(this);
		}

		::System::Void CopyTo(::RPG::Client::EquipmentGrowUpBeforeData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::EquipmentGrowUpBeforeData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EQUIPMENTGROWUPBEFOREDATA_COPYTO_OFFSET))(this, a1);
		}

	};
}
