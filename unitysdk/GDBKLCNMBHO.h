#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class PlanetFesTradingCardFriendsItem; }

#define GDBKLCNMBHO_COMPARE_OFFSET UNITYSDK_OFFSET(0x15993E60)
#define GDBKLCNMBHO_CTOR_OFFSET UNITYSDK_OFFSET(0x15994230)

	class GDBKLCNMBHO : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GDBKLCNMBHO_CTOR_OFFSET))(this);
		}

		::System::Int32 Compare(::RPG::Client::PlanetFesTradingCardFriendsItem* a1, ::RPG::Client::PlanetFesTradingCardFriendsItem* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::PlanetFesTradingCardFriendsItem*, ::RPG::Client::PlanetFesTradingCardFriendsItem*))((::PBYTE)hIl2Cpp + GDBKLCNMBHO_COMPARE_OFFSET))(this, a1, a2);
		}

	};
