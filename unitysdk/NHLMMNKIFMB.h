#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/CameraConfigDataStacking.h"
#include "unitysdk/MoleMole/Config/ConfigDataPlayStacking.h"
#include "unitysdk/MoleMole/Config/ConfigDataPriority.h"
#include "unitysdk/MoleMole/Config/ValueVariationType.h"
#include "unitysdk/NECFCJGAJML.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class ALMMGOFACDF;
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Cameras { class CameraDataAccessor; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class AnimationCurve; }

#define NHLMMNKIFMB_ADDNGPIJOHF_OFFSET UNITYSDK_OFFSET(0xE19CD30)
#define NHLMMNKIFMB_ADJEIJPBDDN_OFFSET UNITYSDK_OFFSET(0xE19CD40)
#define NHLMMNKIFMB_AFNKMJDPILJ_OFFSET UNITYSDK_OFFSET(0xE19B3D0)
#define NHLMMNKIFMB_APEDPCPDHBE_OFFSET UNITYSDK_OFFSET(0xE19D0E0)
#define NHLMMNKIFMB_BCKCFNDOMLH_OFFSET UNITYSDK_OFFSET(0xE19CB30)
#define NHLMMNKIFMB_BNKGPOABHBA_OFFSET UNITYSDK_OFFSET(0xE19CD50)
#define NHLMMNKIFMB_CCHIJIEOINK_OFFSET UNITYSDK_OFFSET(0xE19CCE0)
#define NHLMMNKIFMB_CEPJDIIKMCG_OFFSET UNITYSDK_OFFSET(0xE19D7B0)
#define NHLMMNKIFMB_CHMOJFOBHNH_OFFSET UNITYSDK_OFFSET(0xE19B3C0)
#define NHLMMNKIFMB_DAPAACLJJHE_OFFSET UNITYSDK_OFFSET(0xE19DE00)
#define NHLMMNKIFMB_DLGJDBEOJJJ_OFFSET UNITYSDK_OFFSET(0xE19B3B0)
#define NHLMMNKIFMB_DNIJEMOHDGI_OFFSET UNITYSDK_OFFSET(0xE19CD10)
#define NHLMMNKIFMB_DOLDFMKMAFG_OFFSET UNITYSDK_OFFSET(0xE19B840)
#define NHLMMNKIFMB_DPIHOJBBGLA_OFFSET UNITYSDK_OFFSET(0xE19B4A0)
#define NHLMMNKIFMB_ECDGLKKFAAN_OFFSET UNITYSDK_OFFSET(0xE19C0B0)
#define NHLMMNKIFMB_FDALBIIBJFP_OFFSET UNITYSDK_OFFSET(0xE19D9C0)
#define NHLMMNKIFMB_FDDKGKOBOOL_OFFSET UNITYSDK_OFFSET(0xE19D630)
#define NHLMMNKIFMB_FGFOFLIMDCC_OFFSET UNITYSDK_OFFSET(0xE19D480)
#define NHLMMNKIFMB_FJOJKEAAAPF_OFFSET UNITYSDK_OFFSET(0xE19CCD0)
#define NHLMMNKIFMB_FPOJAFNFACC_OFFSET UNITYSDK_OFFSET(0xE19CCC0)
#define NHLMMNKIFMB_GFFHAMJEABP_OFFSET UNITYSDK_OFFSET(0xE19CD20)
#define NHLMMNKIFMB_GNIHOFFNLDL_OFFSET UNITYSDK_OFFSET(0xE19DAA0)
#define NHLMMNKIFMB_HFDDKMFNNEI_OFFSET UNITYSDK_OFFSET(0xE19CEE0)
#define NHLMMNKIFMB_HJGDKILLAPN_OFFSET UNITYSDK_OFFSET(0xE19D8F0)
#define NHLMMNKIFMB_HNPBEEKEDMM_OFFSET UNITYSDK_OFFSET(0xE19D9B0)
#define NHLMMNKIFMB_IEIGDAFBFCK_OFFSET UNITYSDK_OFFSET(0xE19B4E0)
#define NHLMMNKIFMB_IFONLCGFAPN_OFFSET UNITYSDK_OFFSET(0xE19DCE0)
#define NHLMMNKIFMB_IPLFJHAFPJH_OFFSET UNITYSDK_OFFSET(0xE19D680)
#define NHLMMNKIFMB_JCFJOKPIFPL_OFFSET UNITYSDK_OFFSET(0xE19D690)
#define NHLMMNKIFMB_JFICBDLMKBD_OFFSET UNITYSDK_OFFSET(0xE19DE30)
#define NHLMMNKIFMB_KCBOHJNLKIE_OFFSET UNITYSDK_OFFSET(0xE19CCF0)
#define NHLMMNKIFMB_KPHCLINKAGI_OFFSET UNITYSDK_OFFSET(0xE19D250)
#define NHLMMNKIFMB_LKAJMALAFNK_OFFSET UNITYSDK_OFFSET(0xE19C9F0)
#define NHLMMNKIFMB_LKMGBPBKLBB_OFFSET UNITYSDK_OFFSET(0xE19D040)
#define NHLMMNKIFMB_MDEKANELJDC_OFFSET UNITYSDK_OFFSET(0xE19D470)
#define NHLMMNKIFMB_MKNMGEFLBLD_OFFSET UNITYSDK_OFFSET(0xE19DE20)
#define NHLMMNKIFMB_MODMJAEONNG_OFFSET UNITYSDK_OFFSET(0xE19D050)
#define NHLMMNKIFMB_NCCNMCKAIFB_OFFSET UNITYSDK_OFFSET(0xE19D060)
#define NHLMMNKIFMB_NLLECMAHBAF_OFFSET UNITYSDK_OFFSET(0xE19D070)
#define NHLMMNKIFMB_OAIMHKGHCED_OFFSET UNITYSDK_OFFSET(0xE19DE10)
#define NHLMMNKIFMB_OFGCDKHAAOF_OFFSET UNITYSDK_OFFSET(0xE19DB60)
#define NHLMMNKIFMB_OOGHGHCKJMH_OFFSET UNITYSDK_OFFSET(0xE19B960)
#define NHLMMNKIFMB_PAFFHKDNPKF_OFFSET UNITYSDK_OFFSET(0xE19BAD0)
#define NHLMMNKIFMB_PCFONNNDKNF_OFFSET UNITYSDK_OFFSET(0xE19CD00)
#define NHLMMNKIFMB_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0xE19B420)
#define NHLMMNKIFMB_PLEBJJLHLIG_OFFSET UNITYSDK_OFFSET(0xE19C9A0)
#define NHLMMNKIFMB_PLPONJAKNEB_OFFSET UNITYSDK_OFFSET(0xE19C7F0)
#define NHLMMNKIFMB_TOSTRING_OFFSET UNITYSDK_OFFSET(0xE19A390)
#define NHLMMNKIFMB__CTOR_OFFSET UNITYSDK_OFFSET(0xE19B380)

