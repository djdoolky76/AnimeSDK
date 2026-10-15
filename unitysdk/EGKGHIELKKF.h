#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GPLOFONGBGI.h"
class IFBFJDCECML;
class PBGNKMMDBGD;
namespace RPG::GameCore { class CakeRaceActionGenCurSectionWubbaboo; }

#define EGKGHIELKKF_CTOR_OFFSET UNITYSDK_OFFSET(0x1C5FECD0)
#define EGKGHIELKKF_GAILDDCMCHP_OFFSET UNITYSDK_OFFSET(0x1C5FECE0)

inline static constexpr unsigned int EGKGHIELKKF_TypeDefinitionIndex = 37366;

	class EGKGHIELKKF : public ::GPLOFONGBGI
	{
	public:
		::RPG::GameCore::CakeRaceActionGenCurSectionWubbaboo* KDENFJNKFGN; // 0x10
		::System::Void _ctor(::RPG::GameCore::CakeRaceActionGenCurSectionWubbaboo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CakeRaceActionGenCurSectionWubbaboo*))((::PBYTE)hIl2Cpp + EGKGHIELKKF_CTOR_OFFSET))(this, a1);
		}

		::System::Void GAILDDCMCHP(::IFBFJDCECML* a1, ::PBGNKMMDBGD* a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::IFBFJDCECML*, ::PBGNKMMDBGD*, ::System::Int32))((::PBYTE)hIl2Cpp + EGKGHIELKKF_GAILDDCMCHP_OFFSET))(this, a1, a2, a3);
		}

	};
