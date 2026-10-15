#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RestaurantProductConfigRow; }

#define RPG_GAMECORE_RESTAURANTPRODUCTCONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D992920)
#define RPG_GAMECORE_RESTAURANTPRODUCTCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D9926D0)

namespace RPG::GameCore
{
	class RestaurantProductConfigRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* UnlockIDList; // 0x10
		::System::UInt32 ItemID; // 0x18
		::System::UInt32 ProductID; // 0x1C
		::RPG::Client::TextID Name; // 0x20
		::System::Boolean IsCrops; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESTAURANTPRODUCTCONFIGROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::RestaurantProductConfigRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RestaurantProductConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESTAURANTPRODUCTCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
