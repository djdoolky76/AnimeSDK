#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ENGKPGFGGLM.h"
#include "unitysdk/MoleMole/Config/DamageElementType.h"

class KPNIFGIKELE;
namespace System { class String; }

#define NHKAPDFHLIP_CNHBDOMKKDE_OFFSET UNITYSDK_OFFSET(0x115907D0)
#define NHKAPDFHLIP_DHHOKBFFLFG_OFFSET UNITYSDK_OFFSET(0x11590670)
#define NHKAPDFHLIP_FIGPAOKNJLN_OFFSET UNITYSDK_OFFSET(0x115908B0)
#define NHKAPDFHLIP_GCDIGLPEOGH_OFFSET UNITYSDK_OFFSET(0x11590730)
#define NHKAPDFHLIP_HHGNGAAHPGD_OFFSET UNITYSDK_OFFSET(0x115909E0)
#define NHKAPDFHLIP_JFGFJFIGKKC_OFFSET UNITYSDK_OFFSET(0x115907C0)
#define NHKAPDFHLIP_OHFHFOHMBJH_OFFSET UNITYSDK_OFFSET(0x11590940)
#define NHKAPDFHLIP_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x11590590)
#define NHKAPDFHLIP__CCTOR_OFFSET UNITYSDK_OFFSET(0x115906B0)
#define NHKAPDFHLIP__CTOR_OFFSET UNITYSDK_OFFSET(0x11590720)

inline static constexpr unsigned int NHKAPDFHLIP_TypeDefinitionIndex = 39069;

class NHKAPDFHLIP : public ::ENGKPGFGGLM
{
public:
	// static const ::System::UInt16 GBKNNOFLGDJ = 0x53; // 0x0
	::KPNIFGIKELE* _KABGHANLAKI_k__BackingField; // 0x20
	::System::String* BNPMPGJOCNM; // 0x28
	::System::UInt32 PLHBNHMIAEF; // 0x30
	::System::Int32 KEHNCKBIBFA; // 0x34
	::System::UInt32 FJHKFEJAKMD; // 0x38
	::MoleMole::Config::DamageElementType EIILOAOBACD; // 0x3C

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NHKAPDFHLIP__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NHKAPDFHLIP__CTOR_OFFSET))(this);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NHKAPDFHLIP_PHOADBJGFBE_OFFSET))(this);
	}

	::KPNIFGIKELE* DHHOKBFFLFG()
	{
		return ((::KPNIFGIKELE*(*)(::PVOID))((::PBYTE)hIl2Cpp + NHKAPDFHLIP_DHHOKBFFLFG_OFFSET))(this);
	}

	::System::Void GCDIGLPEOGH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NHKAPDFHLIP_GCDIGLPEOGH_OFFSET))(this);
	}

	::KPNIFGIKELE* JFGFJFIGKKC()
	{
		return ((::KPNIFGIKELE*(*)(::PVOID))((::PBYTE)hIl2Cpp + NHKAPDFHLIP_JFGFJFIGKKC_OFFSET))(this);
	}

	::System::Void CNHBDOMKKDE(::System::UInt32 DEMODKOEEJL, ::System::UInt32 HBCMGOLIOPB, ::MoleMole::Config::DamageElementType OBNIAHNMHPF, ::System::Int32 BOBBHFPEPHC, ::KPNIFGIKELE* CMAOBDOAKEI)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::MoleMole::Config::DamageElementType, ::System::Int32, ::KPNIFGIKELE*))((::PBYTE)hIl2Cpp + NHKAPDFHLIP_CNHBDOMKKDE_OFFSET))(this, DEMODKOEEJL, HBCMGOLIOPB, OBNIAHNMHPF, BOBBHFPEPHC, CMAOBDOAKEI);
	}

	::System::Void FIGPAOKNJLN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NHKAPDFHLIP_FIGPAOKNJLN_OFFSET))(this);
	}

	::System::Void OHFHFOHMBJH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NHKAPDFHLIP_OHFHFOHMBJH_OFFSET))(this);
	}

	::System::Void HHGNGAAHPGD(::KPNIFGIKELE* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::KPNIFGIKELE*))((::PBYTE)hIl2Cpp + NHKAPDFHLIP_HHGNGAAHPGD_OFFSET))(this, EGEGIMGMJHN);
	}
};
