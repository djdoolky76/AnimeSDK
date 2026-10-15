#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ENDEAPMHAOI.h"
class IFBFJDCECML;
class LAAKKNLOHLO;
class PBGNKMMDBGD;
namespace RPG::GameCore { class CakeRaceBuffConfig; }

#define LAAKKNLOHLO_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x1C71D9B0)
#define LAAKKNLOHLO_CTOR_OFFSET UNITYSDK_OFFSET(0x1C71DA50)

	class LAAKKNLOHLO : public ::ENDEAPMHAOI
	{
	public:
		::System::Void _ctor(::IFBFJDCECML* a1, ::RPG::GameCore::CakeRaceBuffConfig* a2, ::PBGNKMMDBGD* a3)
		{
			return ((::System::Void(*)(::PVOID, ::IFBFJDCECML*, ::RPG::GameCore::CakeRaceBuffConfig*, ::PBGNKMMDBGD*))((::PBYTE)hIl2Cpp + LAAKKNLOHLO_CTOR_OFFSET))(this, a1, a2, a3);
		}

		static ::LAAKKNLOHLO* BPLPBPMEODA(::IFBFJDCECML* a1, ::RPG::GameCore::CakeRaceBuffConfig* a2, ::PBGNKMMDBGD* a3)
		{
			return ((::LAAKKNLOHLO*(*)(::IFBFJDCECML*, ::RPG::GameCore::CakeRaceBuffConfig*, ::PBGNKMMDBGD*))((::PBYTE)hIl2Cpp + LAAKKNLOHLO_BPLPBPMEODA_OFFSET))(a1, a2, a3);
		}

	};
