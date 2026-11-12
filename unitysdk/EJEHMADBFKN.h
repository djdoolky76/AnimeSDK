#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KJNJKIMNDMH.h"
#include "unitysdk/NHHMEPILLHL.h"
class PKOHBLEGMAO;
namespace RPG::Client { class RogueFormulaInfo; }

#define EJEHMADBFKN_CTOR_OFFSET UNITYSDK_OFFSET(0x16418DD0)
#define EJEHMADBFKN_JAGMPHPNAHM_OFFSET UNITYSDK_OFFSET(0x16418DE0)

inline static constexpr unsigned int EJEHMADBFKN_TypeDefinitionIndex = 69021;

	class EJEHMADBFKN : public ::KJNJKIMNDMH
	{
	public:
		::PKOHBLEGMAO* LEEMNOCGBOJ; // 0x28
		::System::Void _ctor(::NHHMEPILLHL a1, ::RPG::Client::RogueFormulaInfo* a2, ::PKOHBLEGMAO* a3)
		{
			return ((::System::Void(*)(::PVOID, ::NHHMEPILLHL, ::RPG::Client::RogueFormulaInfo*, ::PKOHBLEGMAO*))((::PBYTE)hIl2Cpp + EJEHMADBFKN_CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Void JAGMPHPNAHM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EJEHMADBFKN_JAGMPHPNAHM_OFFSET))(this);
		}

	};
