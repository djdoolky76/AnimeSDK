#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GPLOFONGBGI.h"
class IFBFJDCECML;
class PBGNKMMDBGD;
namespace RPG::GameCore { class CakeRaceActionGenCurSectionBubbleCell; }

#define KMAOCONLMFL_CTOR_OFFSET UNITYSDK_OFFSET(0x1C71BFC0)
#define KMAOCONLMFL_GAILDDCMCHP_OFFSET UNITYSDK_OFFSET(0x1C71BFD0)

	class KMAOCONLMFL : public ::GPLOFONGBGI
	{
	public:
		::RPG::GameCore::CakeRaceActionGenCurSectionBubbleCell* OHHLIAHNMBL; // 0x10
		::System::Void _ctor(::RPG::GameCore::CakeRaceActionGenCurSectionBubbleCell* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CakeRaceActionGenCurSectionBubbleCell*))((::PBYTE)hIl2Cpp + KMAOCONLMFL_CTOR_OFFSET))(this, a1);
		}

		::System::Void GAILDDCMCHP(::IFBFJDCECML* a1, ::PBGNKMMDBGD* a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::IFBFJDCECML*, ::PBGNKMMDBGD*, ::System::Int32))((::PBYTE)hIl2Cpp + KMAOCONLMFL_GAILDDCMCHP_OFFSET))(this, a1, a2, a3);
		}

	};
