#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NHHMEPILLHL.h"
#include "unitysdk/OBDGDODGFAM.h"
class IPKOBBJPKML;
namespace RPG::Client { class RogueTournPersonaRoomCardDeckInfo; }

#define IAHNNGALBMF_CTOR_OFFSET UNITYSDK_OFFSET(0x15E0F1F0)
#define IAHNNGALBMF_JAGMPHPNAHM_OFFSET UNITYSDK_OFFSET(0x15E0F200)

inline static constexpr unsigned int IAHNNGALBMF_TypeDefinitionIndex = 67104;

	class IAHNNGALBMF : public ::OBDGDODGFAM
	{
	public:
		::IPKOBBJPKML* LEEMNOCGBOJ; // 0x28
		::System::Void _ctor(::NHHMEPILLHL a1, ::RPG::Client::RogueTournPersonaRoomCardDeckInfo* a2, ::IPKOBBJPKML* a3)
		{
			return ((::System::Void(*)(::PVOID, ::NHHMEPILLHL, ::RPG::Client::RogueTournPersonaRoomCardDeckInfo*, ::IPKOBBJPKML*))((::PBYTE)hIl2Cpp + IAHNNGALBMF_CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Void JAGMPHPNAHM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IAHNNGALBMF_JAGMPHPNAHM_OFFSET))(this);
		}

	};
