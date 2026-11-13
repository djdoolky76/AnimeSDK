#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/ComicDessert/ComicDessertView.h"

#define RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTINGREDIENTVIEW_CTOR_OFFSET UNITYSDK_OFFSET(0x1E14E5A0)

namespace RPG::Client::LittleGame::ComicDessert
{
	inline static constexpr unsigned int ComicDessertIngredientView_TypeDefinitionIndex = 80088;

	class ComicDessertIngredientView : public ::RPG::Client::LittleGame::ComicDessert::ComicDessertView
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTINGREDIENTVIEW_CTOR_OFFSET))(this);
		}

	};
}
