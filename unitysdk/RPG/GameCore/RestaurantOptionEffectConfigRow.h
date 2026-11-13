#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/RestaurantSelectionType.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RestaurantOptionEffectConfigRow; }

#define RPG_GAMECORE_RESTAURANTOPTIONEFFECTCONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x207291B0)
#define RPG_GAMECORE_RESTAURANTOPTIONEFFECTCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x20728EC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RestaurantOptionEffectConfigRow_TypeDefinitionIndex = 11439;

	class RestaurantOptionEffectConfigRow : public ::System::Object
	{
	public:
		::RPG::Client::TextID OptionText; // 0x10
		::System::UInt32 EventRewardID; // 0x20
		::RPG::GameCore::RestaurantSelectionType Type; // 0x24
		::System::UInt32 ContactsID; // 0x28
		::System::UInt32 Param; // 0x2C
		::System::UInt32 ID; // 0x30
		::System::Byte _padding0[0x4];
		::RPG::Client::TextID ResultText; // 0x38
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
