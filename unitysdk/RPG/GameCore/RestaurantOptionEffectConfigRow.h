#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/RestaurantSelectionType.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RestaurantOptionEffectConfigRow; }

#define RPG_GAMECORE_RESTAURANTOPTIONEFFECTCONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D9926C0)
#define RPG_GAMECORE_RESTAURANTOPTIONEFFECTCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D9923D0)

namespace RPG::GameCore
{
	class RestaurantOptionEffectConfigRow : public ::System::Object
	{
	public:
		::System::UInt32 ContactsID; // 0x10
		::RPG::GameCore::RestaurantSelectionType Type; // 0x14
		::RPG::Client::TextID ResultText; // 0x18
		::RPG::Client::TextID OptionText; // 0x28
		::System::UInt32 EventRewardID; // 0x38
		::System::UInt32 ID; // 0x3C
		::System::UInt32 Param; // 0x40
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESTAURANTOPTIONEFFECTCONFIGROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::RestaurantOptionEffectConfigRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RestaurantOptionEffectConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESTAURANTOPTIONEFFECTCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
