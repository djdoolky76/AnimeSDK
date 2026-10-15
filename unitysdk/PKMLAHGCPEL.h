#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DOLNICOMJJM.h"
#include "unitysdk/NHHMEPILLHL.h"
class CKEOMFNPKPO;
namespace RPG::Client { class IRogueMiracleInfo; }

#define PKMLAHGCPEL_CTOR_OFFSET UNITYSDK_OFFSET(0xC2E7310)
#define PKMLAHGCPEL_JAGMPHPNAHM_OFFSET UNITYSDK_OFFSET(0xC2E7320)

inline static constexpr unsigned int PKMLAHGCPEL_TypeDefinitionIndex = 67093;

	class PKMLAHGCPEL : public ::DOLNICOMJJM
	{
	public:
		::CKEOMFNPKPO* LEEMNOCGBOJ; // 0x30
		::System::Void _ctor(::NHHMEPILLHL a1, ::RPG::Client::IRogueMiracleInfo* a2, ::CKEOMFNPKPO* a3)
		{
			return ((::System::Void(*)(::PVOID, ::NHHMEPILLHL, ::RPG::Client::IRogueMiracleInfo*, ::CKEOMFNPKPO*))((::PBYTE)hIl2Cpp + PKMLAHGCPEL_CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Void JAGMPHPNAHM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PKMLAHGCPEL_JAGMPHPNAHM_OFFSET))(this);
		}

	};
