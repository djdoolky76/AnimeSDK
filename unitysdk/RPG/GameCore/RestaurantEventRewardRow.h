#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/RestaurantNormalEventType.h"
#include "unitysdk/RPG/GameCore/RestaurantSuperEventType.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RestaurantEventRewardRow; }
namespace System { class String; }

#define RPG_GAMECORE_RESTAURANTEVENTREWARDROW_CTOR_OFFSET UNITYSDK_OFFSET(0x20727BD0)
#define RPG_GAMECORE_RESTAURANTEVENTREWARDROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x207278F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RestaurantEventRewardRow_TypeDefinitionIndex = 11381;

	class RestaurantEventRewardRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Single>* DynamicValues; // 0x10
		::System::String* BuffName; // 0x18
		::System::UInt32 ID; // 0x20
		::RPG::GameCore::RestaurantNormalEventType EventType; // 0x24
		::RPG::GameCore::RestaurantSuperEventType SuperEventType; // 0x28
		::System::UInt32 RewardID; // 0x2C
		::RPG::Client::TextID EventDsc; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESTAURANTEVENTREWARDROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::RestaurantEventRewardRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RestaurantEventRewardRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESTAURANTEVENTREWARDROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
