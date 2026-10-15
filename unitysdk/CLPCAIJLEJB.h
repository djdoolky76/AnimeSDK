#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DBJKFNLCOJI.h"
#include "unitysdk/NHHMEPILLHL.h"
class NBFAGOOJIOB;
namespace RPG::Client { class RogueTournTitanBlessInfo; }

#define CLPCAIJLEJB_CTOR_OFFSET UNITYSDK_OFFSET(0xDA225C0)
#define CLPCAIJLEJB_JAGMPHPNAHM_OFFSET UNITYSDK_OFFSET(0xDA225D0)

	class CLPCAIJLEJB : public ::DBJKFNLCOJI
	{
	public:
		::NBFAGOOJIOB* LEEMNOCGBOJ; // 0x28
		::System::Void _ctor(::NHHMEPILLHL a1, ::RPG::Client::RogueTournTitanBlessInfo* a2, ::NBFAGOOJIOB* a3)
		{
			return ((::System::Void(*)(::PVOID, ::NHHMEPILLHL, ::RPG::Client::RogueTournTitanBlessInfo*, ::NBFAGOOJIOB*))((::PBYTE)hIl2Cpp + CLPCAIJLEJB_CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Void JAGMPHPNAHM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLPCAIJLEJB_JAGMPHPNAHM_OFFSET))(this);
		}

	};
