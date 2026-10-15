#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LIJALNGMHPK.h"
#include "unitysdk/NHHMEPILLHL.h"
class HIMJNABCJMM;
namespace RPG::Client { class RogueTournPersonaStyleInfo; }

#define DJCGPDMACHO_CTOR_OFFSET UNITYSDK_OFFSET(0xF22C750)
#define DJCGPDMACHO_JAGMPHPNAHM_OFFSET UNITYSDK_OFFSET(0xF22C760)

inline static constexpr unsigned int DJCGPDMACHO_TypeDefinitionIndex = 67102;

	class DJCGPDMACHO : public ::LIJALNGMHPK
	{
	public:
		::HIMJNABCJMM* LEEMNOCGBOJ; // 0x28
		::System::Void _ctor(::NHHMEPILLHL a1, ::RPG::Client::RogueTournPersonaStyleInfo* a2, ::HIMJNABCJMM* a3)
		{
			return ((::System::Void(*)(::PVOID, ::NHHMEPILLHL, ::RPG::Client::RogueTournPersonaStyleInfo*, ::HIMJNABCJMM*))((::PBYTE)hIl2Cpp + DJCGPDMACHO_CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Void JAGMPHPNAHM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DJCGPDMACHO_JAGMPHPNAHM_OFFSET))(this);
		}

	};
