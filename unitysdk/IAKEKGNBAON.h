#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DOLNICOMJJM.h"
#include "unitysdk/NHHMEPILLHL.h"
class LHKNCMFEPFK;
namespace RPG::Client { class IRogueMiracleInfo; }

#define IAKEKGNBAON_CTOR_OFFSET UNITYSDK_OFFSET(0x15E17040)
#define IAKEKGNBAON_JAGMPHPNAHM_OFFSET UNITYSDK_OFFSET(0x15E17050)

	class IAKEKGNBAON : public ::DOLNICOMJJM
	{
	public:
		::LHKNCMFEPFK* LEEMNOCGBOJ; // 0x30
		::System::Void _ctor(::NHHMEPILLHL a1, ::RPG::Client::IRogueMiracleInfo* a2, ::LHKNCMFEPFK* a3)
		{
			return ((::System::Void(*)(::PVOID, ::NHHMEPILLHL, ::RPG::Client::IRogueMiracleInfo*, ::LHKNCMFEPFK*))((::PBYTE)hIl2Cpp + IAKEKGNBAON_CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Void JAGMPHPNAHM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IAKEKGNBAON_JAGMPHPNAHM_OFFSET))(this);
		}

	};
