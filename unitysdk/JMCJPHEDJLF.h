#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LIJALNGMHPK.h"
#include "unitysdk/NHHMEPILLHL.h"
class OECNJOAPCKO;
namespace RPG::Client { class RogueTournPersonaStyleInfo; }

#define JMCJPHEDJLF_CTOR_OFFSET UNITYSDK_OFFSET(0xB25E840)
#define JMCJPHEDJLF_JAGMPHPNAHM_OFFSET UNITYSDK_OFFSET(0xB25E850)

	class JMCJPHEDJLF : public ::LIJALNGMHPK
	{
	public:
		::OECNJOAPCKO* LEEMNOCGBOJ; // 0x28
		::System::Void _ctor(::NHHMEPILLHL a1, ::RPG::Client::RogueTournPersonaStyleInfo* a2, ::OECNJOAPCKO* a3)
		{
			return ((::System::Void(*)(::PVOID, ::NHHMEPILLHL, ::RPG::Client::RogueTournPersonaStyleInfo*, ::OECNJOAPCKO*))((::PBYTE)hIl2Cpp + JMCJPHEDJLF_CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Void JAGMPHPNAHM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JMCJPHEDJLF_JAGMPHPNAHM_OFFSET))(this);
		}

	};
