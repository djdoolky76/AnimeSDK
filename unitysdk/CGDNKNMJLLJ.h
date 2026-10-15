#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DOLNICOMJJM.h"
#include "unitysdk/NHHMEPILLHL.h"
class JLHJICBCHMO;
namespace RPG::Client { class IRogueMiracleInfo; }

#define CGDNKNMJLLJ_CTOR_OFFSET UNITYSDK_OFFSET(0xCC80B50)
#define CGDNKNMJLLJ_JAGMPHPNAHM_OFFSET UNITYSDK_OFFSET(0xCC80B60)

inline static constexpr unsigned int CGDNKNMJLLJ_TypeDefinitionIndex = 67096;

	class CGDNKNMJLLJ : public ::DOLNICOMJJM
	{
	public:
		::JLHJICBCHMO* LEEMNOCGBOJ; // 0x30
		::System::Void _ctor(::NHHMEPILLHL a1, ::RPG::Client::IRogueMiracleInfo* a2, ::JLHJICBCHMO* a3)
		{
			return ((::System::Void(*)(::PVOID, ::NHHMEPILLHL, ::RPG::Client::IRogueMiracleInfo*, ::JLHJICBCHMO*))((::PBYTE)hIl2Cpp + CGDNKNMJLLJ_CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Void JAGMPHPNAHM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CGDNKNMJLLJ_JAGMPHPNAHM_OFFSET))(this);
		}

	};
