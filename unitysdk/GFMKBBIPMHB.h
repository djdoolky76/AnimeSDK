#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OAOOLPCNHKA.h"
#include "unitysdk/GFEAAEGGBPJ.h"
#include "unitysdk/MoleMole/EntityHandle.h"

class KLDMNFJNOEO;
namespace Nap::NapECS { class EcsEntity; }
namespace Nap::NapECS { class EcsFilter; }
namespace Nap::NapECS { class EcsWorld; }
namespace System { class String; }

#define GFMKBBIPMHB_AGMBGKFIHKP_OFFSET UNITYSDK_OFFSET(0x15F1A5F0)
#define GFMKBBIPMHB_APAGIJMHEAK_OFFSET UNITYSDK_OFFSET(0x15F1A220)
#define GFMKBBIPMHB_CMFOMGGDPPA_OFFSET UNITYSDK_OFFSET(0x15F1BC70)
#define GFMKBBIPMHB_CREATEFILTERS_OFFSET UNITYSDK_OFFSET(0x15F19E50)
#define GFMKBBIPMHB_DJHGBGAPHCI_OFFSET UNITYSDK_OFFSET(0x15F1A880)
#define GFMKBBIPMHB_GKCILOAAJHI_OFFSET UNITYSDK_OFFSET(0x15F1BD00)
#define GFMKBBIPMHB_HHABNJONBMO_OFFSET UNITYSDK_OFFSET(0x15F1B4E0)
#define GFMKBBIPMHB_JEDMOJLLAML_OFFSET UNITYSDK_OFFSET(0x15F1AE30)
#define GFMKBBIPMHB_MNEFKNFOABP_OFFSET UNITYSDK_OFFSET(0x15F1B450)
#define GFMKBBIPMHB_OCKPLMDBADB_OFFSET UNITYSDK_OFFSET(0x15F1A3B0)
#define GFMKBBIPMHB_ODEAEOICLKC_OFFSET UNITYSDK_OFFSET(0x15F1B8B0)
#define GFMKBBIPMHB_UPDATE_OFFSET UNITYSDK_OFFSET(0x15F1A060)
#define GFMKBBIPMHB__CTOR_OFFSET UNITYSDK_OFFSET(0x15F1A1D0)

inline static constexpr unsigned int GFMKBBIPMHB_TypeDefinitionIndex = 75382;

class GFMKBBIPMHB : public ::OAOOLPCNHKA
{
public:
	::Nap::NapECS::EcsFilter* JDDGPFHBFJL; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GFMKBBIPMHB__CTOR_OFFSET))(this);
	}

	::System::Void CreateFilters(::Nap::NapECS::EcsWorld* GEEHGDABNJF)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + GFMKBBIPMHB_CREATEFILTERS_OFFSET))(this, GEEHGDABNJF);
	}

	::System::Void Update()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GFMKBBIPMHB_UPDATE_OFFSET))(this);
	}

	::System::Void APAGIJMHEAK(::Nap::NapECS::EcsEntity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + GFMKBBIPMHB_APAGIJMHEAK_OFFSET))(this, KECKGDFIALJ);
	}

	static ::System::Void AGMBGKFIHKP(::KLDMNFJNOEO* GBELIHABEDH)
	{
		return ((::System::Void(*)(::KLDMNFJNOEO*))((::PBYTE)hIl2Cpp + GFMKBBIPMHB_AGMBGKFIHKP_OFFSET))(GBELIHABEDH);
	}

	::System::Void DJHGBGAPHCI(::System::UInt32 KECKGDFIALJ)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GFMKBBIPMHB_DJHGBGAPHCI_OFFSET))(this, KECKGDFIALJ);
	}

	static ::System::Void OCKPLMDBADB(::MoleMole::EntityHandle HPADNAEINPK)
	{
		return ((::System::Void(*)(::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + GFMKBBIPMHB_OCKPLMDBADB_OFFSET))(HPADNAEINPK);
	}

	static ::System::Void JEDMOJLLAML(::MoleMole::EntityHandle HPADNAEINPK, ::System::String* HIAIKHDFCLN)
	{
		return ((::System::Void(*)(::MoleMole::EntityHandle, ::System::String*))((::PBYTE)hIl2Cpp + GFMKBBIPMHB_JEDMOJLLAML_OFFSET))(HPADNAEINPK, HIAIKHDFCLN);
	}

	::System::Void MNEFKNFOABP(::Nap::NapECS::EcsWorld* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + GFMKBBIPMHB_MNEFKNFOABP_OFFSET))(this, MIALFKCCCPI);
	}

	static ::System::Void HHABNJONBMO(::MoleMole::EntityHandle HPADNAEINPK, ::System::String* HIAIKHDFCLN)
	{
		return ((::System::Void(*)(::MoleMole::EntityHandle, ::System::String*))((::PBYTE)hIl2Cpp + GFMKBBIPMHB_HHABNJONBMO_OFFSET))(HPADNAEINPK, HIAIKHDFCLN);
	}

	static ::GFEAAEGGBPJ ODEAEOICLKC(::MoleMole::EntityHandle HPADNAEINPK, ::System::String* HIAIKHDFCLN)
	{
		return ((::GFEAAEGGBPJ(*)(::MoleMole::EntityHandle, ::System::String*))((::PBYTE)hIl2Cpp + GFMKBBIPMHB_ODEAEOICLKC_OFFSET))(HPADNAEINPK, HIAIKHDFCLN);
	}

	::System::Void CMFOMGGDPPA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GFMKBBIPMHB_CMFOMGGDPPA_OFFSET))(this);
	}

	static ::System::Void GKCILOAAJHI(::MoleMole::EntityHandle HPADNAEINPK, ::System::String* HIAIKHDFCLN)
	{
		return ((::System::Void(*)(::MoleMole::EntityHandle, ::System::String*))((::PBYTE)hIl2Cpp + GFMKBBIPMHB_GKCILOAAJHI_OFFSET))(HPADNAEINPK, HIAIKHDFCLN);
	}
};
