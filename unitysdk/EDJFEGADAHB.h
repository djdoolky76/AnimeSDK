#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KJNJKIMNDMH.h"
#include "unitysdk/NHHMEPILLHL.h"
class CJAFLDKHDAF;
namespace RPG::Client { class RogueFormulaInfo; }

#define EDJFEGADAHB_CTOR_OFFSET UNITYSDK_OFFSET(0x1331CE40)
#define EDJFEGADAHB_JAGMPHPNAHM_OFFSET UNITYSDK_OFFSET(0x1331CE50)

inline static constexpr unsigned int EDJFEGADAHB_TypeDefinitionIndex = 67081;

	class EDJFEGADAHB : public ::KJNJKIMNDMH
	{
	public:
		::CJAFLDKHDAF* LEEMNOCGBOJ; // 0x28
		::System::Void _ctor(::NHHMEPILLHL a1, ::RPG::Client::RogueFormulaInfo* a2, ::CJAFLDKHDAF* a3)
		{
			return ((::System::Void(*)(::PVOID, ::NHHMEPILLHL, ::RPG::Client::RogueFormulaInfo*, ::CJAFLDKHDAF*))((::PBYTE)hIl2Cpp + EDJFEGADAHB_CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Void JAGMPHPNAHM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EDJFEGADAHB_JAGMPHPNAHM_OFFSET))(this);
		}

	};
