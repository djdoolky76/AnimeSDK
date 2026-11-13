#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BasePhase.h"
class KGLLENLBNFD;

#define RPG_CLIENT_GAMEPHASE_CTOR_OFFSET UNITYSDK_OFFSET(0x1A807BB0)
#define RPG_CLIENT_GAMEPHASE_GET_GAMECONTEXT_OFFSET UNITYSDK_OFFSET(0x1A807B70)

namespace RPG::Client
{
	inline static constexpr unsigned int GamePhase_TypeDefinitionIndex = 62507;

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
