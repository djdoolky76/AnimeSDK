#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KHDGMKGKDBP.h"
#include "unitysdk/MoleMole/InputActionEvent.h"
#include "unitysdk/PipelineCamera/WorldBasicCameraData.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/UnityEngine/Vector2.h"

class AODIFLIBBJA;
class FBJEMLAFILA;
class LKIABNLCKMK;
namespace MoleMole::Cameras { class PhotoCameraConfig; }
namespace MoleMole::Config { class PhotoCameraModeOverride; }
namespace MoleMole::Config { class UIConfigPhotoCamera; }
namespace UnityEngine::EventSystems { class PointerEventData; }

#define HJAKDJAGCNH_ABEHJLLNFIA_OFFSET UNITYSDK_OFFSET(0x14A171A0)
#define HJAKDJAGCNH_ADNIDKFIFFL_OFFSET UNITYSDK_OFFSET(0x14A16D40)
#define HJAKDJAGCNH_AHKPJAMCBPB_OFFSET UNITYSDK_OFFSET(0x14A17990)
#define HJAKDJAGCNH_BBCEAGAHFIP_OFFSET UNITYSDK_OFFSET(0x14A17DD0)
#define HJAKDJAGCNH_BPIJLJFKDLM_OFFSET UNITYSDK_OFFSET(0x14A15790)
#define HJAKDJAGCNH_CDPPOKOGPKB_OFFSET UNITYSDK_OFFSET(0x14A17830)
#define HJAKDJAGCNH_CIHIPDJJAFL_OFFSET UNITYSDK_OFFSET(0x14A15B70)
#define HJAKDJAGCNH_CJELAAPJKBH_OFFSET UNITYSDK_OFFSET(0x14A187A0)
#define HJAKDJAGCNH_CLPNEPAFCNK_OFFSET UNITYSDK_OFFSET(0x14A15DC0)
#define HJAKDJAGCNH_DCEMGDKIONF_OFFSET UNITYSDK_OFFSET(0x14A18380)
#define HJAKDJAGCNH_DHFGACNBMNK_OFFSET UNITYSDK_OFFSET(0x14A18140)
#define HJAKDJAGCNH_DIHCGHDHPJP_OFFSET UNITYSDK_OFFSET(0x14A15EB0)
#define HJAKDJAGCNH_EGHJAFNPFIF_OFFSET UNITYSDK_OFFSET(0x14A16BD0)
#define HJAKDJAGCNH_EJNFCBDJIFO_OFFSET UNITYSDK_OFFSET(0x14A189E0)
#define HJAKDJAGCNH_ELNGHFKCOHN_OFFSET UNITYSDK_OFFSET(0x14A17330)
#define HJAKDJAGCNH_FHJCCBLONEC_OFFSET UNITYSDK_OFFSET(0x14A17A00)
#define HJAKDJAGCNH_FLLCHCKINDG_OFFSET UNITYSDK_OFFSET(0x14A17D70)
#define HJAKDJAGCNH_FLMBCNMFOGF_OFFSET UNITYSDK_OFFSET(0x14A15600)
#define HJAKDJAGCNH_FNKLMHEFMHH_OFFSET UNITYSDK_OFFSET(0x14A15E20)
#define HJAKDJAGCNH_FPDGLPBFIFJ_OFFSET UNITYSDK_OFFSET(0x14A16B60)
#define HJAKDJAGCNH_GGLDINFGNFP_OFFSET UNITYSDK_OFFSET(0x14A17930)
#define HJAKDJAGCNH_GJCHBIFLIKA_OFFSET UNITYSDK_OFFSET(0x14A18A40)
#define HJAKDJAGCNH_HOEICALOIKM_OFFSET UNITYSDK_OFFSET(0x14A17510)
#define HJAKDJAGCNH_ICGLKNOHEJD_OFFSET UNITYSDK_OFFSET(0x14A16EB0)
#define HJAKDJAGCNH_IDNCOKIKHFK_OFFSET UNITYSDK_OFFSET(0x14A15950)
#define HJAKDJAGCNH_IKCEEDCPEOM_OFFSET UNITYSDK_OFFSET(0x14A17FB0)
#define HJAKDJAGCNH_JCHEGPOHNJE_OFFSET UNITYSDK_OFFSET(0x14A156C0)
#define HJAKDJAGCNH_JJNAHIBMFJB_OFFSET UNITYSDK_OFFSET(0x14A17630)
#define HJAKDJAGCNH_KAOENJBEMLJ_OFFSET UNITYSDK_OFFSET(0x14A18320)
#define HJAKDJAGCNH_KDOMMHJCDMF_OFFSET UNITYSDK_OFFSET(0x14A18010)
#define HJAKDJAGCNH_KEFMBIMDCNB_OFFSET UNITYSDK_OFFSET(0x14A15D70)
#define HJAKDJAGCNH_KHJLHJCCEKG_OFFSET UNITYSDK_OFFSET(0x14A16E40)
#define HJAKDJAGCNH_KIJAJIHPBDL_OFFSET UNITYSDK_OFFSET(0x14A15C20)
#define HJAKDJAGCNH_KMMBIHHLFLC_OFFSET UNITYSDK_OFFSET(0x14A18690)
#define HJAKDJAGCNH_KNLKDOJBMKC_OFFSET UNITYSDK_OFFSET(0x14A183F0)
#define HJAKDJAGCNH_LDAHPKJOKBE_OFFSET UNITYSDK_OFFSET(0x14A177D0)
#define HJAKDJAGCNH_LONPENDAMMJ_OFFSET UNITYSDK_OFFSET(0x14A185D0)
#define HJAKDJAGCNH_MCDOOAOOOBG_OFFSET UNITYSDK_OFFSET(0x14A175D0)
#define HJAKDJAGCNH_MCNNEJLEGPF_OFFSET UNITYSDK_OFFSET(0x14A15B20)
#define HJAKDJAGCNH_MHHJPBJILBJ_OFFSET UNITYSDK_OFFSET(0x14A15640)
#define HJAKDJAGCNH_NAMCJIPBNLE_OFFSET UNITYSDK_OFFSET(0x14A17200)
#define HJAKDJAGCNH_NCDJKBPMMEJ_OFFSET UNITYSDK_OFFSET(0x14A18980)
#define HJAKDJAGCNH_NCPOGNGCPKI_OFFSET UNITYSDK_OFFSET(0x14A17EE0)
#define HJAKDJAGCNH_NMDACHDFDKC_OFFSET UNITYSDK_OFFSET(0x14A15BC0)
#define HJAKDJAGCNH_NOPBIDFAILH_OFFSET UNITYSDK_OFFSET(0x14A16DD0)
#define HJAKDJAGCNH_OHLACAGBJGB_OFFSET UNITYSDK_OFFSET(0x14A16F20)
#define HJAKDJAGCNH_OKCBLDAJHME_OFFSET UNITYSDK_OFFSET(0x14A17570)
#define HJAKDJAGCNH_ONDRAG_OFFSET UNITYSDK_OFFSET(0x14A16F90)
#define HJAKDJAGCNH_PEMLCDIODDD_OFFSET UNITYSDK_OFFSET(0x14A17BB0)
#define HJAKDJAGCNH__CTOR_OFFSET UNITYSDK_OFFSET(0x14A155C0)

