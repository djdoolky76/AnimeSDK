#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JNDMECNAEDF.h"
#include "unitysdk/NHHMEPILLHL.h"
class GBKILNHHGLB;
namespace RPG::Client { class RogueTournHexInfo; }

#define GCGHMKAKANE_CTOR_OFFSET UNITYSDK_OFFSET(0x1596ADE0)
#define GCGHMKAKANE_JAGMPHPNAHM_OFFSET UNITYSDK_OFFSET(0x1596ADF0)

	class GCGHMKAKANE : public ::JNDMECNAEDF
	{
	public:
		::GBKILNHHGLB* LEEMNOCGBOJ; // 0x28
		::System::Void _ctor(::NHHMEPILLHL a1, ::RPG::Client::RogueTournHexInfo* a2, ::GBKILNHHGLB* a3)
		{
			return ((::System::Void(*)(::PVOID, ::NHHMEPILLHL, ::RPG::Client::RogueTournHexInfo*, ::GBKILNHHGLB*))((::PBYTE)hIl2Cpp + GCGHMKAKANE_CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Void JAGMPHPNAHM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GCGHMKAKANE_JAGMPHPNAHM_OFFSET))(this);
		}

	};
