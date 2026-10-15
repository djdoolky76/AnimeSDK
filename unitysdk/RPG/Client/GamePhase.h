#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BasePhase.h"
class KGLLENLBNFD;

#define RPG_CLIENT_GAMEPHASE_CTOR_OFFSET UNITYSDK_OFFSET(0xD09C490)
#define RPG_CLIENT_GAMEPHASE_GET_GAMECONTEXT_OFFSET UNITYSDK_OFFSET(0xD09C450)

namespace RPG::Client
{
	inline static constexpr unsigned int GamePhase_TypeDefinitionIndex = 61122;

	class GamePhase : public ::RPG::Client::BasePhase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GAMEPHASE_CTOR_OFFSET))(this);
		}

		::KGLLENLBNFD* get_GameContext()
		{
			return ((::KGLLENLBNFD*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GAMEPHASE_GET_GAMECONTEXT_OFFSET))(this);
		}

	};
}
