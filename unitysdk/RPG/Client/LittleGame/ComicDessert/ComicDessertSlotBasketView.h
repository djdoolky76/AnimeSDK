#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/ComicDessert/ComicDessertDeviceView.h"

#define RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTSLOTBASKETVIEW_CTOR_OFFSET UNITYSDK_OFFSET(0x1C371670)
#define RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTSLOTBASKETVIEW_SETSLOTVISIBLE_OFFSET UNITYSDK_OFFSET(0x1C371430)

namespace RPG::Client::LittleGame::ComicDessert
{
	inline static constexpr unsigned int ComicDessertSlotBasketView_TypeDefinitionIndex = 80099;

	class ComicDessertSlotBasketView : public ::RPG::Client::LittleGame::ComicDessert::ComicDessertDeviceView
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTSLOTBASKETVIEW_CTOR_OFFSET))(this);
		}

		::System::Void SetSlotVisible(::System::UInt32 a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTSLOTBASKETVIEW_SETSLOTVISIBLE_OFFSET))(this, a1, a2);
		}

	};
}
