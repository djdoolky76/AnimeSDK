#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RestaurantFacilityUpRow; }

#define RPG_GAMECORE_RESTAURANTFACILITYUPROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D991630)
#define RPG_GAMECORE_RESTAURANTFACILITYUPROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D991470)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RestaurantFacilityUpRow_TypeDefinitionIndex = 11339;

	class RestaurantFacilityUpRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* AbilityIDList; // 0x10
		::System::UInt32 FacilityID; // 0x18
		::System::UInt32 Level; // 0x1C
		::System::UInt32 UpgradePrice; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESTAURANTFACILITYUPROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::RestaurantFacilityUpRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RestaurantFacilityUpRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESTAURANTFACILITYUPROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
