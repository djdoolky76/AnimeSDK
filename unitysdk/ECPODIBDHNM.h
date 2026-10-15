#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LIJALNGMHPK.h"
#include "unitysdk/NHHMEPILLHL.h"
class OMACAKFNAOA;
namespace RPG::Client { class RogueTournPersonaStyleInfo; }

#define ECPODIBDHNM_CTOR_OFFSET UNITYSDK_OFFSET(0x1330E6B0)
#define ECPODIBDHNM_JAGMPHPNAHM_OFFSET UNITYSDK_OFFSET(0x1330E6C0)

	class ECPODIBDHNM : public ::LIJALNGMHPK
	{
	public:
		::OMACAKFNAOA* LEEMNOCGBOJ; // 0x28
		::System::Void _ctor(::NHHMEPILLHL a1, ::RPG::Client::RogueTournPersonaStyleInfo* a2, ::OMACAKFNAOA* a3)
		{
			return ((::System::Void(*)(::PVOID, ::NHHMEPILLHL, ::RPG::Client::RogueTournPersonaStyleInfo*, ::OMACAKFNAOA*))((::PBYTE)hIl2Cpp + ECPODIBDHNM_CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Void JAGMPHPNAHM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ECPODIBDHNM_JAGMPHPNAHM_OFFSET))(this);
		}

	};
