#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BPEICFCFGEM.h"
#include "unitysdk/ENGKPGFGGLM.h"
#include "unitysdk/GDEKBFGOGKH.h"
#include "unitysdk/GKJHGODMNHE.h"

#define KDPNBGCLHDH_CNHBDOMKKDE_OFFSET UNITYSDK_OFFSET(0x13C543F0)
#define KDPNBGCLHDH_FIGPAOKNJLN_OFFSET UNITYSDK_OFFSET(0x13C54360)
#define KDPNBGCLHDH_GCDIGLPEOGH_OFFSET UNITYSDK_OFFSET(0x13C542D0)
#define KDPNBGCLHDH_OHFHFOHMBJH_OFFSET UNITYSDK_OFFSET(0x13C54480)
#define KDPNBGCLHDH_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x13C541B0)
#define KDPNBGCLHDH__CCTOR_OFFSET UNITYSDK_OFFSET(0x13C54240)
#define KDPNBGCLHDH__CTOR_OFFSET UNITYSDK_OFFSET(0x13C542B0)

inline static constexpr unsigned int KDPNBGCLHDH_TypeDefinitionIndex = 70688;

class KDPNBGCLHDH : public ::ENGKPGFGGLM
{
public:
	// static const ::System::UInt16 GBKNNOFLGDJ = 0xB1; // 0x0
	::GDEKBFGOGKH FJFAELMEENH; // 0x20
	::GKJHGODMNHE NIKHOBKLAHI; // 0x24
	::BPEICFCFGEM PIOCAOJDNNK; // 0x28
	::System::Int32 NGECHOOMKNH; // 0x2C
	::System::Int32 IPPKOGCDEKI; // 0x30

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KDPNBGCLHDH__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KDPNBGCLHDH__CTOR_OFFSET))(this);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KDPNBGCLHDH_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void GCDIGLPEOGH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KDPNBGCLHDH_GCDIGLPEOGH_OFFSET))(this);
	}

	::System::Void FIGPAOKNJLN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KDPNBGCLHDH_FIGPAOKNJLN_OFFSET))(this);
	}

	::System::Void CNHBDOMKKDE(::GDEKBFGOGKH MGCNKMBNPGD, ::GKJHGODMNHE DHNGGMLCDJE, ::System::Int32 NABEEJBEMHH, ::BPEICFCFGEM GCKMEOLFCHH, ::System::Int32 IMJDCGIGNNL)
	{
		return ((::System::Void(*)(::PVOID, ::GDEKBFGOGKH, ::GKJHGODMNHE, ::System::Int32, ::BPEICFCFGEM, ::System::Int32))((::PBYTE)hIl2Cpp + KDPNBGCLHDH_CNHBDOMKKDE_OFFSET))(this, MGCNKMBNPGD, DHNGGMLCDJE, NABEEJBEMHH, GCKMEOLFCHH, IMJDCGIGNNL);
	}

	::System::Void OHFHFOHMBJH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KDPNBGCLHDH_OHFHFOHMBJH_OFFSET))(this);
	}
};
