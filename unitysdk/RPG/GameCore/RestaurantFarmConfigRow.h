#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/RestaurantFarmType.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RestaurantFarmConfigRow; }

#define RPG_GAMECORE_RESTAURANTFARMCONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1EBDA930)
#define RPG_GAMECORE_RESTAURANTFARMCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1EBDA6B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RestaurantFarmConfigRow_TypeDefinitionIndex = 11423;

	class RestaurantFarmConfigRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* FieldIDList; // 0x10
		::Il2CppArray<::System::UInt32>* UnlockIDList; // 0x18
		::RPG::Client::TextID Name; // 0x20
		::System::UInt32 FarmID; // 0x30
		::System::UInt32 ManagerEmployeeID; // 0x34
		::RPG::GameCore::RestaurantFarmType Type; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESTAURANTFARMCONFIGROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::RestaurantFarmConfigRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RestaurantFarmConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESTAURANTFARMCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
