#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NHHMEPILLHL.h"
#include "unitysdk/OBDGDODGFAM.h"
class NKOBPBBONDJ;
namespace RPG::Client { class RogueTournPersonaRoomCardDeckInfo; }

#define LBNCHJLEFPL_CTOR_OFFSET UNITYSDK_OFFSET(0xB6071B0)
#define LBNCHJLEFPL_JAGMPHPNAHM_OFFSET UNITYSDK_OFFSET(0xB6071C0)

inline static constexpr unsigned int LBNCHJLEFPL_TypeDefinitionIndex = 67101;

	class LBNCHJLEFPL : public ::OBDGDODGFAM
	{
	public:
		::NKOBPBBONDJ* LEEMNOCGBOJ; // 0x28
		::System::Void _ctor(::NHHMEPILLHL a1, ::RPG::Client::RogueTournPersonaRoomCardDeckInfo* a2, ::NKOBPBBONDJ* a3)
		{
			return ((::System::Void(*)(::PVOID, ::NHHMEPILLHL, ::RPG::Client::RogueTournPersonaRoomCardDeckInfo*, ::NKOBPBBONDJ*))((::PBYTE)hIl2Cpp + LBNCHJLEFPL_CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Void JAGMPHPNAHM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LBNCHJLEFPL_JAGMPHPNAHM_OFFSET))(this);
		}

	};
