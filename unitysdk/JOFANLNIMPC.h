#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DEGCAPDENJJ.h"
#include "unitysdk/Foundation/Clamped_1.h"
#include "unitysdk/Foundation/Variable_1.h"
#include "unitysdk/MoleMole/Cameras/PhotoCameraDefaultSetting.h"
#include "unitysdk/PipelineCamera/EulerRotation.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/PipelineCamera/WorldBasicCameraData.h"
#include "unitysdk/UnityEngine/Quaternion.h"

class JOFANLNIMPC_HKLKHCGCJPP;
namespace MoleMole::Cameras { class PhotoCameraConfig; }

#define JOFANLNIMPC_AHGIPGACPNE_OFFSET UNITYSDK_OFFSET(0x71F140)
#define JOFANLNIMPC_CDPPOKOGPKB_OFFSET UNITYSDK_OFFSET(0x71F240)
#define JOFANLNIMPC_COKNIICCODC_OFFSET UNITYSDK_OFFSET(0x13C3E8F0)
#define JOFANLNIMPC_EAJENPJHJNN_OFFSET UNITYSDK_OFFSET(0x71F010)
#define JOFANLNIMPC_EPDDPFGCCIE_OFFSET UNITYSDK_OFFSET(0x71F230)
#define JOFANLNIMPC_GCLPIIBLHCP_OFFSET UNITYSDK_OFFSET(0x71F1B0)
#define JOFANLNIMPC_GHMCBNPIEAK_OFFSET UNITYSDK_OFFSET(0x71F3B0)
#define JOFANLNIMPC_HAHNMAPNHFM_OFFSET UNITYSDK_OFFSET(0x71F290)
#define JOFANLNIMPC_HEBKJMOCBJH_OFFSET UNITYSDK_OFFSET(0x71EFE0)
#define JOFANLNIMPC_HFCGMLFIDNP_OFFSET UNITYSDK_OFFSET(0x71F260)
#define JOFANLNIMPC_IJFPLJPJCAL_OFFSET UNITYSDK_OFFSET(0x71F340)
#define JOFANLNIMPC_INILLLEALMG_OFFSET UNITYSDK_OFFSET(0x71F090)
#define JOFANLNIMPC_JCIODAGLLGB_OFFSET UNITYSDK_OFFSET(0x13C3E400)
#define JOFANLNIMPC_JGHAGPDLDMF_OFFSET UNITYSDK_OFFSET(0x71F250)
#define JOFANLNIMPC_LEOMGFANFIF_OFFSET UNITYSDK_OFFSET(0x71F080)
#define JOFANLNIMPC_LNMINKKDCDK_OFFSET UNITYSDK_OFFSET(0x71F1C0)
#define JOFANLNIMPC_MIHGPEJAANO_OFFSET UNITYSDK_OFFSET(0x71F270)
#define JOFANLNIMPC_MMGNJJGEHOD_OFFSET UNITYSDK_OFFSET(0x71F2A0)
#define JOFANLNIMPC_OEHGDBAHNEL_OFFSET UNITYSDK_OFFSET(0x71F000)
#define JOFANLNIMPC_POMONPHIEEP_OFFSET UNITYSDK_OFFSET(0x5C9C70)
#define JOFANLNIMPC_PPAFGBILMME_OFFSET UNITYSDK_OFFSET(0x71F280)
#define JOFANLNIMPC_PPBKLLEGHBH_OFFSET UNITYSDK_OFFSET(0x13C3DF10)
#define JOFANLNIMPC__CTOR_OFFSET UNITYSDK_OFFSET(0x71EFD0)

inline static constexpr unsigned int JOFANLNIMPC_TypeDefinitionIndex = 54083;

struct alignas(8) JOFANLNIMPC
{
	::Foundation::Variable_1<::UnityEngine::Vector3> LOHBOBNFCPC; // 0x10
	::System::Byte _padding0[0x18];
	::PipelineCamera::EulerRotation ABHPOOGNKHK; // 0x30
	::UnityEngine::Vector2 EABPDFBFGBJ; // 0x78
	::Foundation::Clamped_1<::System::Single> GEEMKIKDHLB; // 0x80
	::System::Byte _padding1[0x10];
	::Foundation::Clamped_1<::System::Single> GOBHMPCBMFO; // 0x98
	::System::Byte _padding2[0x10];
	::PipelineCamera::EulerRotation JLPFBJMNJAP; // 0xB0
	::System::Boolean IDDFKOLJPJH; // 0xF8
	::System::Byte _padding3[0x3];
	::System::Int32 MPPPENLKINK; // 0xFC
	::System::Single HEJGDIDPMPB; // 0x100
	::System::Single JHHDIEIJJHK; // 0x104
	::System::Single DNMHHDCMBLE; // 0x108
	::System::Single LGMBANIKNBG; // 0x10C
	::System::Single HPCHFLKFDEK; // 0x110
	::MoleMole::Cameras::PhotoCameraDefaultSetting JOEEPDODPOO; // 0x114
	::System::Nullable_1<::DEGCAPDENJJ> INHECDJFNGO; // 0x134

