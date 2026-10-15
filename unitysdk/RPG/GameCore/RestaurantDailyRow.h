#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/RestaurantNormalEventType.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RestaurantDailyRow; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_RESTAURANTDAILYROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D9905D0)
#define RPG_GAMECORE_RESTAURANTDAILYROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D990080)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RestaurantDailyRow_TypeDefinitionIndex = 11328;

	class RestaurantDailyRow : public ::System::Object
	{
	public:
		::Il2CppArray<::RPG::GameCore::RestaurantNormalEventType>* RandomEventTypeList; // 0x10
		::Il2CppArray<::System::UInt32>* RecommendRecipeList; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* SpecialCustomerMapList; // 0x20
		::System::String* WaveConfig; // 0x28
		::System::UInt32 FestivalID; // 0x30
		::System::UInt32 ShareCropsRewardID; // 0x34
		::System::UInt32 BeginMainPageMission; // 0x38
		::System::UInt32 LockNextDayMission; // 0x3C
		::System::UInt32 OrderTableID; // 0x40
		::System::UInt32 RandomEventNumber; // 0x44
		::System::UInt32 DayID; // 0x48
		::System::Byte _padding0[0x4];
		::RPG::Client::TextID Tips; // 0x50
		::System::UInt32 StartMessageID; // 0x60
		::System::Boolean IsLoop; // 0x64
		::System::Byte _padding1[0x3];
		::System::UInt32 ProgressID; // 0x68
		::System::UInt32 LockRestaurantMission; // 0x6C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESTAURANTDAILYROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::RestaurantDailyRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RestaurantDailyRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESTAURANTDAILYROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
