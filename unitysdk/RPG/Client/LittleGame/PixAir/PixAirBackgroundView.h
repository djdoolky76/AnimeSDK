#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/PixAir/BasePixAirView.h"

#define RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIRBACKGROUNDVIEW_CTOR_OFFSET UNITYSDK_OFFSET(0xD47A1C0)

namespace RPG::Client::LittleGame::PixAir
{
	class PixAirBackgroundView : public ::RPG::Client::LittleGame::PixAir::BasePixAirView
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIRBACKGROUNDVIEW_CTOR_OFFSET))(this);
		}

	};
}
