#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Battle/ProceduralAnimDamperParam.h"
#include "unitysdk/PMGFJAPEHFB.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/EKLMJGLFFED.h"

class MEHHHAABGPC;

#define HDIOAJBDPMK_BNLNGFPLKOJ_OFFSET UNITYSDK_OFFSET(0x100FACD0)
#define HDIOAJBDPMK_CCGMONANMDG_OFFSET UNITYSDK_OFFSET(0x100FABC0)
#define HDIOAJBDPMK_IPNHHPNONAA_OFFSET UNITYSDK_OFFSET(0x100FABD0)
#define HDIOAJBDPMK_MBAFALEBFMC_OFFSET UNITYSDK_OFFSET(0x100FAC70)
#define HDIOAJBDPMK_NLKINLBNKJO_OFFSET UNITYSDK_OFFSET(0x100FACE0)
#define HDIOAJBDPMK__CTOR_OFFSET UNITYSDK_OFFSET(0x100FACC0)

inline static constexpr unsigned int HDIOAJBDPMK_TypeDefinitionIndex = 77884;

class HDIOAJBDPMK : public ::System::Object
{
public:
	::MoleMole::Battle::ProceduralAnimDamperParam _NOFECADJIJK_k__BackingField; // 0x10
	::UnityEngine::Vector3 NPKBJNHGJFC; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HDIOAJBDPMK__CTOR_OFFSET))(this);
	}

	::PMGFJAPEHFB CCGMONANMDG()
	{
		return ((::PMGFJAPEHFB(*)(::PVOID))((::PBYTE)hIl2Cpp + HDIOAJBDPMK_CCGMONANMDG_OFFSET))(this);
	}

	::MEHHHAABGPC* IPNHHPNONAA(::EKLMJGLFFED BDGKJJPIKIB)
	{
		return ((::MEHHHAABGPC*(*)(::PVOID, ::EKLMJGLFFED))((::PBYTE)hIl2Cpp + HDIOAJBDPMK_IPNHHPNONAA_OFFSET))(this, BDGKJJPIKIB);
	}

	::System::Void MBAFALEBFMC(::MEHHHAABGPC* GAGANPBKNDI)
	{
		return ((::System::Void(*)(::PVOID, ::MEHHHAABGPC*))((::PBYTE)hIl2Cpp + HDIOAJBDPMK_MBAFALEBFMC_OFFSET))(this, GAGANPBKNDI);
	}

	::System::Void BNLNGFPLKOJ(::MoleMole::Battle::ProceduralAnimDamperParam EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::ProceduralAnimDamperParam))((::PBYTE)hIl2Cpp + HDIOAJBDPMK_BNLNGFPLKOJ_OFFSET))(this, EGEGIMGMJHN);
	}

	::MoleMole::Battle::ProceduralAnimDamperParam NLKINLBNKJO()
	{
		return ((::MoleMole::Battle::ProceduralAnimDamperParam(*)(::PVOID))((::PBYTE)hIl2Cpp + HDIOAJBDPMK_NLKINLBNKJO_OFFSET))(this);
	}
};
