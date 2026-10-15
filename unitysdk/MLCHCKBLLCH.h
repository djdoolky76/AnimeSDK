#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GPLOFONGBGI.h"
class IFBFJDCECML;
class PBGNKMMDBGD;
namespace RPG::GameCore { class CakeRaceActionRoulette; }

#define MLCHCKBLLCH_CTOR_OFFSET UNITYSDK_OFFSET(0x1C721110)
#define MLCHCKBLLCH_GAILDDCMCHP_OFFSET UNITYSDK_OFFSET(0x1C721120)

inline static constexpr unsigned int MLCHCKBLLCH_TypeDefinitionIndex = 37393;

	class MLCHCKBLLCH : public ::GPLOFONGBGI
	{
	public:
		::RPG::GameCore::CakeRaceActionRoulette* PDFMAIPKLAE; // 0x10
		::System::Void _ctor(::RPG::GameCore::CakeRaceActionRoulette* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CakeRaceActionRoulette*))((::PBYTE)hIl2Cpp + MLCHCKBLLCH_CTOR_OFFSET))(this, a1);
		}

		::System::Void GAILDDCMCHP(::IFBFJDCECML* a1, ::PBGNKMMDBGD* a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::IFBFJDCECML*, ::PBGNKMMDBGD*, ::System::Int32))((::PBYTE)hIl2Cpp + MLCHCKBLLCH_GAILDDCMCHP_OFFSET))(this, a1, a2, a3);
		}

	};
