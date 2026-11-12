#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RestaurantTradeOrderRow; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_RESTAURANTTRADEORDERROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1EBE0180)
#define RPG_GAMECORE_RESTAURANTTRADEORDERROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1EBDFE80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RestaurantTradeOrderRow_TypeDefinitionIndex = 11407;

	class RestaurantTradeOrderRow : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* CostProductMap; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* RewardProductMap; // 0x18
		::Il2CppArray<::System::UInt32>* UnlockIDList; // 0x20
		::System::UInt32 CustomerID; // 0x28
		::System::Byte _padding0[0x4];
		::RPG::Client::TextID Detail; // 0x30
		::System::UInt32 DurationDays; // 0x40
		::System::UInt32 OrderID; // 0x44
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESTAURANTTRADEORDERROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::RestaurantTradeOrderRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RestaurantTradeOrderRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESTAURANTTRADEORDERROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
