#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"

#define EDPGEFBNECD_BELNCMIINKG_OFFSET UNITYSDK_OFFSET(0x409330)
#define EDPGEFBNECD_BMLOHONLENB_OFFSET UNITYSDK_OFFSET(0x358A70)
#define EDPGEFBNECD_CMBAKFJLOFI_OFFSET UNITYSDK_OFFSET(0x76C140)
#define EDPGEFBNECD_EEJKKAJNHOI_OFFSET UNITYSDK_OFFSET(0x76BFA0)
#define EDPGEFBNECD_GLNPMACCJPH_OFFSET UNITYSDK_OFFSET(0x76C250)
#define EDPGEFBNECD_GPKMPDHNCGL_OFFSET UNITYSDK_OFFSET(0x76C240)
#define EDPGEFBNECD_IEADLKPAGOC_OFFSET UNITYSDK_OFFSET(0x408580)
#define EDPGEFBNECD_LDEBHHBAIOM_OFFSET UNITYSDK_OFFSET(0x76C1C0)
#define EDPGEFBNECD_MDIAIGMDIAA_OFFSET UNITYSDK_OFFSET(0x76C0C0)
#define EDPGEFBNECD_PHEPBDPENBG_OFFSET UNITYSDK_OFFSET(0x411A70)
#define EDPGEFBNECD__CTOR_OFFSET UNITYSDK_OFFSET(0x759E10)

inline static constexpr unsigned int EDPGEFBNECD_TypeDefinitionIndex = 61959;

struct alignas(4) EDPGEFBNECD
{
	::System::Single _GBJFINNPHPO_k__BackingField; // 0x10
	::System::Single _MNFHGCNIJPE_k__BackingField; // 0x14
	::System::Single _ENNKOIIIHBO_k__BackingField; // 0x18
	::System::Single _HEJNOOCAGBO_k__BackingField; // 0x1C

	::System::Void _ctor(::System::Single HBDNINJCHOE, ::System::Single PNOAJCNMHPD, ::System::Single CBHDNKNHGBF, ::System::Single PAFNGHJDDPG)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + EDPGEFBNECD__CTOR_OFFSET))(this, HBDNINJCHOE, PNOAJCNMHPD, CBHDNKNHGBF, PAFNGHJDDPG);
	}

	::UnityEngine::Matrix4x4 EEJKKAJNHOI(::System::Single HMGGOIDNPOH)
	{
		return ((::UnityEngine::Matrix4x4(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + EDPGEFBNECD_EEJKKAJNHOI_OFFSET))(this, HMGGOIDNPOH);
	}

	/*
	::EDPGEFBNECD MDIAIGMDIAA(::System::Single HFMHOELKCAJ)
	{
		return ((::EDPGEFBNECD(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + EDPGEFBNECD_MDIAIGMDIAA_OFFSET))(this, HFMHOELKCAJ);
	}
	*/

	::System::Single IEADLKPAGOC()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + EDPGEFBNECD_IEADLKPAGOC_OFFSET))(this);
	}

	::System::Single PHEPBDPENBG()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + EDPGEFBNECD_PHEPBDPENBG_OFFSET))(this);
	}

	::System::Single BMLOHONLENB()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + EDPGEFBNECD_BMLOHONLENB_OFFSET))(this);
	}

	/*
	::EDPGEFBNECD CMBAKFJLOFI(::System::Single HFMHOELKCAJ)
	{
		return ((::EDPGEFBNECD(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + EDPGEFBNECD_CMBAKFJLOFI_OFFSET))(this, HFMHOELKCAJ);
	}
	*/

	::System::Single BELNCMIINKG()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + EDPGEFBNECD_BELNCMIINKG_OFFSET))(this);
	}

	/*
	::EDPGEFBNECD LDEBHHBAIOM(::System::Single HFMHOELKCAJ)
	{
		return ((::EDPGEFBNECD(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + EDPGEFBNECD_LDEBHHBAIOM_OFFSET))(this, HFMHOELKCAJ);
	}
	*/

	::System::Void GPKMPDHNCGL(::System::Single HMGGOIDNPOH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + EDPGEFBNECD_GPKMPDHNCGL_OFFSET))(this, HMGGOIDNPOH);
	}

	/*
	::EDPGEFBNECD GLNPMACCJPH(::System::Single HFMHOELKCAJ)
	{
		return ((::EDPGEFBNECD(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + EDPGEFBNECD_GLNPMACCJPH_OFFSET))(this, HFMHOELKCAJ);
	}
	*/
};
