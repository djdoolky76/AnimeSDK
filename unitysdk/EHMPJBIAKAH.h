#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KJNJKIMNDMH.h"
#include "unitysdk/NHHMEPILLHL.h"
class CFJNAPDIMKM;
namespace RPG::Client { class RogueFormulaInfo; }

#define EHMPJBIAKAH_CTOR_OFFSET UNITYSDK_OFFSET(0x154AC110)
#define EHMPJBIAKAH_JAGMPHPNAHM_OFFSET UNITYSDK_OFFSET(0x154AC120)

inline static constexpr unsigned int EHMPJBIAKAH_TypeDefinitionIndex = 67082;

	class EHMPJBIAKAH : public ::KJNJKIMNDMH
	{
	public:
		::CFJNAPDIMKM* LEEMNOCGBOJ; // 0x28
		::System::Void _ctor(::NHHMEPILLHL a1, ::RPG::Client::RogueFormulaInfo* a2, ::CFJNAPDIMKM* a3)
		{
			return ((::System::Void(*)(::PVOID, ::NHHMEPILLHL, ::RPG::Client::RogueFormulaInfo*, ::CFJNAPDIMKM*))((::PBYTE)hIl2Cpp + EHMPJBIAKAH_CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Void JAGMPHPNAHM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EHMPJBIAKAH_JAGMPHPNAHM_OFFSET))(this);
		}

	};
