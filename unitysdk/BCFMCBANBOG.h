#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DOLNICOMJJM.h"
#include "unitysdk/NHHMEPILLHL.h"
class IOMEMIEAPJO;
namespace RPG::Client { class IRogueMiracleInfo; }

#define BCFMCBANBOG_CTOR_OFFSET UNITYSDK_OFFSET(0x1709EC60)
#define BCFMCBANBOG_JAGMPHPNAHM_OFFSET UNITYSDK_OFFSET(0x1709EC70)

inline static constexpr unsigned int BCFMCBANBOG_TypeDefinitionIndex = 69036;

	class BCFMCBANBOG : public ::DOLNICOMJJM
	{
	public:
		::IOMEMIEAPJO* LEEMNOCGBOJ; // 0x30
		::System::Void _ctor(::NHHMEPILLHL a1, ::RPG::Client::IRogueMiracleInfo* a2, ::IOMEMIEAPJO* a3)
		{
			return ((::System::Void(*)(::PVOID, ::NHHMEPILLHL, ::RPG::Client::IRogueMiracleInfo*, ::IOMEMIEAPJO*))((::PBYTE)hIl2Cpp + BCFMCBANBOG_CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Void JAGMPHPNAHM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BCFMCBANBOG_JAGMPHPNAHM_OFFSET))(this);
		}

	};
