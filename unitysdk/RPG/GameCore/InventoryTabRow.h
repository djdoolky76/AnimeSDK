#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/InventorySortType.h"
#include "unitysdk/RPG/GameCore/InventoryType.h"
#include "unitysdk/RPG/GameCore/ItemSellType.h"
#include "unitysdk/RPG/GameCore/ItemSubType.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ConditionParam; }
namespace RPG::GameCore { class InventoryTabRow; }
namespace System { class String; }

#define RPG_GAMECORE_INVENTORYTABROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D78D180)
#define RPG_GAMECORE_INVENTORYTABROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D78C8E0)

namespace RPG::GameCore
{
	class InventoryTabRow : public ::System::Object
	{
	public:
		::Il2CppArray<::RPG::GameCore::ItemSubType>* DisplayItemSubType; // 0x10
		::Il2CppArray<::RPG::GameCore::InventorySortType>* ItemSortTypeList; // 0x18
		::System::String* IconImagePath; // 0x20
		::RPG::GameCore::ConditionParam* UnlockCondition; // 0x28
		::System::UInt32 ID; // 0x30
		::RPG::GameCore::InventoryType DisplayInventoryType; // 0x34
		::System::UInt32 DisplayCapacityLimit; // 0x38
		::System::Boolean NotDisplayPileLimit; // 0x3C
		::System::Byte _padding0[0x3];
		::RPG::GameCore::ItemSellType SellType; // 0x40
		::System::UInt32 InventoryDisplayTag; // 0x44
		::System::UInt32 TabSortWeight; // 0x48
		::System::Byte _padding1[0x4];
		::RPG::Client::TextID TabName; // 0x50
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_INVENTORYTABROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::InventoryTabRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::InventoryTabRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_INVENTORYTABROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
