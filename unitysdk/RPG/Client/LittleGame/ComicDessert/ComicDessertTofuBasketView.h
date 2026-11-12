#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/ComicDessert/AnchorType.h"
#include "unitysdk/RPG/Client/LittleGame/ComicDessert/ComicDessertSlotBasketView.h"

#define RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTTOFUBASKETVIEW_CTOR_OFFSET UNITYSDK_OFFSET(0xDE90EE0)
#define RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTTOFUBASKETVIEW_HIBJNGKEKOG_OFFSET UNITYSDK_OFFSET(0xDE904F0)

namespace RPG::Client::LittleGame::ComicDessert
{
	inline static constexpr unsigned int ComicDessertTofuBasketView_TypeDefinitionIndex = 80101;

	class ComicDessertTofuBasketView : public ::RPG::Client::LittleGame::ComicDessert::ComicDessertSlotBasketView
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTTOFUBASKETVIEW_CTOR_OFFSET))(this);
		}

		::RPG::Client::LittleGame::ComicDessert::AnchorType HIBJNGKEKOG()
		{
			return ((::RPG::Client::LittleGame::ComicDessert::AnchorType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTTOFUBASKETVIEW_HIBJNGKEKOG_OFFSET))(this);
		}

	};
}
