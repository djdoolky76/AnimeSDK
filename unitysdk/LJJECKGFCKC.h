#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LIJALNGMHPK.h"
#include "unitysdk/NHHMEPILLHL.h"
class JGCMGAMHDHM;
namespace RPG::Client { class RogueTournPersonaStyleInfo; }

#define LJJECKGFCKC_CTOR_OFFSET UNITYSDK_OFFSET(0xB71A080)
#define LJJECKGFCKC_JAGMPHPNAHM_OFFSET UNITYSDK_OFFSET(0xB71A090)

inline static constexpr unsigned int LJJECKGFCKC_TypeDefinitionIndex = 67103;

	class LJJECKGFCKC : public ::LIJALNGMHPK
	{
	public:
		::JGCMGAMHDHM* LEEMNOCGBOJ; // 0x28
		::System::Void _ctor(::NHHMEPILLHL a1, ::RPG::Client::RogueTournPersonaStyleInfo* a2, ::JGCMGAMHDHM* a3)
		{
			return ((::System::Void(*)(::PVOID, ::NHHMEPILLHL, ::RPG::Client::RogueTournPersonaStyleInfo*, ::JGCMGAMHDHM*))((::PBYTE)hIl2Cpp + LJJECKGFCKC_CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Void JAGMPHPNAHM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LJJECKGFCKC_JAGMPHPNAHM_OFFSET))(this);
		}

	};
