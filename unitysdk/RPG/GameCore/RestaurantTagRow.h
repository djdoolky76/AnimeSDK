#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RestaurantTagRow; }

#define RPG_GAMECORE_RESTAURANTTAGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D996E00)
#define RPG_GAMECORE_RESTAURANTTAGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D996C60)

namespace RPG::GameCore
{
	class RestaurantTagRow : public ::System::Object
	{
	public:
		::System::UInt32 TagID; // 0x10
		::System::UInt32 ColorID; // 0x14
		::RPG::Client::TextID Name; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESTAURANTTAGROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::RestaurantTagRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RestaurantTagRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESTAURANTTAGROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
