#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NHHMEPILLHL.h"
#include "unitysdk/PLDEEFFDJFD.h"
class LFLMJKLKBIL;
namespace RPG::Client { class RogueKeywordInfo; }

#define PGCPLBKFMCN_CTOR_OFFSET UNITYSDK_OFFSET(0xC21CAC0)
#define PGCPLBKFMCN_JAGMPHPNAHM_OFFSET UNITYSDK_OFFSET(0xC21CAD0)

inline static constexpr unsigned int PGCPLBKFMCN_TypeDefinitionIndex = 67090;

	class PGCPLBKFMCN : public ::PLDEEFFDJFD
	{
	public:
		::LFLMJKLKBIL* LEEMNOCGBOJ; // 0x28
		::System::Void _ctor(::NHHMEPILLHL a1, ::RPG::Client::RogueKeywordInfo* a2, ::LFLMJKLKBIL* a3)
		{
			return ((::System::Void(*)(::PVOID, ::NHHMEPILLHL, ::RPG::Client::RogueKeywordInfo*, ::LFLMJKLKBIL*))((::PBYTE)hIl2Cpp + PGCPLBKFMCN_CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Void JAGMPHPNAHM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PGCPLBKFMCN_JAGMPHPNAHM_OFFSET))(this);
		}

	};
