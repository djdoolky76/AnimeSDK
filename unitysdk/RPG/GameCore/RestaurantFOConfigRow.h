#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RestaurantFOConfigRow; }
namespace System { class String; }

#define RPG_GAMECORE_RESTAURANTFOCONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D9638F0)
#define RPG_GAMECORE_RESTAURANTFOCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D963780)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RestaurantFOConfigRow_TypeDefinitionIndex = 11360;

	class RestaurantFOConfigRow : public ::System::Object
	{
	public:
		::System::String* IMGPath; // 0x10
		::System::UInt32 FOID; // 0x18
		::System::UInt32 AvatarID; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESTAURANTFOCONFIGROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::RestaurantFOConfigRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RestaurantFOConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESTAURANTFOCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