	::System::Void _ctor(::System::UInt32 BKLGNCBNEGM, ::System::Single NDNOBNMGBNA, ::System::Single OPIAIKKEEJH, ::System::Single FNLGFLNJFBP, ::System::Single EGCKEINKEPM, ::MoleMole::Cameras::PhotoCameraDefaultSetting& LJAEJBHNBFE, ::UnityEngine::Vector3& OEEPEBNKIJB)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::MoleMole::Cameras::PhotoCameraDefaultSetting&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + JOFANLNIMPC__CTOR_OFFSET))(this, BKLGNCBNEGM, NDNOBNMGBNA, OPIAIKKEEJH, FNLGFLNJFBP, EGCKEINKEPM, LJAEJBHNBFE, OEEPEBNKIJB);
	}

	::PipelineCamera::WorldBasicCameraData HEBKJMOCBJH()
	{
		return ((::PipelineCamera::WorldBasicCameraData(*)(::PVOID))((::PBYTE)hIl2Cpp + JOFANLNIMPC_HEBKJMOCBJH_OFFSET))(this);
	}

	::System::Void OEHGDBAHNEL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JOFANLNIMPC_OEHGDBAHNEL_OFFSET))(this);
	}

	/*
	static ::PipelineCamera::WorldBasicCameraData JCIODAGLLGB(::JOFANLNIMPC& IPMMCGDMODG)
	{
		return ((::PipelineCamera::WorldBasicCameraData(*)(::JOFANLNIMPC&))((::PBYTE)hIl2Cpp + JOFANLNIMPC_JCIODAGLLGB_OFFSET))(IPMMCGDMODG);
	}
	*/

	::JOFANLNIMPC_HKLKHCGCJPP* EAJENPJHJNN(::System::Single HBEKKMCBGBK)
	{
		return ((::JOFANLNIMPC_HKLKHCGCJPP*(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + JOFANLNIMPC_EAJENPJHJNN_OFFSET))(this, HBEKKMCBGBK);
	}

	::System::Single POMONPHIEEP()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + JOFANLNIMPC_POMONPHIEEP_OFFSET))(this);
	}

	::JOFANLNIMPC_HKLKHCGCJPP* LEOMGFANFIF(::System::Single ACBEFKINHFI, ::System::Single JHPGOBOJCJK)
	{
		return ((::JOFANLNIMPC_HKLKHCGCJPP*(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + JOFANLNIMPC_LEOMGFANFIF_OFFSET))(this, ACBEFKINHFI, JHPGOBOJCJK);
	}

	/*
	static ::JOFANLNIMPC COKNIICCODC(::System::UInt32 BKLGNCBNEGM, ::UnityEngine::Vector3& LJCMMEIDBBM, ::UnityEngine::Quaternion& BAEBNBNJCDC, ::System::Single& NPHOPECPHLF, ::UnityEngine::Vector3& MJOABFCFBCA, ::MoleMole::Cameras::PhotoCameraConfig*& DFMKILICPFB)
	{
		return ((::JOFANLNIMPC(*)(::System::UInt32, ::UnityEngine::Vector3&, ::UnityEngine::Quaternion&, ::System::Single&, ::UnityEngine::Vector3&, ::MoleMole::Cameras::PhotoCameraConfig*&))((::PBYTE)hIl2Cpp + JOFANLNIMPC_COKNIICCODC_OFFSET))(BKLGNCBNEGM, LJCMMEIDBBM, BAEBNBNJCDC, NPHOPECPHLF, MJOABFCFBCA, DFMKILICPFB);
	}
	*/

	::System::Single INILLLEALMG()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + JOFANLNIMPC_INILLLEALMG_OFFSET))(this);
	}

	::JOFANLNIMPC_HKLKHCGCJPP* AHGIPGACPNE(::System::Single HBEKKMCBGBK)
	{
		return ((::JOFANLNIMPC_HKLKHCGCJPP*(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + JOFANLNIMPC_AHGIPGACPNE_OFFSET))(this, HBEKKMCBGBK);
	}

	::UnityEngine::Vector2 GCLPIIBLHCP()
	{
		return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + JOFANLNIMPC_GCLPIIBLHCP_OFFSET))(this);
	}

	::JOFANLNIMPC_HKLKHCGCJPP* LNMINKKDCDK(::System::Single HBEKKMCBGBK)
	{
		return ((::JOFANLNIMPC_HKLKHCGCJPP*(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + JOFANLNIMPC_LNMINKKDCDK_OFFSET))(this, HBEKKMCBGBK);
	}

	::JOFANLNIMPC_HKLKHCGCJPP* EPDDPFGCCIE(::System::Single DKJACOOKAFE)
	{
		return ((::JOFANLNIMPC_HKLKHCGCJPP*(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + JOFANLNIMPC_EPDDPFGCCIE_OFFSET))(this, DKJACOOKAFE);
	}

	::JOFANLNIMPC_HKLKHCGCJPP* CDPPOKOGPKB(::System::Single DMAFDMDAGKK, ::System::Single NHFLBHJHOIC, ::System::Single EBJINDLMDNL)
	{
		return ((::JOFANLNIMPC_HKLKHCGCJPP*(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + JOFANLNIMPC_CDPPOKOGPKB_OFFSET))(this, DMAFDMDAGKK, NHFLBHJHOIC, EBJINDLMDNL);
	}

	static ::System::Boolean PPBKLLEGHBH(::System::Single& MFHFDMCMMON, ::System::Int32& GJLLGMKGIEL)
	{
		return ((::System::Boolean(*)(::System::Single&, ::System::Int32&))((::PBYTE)hIl2Cpp + JOFANLNIMPC_PPBKLLEGHBH_OFFSET))(MFHFDMCMMON, GJLLGMKGIEL);
	}

	::JOFANLNIMPC_HKLKHCGCJPP* JGHAGPDLDMF(::System::Single NPHOPECPHLF)
	{
		return ((::JOFANLNIMPC_HKLKHCGCJPP*(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + JOFANLNIMPC_JGHAGPDLDMF_OFFSET))(this, NPHOPECPHLF);
	}

	::JOFANLNIMPC_HKLKHCGCJPP* HFCGMLFIDNP(::System::Single ACBEFKINHFI, ::System::Single JHPGOBOJCJK)
	{
		return ((::JOFANLNIMPC_HKLKHCGCJPP*(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + JOFANLNIMPC_HFCGMLFIDNP_OFFSET))(this, ACBEFKINHFI, JHPGOBOJCJK);
	}

	::JOFANLNIMPC_HKLKHCGCJPP* MIHGPEJAANO(::System::Single HBEKKMCBGBK)
	{
		return ((::JOFANLNIMPC_HKLKHCGCJPP*(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + JOFANLNIMPC_MIHGPEJAANO_OFFSET))(this, HBEKKMCBGBK);
	}

	::System::Single PPAFGBILMME()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + JOFANLNIMPC_PPAFGBILMME_OFFSET))(this);
	}

	::System::Single HAHNMAPNHFM()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + JOFANLNIMPC_HAHNMAPNHFM_OFFSET))(this);
	}

	::JOFANLNIMPC_HKLKHCGCJPP* MMGNJJGEHOD(::System::Single DMAFDMDAGKK, ::System::Single NHFLBHJHOIC, ::System::Single EBJINDLMDNL)
	{
		return ((::JOFANLNIMPC_HKLKHCGCJPP*(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + JOFANLNIMPC_MMGNJJGEHOD_OFFSET))(this, DMAFDMDAGKK, NHFLBHJHOIC, EBJINDLMDNL);
	}

	::JOFANLNIMPC_HKLKHCGCJPP* IJFPLJPJCAL(::System::Single HBEKKMCBGBK)
	{
		return ((::JOFANLNIMPC_HKLKHCGCJPP*(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + JOFANLNIMPC_IJFPLJPJCAL_OFFSET))(this, HBEKKMCBGBK);
	}

	::System::Void GHMCBNPIEAK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JOFANLNIMPC_GHMCBNPIEAK_OFFSET))(this);
	}
};
