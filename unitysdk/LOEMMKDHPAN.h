#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DOLNICOMJJM.h"
#include "unitysdk/NHHMEPILLHL.h"
class OKBLBLPOENO;
namespace RPG::Client { class IRogueMiracleInfo; }

#define LOEMMKDHPAN_CTOR_OFFSET UNITYSDK_OFFSET(0xB7FE6B0)
#define LOEMMKDHPAN_JAGMPHPNAHM_OFFSET UNITYSDK_OFFSET(0xB7FE6C0)

	class LOEMMKDHPAN : public ::DOLNICOMJJM
	{
	public:
		::OKBLBLPOENO* LEEMNOCGBOJ; // 0x30
		::System::Void _ctor(::NHHMEPILLHL a1, ::RPG::Client::IRogueMiracleInfo* a2, ::OKBLBLPOENO* a3)
		{
			return ((::System::Void(*)(::PVOID, ::NHHMEPILLHL, ::RPG::Client::IRogueMiracleInfo*, ::OKBLBLPOENO*))((::PBYTE)hIl2Cpp + LOEMMKDHPAN_CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Void JAGMPHPNAHM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOEMMKDHPAN_JAGMPHPNAHM_OFFSET))(this);
		}

	};
