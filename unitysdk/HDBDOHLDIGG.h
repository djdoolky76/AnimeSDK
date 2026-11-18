#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ENGKPGFGGLM.h"
#include "unitysdk/MoleMole/Config/AnimatorAirHitType.h"
#include "unitysdk/MoleMole/Config/AnimatorGroundHitType.h"
#include "unitysdk/MoleMole/Config/AnimatorHitEffect.h"
#include "unitysdk/MBBFAJOHDNG.h"

class KPNIFGIKELE;

#define HDBDOHLDIGG_AMKIOLCPKLE_OFFSET UNITYSDK_OFFSET(0x149FDFD0)
#define HDBDOHLDIGG_BJKCMPGMGDD_OFFSET UNITYSDK_OFFSET(0x149FDEE0)
#define HDBDOHLDIGG_CNHBDOMKKDE_OFFSET UNITYSDK_OFFSET(0x149FDEF0)
#define HDBDOHLDIGG_DHHOKBFFLFG_OFFSET UNITYSDK_OFFSET(0x149FDC60)
#define HDBDOHLDIGG_FIGPAOKNJLN_OFFSET UNITYSDK_OFFSET(0x149FDDB0)
#define HDBDOHLDIGG_GCDIGLPEOGH_OFFSET UNITYSDK_OFFSET(0x149FDD20)
#define HDBDOHLDIGG_OHFHFOHMBJH_OFFSET UNITYSDK_OFFSET(0x149FDE40)
#define HDBDOHLDIGG_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x149FDB70)
#define HDBDOHLDIGG__CCTOR_OFFSET UNITYSDK_OFFSET(0x149FDCA0)
#define HDBDOHLDIGG__CTOR_OFFSET UNITYSDK_OFFSET(0x149FDD10)

inline static constexpr unsigned int HDBDOHLDIGG_TypeDefinitionIndex = 38933;

class HDBDOHLDIGG : public ::ENGKPGFGGLM
{
public:
	// static const ::System::UInt16 GBKNNOFLGDJ = 0x27; // 0x0
	::KPNIFGIKELE* _AEIENAPAINA_k__BackingField; // 0x20
	::MoleMole::Config::AnimatorGroundHitType PFPPMEAHMNG; // 0x28
	::System::UInt32 FJHKFEJAKMD; // 0x2C
	::MoleMole::Config::AnimatorHitEffect LGAMNOPLHIP; // 0x30
	::System::UInt32 PLHBNHMIAEF; // 0x34
	::MoleMole::Config::AnimatorAirHitType BNFEPKALLGO; // 0x38

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HDBDOHLDIGG__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HDBDOHLDIGG__CTOR_OFFSET))(this);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HDBDOHLDIGG_PHOADBJGFBE_OFFSET))(this);
	}

	::KPNIFGIKELE* DHHOKBFFLFG()
	{
		return ((::KPNIFGIKELE*(*)(::PVOID))((::PBYTE)hIl2Cpp + HDBDOHLDIGG_DHHOKBFFLFG_OFFSET))(this);
	}

	::System::Void GCDIGLPEOGH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HDBDOHLDIGG_GCDIGLPEOGH_OFFSET))(this);
	}

	::System::Void FIGPAOKNJLN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HDBDOHLDIGG_FIGPAOKNJLN_OFFSET))(this);
	}

	::System::Void OHFHFOHMBJH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HDBDOHLDIGG_OHFHFOHMBJH_OFFSET))(this);
	}

	::KPNIFGIKELE* BJKCMPGMGDD()
	{
		return ((::KPNIFGIKELE*(*)(::PVOID))((::PBYTE)hIl2Cpp + HDBDOHLDIGG_BJKCMPGMGDD_OFFSET))(this);
	}

	::System::Void CNHBDOMKKDE(::System::UInt32 DEMODKOEEJL, ::System::UInt32 HBCMGOLIOPB, ::MBBFAJOHDNG NNAKPHEJBHJ, ::KPNIFGIKELE* EEBHMONLMKK)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::MBBFAJOHDNG, ::KPNIFGIKELE*))((::PBYTE)hIl2Cpp + HDBDOHLDIGG_CNHBDOMKKDE_OFFSET))(this, DEMODKOEEJL, HBCMGOLIOPB, NNAKPHEJBHJ, EEBHMONLMKK);
	}

	::System::Void AMKIOLCPKLE(::KPNIFGIKELE* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::KPNIFGIKELE*))((::PBYTE)hIl2Cpp + HDBDOHLDIGG_AMKIOLCPKLE_OFFSET))(this, EGEGIMGMJHN);
	}
};
