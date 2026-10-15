#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class PlanetFesTradingCardFriendsItem; }

#define LKHNGFLCKBD_COMPARE_OFFSET UNITYSDK_OFFSET(0xB7472D0)
#define LKHNGFLCKBD_CTOR_OFFSET UNITYSDK_OFFSET(0xB7476A0)

inline static constexpr unsigned int LKHNGFLCKBD_TypeDefinitionIndex = 66593;

	class LKHNGFLCKBD : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LKHNGFLCKBD_CTOR_OFFSET))(this);
		}

		::System::Int32 Compare(::RPG::Client::PlanetFesTradingCardFriendsItem* a1, ::RPG::Client::PlanetFesTradingCardFriendsItem* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::PlanetFesTradingCardFriendsItem*, ::RPG::Client::PlanetFesTradingCardFriendsItem*))((::PBYTE)hIl2Cpp + LKHNGFLCKBD_COMPARE_OFFSET))(this, a1, a2);
		}

	};
