#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KJNJKIMNDMH.h"
#include "unitysdk/NHHMEPILLHL.h"
class MKNALGLEBNA;
namespace RPG::Client { class RogueFormulaInfo; }

#define BEHCDNCDGNP_CTOR_OFFSET UNITYSDK_OFFSET(0x1A944390)
#define BEHCDNCDGNP_JAGMPHPNAHM_OFFSET UNITYSDK_OFFSET(0x1A9443A0)

inline static constexpr unsigned int BEHCDNCDGNP_TypeDefinitionIndex = 69024;

	class BEHCDNCDGNP : public ::KJNJKIMNDMH
	{
	public:
		::MKNALGLEBNA* LEEMNOCGBOJ; // 0x28
		::System::Void _ctor(::NHHMEPILLHL a1, ::RPG::Client::RogueFormulaInfo* a2, ::MKNALGLEBNA* a3)
		{
			return ((::System::Void(*)(::PVOID, ::NHHMEPILLHL, ::RPG::Client::RogueFormulaInfo*, ::MKNALGLEBNA*))((::PBYTE)hIl2Cpp + BEHCDNCDGNP_CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Void JAGMPHPNAHM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHCDNCDGNP_JAGMPHPNAHM_OFFSET))(this);
		}

	};
