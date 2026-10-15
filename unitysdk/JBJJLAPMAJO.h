#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GPLOFONGBGI.h"
class IFBFJDCECML;
class PBGNKMMDBGD;
namespace RPG::GameCore { class CakeRaceActionOverrideBaseWaitTime; }

#define JBJJLAPMAJO_CTOR_OFFSET UNITYSDK_OFFSET(0x1C6D6FF0)
#define JBJJLAPMAJO_GAILDDCMCHP_OFFSET UNITYSDK_OFFSET(0x1C6F2FC0)

	class JBJJLAPMAJO : public ::GPLOFONGBGI
	{
	public:
		::RPG::GameCore::CakeRaceActionOverrideBaseWaitTime* DMGMNNJMAHF; // 0x10
		::System::Void _ctor(::RPG::GameCore::CakeRaceActionOverrideBaseWaitTime* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CakeRaceActionOverrideBaseWaitTime*))((::PBYTE)hIl2Cpp + JBJJLAPMAJO_CTOR_OFFSET))(this, a1);
		}

		::System::Void GAILDDCMCHP(::IFBFJDCECML* a1, ::PBGNKMMDBGD* a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::IFBFJDCECML*, ::PBGNKMMDBGD*, ::System::Int32))((::PBYTE)hIl2Cpp + JBJJLAPMAJO_GAILDDCMCHP_OFFSET))(this, a1, a2, a3);
		}

	};
