#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/RestaurantCustomerType.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RestaurantCustomerRow; }
namespace System { class String; }

#define RPG_GAMECORE_RESTAURANTCUSTOMERROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D990070)
#define RPG_GAMECORE_RESTAURANTCUSTOMERROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D98FD00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RestaurantCustomerRow_TypeDefinitionIndex = 11363;

	class RestaurantCustomerRow : public ::System::Object
	{
	public:
		::System::String* IMGPath; // 0x10
		::System::String* Model; // 0x18
		::System::String* IconPath; // 0x20
		::System::UInt32 CustomerID; // 0x28
		::System::UInt32 NPCID; // 0x2C
		::System::UInt32 ConfigID; // 0x30
		::System::UInt32 GroupID; // 0x34
		::RPG::Client::TextID Name; // 0x38
		::RPG::GameCore::RestaurantCustomerType Type; // 0x48
		::System::UInt32 BehaviorID; // 0x4C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESTAURANTCUSTOMERROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::RestaurantCustomerRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RestaurantCustomerRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESTAURANTCUSTOMERROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
