#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/ItemMainType.h"
#include "unitysdk/RPG/GameCore/ItemRarity.h"
#include "unitysdk/RPG/GameCore/ItemSellType.h"
#include "unitysdk/RPG/GameCore/ItemSubType.h"
#include "unitysdk/RPG/GameCore/ItemUseMethod.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ItemConfig; }
namespace RPG::GameCore { class ItemRow; }
namespace System { class String; }

#define RPG_GAMECORE_ITEMROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D79C990)
#define RPG_GAMECORE_ITEMROW_FROMBINARYWITHOUTNEW_OFFSET UNITYSDK_OFFSET(0x1D796C30)
#define RPG_GAMECORE_ITEMROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D797390)
#define RPG_GAMECORE_ITEMROW_FROMTABLEOFFSET_OFFSET UNITYSDK_OFFSET(0x1D79C8E0)
#define RPG_GAMECORE_ITEMROW_RESET_OFFSET UNITYSDK_OFFSET(0x1D79C940)

namespace RPG::GameCore
{
	class ItemRow : public ::System::Object
	{
	public:
		::Il2CppArray<::RPG::GameCore::ItemConfig*>* ReturnItemIDList; // 0x10
		::System::String* ItemCurrencyIconPath; // 0x18
		::System::String* ItemFigureIconPath; // 0x20
		::Il2CppArray<::System::UInt32>* CustomDataList; // 0x28
		::System::String* ItemIconPath; // 0x30
		::System::String* ItemAvatarIconPath; // 0x38
		::RPG::Client::TextID ItemBGDesc; // 0x40
		::System::UInt32 ID; // 0x50
		::RPG::GameCore::ItemRarity Rarity; // 0x54
		::System::UInt32 PileLimit; // 0x58
		::System::UInt32 PurposeType; // 0x5C
		::RPG::GameCore::ItemUseMethod UseMethod; // 0x60
		::System::Boolean isVisible; // 0x64
		::System::Boolean IsShowRedDot; // 0x65
		::System::Byte _padding0[0x2];
		::System::UInt32 InventoryDisplayTag; // 0x68
		::System::UInt32 ItemGroup; // 0x6C
		::RPG::GameCore::ItemMainType ItemMainType; // 0x70
		::System::Byte _padding1[0x4];
		::RPG::Client::TextID ItemDesc; // 0x78
		::RPG::GameCore::ItemSubType ItemSubType; // 0x88
		::RPG::GameCore::ItemSellType SellType; // 0x8C
		::RPG::Client::TextID ItemName; // 0x90
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ITEMROW_CTOR_OFFSET))(this);
		}

		::System::Void FromTableOffset(::System::ValueTuple a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::ValueTuple))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ITEMROW_FROMTABLEOFFSET_OFFSET))(this, a1);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ITEMROW_RESET_OFFSET))(this);
		}

		static ::System::Void FromBinaryWithoutNew(::FCOEMCEDLNL* a1, ::RPG::GameCore::ItemRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ItemRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ITEMROW_FROMBINARYWITHOUTNEW_OFFSET))(a1, a2);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::ItemRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ItemRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ITEMROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
