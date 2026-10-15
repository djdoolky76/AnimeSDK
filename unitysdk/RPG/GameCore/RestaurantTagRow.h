#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RestaurantTagRow; }

#define RPG_GAMECORE_RESTAURANTTAGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D969490)
#define RPG_GAMECORE_RESTAURANTTAGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D9692F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RestaurantTagRow_TypeDefinitionIndex = 11365;

	class RestaurantTagRow : public ::System::Object
	{
	public:
		::RPG::Client::TextID Name; // 0x10
		::System::UInt32 TagID; // 0x20
		::System::UInt32 ColorID; // 0x24
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
