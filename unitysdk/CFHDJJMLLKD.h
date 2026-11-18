#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ENGKPGFGGLM.h"
#include "unitysdk/MoleMole/Config/AnimatorAirHitType.h"
#include "unitysdk/MoleMole/Config/AnimatorGroundHitType.h"
#include "unitysdk/MoleMole/Config/AnimatorHitEffect.h"
#include "unitysdk/MBBFAJOHDNG.h"

class KPNIFGIKELE;

#define CFHDJJMLLKD_AMKIOLCPKLE_OFFSET UNITYSDK_OFFSET(0x13257D70)
#define CFHDJJMLLKD_BJKCMPGMGDD_OFFSET UNITYSDK_OFFSET(0x13257D60)
#define CFHDJJMLLKD_CNHBDOMKKDE_OFFSET UNITYSDK_OFFSET(0x13257BF0)
#define CFHDJJMLLKD_DHHOKBFFLFG_OFFSET UNITYSDK_OFFSET(0x13257AA0)
#define CFHDJJMLLKD_FIGPAOKNJLN_OFFSET UNITYSDK_OFFSET(0x13257CD0)
#define CFHDJJMLLKD_GCDIGLPEOGH_OFFSET UNITYSDK_OFFSET(0x13257B60)
#define CFHDJJMLLKD_OHFHFOHMBJH_OFFSET UNITYSDK_OFFSET(0x13257D80)
#define CFHDJJMLLKD_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x132579B0)
#define CFHDJJMLLKD__CCTOR_OFFSET UNITYSDK_OFFSET(0x13257AE0)
#define CFHDJJMLLKD__CTOR_OFFSET UNITYSDK_OFFSET(0x13257B50)

inline static constexpr unsigned int CFHDJJMLLKD_TypeDefinitionIndex = 84112;

class CFHDJJMLLKD : public ::ENGKPGFGGLM
{
public:
	// static const ::System::UInt16 GBKNNOFLGDJ = 0x44; // 0x0
	::KPNIFGIKELE* _AEIENAPAINA_k__BackingField; // 0x20
	::MoleMole::Config::AnimatorHitEffect LGAMNOPLHIP; // 0x28
	::System::UInt32 FJHKFEJAKMD; // 0x2C
	::MoleMole::Config::AnimatorAirHitType BNFEPKALLGO; // 0x30
	::MoleMole::Config::AnimatorGroundHitType PFPPMEAHMNG; // 0x34
	::System::UInt32 PLHBNHMIAEF; // 0x38

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CFHDJJMLLKD__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CFHDJJMLLKD__CTOR_OFFSET))(this);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CFHDJJMLLKD_PHOADBJGFBE_OFFSET))(this);
	}

	::KPNIFGIKELE* DHHOKBFFLFG()
	{
		return ((::KPNIFGIKELE*(*)(::PVOID))((::PBYTE)hIl2Cpp + CFHDJJMLLKD_DHHOKBFFLFG_OFFSET))(this);
	}

	::System::Void GCDIGLPEOGH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CFHDJJMLLKD_GCDIGLPEOGH_OFFSET))(this);
	}

	::System::Void CNHBDOMKKDE(::System::UInt32 DEMODKOEEJL, ::System::UInt32 HBCMGOLIOPB, ::MBBFAJOHDNG NNAKPHEJBHJ, ::KPNIFGIKELE* EEBHMONLMKK)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::MBBFAJOHDNG, ::KPNIFGIKELE*))((::PBYTE)hIl2Cpp + CFHDJJMLLKD_CNHBDOMKKDE_OFFSET))(this, DEMODKOEEJL, HBCMGOLIOPB, NNAKPHEJBHJ, EEBHMONLMKK);
	}

	::System::Void FIGPAOKNJLN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CFHDJJMLLKD_FIGPAOKNJLN_OFFSET))(this);
	}

	::KPNIFGIKELE* BJKCMPGMGDD()
	{
		return ((::KPNIFGIKELE*(*)(::PVOID))((::PBYTE)hIl2Cpp + CFHDJJMLLKD_BJKCMPGMGDD_OFFSET))(this);
	}

	::System::Void AMKIOLCPKLE(::KPNIFGIKELE* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::KPNIFGIKELE*))((::PBYTE)hIl2Cpp + CFHDJJMLLKD_AMKIOLCPKLE_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void OHFHFOHMBJH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CFHDJJMLLKD_OHFHFOHMBJH_OFFSET))(this);
	}
};
