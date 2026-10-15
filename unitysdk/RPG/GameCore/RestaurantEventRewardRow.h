#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/RestaurantNormalEventType.h"
#include "unitysdk/RPG/GameCore/RestaurantSuperEventType.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RestaurantEventRewardRow; }
namespace System { class String; }

#define RPG_GAMECORE_RESTAURANTEVENTREWARDROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D963770)
#define RPG_GAMECORE_RESTAURANTEVENTREWARDROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D963490)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RestaurantEventRewardRow_TypeDefinitionIndex = 11330;

	class RestaurantEventRewardRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Single>* DynamicValues; // 0x10
		::System::String* BuffName; // 0x18
		::RPG::Client::TextID EventDsc; // 0x20
		::RPG::GameCore::RestaurantSuperEventType SuperEventType; // 0x30
		::RPG::GameCore::RestaurantNormalEventType EventType; // 0x34
		::System::UInt32 RewardID; // 0x38
		::System::UInt32 ID; // 0x3C
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
