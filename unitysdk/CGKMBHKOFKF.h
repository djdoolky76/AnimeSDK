#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ENGKPGFGGLM.h"
#include "unitysdk/MoleMole/Config/AnimatorAirHitType.h"
#include "unitysdk/MoleMole/Config/AnimatorGroundHitType.h"
#include "unitysdk/MoleMole/Config/AnimatorHitEffect.h"

class KPNIFGIKELE;

#define CGKMBHKOFKF_AMKIOLCPKLE_OFFSET UNITYSDK_OFFSET(0x18DD0280)
#define CGKMBHKOFKF_BJKCMPGMGDD_OFFSET UNITYSDK_OFFSET(0x18DD0290)
#define CGKMBHKOFKF_CNHBDOMKKDE_OFFSET UNITYSDK_OFFSET(0x18DD0340)
#define CGKMBHKOFKF_DHHOKBFFLFG_OFFSET UNITYSDK_OFFSET(0x18DD0130)
#define CGKMBHKOFKF_FIGPAOKNJLN_OFFSET UNITYSDK_OFFSET(0x18DD0440)
#define CGKMBHKOFKF_GCDIGLPEOGH_OFFSET UNITYSDK_OFFSET(0x18DD01F0)
#define CGKMBHKOFKF_OHFHFOHMBJH_OFFSET UNITYSDK_OFFSET(0x18DD02A0)
#define CGKMBHKOFKF_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x18DD0050)
#define CGKMBHKOFKF__CCTOR_OFFSET UNITYSDK_OFFSET(0x18DD0170)
#define CGKMBHKOFKF__CTOR_OFFSET UNITYSDK_OFFSET(0x18DD01E0)

inline static constexpr unsigned int CGKMBHKOFKF_TypeDefinitionIndex = 93036;

class CGKMBHKOFKF : public ::ENGKPGFGGLM
{
public:
	// static const ::System::UInt16 GBKNNOFLGDJ = 0x17; // 0x0
	::KPNIFGIKELE* _AEIENAPAINA_k__BackingField; // 0x20
	::MoleMole::Config::AnimatorGroundHitType PFPPMEAHMNG; // 0x28
	::MoleMole::Config::AnimatorAirHitType BNFEPKALLGO; // 0x2C
	::System::Boolean DOABPFJGNDN; // 0x30
	::System::Boolean NBBBFJKECBH; // 0x31
	::System::Boolean PJIODPOFHHL; // 0x32
	::System::Byte _padding0[0x1];
	::MoleMole::Config::AnimatorHitEffect LGAMNOPLHIP; // 0x34
	::System::UInt32 DIGLEIMGPJO; // 0x38
	::System::UInt32 PLHBNHMIAEF; // 0x3C
	::System::UInt32 FJHKFEJAKMD; // 0x40

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CGKMBHKOFKF__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CGKMBHKOFKF__CTOR_OFFSET))(this);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CGKMBHKOFKF_PHOADBJGFBE_OFFSET))(this);
	}

	::KPNIFGIKELE* DHHOKBFFLFG()
	{
		return ((::KPNIFGIKELE*(*)(::PVOID))((::PBYTE)hIl2Cpp + CGKMBHKOFKF_DHHOKBFFLFG_OFFSET))(this);
	}

	::System::Void GCDIGLPEOGH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CGKMBHKOFKF_GCDIGLPEOGH_OFFSET))(this);
	}

	::System::Void AMKIOLCPKLE(::KPNIFGIKELE* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::KPNIFGIKELE*))((::PBYTE)hIl2Cpp + CGKMBHKOFKF_AMKIOLCPKLE_OFFSET))(this, EGEGIMGMJHN);
	}

	::KPNIFGIKELE* BJKCMPGMGDD()
	{
		return ((::KPNIFGIKELE*(*)(::PVOID))((::PBYTE)hIl2Cpp + CGKMBHKOFKF_BJKCMPGMGDD_OFFSET))(this);
	}

	::System::Void OHFHFOHMBJH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CGKMBHKOFKF_OHFHFOHMBJH_OFFSET))(this);
	}

	::System::Void CNHBDOMKKDE(::System::UInt32 NMPJMCCBNLO, ::System::UInt32 PLHBNHMIAEF, ::KPNIFGIKELE* CMAOBDOAKEI)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::KPNIFGIKELE*))((::PBYTE)hIl2Cpp + CGKMBHKOFKF_CNHBDOMKKDE_OFFSET))(this, NMPJMCCBNLO, PLHBNHMIAEF, CMAOBDOAKEI);
	}

	::System::Void FIGPAOKNJLN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CGKMBHKOFKF_FIGPAOKNJLN_OFFSET))(this);
	}
};
