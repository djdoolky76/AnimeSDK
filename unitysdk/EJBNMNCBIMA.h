#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ENGKPGFGGLM.h"
#include "unitysdk/MoleMole/Config/AnimatorAirHitType.h"
#include "unitysdk/MoleMole/Config/AnimatorGroundHitType.h"
#include "unitysdk/MoleMole/Config/AnimatorHitEffect.h"

class KPNIFGIKELE;

#define EJBNMNCBIMA_AMKIOLCPKLE_OFFSET UNITYSDK_OFFSET(0x142668E0)
#define EJBNMNCBIMA_BJKCMPGMGDD_OFFSET UNITYSDK_OFFSET(0x14266830)
#define EJBNMNCBIMA_CNHBDOMKKDE_OFFSET UNITYSDK_OFFSET(0x142668F0)
#define EJBNMNCBIMA_DHHOKBFFLFG_OFFSET UNITYSDK_OFFSET(0x14266650)
#define EJBNMNCBIMA_FIGPAOKNJLN_OFFSET UNITYSDK_OFFSET(0x142667A0)
#define EJBNMNCBIMA_GCDIGLPEOGH_OFFSET UNITYSDK_OFFSET(0x14266710)
#define EJBNMNCBIMA_OHFHFOHMBJH_OFFSET UNITYSDK_OFFSET(0x14266840)
#define EJBNMNCBIMA_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x14900C80)
#define EJBNMNCBIMA__CCTOR_OFFSET UNITYSDK_OFFSET(0x14266690)
#define EJBNMNCBIMA__CTOR_OFFSET UNITYSDK_OFFSET(0x14266700)

inline static constexpr unsigned int EJBNMNCBIMA_TypeDefinitionIndex = 40965;

class EJBNMNCBIMA : public ::ENGKPGFGGLM
{
public:
	// static const ::System::UInt16 GBKNNOFLGDJ = 0x25; // 0x0
	::KPNIFGIKELE* _AEIENAPAINA_k__BackingField; // 0x20
	::MoleMole::Config::AnimatorAirHitType BNFEPKALLGO; // 0x28
	::MoleMole::Config::AnimatorHitEffect LGAMNOPLHIP; // 0x2C
	::System::Boolean PJIODPOFHHL; // 0x30
	::System::Boolean NBBBFJKECBH; // 0x31
	::System::Byte _padding0[0x2];
	::System::UInt32 FJHKFEJAKMD; // 0x34
	::System::UInt32 PLHBNHMIAEF; // 0x38
	::MoleMole::Config::AnimatorGroundHitType PFPPMEAHMNG; // 0x3C

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EJBNMNCBIMA__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EJBNMNCBIMA__CTOR_OFFSET))(this);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EJBNMNCBIMA_PHOADBJGFBE_OFFSET))(this);
	}

	::KPNIFGIKELE* DHHOKBFFLFG()
	{
		return ((::KPNIFGIKELE*(*)(::PVOID))((::PBYTE)hIl2Cpp + EJBNMNCBIMA_DHHOKBFFLFG_OFFSET))(this);
	}

	::System::Void GCDIGLPEOGH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EJBNMNCBIMA_GCDIGLPEOGH_OFFSET))(this);
	}

	::System::Void FIGPAOKNJLN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EJBNMNCBIMA_FIGPAOKNJLN_OFFSET))(this);
	}

	::KPNIFGIKELE* BJKCMPGMGDD()
	{
		return ((::KPNIFGIKELE*(*)(::PVOID))((::PBYTE)hIl2Cpp + EJBNMNCBIMA_BJKCMPGMGDD_OFFSET))(this);
	}

	::System::Void OHFHFOHMBJH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EJBNMNCBIMA_OHFHFOHMBJH_OFFSET))(this);
	}

	::System::Void AMKIOLCPKLE(::KPNIFGIKELE* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::KPNIFGIKELE*))((::PBYTE)hIl2Cpp + EJBNMNCBIMA_AMKIOLCPKLE_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void CNHBDOMKKDE(::System::UInt32 FJHKFEJAKMD, ::System::UInt32 PLHBNHMIAEF, ::KPNIFGIKELE* CMAOBDOAKEI)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::KPNIFGIKELE*))((::PBYTE)hIl2Cpp + EJBNMNCBIMA_CNHBDOMKKDE_OFFSET))(this, FJHKFEJAKMD, PLHBNHMIAEF, CMAOBDOAKEI);
	}
};
