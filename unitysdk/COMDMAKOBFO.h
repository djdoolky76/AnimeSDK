#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NHHMEPILLHL.h"
#include "unitysdk/OBDGDODGFAM.h"
class EDDEOKAIJAB;
namespace RPG::Client { class RogueTournPersonaRoomCardDeckInfo; }

#define COMDMAKOBFO_CTOR_OFFSET UNITYSDK_OFFSET(0xDCBF190)
#define COMDMAKOBFO_JAGMPHPNAHM_OFFSET UNITYSDK_OFFSET(0xDCBF1A0)

	class COMDMAKOBFO : public ::OBDGDODGFAM
	{
	public:
		::EDDEOKAIJAB* LEEMNOCGBOJ; // 0x28
		::System::Void _ctor(::NHHMEPILLHL a1, ::RPG::Client::RogueTournPersonaRoomCardDeckInfo* a2, ::EDDEOKAIJAB* a3)
		{
			return ((::System::Void(*)(::PVOID, ::NHHMEPILLHL, ::RPG::Client::RogueTournPersonaRoomCardDeckInfo*, ::EDDEOKAIJAB*))((::PBYTE)hIl2Cpp + COMDMAKOBFO_CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Void JAGMPHPNAHM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COMDMAKOBFO_JAGMPHPNAHM_OFFSET))(this);
		}

	};
