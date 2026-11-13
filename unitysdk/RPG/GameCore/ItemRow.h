#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/ItemMainType.h"
#include "unitysdk/RPG/GameCore/ItemRarity.h"
#include "unitysdk/RPG/GameCore/ItemSellType.h"
#include "unitysdk/RPG/GameCore/ItemSubType.h"
#include "unitysdk/RPG/GameCore/ItemUseMethod.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_3.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ItemConfig; }
namespace RPG::GameCore { class ItemRow; }
namespace System { class String; }

#define RPG_GAMECORE_ITEMROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D921BC0)
#define RPG_GAMECORE_ITEMROW_FROMBINARYWITHOUTNEW_OFFSET UNITYSDK_OFFSET(0x1D91BDE0)
#define RPG_GAMECORE_ITEMROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D91C550)
#define RPG_GAMECORE_ITEMROW_FROMTABLEOFFSET_OFFSET UNITYSDK_OFFSET(0x1D921B10)
#define RPG_GAMECORE_ITEMROW_RESET_OFFSET UNITYSDK_OFFSET(0x1D921B70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ItemRow_TypeDefinitionIndex = 14018;

	class ItemRow : public ::System::Object
	{
	public:
		::Il2CppArray<::RPG::GameCore::ItemConfig*>* ReturnItemIDList; // 0x10
		::System::String* ItemIconPath; // 0x18
		::Il2CppArray<::System::UInt32>* CustomDataList; // 0x20
		::System::String* ItemFigureIconPath; // 0x28
		::System::String* ItemAvatarIconPath; // 0x30
		::System::String* ItemCurrencyIconPath; // 0x38
		::RPG::Client::TextID ItemDesc; // 0x40
		::RPG::GameCore::ItemSellType SellType; // 0x50
		::System::UInt32 InventoryDisplayTag; // 0x54
		::RPG::Client::TextID ItemBGDesc; // 0x58
		::System::UInt32 ItemGroup; // 0x68
		::System::UInt32 ID; // 0x6C
		::RPG::GameCore::ItemSubType ItemSubType; // 0x70
		::System::Byte _padding0[0x4];
		::RPG::Client::TextID ItemName; // 0x78
		::RPG::GameCore::ItemUseMethod UseMethod; // 0x88
		::RPG::GameCore::ItemRarity Rarity; // 0x8C
		::System::UInt32 PileLimit; // 0x90
		::System::UInt32 PurposeType; // 0x94
		::System::Boolean IsShowRedDot; // 0x98
		::System::Boolean isVisible; // 0x99
		::System::Byte _padding1[0x2];
		::RPG::GameCore::ItemMainType ItemMainType; // 0x9C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ITEMROW_CTOR_OFFSET))(this);
		}

		::System::Void FromTableOffset(::System::ValueTuple_3<::System::Int32, ::System::Int32, ::System::Byte> a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::ValueTuple_3<::System::Int32, ::System::Int32, ::System::Byte>))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ITEMROW_FROMTABLEOFFSET_OFFSET))(this, a1);
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
