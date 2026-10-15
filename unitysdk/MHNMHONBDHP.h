#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NHHMEPILLHL.h"
#include "unitysdk/PLDEEFFDJFD.h"
class HCNEFGJCCMB;
namespace RPG::Client { class RogueKeywordInfo; }

#define MHNMHONBDHP_CTOR_OFFSET UNITYSDK_OFFSET(0xB947A80)
#define MHNMHONBDHP_JAGMPHPNAHM_OFFSET UNITYSDK_OFFSET(0xB947A90)

	class MHNMHONBDHP : public ::PLDEEFFDJFD
	{
	public:
		::HCNEFGJCCMB* LEEMNOCGBOJ; // 0x28
		::System::Void _ctor(::NHHMEPILLHL a1, ::RPG::Client::RogueKeywordInfo* a2, ::HCNEFGJCCMB* a3)
		{
			return ((::System::Void(*)(::PVOID, ::NHHMEPILLHL, ::RPG::Client::RogueKeywordInfo*, ::HCNEFGJCCMB*))((::PBYTE)hIl2Cpp + MHNMHONBDHP_CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Void JAGMPHPNAHM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MHNMHONBDHP_JAGMPHPNAHM_OFFSET))(this);
		}

	};
