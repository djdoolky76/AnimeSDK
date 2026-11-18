#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/System/ValueType.h"

#define BMJMALGLDDF_BDCJEGHJMEE_OFFSET UNITYSDK_OFFSET(0x3CE930)
#define BMJMALGLDDF_BLAHLKFJIDA_OFFSET UNITYSDK_OFFSET(0x3668E0)
#define BMJMALGLDDF_CLDIDBIFCNE_OFFSET UNITYSDK_OFFSET(0x3CE9E0)
#define BMJMALGLDDF_DMMNHBNKBEE_OFFSET UNITYSDK_OFFSET(0x359320)
#define BMJMALGLDDF_GKFPABOPCBD_OFFSET UNITYSDK_OFFSET(0x359150)
#define BMJMALGLDDF_HNDPCFOBLBF_OFFSET UNITYSDK_OFFSET(0x52D8C0)
#define BMJMALGLDDF_KDLNHKMAOAC_OFFSET UNITYSDK_OFFSET(0x5D0520)
#define BMJMALGLDDF_KNJPCHFFDCH_OFFSET UNITYSDK_OFFSET(0x4255F0)
#define BMJMALGLDDF_NPOALNHKJOE_OFFSET UNITYSDK_OFFSET(0x3A45D0)
#define BMJMALGLDDF_OAJEIDFGCII_OFFSET UNITYSDK_OFFSET(0x5E6980)
#define BMJMALGLDDF_PDBLLGLJEEI_OFFSET UNITYSDK_OFFSET(0x363D60)

inline static constexpr unsigned int BMJMALGLDDF_TypeDefinitionIndex = 70757;

struct alignas(4) BMJMALGLDDF
{
	::System::Int32 _DDIENHMKJKO_k__BackingField; // 0x10
	::System::Int32 _PDPHPHALJPG_k__BackingField; // 0x14
	::System::Int32 _NDINFDAIOMN_k__BackingField; // 0x18
	::System::Int32 _OMMCAKJKBJF_k__BackingField; // 0x1C
	::MoleMole::EntityHandle _MBEPFKPNBJE_k__BackingField; // 0x20

	::System::Int32 DMMNHBNKBEE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BMJMALGLDDF_DMMNHBNKBEE_OFFSET))(this);
	}

	::System::Void KDLNHKMAOAC(::System::Int32 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + BMJMALGLDDF_KDLNHKMAOAC_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void NPOALNHKJOE(::System::Int32 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + BMJMALGLDDF_NPOALNHKJOE_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void GKFPABOPCBD(::System::Int32 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + BMJMALGLDDF_GKFPABOPCBD_OFFSET))(this, EGEGIMGMJHN);
	}

	::MoleMole::EntityHandle BDCJEGHJMEE()
	{
		return ((::MoleMole::EntityHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + BMJMALGLDDF_BDCJEGHJMEE_OFFSET))(this);
	}

	::System::Int32 BLAHLKFJIDA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BMJMALGLDDF_BLAHLKFJIDA_OFFSET))(this);
	}

	::System::Int32 PDBLLGLJEEI()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BMJMALGLDDF_PDBLLGLJEEI_OFFSET))(this);
	}

	::System::Int32 CLDIDBIFCNE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BMJMALGLDDF_CLDIDBIFCNE_OFFSET))(this);
	}

	::System::Boolean OAJEIDFGCII()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BMJMALGLDDF_OAJEIDFGCII_OFFSET))(this);
	}

	::System::Void HNDPCFOBLBF(::System::Int32 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + BMJMALGLDDF_HNDPCFOBLBF_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void KNJPCHFFDCH(::MoleMole::EntityHandle EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + BMJMALGLDDF_KNJPCHFFDCH_OFFSET))(this, EGEGIMGMJHN);
	}
};