inline static constexpr unsigned int NHLMMNKIFMB_TypeDefinitionIndex = 71030;

class NHLMMNKIFMB : public ::System::Object
{
public:
	::UnityEngine::AnimationCurve* EJJCIOBPKEK; // 0x10
	::System::String* OOJFGFNNOPH; // 0x18
	::MoleMole::Battle::Entity* PIIOPOOEHEL; // 0x20
	::System::Action_2<::NECFCJGAJML, ::NECFCJGAJML>* CHPMFIIBNAC; // 0x28
	::ALMMGOFACDF* BGIFONKCDEK; // 0x30
	::UnityEngine::AnimationCurve* KGMCDPCCOFE; // 0x38
	::System::Collections::Generic::List_1<::System::String*>* CLAADKLGNFG; // 0x40
	::System::Single _EDHKDMHCDOJ_k__BackingField; // 0x48
	::System::Single EIEMIJEMGJH; // 0x4C
	::System::Single BCELKHBKLJE; // 0x50
	::System::Single CDPONFLALME; // 0x54
	::MoleMole::Config::ConfigDataPriority PFDADPAOAEK; // 0x58
	::System::Single DFCBGBNMFMM; // 0x5C
	::System::Single _CLIDDEOGJPM_k__BackingField; // 0x60
	::MoleMole::Config::ValueVariationType NGCECIOMIGK; // 0x64
	::MoleMole::Config::CameraConfigDataStacking AGJAPLENLIK; // 0x68
	::System::Single MNCCIMIJAEA; // 0x6C
	::System::Int32 DJKOFJDOCJJ; // 0x70
	::System::Single _MGEDPEJELBI_k__BackingField; // 0x74
	::System::Single _IODBDOGIPME_k__BackingField; // 0x78
	::System::Int32 FCNFEKKEEIK; // 0x7C
	::System::Single KIHCHPOHCCF; // 0x80
	::System::Single OHPJMMIGOOP; // 0x84
	::System::Single _NOFKAOKAMDD_k__BackingField; // 0x88
	::System::Single JOFGIANGHMK; // 0x8C
	::System::Int32 FPPDDNBMEEO; // 0x90
	::System::Boolean _GKPDAJADEHH_k__BackingField; // 0x94
	::System::Boolean LLLCIPMAKMC; // 0x95
	::System::Boolean MCMFEKBLKDJ; // 0x96
	::System::Boolean MDHMIJKDBCP; // 0x97
	::UnityEngine::Vector3 IDJLGNAOKKN; // 0x98
	::System::Single _PACPHLKJGMP_k__BackingField; // 0xA4
	::MoleMole::Config::ConfigDataPlayStacking HGJGKFEKNFL; // 0xA8
	::System::Single _JGAJLLNIADM_k__BackingField; // 0xAC
	::System::Single KFMDNFACOML; // 0xB0
	::System::Single EODNNKPHFLK; // 0xB4
	::System::Single CKCEPMEDJEC; // 0xB8
	::System::Single NNKACMFCEOM; // 0xBC
	::System::Single CGIIKKHHELM; // 0xC0
	::System::Single _MPHEBPGBMCD_k__BackingField; // 0xC4
	::NECFCJGAJML MBBGIFIEOLK; // 0xC8
	::System::Boolean MHHEMPMIFFK; // 0xC9
	::System::Boolean GJNPOACCHEJ; // 0xCA
	::System::Boolean CMCDLGGGEMG; // 0xCB
	::System::Single _MPFBHNEHPAH_k__BackingField; // 0xCC
	::System::Single LLHADIFDNDH; // 0xD0
	::System::Single MKNGGCNCHNK; // 0xD4
	::System::Single ANOGMOOAJFF; // 0xD8
	::System::Boolean OOJMPMOHEMB; // 0xDC
	::System::Boolean EJMAJAPJMAA; // 0xDD
	::System::Boolean EDMBJOGCKNN; // 0xDE
	::System::Boolean GHGNMFNFHLL; // 0xDF

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NHLMMNKIFMB__CTOR_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NHLMMNKIFMB_TOSTRING_OFFSET))(this);
	}

	::System::Single DLGJDBEOJJJ()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + NHLMMNKIFMB_DLGJDBEOJJJ_OFFSET))(this);
	}

	::System::Void CHMOJFOBHNH(::System::Single EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NHLMMNKIFMB_CHMOJFOBHNH_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void AFNKMJDPILJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NHLMMNKIFMB_AFNKMJDPILJ_OFFSET))(this);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NHLMMNKIFMB_PHOADBJGFBE_OFFSET))(this);
	}

	::System::String* DPIHOJBBGLA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NHLMMNKIFMB_DPIHOJBBGLA_OFFSET))(this);
	}

	::System::Void IEIGDAFBFCK(::System::Single DMPKFFLMBJB, ::System::Single EAPPIACFNMI, ::System::Single CMKMGLMCGLK, ::System::Single PAOCJLPJACK, ::UnityEngine::Vector3 PPDCFCNFAEK)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + NHLMMNKIFMB_IEIGDAFBFCK_OFFSET))(this, DMPKFFLMBJB, EAPPIACFNMI, CMKMGLMCGLK, PAOCJLPJACK, PPDCFCNFAEK);
	}

	::UnityEngine::Vector3 ECDGLKKFAAN(::MoleMole::Cameras::CameraDataAccessor* LJBPECKCCEA, ::System::Boolean GHGNMFNFHLL, ::System::Single ICDOLABJELF, ::System::Single BAOPKMABCOP, ::System::Single KEPNAOGDIHL)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::MoleMole::Cameras::CameraDataAccessor*, ::System::Boolean, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + NHLMMNKIFMB_ECDGLKKFAAN_OFFSET))(this, LJBPECKCCEA, GHGNMFNFHLL, ICDOLABJELF, BAOPKMABCOP, KEPNAOGDIHL);
	}

	::System::Void PLPONJAKNEB(::System::Single PMNLNNGEIFM, ::MoleMole::Cameras::CameraDataAccessor* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::MoleMole::Cameras::CameraDataAccessor*))((::PBYTE)hIl2Cpp + NHLMMNKIFMB_PLPONJAKNEB_OFFSET))(this, PMNLNNGEIFM, LJBPECKCCEA);
	}

	::System::Void FPOJAFNFACC(::System::Single EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NHLMMNKIFMB_FPOJAFNFACC_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void DOLDFMKMAFG(::System::Single GAMDAPCCHMA, ::System::Single BLPMDDPFMMF, ::UnityEngine::Vector3 HKNLKPLBKCK, ::System::Single EDDKBJJLDOE, ::System::Single GJCNHFEKIAF)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::UnityEngine::Vector3, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + NHLMMNKIFMB_DOLDFMKMAFG_OFFSET))(this, GAMDAPCCHMA, BLPMDDPFMMF, HKNLKPLBKCK, EDDKBJJLDOE, GJCNHFEKIAF);
	}

	::System::Void FJOJKEAAAPF(::System::Single EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NHLMMNKIFMB_FJOJKEAAAPF_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Boolean PLEBJJLHLIG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NHLMMNKIFMB_PLEBJJLHLIG_OFFSET))(this);
	}

	::System::Void CCHIJIEOINK(::System::Single EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NHLMMNKIFMB_CCHIJIEOINK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Single KCBOHJNLKIE()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + NHLMMNKIFMB_KCBOHJNLKIE_OFFSET))(this);
	}

	::System::Void PCFONNNDKNF(::System::Single EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NHLMMNKIFMB_PCFONNNDKNF_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Single DNIJEMOHDGI()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + NHLMMNKIFMB_DNIJEMOHDGI_OFFSET))(this);
	}

	::System::Boolean GFFHAMJEABP()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NHLMMNKIFMB_GFFHAMJEABP_OFFSET))(this);
	}

	::System::Single ADDNGPIJOHF()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + NHLMMNKIFMB_ADDNGPIJOHF_OFFSET))(this);
	}

	::System::Void ADJEIJPBDDN(::System::Single EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NHLMMNKIFMB_ADJEIJPBDDN_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void BNKGPOABHBA(::MoleMole::Cameras::CameraDataAccessor* LJBPECKCCEA, ::System::Single KGFBNDMCFKH)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Cameras::CameraDataAccessor*, ::System::Single))((::PBYTE)hIl2Cpp + NHLMMNKIFMB_BNKGPOABHBA_OFFSET))(this, LJBPECKCCEA, KGFBNDMCFKH);
	}

	::System::Single LKAJMALAFNK()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + NHLMMNKIFMB_LKAJMALAFNK_OFFSET))(this);
	}

	::System::Void PAFFHKDNPKF(::NECFCJGAJML JBAAOKJHJMH, ::System::Boolean ONAEFLNLPEE)
	{
		return ((::System::Void(*)(::PVOID, ::NECFCJGAJML, ::System::Boolean))((::PBYTE)hIl2Cpp + NHLMMNKIFMB_PAFFHKDNPKF_OFFSET))(this, JBAAOKJHJMH, ONAEFLNLPEE);
	}

	::System::Void LKMGBPBKLBB(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NHLMMNKIFMB_LKMGBPBKLBB_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void MODMJAEONNG(::System::Single EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NHLMMNKIFMB_MODMJAEONNG_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Single NCCNMCKAIFB()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + NHLMMNKIFMB_NCCNMCKAIFB_OFFSET))(this);
	}

	::System::Void NLLECMAHBAF(::System::Single PMNLNNGEIFM)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NHLMMNKIFMB_NLLECMAHBAF_OFFSET))(this, PMNLNNGEIFM);
	}

	::System::Boolean KPHCLINKAGI()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NHLMMNKIFMB_KPHCLINKAGI_OFFSET))(this);
	}

	static ::System::Single OOGHGHCKJMH()
	{
		return ((::System::Single(*)())((::PBYTE)hIl2Cpp + NHLMMNKIFMB_OOGHGHCKJMH_OFFSET))();
	}

	::System::Void APEDPCPDHBE(::System::Single KGFBNDMCFKH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NHLMMNKIFMB_APEDPCPDHBE_OFFSET))(this, KGFBNDMCFKH);
	}

	::System::Single MDEKANELJDC()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + NHLMMNKIFMB_MDEKANELJDC_OFFSET))(this);
	}

	::System::Single FGFOFLIMDCC(::System::Single PMNLNNGEIFM, ::MoleMole::Cameras::CameraDataAccessor* LJBPECKCCEA)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single, ::MoleMole::Cameras::CameraDataAccessor*))((::PBYTE)hIl2Cpp + NHLMMNKIFMB_FGFOFLIMDCC_OFFSET))(this, PMNLNNGEIFM, LJBPECKCCEA);
	}

	::System::Boolean FDDKGKOBOOL()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NHLMMNKIFMB_FDDKGKOBOOL_OFFSET))(this);
	}

	::System::Single IPLFJHAFPJH()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + NHLMMNKIFMB_IPLFJHAFPJH_OFFSET))(this);
	}

	::System::Void JCFJOKPIFPL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NHLMMNKIFMB_JCFJOKPIFPL_OFFSET))(this);
	}

	::System::Void CEPJDIIKMCG(::MoleMole::Battle::Entity* HOLFNDIMGJJ)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + NHLMMNKIFMB_CEPJDIIKMCG_OFFSET))(this, HOLFNDIMGJJ);
	}

	::System::Void HJGDKILLAPN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NHLMMNKIFMB_HJGDKILLAPN_OFFSET))(this);
	}

	::System::Void HNPBEEKEDMM(::System::Single EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NHLMMNKIFMB_HNPBEEKEDMM_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void FDALBIIBJFP(::MoleMole::Cameras::CameraDataAccessor* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Cameras::CameraDataAccessor*))((::PBYTE)hIl2Cpp + NHLMMNKIFMB_FDALBIIBJFP_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void BCKCFNDOMLH(::System::Single PMNLNNGEIFM, ::MoleMole::Cameras::CameraDataAccessor* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::MoleMole::Cameras::CameraDataAccessor*))((::PBYTE)hIl2Cpp + NHLMMNKIFMB_BCKCFNDOMLH_OFFSET))(this, PMNLNNGEIFM, LJBPECKCCEA);
	}

	::System::Void DAPAACLJJHE(::System::Single EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NHLMMNKIFMB_DAPAACLJJHE_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Single IFONLCGFAPN(::System::Single PMNLNNGEIFM, ::MoleMole::Cameras::CameraDataAccessor* LJBPECKCCEA)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single, ::MoleMole::Cameras::CameraDataAccessor*))((::PBYTE)hIl2Cpp + NHLMMNKIFMB_IFONLCGFAPN_OFFSET))(this, PMNLNNGEIFM, LJBPECKCCEA);
	}

	::System::Single OAIMHKGHCED()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + NHLMMNKIFMB_OAIMHKGHCED_OFFSET))(this);
	}

	::System::Single HFDDKMFNNEI(::MoleMole::Cameras::CameraDataAccessor* LJBPECKCCEA)
	{
		return ((::System::Single(*)(::PVOID, ::MoleMole::Cameras::CameraDataAccessor*))((::PBYTE)hIl2Cpp + NHLMMNKIFMB_HFDDKMFNNEI_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Single OFGCDKHAAOF(::System::Single PMNLNNGEIFM, ::MoleMole::Cameras::CameraDataAccessor* LJBPECKCCEA)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single, ::MoleMole::Cameras::CameraDataAccessor*))((::PBYTE)hIl2Cpp + NHLMMNKIFMB_OFGCDKHAAOF_OFFSET))(this, PMNLNNGEIFM, LJBPECKCCEA);
	}

	::System::Single MKNMGEFLBLD()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + NHLMMNKIFMB_MKNMGEFLBLD_OFFSET))(this);
	}

	::System::Boolean JFICBDLMKBD()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NHLMMNKIFMB_JFICBDLMKBD_OFFSET))(this);
	}

	::System::Single GNIHOFFNLDL(::System::Single PMNLNNGEIFM)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NHLMMNKIFMB_GNIHOFFNLDL_OFFSET))(this, PMNLNNGEIFM);
	}
};
