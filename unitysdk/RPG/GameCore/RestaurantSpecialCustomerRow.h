#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RestaurantSpecialCustomerRow; }
namespace System { class String; }

#define RPG_GAMECORE_RESTAURANTSPECIALCUSTOMERROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D996C50)
#define RPG_GAMECORE_RESTAURANTSPECIALCUSTOMERROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D996AD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RestaurantSpecialCustomerRow_TypeDefinitionIndex = 11367;

	class RestaurantSpecialCustomerRow : public ::System::Object
	{
	public:
		::System::String* EventConfigPath; // 0x10
		::System::UInt32 CustomerID; // 0x18
		::System::UInt32 SpecialCustomerID; // 0x1C
		::System::UInt32 SelectEventID; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESTAURANTSPECIALCUSTOMERROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::RestaurantSpecialCustomerRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RestaurantSpecialCustomerRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESTAURANTSPECIALCUSTOMERROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
