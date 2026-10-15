#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/UI3DGame/MonoUI3DGameView.h"

#define RPG_CLIENT_UI3DGAME_MONOUI3DGAMEPLAYER_CTOR_OFFSET UNITYSDK_OFFSET(0xE35A7F0)

namespace RPG::Client::UI3DGame
{
	class MonoUI3DGamePlayer : public ::RPG::Client::UI3DGame::MonoUI3DGameView
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DGAME_MONOUI3DGAMEPLAYER_CTOR_OFFSET))(this);
		}

	};
}
