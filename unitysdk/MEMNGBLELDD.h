#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FJCAJJEAJPC.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"

class MBJCLLBMALO;
namespace Nap::NapECS { class EcsEntity; }
namespace Nap::NapECS { class EcsFilter; }
namespace Nap::NapECS { class EcsWorld; }

#define MEMNGBLELDD_ACALKPGHILE_OFFSET UNITYSDK_OFFSET(0x14D73AD0)
#define MEMNGBLELDD_AJILJGLNFAK_OFFSET UNITYSDK_OFFSET(0x14D73D70)
#define MEMNGBLELDD_BKJPMPBEHDO_OFFSET UNITYSDK_OFFSET(0x14D73A20)
#define MEMNGBLELDD_CREATEFILTERS_OFFSET UNITYSDK_OFFSET(0x14D73360)
#define MEMNGBLELDD_DNAKEIJEHJO_OFFSET UNITYSDK_OFFSET(0x14D73D80)
#define MEMNGBLELDD_INOKFEPEEDJ_OFFSET UNITYSDK_OFFSET(0x14D738D0)
#define MEMNGBLELDD_JDDMFEELKDH_OFFSET UNITYSDK_OFFSET(0x14D73990)
#define MEMNGBLELDD_JGFLAGNPDOK_OFFSET UNITYSDK_OFFSET(0x14D73AC0)
#define MEMNGBLELDD_MNEFKNFOABP_OFFSET UNITYSDK_OFFSET(0x14D737A0)
#define MEMNGBLELDD_NIGDIMFIAEJ_OFFSET UNITYSDK_OFFSET(0x14D73840)
#define MEMNGBLELDD_PLPONJAKNEB_OFFSET UNITYSDK_OFFSET(0x14D735E0)
#define MEMNGBLELDD_START_OFFSET UNITYSDK_OFFSET(0x14D73300)
#define MEMNGBLELDD__CTOR_OFFSET UNITYSDK_OFFSET(0x14D73730)

inline static constexpr unsigned int MEMNGBLELDD_TypeDefinitionIndex = 72455;

class MEMNGBLELDD : public ::FJCAJJEAJPC
{
public:
	::Nap::NapECS::EcsFilter* _FHMPFILMMJG_k__BackingField; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MEMNGBLELDD__CTOR_OFFSET))(this);
	}

	::System::Void Start()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MEMNGBLELDD_START_OFFSET))(this);
	}

	::System::Void CreateFilters(::Nap::NapECS::EcsWorld* GEEHGDABNJF)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + MEMNGBLELDD_CREATEFILTERS_OFFSET))(this, GEEHGDABNJF);
	}

	::System::Void PLPONJAKNEB(::System::Single PMNLNNGEIFM)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MEMNGBLELDD_PLPONJAKNEB_OFFSET))(this, PMNLNNGEIFM);
	}

	::System::Void MNEFKNFOABP(::Nap::NapECS::EcsWorld* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + MEMNGBLELDD_MNEFKNFOABP_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Void NIGDIMFIAEJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MEMNGBLELDD_NIGDIMFIAEJ_OFFSET))(this);
	}

	::System::Void INOKFEPEEDJ(::Nap::NapECS::EcsEntity* EIFONLCJOPG)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + MEMNGBLELDD_INOKFEPEEDJ_OFFSET))(this, EIFONLCJOPG);
	}

	static ::System::Void JDDMFEELKDH(::MBJCLLBMALO* EFEBFFCEJEF)
	{
		return ((::System::Void(*)(::MBJCLLBMALO*))((::PBYTE)hIl2Cpp + MEMNGBLELDD_JDDMFEELKDH_OFFSET))(EFEBFFCEJEF);
	}

	::System::Void BKJPMPBEHDO(::System::Single MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MEMNGBLELDD_BKJPMPBEHDO_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Void JGFLAGNPDOK(::Nap::NapECS::EcsFilter* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsFilter*))((::PBYTE)hIl2Cpp + MEMNGBLELDD_JGFLAGNPDOK_OFFSET))(this, EGEGIMGMJHN);
	}

	static ::System::Void ACALKPGHILE(::MBJCLLBMALO* GBELIHABEDH, ::MoleMole::HollowChessboard::HollowCell GALMEKPFIKN)
	{
		return ((::System::Void(*)(::MBJCLLBMALO*, ::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + MEMNGBLELDD_ACALKPGHILE_OFFSET))(GBELIHABEDH, GALMEKPFIKN);
	}

	::Nap::NapECS::EcsFilter* AJILJGLNFAK()
	{
		return ((::Nap::NapECS::EcsFilter*(*)(::PVOID))((::PBYTE)hIl2Cpp + MEMNGBLELDD_AJILJGLNFAK_OFFSET))(this);
	}

	::System::Void DNAKEIJEHJO(::Nap::NapECS::EcsEntity* EIFONLCJOPG)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + MEMNGBLELDD_DNAKEIJEHJO_OFFSET))(this, EIFONLCJOPG);
	}
};
