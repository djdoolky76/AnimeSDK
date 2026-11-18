#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/System/ValueType.h"

class GEIHCPAOKKK;
class PPKHPCDIPCO;

#define CAJMJKBGHDE_AOHJOFADHCC_OFFSET UNITYSDK_OFFSET(0x5A60E0)
#define CAJMJKBGHDE_BJANDJKKNCD_OFFSET UNITYSDK_OFFSET(0x78DE90)
#define CAJMJKBGHDE_KJIEBEHKNFA_OFFSET UNITYSDK_OFFSET(0x42FDC0)
#define CAJMJKBGHDE_LGBELBMAMHN_OFFSET UNITYSDK_OFFSET(0x358710)
#define CAJMJKBGHDE_OKJCHFGIKBH_OFFSET UNITYSDK_OFFSET(0x78DE80)
#define CAJMJKBGHDE_PPPOOGCADMH_OFFSET UNITYSDK_OFFSET(0x358470)
#define CAJMJKBGHDE__CTOR_OFFSET UNITYSDK_OFFSET(0x78DE70)

inline static constexpr unsigned int CAJMJKBGHDE_TypeDefinitionIndex = 53053;

struct alignas(4) CAJMJKBGHDE
{
	::MoleMole::EntityHandle _BNLKPHKPCCO_k__BackingField; // 0x10
	::System::Single _BCICEMKKGOM_k__BackingField; // 0x20

	::System::Void _ctor(::MoleMole::EntityHandle JMDHBJMNBCP)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + CAJMJKBGHDE__CTOR_OFFSET))(this, JMDHBJMNBCP);
	}

	::System::Void OKJCHFGIKBH(::PPKHPCDIPCO* LACMCFMINFD, ::GEIHCPAOKKK* HGOAMLIBAFC)
	{
		return ((::System::Void(*)(::PVOID, ::PPKHPCDIPCO*, ::GEIHCPAOKKK*))((::PBYTE)hIl2Cpp + CAJMJKBGHDE_OKJCHFGIKBH_OFFSET))(this, LACMCFMINFD, HGOAMLIBAFC);
	}

	::System::Void BJANDJKKNCD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAJMJKBGHDE_BJANDJKKNCD_OFFSET))(this);
	}

	::System::Void PPPOOGCADMH(::MoleMole::EntityHandle EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + CAJMJKBGHDE_PPPOOGCADMH_OFFSET))(this, EGEGIMGMJHN);
	}

	::MoleMole::EntityHandle LGBELBMAMHN()
	{
		return ((::MoleMole::EntityHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + CAJMJKBGHDE_LGBELBMAMHN_OFFSET))(this);
	}

	::System::Single KJIEBEHKNFA()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CAJMJKBGHDE_KJIEBEHKNFA_OFFSET))(this);
	}

	::System::Void AOHJOFADHCC(::System::Single EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CAJMJKBGHDE_AOHJOFADHCC_OFFSET))(this, EGEGIMGMJHN);
	}
};
