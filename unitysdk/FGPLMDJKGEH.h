#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NHHMEPILLHL.h"
#include "unitysdk/OBDGDODGFAM.h"
class PKOOFPOCNKB;
namespace RPG::Client { class RogueTournPersonaRoomCardDeckInfo; }

#define FGPLMDJKGEH_CTOR_OFFSET UNITYSDK_OFFSET(0x1576FAC0)
#define FGPLMDJKGEH_JAGMPHPNAHM_OFFSET UNITYSDK_OFFSET(0x1576FAD0)

inline static constexpr unsigned int FGPLMDJKGEH_TypeDefinitionIndex = 67108;

	class FGPLMDJKGEH : public ::OBDGDODGFAM
	{
	public:
		::PKOOFPOCNKB* LEEMNOCGBOJ; // 0x28
		::System::Void _ctor(::NHHMEPILLHL a1, ::RPG::Client::RogueTournPersonaRoomCardDeckInfo* a2, ::PKOOFPOCNKB* a3)
		{
			return ((::System::Void(*)(::PVOID, ::NHHMEPILLHL, ::RPG::Client::RogueTournPersonaRoomCardDeckInfo*, ::PKOOFPOCNKB*))((::PBYTE)hIl2Cpp + FGPLMDJKGEH_CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Void JAGMPHPNAHM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FGPLMDJKGEH_JAGMPHPNAHM_OFFSET))(this);
		}

	};
