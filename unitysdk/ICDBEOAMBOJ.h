#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ENGKPGFGGLM.h"
#include "unitysdk/MoleMole/Config/DamageElementType.h"

class KPNIFGIKELE;
namespace System { class String; }

#define ICDBEOAMBOJ_CNHBDOMKKDE_OFFSET UNITYSDK_OFFSET(0x165642C0)
#define ICDBEOAMBOJ_DHHOKBFFLFG_OFFSET UNITYSDK_OFFSET(0x165640B0)
#define ICDBEOAMBOJ_FIGPAOKNJLN_OFFSET UNITYSDK_OFFSET(0x165643A0)
#define ICDBEOAMBOJ_GCDIGLPEOGH_OFFSET UNITYSDK_OFFSET(0x16564170)
#define ICDBEOAMBOJ_HHGNGAAHPGD_OFFSET UNITYSDK_OFFSET(0x165642A0)
#define ICDBEOAMBOJ_JFGFJFIGKKC_OFFSET UNITYSDK_OFFSET(0x165642B0)
#define ICDBEOAMBOJ_OHFHFOHMBJH_OFFSET UNITYSDK_OFFSET(0x16564200)
#define ICDBEOAMBOJ_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x16563FD0)
#define ICDBEOAMBOJ__CCTOR_OFFSET UNITYSDK_OFFSET(0x165640F0)
#define ICDBEOAMBOJ__CTOR_OFFSET UNITYSDK_OFFSET(0x16564160)

inline static constexpr unsigned int ICDBEOAMBOJ_TypeDefinitionIndex = 89647;

class ICDBEOAMBOJ : public ::ENGKPGFGGLM
{
public:
	// static const ::System::UInt16 GBKNNOFLGDJ = 0x52; // 0x0
	::KPNIFGIKELE* _KABGHANLAKI_k__BackingField; // 0x20
	::System::String* BNPMPGJOCNM; // 0x28
	::System::UInt32 PLHBNHMIAEF; // 0x30
	::System::Int32 KEHNCKBIBFA; // 0x34
	::MoleMole::Config::DamageElementType EIILOAOBACD; // 0x38
	::System::UInt32 FJHKFEJAKMD; // 0x3C

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ICDBEOAMBOJ__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ICDBEOAMBOJ__CTOR_OFFSET))(this);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ICDBEOAMBOJ_PHOADBJGFBE_OFFSET))(this);
	}

	::KPNIFGIKELE* DHHOKBFFLFG()
	{
		return ((::KPNIFGIKELE*(*)(::PVOID))((::PBYTE)hIl2Cpp + ICDBEOAMBOJ_DHHOKBFFLFG_OFFSET))(this);
	}

	::System::Void GCDIGLPEOGH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ICDBEOAMBOJ_GCDIGLPEOGH_OFFSET))(this);
	}

	::System::Void OHFHFOHMBJH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ICDBEOAMBOJ_OHFHFOHMBJH_OFFSET))(this);
	}

	::System::Void HHGNGAAHPGD(::KPNIFGIKELE* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::KPNIFGIKELE*))((::PBYTE)hIl2Cpp + ICDBEOAMBOJ_HHGNGAAHPGD_OFFSET))(this, EGEGIMGMJHN);
	}

	::KPNIFGIKELE* JFGFJFIGKKC()
	{
		return ((::KPNIFGIKELE*(*)(::PVOID))((::PBYTE)hIl2Cpp + ICDBEOAMBOJ_JFGFJFIGKKC_OFFSET))(this);
	}

	::System::Void CNHBDOMKKDE(::System::UInt32 DEMODKOEEJL, ::System::UInt32 HBCMGOLIOPB, ::MoleMole::Config::DamageElementType OBNIAHNMHPF, ::System::Int32 BOBBHFPEPHC, ::KPNIFGIKELE* CMAOBDOAKEI)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::MoleMole::Config::DamageElementType, ::System::Int32, ::KPNIFGIKELE*))((::PBYTE)hIl2Cpp + ICDBEOAMBOJ_CNHBDOMKKDE_OFFSET))(this, DEMODKOEEJL, HBCMGOLIOPB, OBNIAHNMHPF, BOBBHFPEPHC, CMAOBDOAKEI);
	}

	::System::Void FIGPAOKNJLN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ICDBEOAMBOJ_FIGPAOKNJLN_OFFSET))(this);
	}
};
