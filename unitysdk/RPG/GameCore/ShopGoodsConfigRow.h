#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GoodsRefreshType.h"
#include "unitysdk/RPG/GameCore/LimitType.h"
#include "unitysdk/RPG/GameCore/ShopGoodTag.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ShopGoodsConfigRow; }

#define RPG_GAMECORE_SHOPGOODSCONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1ECE6930)
#define RPG_GAMECORE_SHOPGOODSCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1ECE5740)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ShopGoodsConfigRow_TypeDefinitionIndex = 15258;

	class ShopGoodsConfigRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* CurrencyCostList; // 0x10
		::Il2CppArray<::System::UInt32>* LimitValue1List; // 0x18
		::Il2CppArray<::System::UInt32>* OnShelfValue2List; // 0x20
		::Il2CppArray<::System::UInt32>* CurrencyList; // 0x28
		::Il2CppArray<::System::UInt32>* OnShelfValue1List; // 0x30
		::Il2CppArray<::System::UInt32>* LimitValue2List; // 0x38
		::System::Boolean IsLimitedTimePurchase; // 0x40
		::System::Boolean IsOnSale; // 0x41
		::System::Boolean IsNew; // 0x42
		::System::Byte _padding0[0x1];
		::RPG::GameCore::LimitType LimitType1; // 0x44
		::RPG::GameCore::ShopGoodTag TagType; // 0x48
		::RPG::GameCore::GoodsRefreshType RefreshType; // 0x4C
		::System::UInt32 ScheduleDataID; // 0x50
		::RPG::GameCore::LimitType OnShelfType2; // 0x54
		::System::UInt32 GoodsSortID; // 0x58
		::System::UInt32 TagParam; // 0x5C
		::RPG::GameCore::LimitType LimitType2; // 0x60
		::System::UInt32 ItemGroupID; // 0x64
		::System::Int32 RefreshOffset; // 0x68
		::System::UInt32 Rank; // 0x6C
		::System::UInt32 Level; // 0x70
		::System::UInt32 GoodsID; // 0x74
		::System::UInt32 ShopID; // 0x78
		::System::UInt32 ItemID; // 0x7C
		::System::UInt32 ActivityModuleID; // 0x80
		::System::UInt32 CycleDays; // 0x84
		::RPG::GameCore::LimitType OnShelfType1; // 0x88
		::System::UInt32 LimitTimes; // 0x8C
		::System::UInt32 ItemCount; // 0x90
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOPGOODSCONFIGROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::ShopGoodsConfigRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ShopGoodsConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOPGOODSCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
