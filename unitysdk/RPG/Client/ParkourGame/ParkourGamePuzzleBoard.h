#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Prop/PuzzleBoardBase.h"

#define RPG_CLIENT_PARKOURGAME_PARKOURGAMEPUZZLEBOARD_CTOR_OFFSET UNITYSDK_OFFSET(0xDA7CA50)

namespace RPG::Client::ParkourGame
{
	class ParkourGamePuzzleBoard : public ::RPG::Client::Prop::PuzzleBoardBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAME_PARKOURGAMEPUZZLEBOARD_CTOR_OFFSET))(this);
		}

	};
}
