#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GBAPOEMJBNM.h"
#include "unitysdk/MoleMole/Config/IndicatorLightType.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/IMBMPPCPHOD.h"
#include "unitysdk/MHFOLPAJCNC.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"

namespace MoleMole::Config { class ConfigHollowChessboardIndicatorLight; }
namespace MoleMole::Config { class IndicatorLightsPreset; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define HCPCMFMCOKC_COPIDBEMEIE_OFFSET UNITYSDK_OFFSET(0x1100A960)
#define HCPCMFMCOKC_GIFKOLHGLGG_OFFSET UNITYSDK_OFFSET(0x1100A9D0)
#define HCPCMFMCOKC_LBAKLAHPPGD_OFFSET UNITYSDK_OFFSET(0x1100AA10)
#define HCPCMFMCOKC_LJMIPGJJELP_OFFSET UNITYSDK_OFFSET(0x1100A520)
#define HCPCMFMCOKC_MDMHCKNLDBB_OFFSET UNITYSDK_OFFSET(0x1100A610)
#define HCPCMFMCOKC_MEJDDPKGOFG_OFFSET UNITYSDK_OFFSET(0x1100AA70)
#define HCPCMFMCOKC_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1100A570)
#define HCPCMFMCOKC_PONEGJLBBFJ_OFFSET UNITYSDK_OFFSET(0x1100AC30)
#define HCPCMFMCOKC__CTOR_OFFSET UNITYSDK_OFFSET(0x1100A480)

inline static constexpr unsigned int HCPCMFMCOKC_TypeDefinitionIndex = 87746;

class HCPCMFMCOKC : public ::GBAPOEMJBNM
{
public:
	::System::Collections::Generic::List_1<::System::Object*>* BCIJJGHMPDO; // 0x28
	::UnityEngine::Color OHOMGCAEAKO; // 0x30
	::UnityEngine::Color NFGIOLCMJCC; // 0x40
	::UnityEngine::Color FEPGCOHDBGE; // 0x50
	::UnityEngine::Color MFJPFPFOMKC; // 0x60
	::UnityEngine::Color OCNOOEHELHN; // 0x70

	::System::Void _ctor(::MoleMole::HollowChessboard::HollowCell LFEONIKJIAA)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + HCPCMFMCOKC__CTOR_OFFSET))(this, LFEONIKJIAA);
	}

	::System::Void LJMIPGJJELP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HCPCMFMCOKC_LJMIPGJJELP_OFFSET))(this);
	}

	::System::Void MDMHCKNLDBB(::IMBMPPCPHOD& FFDHBBHAANK, ::System::Single PBCAAADNEPK, ::MoleMole::HollowChessboard::HollowCell EKPEBNCLJPM)
	{
		return ((::System::Void(*)(::PVOID, ::IMBMPPCPHOD&, ::System::Single, ::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + HCPCMFMCOKC_MDMHCKNLDBB_OFFSET))(this, FFDHBBHAANK, PBCAAADNEPK, EKPEBNCLJPM);
	}

	::System::Void LBAKLAHPPGD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HCPCMFMCOKC_LBAKLAHPPGD_OFFSET))(this);
	}

	static ::MoleMole::Config::ConfigHollowChessboardIndicatorLight* COPIDBEMEIE()
	{
		return ((::MoleMole::Config::ConfigHollowChessboardIndicatorLight*(*)())((::PBYTE)hIl2Cpp + HCPCMFMCOKC_COPIDBEMEIE_OFFSET))();
	}

	::System::Void GIFKOLHGLGG(::MoleMole::Config::IndicatorLightType OBNIAHNMHPF, ::UnityEngine::Color JBBFCGAMDHI)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::IndicatorLightType, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + HCPCMFMCOKC_GIFKOLHGLGG_OFFSET))(this, OBNIAHNMHPF, JBBFCGAMDHI);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HCPCMFMCOKC_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void MEJDDPKGOFG(::MoleMole::Config::IndicatorLightsPreset* ALLDLGPEHLM)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::IndicatorLightsPreset*))((::PBYTE)hIl2Cpp + HCPCMFMCOKC_MEJDDPKGOFG_OFFSET))(this, ALLDLGPEHLM);
	}

	::System::Void PONEGJLBBFJ(::MHFOLPAJCNC HNOPAJLDCFB)
	{
		return ((::System::Void(*)(::PVOID, ::MHFOLPAJCNC))((::PBYTE)hIl2Cpp + HCPCMFMCOKC_PONEGJLBBFJ_OFFSET))(this, HNOPAJLDCFB);
	}
};
