#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KIGLHBEPNOG.h"
#include "unitysdk/KIGLHBEPNOG_CanUseAbilityRet.h"
class BMFDNIFDHAN;
class IFBFJDCECML;
class LBGIDBFBHEF;
class PBGNKMMDBGD;
namespace RPG::GameCore { class CakeRaceAbilityConfig; }

#define BMFDNIFDHAN_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x1C5C0580)
#define BMFDNIFDHAN_CTOR_OFFSET UNITYSDK_OFFSET(0x1C5C0690)
#define BMFDNIFDHAN_EJCDCBDCDBC_OFFSET UNITYSDK_OFFSET(0x1C5C0710)
#define BMFDNIFDHAN_JDBBDLNMBCA_OFFSET UNITYSDK_OFFSET(0x1C5C08D0)

	class BMFDNIFDHAN : public ::KIGLHBEPNOG
	{
	public:
		::System::UInt32 JLELNKLFGOK; // 0x58
		::System::Void _ctor(::IFBFJDCECML* a1, ::RPG::GameCore::CakeRaceAbilityConfig* a2, ::PBGNKMMDBGD* a3, ::LBGIDBFBHEF* a4)
		{
			return ((::System::Void(*)(::PVOID, ::IFBFJDCECML*, ::RPG::GameCore::CakeRaceAbilityConfig*, ::PBGNKMMDBGD*, ::LBGIDBFBHEF*))((::PBYTE)hIl2Cpp + BMFDNIFDHAN_CTOR_OFFSET))(this, a1, a2, a3, a4);
		}

		static ::BMFDNIFDHAN* BPLPBPMEODA(::IFBFJDCECML* a1, ::RPG::GameCore::CakeRaceAbilityConfig* a2, ::PBGNKMMDBGD* a3, ::LBGIDBFBHEF* a4)
		{
			return ((::BMFDNIFDHAN*(*)(::IFBFJDCECML*, ::RPG::GameCore::CakeRaceAbilityConfig*, ::PBGNKMMDBGD*, ::LBGIDBFBHEF*))((::PBYTE)hIl2Cpp + BMFDNIFDHAN_BPLPBPMEODA_OFFSET))(a1, a2, a3, a4);
		}

		::KIGLHBEPNOG_CanUseAbilityRet EJCDCBDCDBC(::IFBFJDCECML* a1)
		{
			return ((::KIGLHBEPNOG_CanUseAbilityRet(*)(::PVOID, ::IFBFJDCECML*))((::PBYTE)hIl2Cpp + BMFDNIFDHAN_EJCDCBDCDBC_OFFSET))(this, a1);
		}

		::System::Void JDBBDLNMBCA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BMFDNIFDHAN_JDBBDLNMBCA_OFFSET))(this);
		}

	};
