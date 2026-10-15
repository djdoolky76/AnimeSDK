#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CakeRaceHitType.h"
#include "unitysdk/RPG/MVector3.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/CNLEEFGEKFB.h"
class GMIFBFGDGJK;
class IFBFJDCECML;
class PBGNKMMDBGD;

#define LPNMLNNPGDG_AKDKNLNJOKN_OFFSET UNITYSDK_OFFSET(0x1C717AC0)
#define LPNMLNNPGDG_AMACHHDJKEG_OFFSET UNITYSDK_OFFSET(0x1C7179E0)
#define LPNMLNNPGDG_BMNOBCNJFBJ_OFFSET UNITYSDK_OFFSET(0x1C717C80)
#define LPNMLNNPGDG_CBEJBEKMIAM_OFFSET UNITYSDK_OFFSET(0x1C7164A0)
#define LPNMLNNPGDG_CIJEFGOADFD_OFFSET UNITYSDK_OFFSET(0x1C717EB0)
#define LPNMLNNPGDG_CTOR_OFFSET UNITYSDK_OFFSET(0x1C715260)
#define LPNMLNNPGDG_EXECUTE_OFFSET UNITYSDK_OFFSET(0x1C715270)
#define LPNMLNNPGDG_FOHPICEIGCM_OFFSET UNITYSDK_OFFSET(0x1C715B10)
#define LPNMLNNPGDG_GOBLONMOHEJ_OFFSET UNITYSDK_OFFSET(0x1C716140)
#define LPNMLNNPGDG_KGIBBJILPNE_OFFSET UNITYSDK_OFFSET(0x1C7177A0)
#define LPNMLNNPGDG_NOCCGMOFBFD_OFFSET UNITYSDK_OFFSET(0x1C717240)

inline static constexpr unsigned int LPNMLNNPGDG_TypeDefinitionIndex = 37445;

	class LPNMLNNPGDG : public ::System::Object
	{
	public:
		::GMIFBFGDGJK* EEFMDEHLLFI; // 0x10
		::PBGNKMMDBGD* PDENFEFCAGN; // 0x18
		::RPG::MVector3 PDJBFBPEHFE; // 0x20
		::RPG::MVector3 NAMGGEJCDMP; // 0x2C
		::System::Void _ctor(::GMIFBFGDGJK* a1, ::PBGNKMMDBGD* a2)
		{
			return ((::System::Void(*)(::PVOID, ::GMIFBFGDGJK*, ::PBGNKMMDBGD*))((::PBYTE)hIl2Cpp + LPNMLNNPGDG_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Execute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LPNMLNNPGDG_EXECUTE_OFFSET))(this);
		}

		::System::Boolean GOBLONMOHEJ(::IFBFJDCECML* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::IFBFJDCECML*))((::PBYTE)hIl2Cpp + LPNMLNNPGDG_GOBLONMOHEJ_OFFSET))(this, a1);
		}

		::System::Void KGIBBJILPNE(::IFBFJDCECML* a1, ::CNLEEFGEKFB a2)
		{
			return ((::System::Void(*)(::PVOID, ::IFBFJDCECML*, ::CNLEEFGEKFB))((::PBYTE)hIl2Cpp + LPNMLNNPGDG_KGIBBJILPNE_OFFSET))(this, a1, a2);
		}

		::System::Void AMACHHDJKEG(::IFBFJDCECML* a1, ::RPG::GameCore::CakeRaceHitType a2)
		{
			return ((::System::Void(*)(::PVOID, ::IFBFJDCECML*, ::RPG::GameCore::CakeRaceHitType))((::PBYTE)hIl2Cpp + LPNMLNNPGDG_AMACHHDJKEG_OFFSET))(this, a1, a2);
		}

		::System::Boolean FOHPICEIGCM(::IFBFJDCECML* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::IFBFJDCECML*))((::PBYTE)hIl2Cpp + LPNMLNNPGDG_FOHPICEIGCM_OFFSET))(this, a1);
		}

		::System::Boolean NOCCGMOFBFD(::IFBFJDCECML* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::IFBFJDCECML*))((::PBYTE)hIl2Cpp + LPNMLNNPGDG_NOCCGMOFBFD_OFFSET))(this, a1);
		}

		::System::Boolean CBEJBEKMIAM(::IFBFJDCECML* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::IFBFJDCECML*))((::PBYTE)hIl2Cpp + LPNMLNNPGDG_CBEJBEKMIAM_OFFSET))(this, a1);
		}

		::System::Boolean AKDKNLNJOKN(::IFBFJDCECML* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::IFBFJDCECML*))((::PBYTE)hIl2Cpp + LPNMLNNPGDG_AKDKNLNJOKN_OFFSET))(this, a1);
		}

		::System::Void CIJEFGOADFD(::IFBFJDCECML* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IFBFJDCECML*))((::PBYTE)hIl2Cpp + LPNMLNNPGDG_CIJEFGOADFD_OFFSET))(this, a1);
		}

		::System::Void BMNOBCNJFBJ(::IFBFJDCECML* a1, ::IFBFJDCECML* a2)
		{
			return ((::System::Void(*)(::PVOID, ::IFBFJDCECML*, ::IFBFJDCECML*))((::PBYTE)hIl2Cpp + LPNMLNNPGDG_BMNOBCNJFBJ_OFFSET))(this, a1, a2);
		}

	};
