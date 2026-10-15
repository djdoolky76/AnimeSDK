#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LIJALNGMHPK.h"
#include "unitysdk/NHHMEPILLHL.h"
class PPHLEBFJIGM;
namespace RPG::Client { class RogueTournPersonaStyleInfo; }

#define EEPLPENJOKL_CTOR_OFFSET UNITYSDK_OFFSET(0x13A421E0)
#define EEPLPENJOKL_JAGMPHPNAHM_OFFSET UNITYSDK_OFFSET(0x13A421F0)

	class EEPLPENJOKL : public ::LIJALNGMHPK
	{
	public:
		::PPHLEBFJIGM* LEEMNOCGBOJ; // 0x28
		::System::Void _ctor(::NHHMEPILLHL a1, ::RPG::Client::RogueTournPersonaStyleInfo* a2, ::PPHLEBFJIGM* a3)
		{
			return ((::System::Void(*)(::PVOID, ::NHHMEPILLHL, ::RPG::Client::RogueTournPersonaStyleInfo*, ::PPHLEBFJIGM*))((::PBYTE)hIl2Cpp + EEPLPENJOKL_CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Void JAGMPHPNAHM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EEPLPENJOKL_JAGMPHPNAHM_OFFSET))(this);
		}

	};
