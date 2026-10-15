#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FJPMJPEKLJL.h"
#include "unitysdk/RPG/Client/Multiplayer/MPSessionState.h"

#define NJDNLANBEMI_CTOR_OFFSET UNITYSDK_OFFSET(0xFE60)
#define NJDNLANBEMI_GET_GAMEMODE_OFFSET UNITYSDK_OFFSET(0xE620)
#define NJDNLANBEMI_GET_NEWSTATE_OFFSET UNITYSDK_OFFSET(0xACE0)
#define NJDNLANBEMI_GET_OLDSTATE_OFFSET UNITYSDK_OFFSET(0xFE70)

	struct alignas(4) NJDNLANBEMI
	{
		::FJPMJPEKLJL _GameMode_k__BackingField; // 0x10
		::RPG::Client::Multiplayer::MPSessionState _OldState_k__BackingField; // 0x14
		::RPG::Client::Multiplayer::MPSessionState _NewState_k__BackingField; // 0x18
		::System::Void _ctor(::FJPMJPEKLJL a1, ::RPG::Client::Multiplayer::MPSessionState a2, ::RPG::Client::Multiplayer::MPSessionState a3)
		{
			return ((::System::Void(*)(::PVOID, ::FJPMJPEKLJL, ::RPG::Client::Multiplayer::MPSessionState, ::RPG::Client::Multiplayer::MPSessionState))((::PBYTE)hIl2Cpp + NJDNLANBEMI_CTOR_OFFSET))(this, a1, a2, a3);
		}

		::FJPMJPEKLJL get_GameMode()
		{
			return ((::FJPMJPEKLJL(*)(::PVOID))((::PBYTE)hIl2Cpp + NJDNLANBEMI_GET_GAMEMODE_OFFSET))(this);
		}

		::RPG::Client::Multiplayer::MPSessionState get_OldState()
		{
			return ((::RPG::Client::Multiplayer::MPSessionState(*)(::PVOID))((::PBYTE)hIl2Cpp + NJDNLANBEMI_GET_OLDSTATE_OFFSET))(this);
		}

		::RPG::Client::Multiplayer::MPSessionState get_NewState()
		{
			return ((::RPG::Client::Multiplayer::MPSessionState(*)(::PVOID))((::PBYTE)hIl2Cpp + NJDNLANBEMI_GET_NEWSTATE_OFFSET))(this);
		}

	};
