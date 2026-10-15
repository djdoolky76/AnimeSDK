#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DOLNICOMJJM.h"
#include "unitysdk/NHHMEPILLHL.h"
class IKHMHNOIGAB;
namespace RPG::Client { class IRogueMiracleInfo; }

#define ODDJMEBOCMA_CTOR_OFFSET UNITYSDK_OFFSET(0xBD91100)
#define ODDJMEBOCMA_JAGMPHPNAHM_OFFSET UNITYSDK_OFFSET(0xBD91110)

inline static constexpr unsigned int ODDJMEBOCMA_TypeDefinitionIndex = 67094;

	class ODDJMEBOCMA : public ::DOLNICOMJJM
	{
	public:
		::IKHMHNOIGAB* LEEMNOCGBOJ; // 0x30
		::System::Void _ctor(::NHHMEPILLHL a1, ::RPG::Client::IRogueMiracleInfo* a2, ::IKHMHNOIGAB* a3)
		{
			return ((::System::Void(*)(::PVOID, ::NHHMEPILLHL, ::RPG::Client::IRogueMiracleInfo*, ::IKHMHNOIGAB*))((::PBYTE)hIl2Cpp + ODDJMEBOCMA_CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Void JAGMPHPNAHM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ODDJMEBOCMA_JAGMPHPNAHM_OFFSET))(this);
		}

	};
