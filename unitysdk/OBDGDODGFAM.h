#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EBIMENNAEIE.h"
#include "unitysdk/NHHMEPILLHL.h"
namespace RPG::Client { class RogueTournPersonaRoomCardDeckInfo; }

#define OBDGDODGFAM_CTOR_OFFSET UNITYSDK_OFFSET(0xBD380D0)

	class OBDGDODGFAM : public ::EBIMENNAEIE
	{
	public:
		::RPG::Client::RogueTournPersonaRoomCardDeckInfo* OHACJABGKNC; // 0x20
		::System::Void _ctor(::NHHMEPILLHL a1, ::RPG::Client::RogueTournPersonaRoomCardDeckInfo* a2)
		{
			return ((::System::Void(*)(::PVOID, ::NHHMEPILLHL, ::RPG::Client::RogueTournPersonaRoomCardDeckInfo*))((::PBYTE)hIl2Cpp + OBDGDODGFAM_CTOR_OFFSET))(this, a1, a2);
		}

	};
