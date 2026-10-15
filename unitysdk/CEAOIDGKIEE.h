#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NHHMEPILLHL.h"
#include "unitysdk/OBDGDODGFAM.h"
class GNLBCCHFILK;
namespace RPG::Client { class RogueTournPersonaRoomCardDeckInfo; }

#define CEAOIDGKIEE_CTOR_OFFSET UNITYSDK_OFFSET(0xC77B060)
#define CEAOIDGKIEE_JAGMPHPNAHM_OFFSET UNITYSDK_OFFSET(0xC77B070)

	class CEAOIDGKIEE : public ::OBDGDODGFAM
	{
	public:
		::GNLBCCHFILK* LEEMNOCGBOJ; // 0x28
		::System::Void _ctor(::NHHMEPILLHL a1, ::RPG::Client::RogueTournPersonaRoomCardDeckInfo* a2, ::GNLBCCHFILK* a3)
		{
			return ((::System::Void(*)(::PVOID, ::NHHMEPILLHL, ::RPG::Client::RogueTournPersonaRoomCardDeckInfo*, ::GNLBCCHFILK*))((::PBYTE)hIl2Cpp + CEAOIDGKIEE_CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Void JAGMPHPNAHM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CEAOIDGKIEE_JAGMPHPNAHM_OFFSET))(this);
		}

	};
