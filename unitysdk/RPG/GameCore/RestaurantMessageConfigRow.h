#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/MessageItemType.h"
#include "unitysdk/RPG/GameCore/RestaurantSelectEventSenderType.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RestaurantMessageConfigRow; }

#define RPG_GAMECORE_RESTAURANTMESSAGECONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1EBDB430)
#define RPG_GAMECORE_RESTAURANTMESSAGECONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1EBDB130)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RestaurantMessageConfigRow_TypeDefinitionIndex = 11435;

	class RestaurantMessageConfigRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* NextItemIDList; // 0x10
		::System::UInt32 OptionEffectID; // 0x18
		::System::UInt32 ItemImageID; // 0x1C
		::System::UInt32 ID; // 0x20
		::RPG::GameCore::RestaurantSelectEventSenderType Sender; // 0x24
		::System::UInt32 ContactsID; // 0x28
		::RPG::GameCore::MessageItemType ItemType; // 0x2C
		::RPG::Client::TextID MainText; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESTAURANTMESSAGECONFIGROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::RestaurantMessageConfigRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RestaurantMessageConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESTAURANTMESSAGECONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
