#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FJCAJJEAJPC.h"
#include "unitysdk/GIMEBLOJNCB_HKPPHKELIKH.h"

class GIMEBLOJNCB;
namespace Nap::NapECS { class EcsEntity; }
namespace Nap::NapECS { class EcsFilter; }
namespace Nap::NapECS { class EcsWorld; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define DPCOLGEHDCB_ACALKCHAHEP_OFFSET UNITYSDK_OFFSET(0x106124C0)
#define DPCOLGEHDCB_BBCGENDDEEK_OFFSET UNITYSDK_OFFSET(0x10612380)
#define DPCOLGEHDCB_BKJPMPBEHDO_OFFSET UNITYSDK_OFFSET(0x10613250)
#define DPCOLGEHDCB_BLCEMDFKDGF_OFFSET UNITYSDK_OFFSET(0x10612EF0)
#define DPCOLGEHDCB_CALFCIJBMKC_OFFSET UNITYSDK_OFFSET(0x10613090)
#define DPCOLGEHDCB_CREATEFILTERS_OFFSET UNITYSDK_OFFSET(0x10611530)
#define DPCOLGEHDCB_DJEEKNPLPFL_OFFSET UNITYSDK_OFFSET(0x10611EF0)
#define DPCOLGEHDCB_EFFGOKPFMDD_OFFSET UNITYSDK_OFFSET(0x10612800)
#define DPCOLGEHDCB_FNCFKJHADCG_OFFSET UNITYSDK_OFFSET(0x10611B90)
#define DPCOLGEHDCB_GAAFKMHJEIJ_OFFSET UNITYSDK_OFFSET(0x106127F0)
#define DPCOLGEHDCB_HDPBILEPELG_OFFSET UNITYSDK_OFFSET(0x106123E0)
#define DPCOLGEHDCB_HMLGKBFFNHI_OFFSET UNITYSDK_OFFSET(0x106129E0)
#define DPCOLGEHDCB_IPCOJIFHEEF_OFFSET UNITYSDK_OFFSET(0x10611DB0)
#define DPCOLGEHDCB_JCNJKOLAJLE_OFFSET UNITYSDK_OFFSET(0x10612530)
#define DPCOLGEHDCB_KFNFHNAONEP_OFFSET UNITYSDK_OFFSET(0x10612890)
#define DPCOLGEHDCB_KJBKDNFOCNB_OFFSET UNITYSDK_OFFSET(0x106129D0)
#define DPCOLGEHDCB_LDEFOFFAKHB_OFFSET UNITYSDK_OFFSET(0x10611F10)
#define DPCOLGEHDCB_MDMHCKNLDBB_OFFSET UNITYSDK_OFFSET(0x106130A0)
#define DPCOLGEHDCB_MNEFKNFOABP_OFFSET UNITYSDK_OFFSET(0x10611DC0)
#define DPCOLGEHDCB_NIGDIMFIAEJ_OFFSET UNITYSDK_OFFSET(0x10611E60)
#define DPCOLGEHDCB_NLKMJIKOIGK_OFFSET UNITYSDK_OFFSET(0x10611F00)
#define DPCOLGEHDCB_PLPONJAKNEB_OFFSET UNITYSDK_OFFSET(0x10611960)
#define DPCOLGEHDCB_START_OFFSET UNITYSDK_OFFSET(0x106114D0)
#define DPCOLGEHDCB__CTOR_OFFSET UNITYSDK_OFFSET(0x10611CF0)

inline static constexpr unsigned int DPCOLGEHDCB_TypeDefinitionIndex = 64531;

class DPCOLGEHDCB : public ::FJCAJJEAJPC
{
public:
	::System::Action_1<::GIMEBLOJNCB*>* _DLGHFAFIBED_k__BackingField; // 0x40
	::Nap::NapECS::EcsFilter* _GJGCLEMBGJF_k__BackingField; // 0x48
	::Nap::NapECS::EcsFilter* _OJOFDEGLILA_k__BackingField; // 0x50
	::System::Collections::Generic::List_1<::System::UInt32>* ABMGECMFGFP; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DPCOLGEHDCB__CTOR_OFFSET))(this);
	}

	::System::Void Start()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DPCOLGEHDCB_START_OFFSET))(this);
	}

	::System::Void CreateFilters(::Nap::NapECS::EcsWorld* GEEHGDABNJF)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + DPCOLGEHDCB_CREATEFILTERS_OFFSET))(this, GEEHGDABNJF);
	}

	::System::Void PLPONJAKNEB(::System::Single PMNLNNGEIFM)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + DPCOLGEHDCB_PLPONJAKNEB_OFFSET))(this, PMNLNNGEIFM);
	}

	::System::Void IPCOJIFHEEF(::System::Action_1<::GIMEBLOJNCB*>* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::GIMEBLOJNCB*>*))((::PBYTE)hIl2Cpp + DPCOLGEHDCB_IPCOJIFHEEF_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void MNEFKNFOABP(::Nap::NapECS::EcsWorld* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + DPCOLGEHDCB_MNEFKNFOABP_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Void NIGDIMFIAEJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DPCOLGEHDCB_NIGDIMFIAEJ_OFFSET))(this);
	}

	::System::Void DJEEKNPLPFL(::Nap::NapECS::EcsFilter* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsFilter*))((::PBYTE)hIl2Cpp + DPCOLGEHDCB_DJEEKNPLPFL_OFFSET))(this, EGEGIMGMJHN);
	}

	static ::System::Void FNCFKJHADCG(::Nap::NapECS::EcsEntity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + DPCOLGEHDCB_FNCFKJHADCG_OFFSET))(KECKGDFIALJ);
	}

	::System::Action_1<::GIMEBLOJNCB*>* NLKMJIKOIGK()
	{
		return ((::System::Action_1<::GIMEBLOJNCB*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + DPCOLGEHDCB_NLKMJIKOIGK_OFFSET))(this);
	}

	static ::System::Void LDEFOFFAKHB(::GIMEBLOJNCB* CKEOINKAFMK, ::GIMEBLOJNCB_HKPPHKELIKH IKFBOJKKCML)
	{
		return ((::System::Void(*)(::GIMEBLOJNCB*, ::GIMEBLOJNCB_HKPPHKELIKH))((::PBYTE)hIl2Cpp + DPCOLGEHDCB_LDEFOFFAKHB_OFFSET))(CKEOINKAFMK, IKFBOJKKCML);
	}

	static ::System::Void HDPBILEPELG(::System::Single PMNLNNGEIFM, ::GIMEBLOJNCB* CKEOINKAFMK)
	{
		return ((::System::Void(*)(::System::Single, ::GIMEBLOJNCB*))((::PBYTE)hIl2Cpp + DPCOLGEHDCB_HDPBILEPELG_OFFSET))(PMNLNNGEIFM, CKEOINKAFMK);
	}

	static ::System::Void ACALKCHAHEP(::GIMEBLOJNCB* CKEOINKAFMK)
	{
		return ((::System::Void(*)(::GIMEBLOJNCB*))((::PBYTE)hIl2Cpp + DPCOLGEHDCB_ACALKCHAHEP_OFFSET))(CKEOINKAFMK);
	}

	::System::Void JCNJKOLAJLE(::Nap::NapECS::EcsEntity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + DPCOLGEHDCB_JCNJKOLAJLE_OFFSET))(this, KECKGDFIALJ);
	}

	::Nap::NapECS::EcsFilter* GAAFKMHJEIJ()
	{
		return ((::Nap::NapECS::EcsFilter*(*)(::PVOID))((::PBYTE)hIl2Cpp + DPCOLGEHDCB_GAAFKMHJEIJ_OFFSET))(this);
	}

	static ::System::Void EFFGOKPFMDD(::Nap::NapECS::EcsEntity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + DPCOLGEHDCB_EFFGOKPFMDD_OFFSET))(KECKGDFIALJ);
	}

	::System::Void KFNFHNAONEP(::Nap::NapECS::EcsEntity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + DPCOLGEHDCB_KFNFHNAONEP_OFFSET))(this, KECKGDFIALJ);
	}

	::Nap::NapECS::EcsFilter* KJBKDNFOCNB()
	{
		return ((::Nap::NapECS::EcsFilter*(*)(::PVOID))((::PBYTE)hIl2Cpp + DPCOLGEHDCB_KJBKDNFOCNB_OFFSET))(this);
	}

	::System::Void HMLGKBFFNHI(::System::UInt32 BKLGNCBNEGM)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DPCOLGEHDCB_HMLGKBFFNHI_OFFSET))(this, BKLGNCBNEGM);
	}

	::System::Void BLCEMDFKDGF(::Nap::NapECS::EcsEntity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + DPCOLGEHDCB_BLCEMDFKDGF_OFFSET))(this, KECKGDFIALJ);
	}

	static ::System::Void BBCGENDDEEK(::GIMEBLOJNCB* CKEOINKAFMK)
	{
		return ((::System::Void(*)(::GIMEBLOJNCB*))((::PBYTE)hIl2Cpp + DPCOLGEHDCB_BBCGENDDEEK_OFFSET))(CKEOINKAFMK);
	}

	::System::Void CALFCIJBMKC(::Nap::NapECS::EcsFilter* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsFilter*))((::PBYTE)hIl2Cpp + DPCOLGEHDCB_CALFCIJBMKC_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void MDMHCKNLDBB(::GIMEBLOJNCB* CKEOINKAFMK)
	{
		return ((::System::Void(*)(::PVOID, ::GIMEBLOJNCB*))((::PBYTE)hIl2Cpp + DPCOLGEHDCB_MDMHCKNLDBB_OFFSET))(this, CKEOINKAFMK);
	}

	::System::Void BKJPMPBEHDO(::System::Single MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + DPCOLGEHDCB_BKJPMPBEHDO_OFFSET))(this, MIALFKCCCPI);
	}
};
