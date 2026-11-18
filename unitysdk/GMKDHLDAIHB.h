#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IEJHOJBLOHI.h"
#include "unitysdk/UnityEngine/Vector2.h"

class GFFNAMMLGEJ;
class GHDNGLEGEEB;
class OFLPOCHHHLC;

#define GMKDHLDAIHB_CMFOMGGDPPA_OFFSET UNITYSDK_OFFSET(0x1FB869D0)
#define GMKDHLDAIHB_HCFCCGLPLOI_OFFSET UNITYSDK_OFFSET(0x1FB864D0)
#define GMKDHLDAIHB_KHGPLGMDOFC_OFFSET UNITYSDK_OFFSET(0x1FB85FB0)
#define GMKDHLDAIHB_MNEFKNFOABP_OFFSET UNITYSDK_OFFSET(0x1FB86A70)
#define GMKDHLDAIHB_OKGCMGLGMIJ_OFFSET UNITYSDK_OFFSET(0x1FB86720)
#define GMKDHLDAIHB_OKJCHFGIKBH_OFFSET UNITYSDK_OFFSET(0x1FB860B0)
#define GMKDHLDAIHB__CTOR_OFFSET UNITYSDK_OFFSET(0x1FB86950)

inline static constexpr unsigned int GMKDHLDAIHB_TypeDefinitionIndex = 95062;

class GMKDHLDAIHB : public ::IEJHOJBLOHI
{
public:
	// static const ::System::Single AOEBJDMINJI; // 0x0
	::GHDNGLEGEEB* AAOCANGHBDG; // 0x28
	::GFFNAMMLGEJ* GEEHGDABNJF; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GMKDHLDAIHB__CTOR_OFFSET))(this);
	}

	::System::Void KHGPLGMDOFC(::OFLPOCHHHLC* ALPANKAJAGK)
	{
		return ((::System::Void(*)(::PVOID, ::OFLPOCHHHLC*))((::PBYTE)hIl2Cpp + GMKDHLDAIHB_KHGPLGMDOFC_OFFSET))(this, ALPANKAJAGK);
	}

	::System::Void OKJCHFGIKBH(::System::Single PMNLNNGEIFM)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + GMKDHLDAIHB_OKJCHFGIKBH_OFFSET))(this, PMNLNNGEIFM);
	}

	::System::Void CMFOMGGDPPA(::System::Single MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + GMKDHLDAIHB_CMFOMGGDPPA_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Void HCFCCGLPLOI(::UnityEngine::Vector2 LIAAHAGKBDL, ::System::Boolean IBGBIMLBOGA)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2, ::System::Boolean))((::PBYTE)hIl2Cpp + GMKDHLDAIHB_HCFCCGLPLOI_OFFSET))(this, LIAAHAGKBDL, IBGBIMLBOGA);
	}

	::System::Void OKGCMGLGMIJ(::UnityEngine::Vector2 LCEPFJEOHGE, ::UnityEngine::Vector2 LIAAHAGKBDL, ::System::Boolean IBGBIMLBOGA)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::System::Boolean))((::PBYTE)hIl2Cpp + GMKDHLDAIHB_OKGCMGLGMIJ_OFFSET))(this, LCEPFJEOHGE, LIAAHAGKBDL, IBGBIMLBOGA);
	}

	::System::Void MNEFKNFOABP(::OFLPOCHHHLC* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::OFLPOCHHHLC*))((::PBYTE)hIl2Cpp + GMKDHLDAIHB_MNEFKNFOABP_OFFSET))(this, MIALFKCCCPI);
	}
};