inline static constexpr unsigned int HJAKDJAGCNH_TypeDefinitionIndex = 40585;

class HJAKDJAGCNH : public ::KHDGMKGKDBP
{
public:
	::MoleMole::Cameras::PhotoCameraConfig* LBPDEJDDJPE; // 0x20
	::FBJEMLAFILA* AOFPDBAEMDH; // 0x28
	::MoleMole::Config::UIConfigPhotoCamera* KKJEMADHBIB; // 0x30
	::LKIABNLCKMK* DEGMIJJADNP; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HJAKDJAGCNH__CTOR_OFFSET))(this);
	}

	::System::Void MHHJPBJILBJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HJAKDJAGCNH_MHHJPBJILBJ_OFFSET))(this);
	}

	::System::Void IDNCOKIKHFK(::AODIFLIBBJA* GEJCKFFFKCL)
	{
		return ((::System::Void(*)(::PVOID, ::AODIFLIBBJA*))((::PBYTE)hIl2Cpp + HJAKDJAGCNH_IDNCOKIKHFK_OFFSET))(this, GEJCKFFFKCL);
	}

	::System::Void KEFMBIMDCNB(::MoleMole::Config::PhotoCameraModeOverride* EKPAIOGJEPO)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::PhotoCameraModeOverride*))((::PBYTE)hIl2Cpp + HJAKDJAGCNH_KEFMBIMDCNB_OFFSET))(this, EKPAIOGJEPO);
	}

	::System::Void CLPNEPAFCNK(::System::Single PMNLNNGEIFM)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + HJAKDJAGCNH_CLPNEPAFCNK_OFFSET))(this, PMNLNNGEIFM);
	}

	::System::Void FNKLMHEFMHH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HJAKDJAGCNH_FNKLMHEFMHH_OFFSET))(this);
	}

	::System::Boolean DIHCGHDHPJP(::MoleMole::InputActionEvent MLNBANAGAEE)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + HJAKDJAGCNH_DIHCGHDHPJP_OFFSET))(this, MLNBANAGAEE);
	}

	::System::Void OnDrag(::UnityEngine::EventSystems::PointerEventData* DIHNFECKHMD, ::UnityEngine::Vector2 NHODGOCLALJ)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + HJAKDJAGCNH_ONDRAG_OFFSET))(this, DIHNFECKHMD, NHODGOCLALJ);
	}

	::System::Void NAMCJIPBNLE(::UnityEngine::EventSystems::PointerEventData* DIHNFECKHMD, ::System::Single HKICGJDBPDP)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*, ::System::Single))((::PBYTE)hIl2Cpp + HJAKDJAGCNH_NAMCJIPBNLE_OFFSET))(this, DIHNFECKHMD, HKICGJDBPDP);
	}

	::System::Void ELNGHFKCOHN(::System::Single HBEKKMCBGBK)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + HJAKDJAGCNH_ELNGHFKCOHN_OFFSET))(this, HBEKKMCBGBK);
	}

	::System::Single NOPBIDFAILH()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + HJAKDJAGCNH_NOPBIDFAILH_OFFSET))(this);
	}

	::System::Single ICGLKNOHEJD()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + HJAKDJAGCNH_ICGLKNOHEJD_OFFSET))(this);
	}

	::System::Single OKCBLDAJHME()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + HJAKDJAGCNH_OKCBLDAJHME_OFFSET))(this);
	}

	::System::Single ABEHJLLNFIA()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + HJAKDJAGCNH_ABEHJLLNFIA_OFFSET))(this);
	}

	::System::Single MCDOOAOOOBG()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + HJAKDJAGCNH_MCDOOAOOOBG_OFFSET))(this);
	}

	::System::Void JJNAHIBMFJB(::System::Single HBEKKMCBGBK)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + HJAKDJAGCNH_JJNAHIBMFJB_OFFSET))(this, HBEKKMCBGBK);
	}

	::System::Void EGHJAFNPFIF(::UnityEngine::Vector2 GOBICEJCOAG)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + HJAKDJAGCNH_EGHJAFNPFIF_OFFSET))(this, GOBICEJCOAG);
	}

	::System::Void BPIJLJFKDLM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HJAKDJAGCNH_BPIJLJFKDLM_OFFSET))(this);
	}

	::System::Void NMDACHDFDKC(::LKIABNLCKMK* ECMOEENIHME)
	{
		return ((::System::Void(*)(::PVOID, ::LKIABNLCKMK*))((::PBYTE)hIl2Cpp + HJAKDJAGCNH_NMDACHDFDKC_OFFSET))(this, ECMOEENIHME);
	}

	::System::Single GGLDINFGNFP()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + HJAKDJAGCNH_GGLDINFGNFP_OFFSET))(this);
	}

	::System::Void AHKPJAMCBPB(::UnityEngine::Vector2 GOBICEJCOAG)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + HJAKDJAGCNH_AHKPJAMCBPB_OFFSET))(this, GOBICEJCOAG);
	}

	::System::Single LDAHPKJOKBE()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + HJAKDJAGCNH_LDAHPKJOKBE_OFFSET))(this);
	}

	::System::Void FHJCCBLONEC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HJAKDJAGCNH_FHJCCBLONEC_OFFSET))(this);
	}

	::System::Void JCHEGPOHNJE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HJAKDJAGCNH_JCHEGPOHNJE_OFFSET))(this);
	}

	::System::Void KIJAJIHPBDL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HJAKDJAGCNH_KIJAJIHPBDL_OFFSET))(this);
	}

	::System::Single FLLCHCKINDG()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + HJAKDJAGCNH_FLLCHCKINDG_OFFSET))(this);
	}

	::System::Void BBCEAGAHFIP(::System::Single NPHOPECPHLF)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + HJAKDJAGCNH_BBCEAGAHFIP_OFFSET))(this, NPHOPECPHLF);
	}

	::System::Single HOEICALOIKM()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + HJAKDJAGCNH_HOEICALOIKM_OFFSET))(this);
	}

	::System::Void NCPOGNGCPKI(::System::Single HBEKKMCBGBK)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + HJAKDJAGCNH_NCPOGNGCPKI_OFFSET))(this, HBEKKMCBGBK);
	}

	::System::Void KDOMMHJCDMF(::UnityEngine::Vector2 GOBICEJCOAG)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + HJAKDJAGCNH_KDOMMHJCDMF_OFFSET))(this, GOBICEJCOAG);
	}

	::System::Void KHJLHJCCEKG(::UnityEngine::Vector2 GOBICEJCOAG)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + HJAKDJAGCNH_KHJLHJCCEKG_OFFSET))(this, GOBICEJCOAG);
	}

	::System::Void DHFGACNBMNK(::System::Single HBEKKMCBGBK)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + HJAKDJAGCNH_DHFGACNBMNK_OFFSET))(this, HBEKKMCBGBK);
	}

	::System::Void OHLACAGBJGB(::UnityEngine::Vector2 GOBICEJCOAG)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + HJAKDJAGCNH_OHLACAGBJGB_OFFSET))(this, GOBICEJCOAG);
	}

	::System::Single KAOENJBEMLJ()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + HJAKDJAGCNH_KAOENJBEMLJ_OFFSET))(this);
	}

	::System::ValueTuple_2<::System::Single, ::System::Single> DCEMGDKIONF()
	{
		return ((::System::ValueTuple_2<::System::Single, ::System::Single>(*)(::PVOID))((::PBYTE)hIl2Cpp + HJAKDJAGCNH_DCEMGDKIONF_OFFSET))(this);
	}

	::System::Void KNLKDOJBMKC(::System::Single HBEKKMCBGBK)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + HJAKDJAGCNH_KNLKDOJBMKC_OFFSET))(this, HBEKKMCBGBK);
	}

	::System::Void CIHIPDJJAFL(::MoleMole::Cameras::PhotoCameraConfig* EJJNGFCGNAK)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Cameras::PhotoCameraConfig*))((::PBYTE)hIl2Cpp + HJAKDJAGCNH_CIHIPDJJAFL_OFFSET))(this, EJJNGFCGNAK);
	}

	::System::Void CDPPOKOGPKB(::System::Single DMAFDMDAGKK, ::System::Single NHFLBHJHOIC)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + HJAKDJAGCNH_CDPPOKOGPKB_OFFSET))(this, DMAFDMDAGKK, NHFLBHJHOIC);
	}

	::System::Boolean LONPENDAMMJ(::PipelineCamera::WorldBasicCameraData JAEOFPHONBM, ::PipelineCamera::WorldBasicCameraData MHOGDJBBNAD)
	{
		return ((::System::Boolean(*)(::PVOID, ::PipelineCamera::WorldBasicCameraData, ::PipelineCamera::WorldBasicCameraData))((::PBYTE)hIl2Cpp + HJAKDJAGCNH_LONPENDAMMJ_OFFSET))(this, JAEOFPHONBM, MHOGDJBBNAD);
	}

	::System::Void FPDGLPBFIFJ(::UnityEngine::Vector2 GOBICEJCOAG)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + HJAKDJAGCNH_FPDGLPBFIFJ_OFFSET))(this, GOBICEJCOAG);
	}

	::System::Single IKCEEDCPEOM()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + HJAKDJAGCNH_IKCEEDCPEOM_OFFSET))(this);
	}

	::System::Void KMMBIHHLFLC(::System::Single HBEKKMCBGBK)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + HJAKDJAGCNH_KMMBIHHLFLC_OFFSET))(this, HBEKKMCBGBK);
	}

	::System::Void CJELAAPJKBH(::System::Single HBEKKMCBGBK)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + HJAKDJAGCNH_CJELAAPJKBH_OFFSET))(this, HBEKKMCBGBK);
	}

	::System::Void ADNIDKFIFFL(::UnityEngine::Vector2 GOBICEJCOAG)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + HJAKDJAGCNH_ADNIDKFIFFL_OFFSET))(this, GOBICEJCOAG);
	}

	::System::Void FLMBCNMFOGF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HJAKDJAGCNH_FLMBCNMFOGF_OFFSET))(this);
	}

	::System::Single NCDJKBPMMEJ()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + HJAKDJAGCNH_NCDJKBPMMEJ_OFFSET))(this);
	}

	::System::Void PEMLCDIODDD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HJAKDJAGCNH_PEMLCDIODDD_OFFSET))(this);
	}

	::System::Void MCNNEJLEGPF(::MoleMole::Config::UIConfigPhotoCamera* LNHPHIJFMNO)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::UIConfigPhotoCamera*))((::PBYTE)hIl2Cpp + HJAKDJAGCNH_MCNNEJLEGPF_OFFSET))(this, LNHPHIJFMNO);
	}

	::System::Void EJNFCBDJIFO(::System::Single ECMOEENIHME)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + HJAKDJAGCNH_EJNFCBDJIFO_OFFSET))(this, ECMOEENIHME);
	}

	::System::Single GJCHBIFLIKA()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + HJAKDJAGCNH_GJCHBIFLIKA_OFFSET))(this);
	}
};
