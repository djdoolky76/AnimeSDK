#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DBJKFNLCOJI.h"
#include "unitysdk/NHHMEPILLHL.h"
class NBFAGOOJIOB;
namespace RPG::Client { class RogueTournTitanBlessInfo; }

#define HHEHHKPKPKP_CTOR_OFFSET UNITYSDK_OFFSET(0x15CC9AD0)
#define HHEHHKPKPKP_JAGMPHPNAHM_OFFSET UNITYSDK_OFFSET(0x15CC9AE0)

	class HHEHHKPKPKP : public ::DBJKFNLCOJI
	{
	public:
		::NBFAGOOJIOB* LEEMNOCGBOJ; // 0x28
		::System::Void _ctor(::NHHMEPILLHL a1, ::RPG::Client::RogueTournTitanBlessInfo* a2, ::NBFAGOOJIOB* a3)
		{
			return ((::System::Void(*)(::PVOID, ::NHHMEPILLHL, ::RPG::Client::RogueTournTitanBlessInfo*, ::NBFAGOOJIOB*))((::PBYTE)hIl2Cpp + HHEHHKPKPKP_CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Void JAGMPHPNAHM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HHEHHKPKPKP_JAGMPHPNAHM_OFFSET))(this);
		}

	};
