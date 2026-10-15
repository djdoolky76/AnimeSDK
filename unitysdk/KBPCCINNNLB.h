#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KJNJKIMNDMH.h"
#include "unitysdk/NHHMEPILLHL.h"
class FBGIINJFCCD;
namespace RPG::Client { class RogueFormulaInfo; }

#define KBPCCINNNLB_CTOR_OFFSET UNITYSDK_OFFSET(0xB325DF0)
#define KBPCCINNNLB_JAGMPHPNAHM_OFFSET UNITYSDK_OFFSET(0xB325E00)

	class KBPCCINNNLB : public ::KJNJKIMNDMH
	{
	public:
		::FBGIINJFCCD* LEEMNOCGBOJ; // 0x28
		::System::Void _ctor(::NHHMEPILLHL a1, ::RPG::Client::RogueFormulaInfo* a2, ::FBGIINJFCCD* a3)
		{
			return ((::System::Void(*)(::PVOID, ::NHHMEPILLHL, ::RPG::Client::RogueFormulaInfo*, ::FBGIINJFCCD*))((::PBYTE)hIl2Cpp + KBPCCINNNLB_CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Void JAGMPHPNAHM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KBPCCINNNLB_JAGMPHPNAHM_OFFSET))(this);
		}

	};
