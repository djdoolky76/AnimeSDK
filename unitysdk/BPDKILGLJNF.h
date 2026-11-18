#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BPDKILGLJNF_GHKFOCFBAOM.h"
#include "unitysdk/JIDGAGGLMNM.h"
#include "unitysdk/MoleMole/CinemaCameraPosEnum.h"
#include "unitysdk/MoleMole/UICameraAtom.h"
#include "unitysdk/NIKEPBMMCAM.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/IMGOEEGCILO.h"
#include "unitysdk/MoleMole/CinemaSinglePushPullParamsStruct.h"

class GHICACFMBNP;
class MCEOPOKPJCD;
class NDJMMOGDHMK;
class PCCLPFJOMMB;
namespace MoleMole { class ConfigUICinema; }
namespace MoleMole { class UICinemaPlayPageController; }
namespace MoleMole::Config { class ConfigCameraNoise; }
namespace MoleMole::Config { class ConfigHollowCameraShake; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System { template <typename T> class Func_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class Camera; }

#define BPDKILGLJNF_ADGPMGIONDE_OFFSET UNITYSDK_OFFSET(0x14C5C490)
#define BPDKILGLJNF_AIJCAPGMLDO_OFFSET UNITYSDK_OFFSET(0x14C59260)
#define BPDKILGLJNF_BBOMJDBNHIC_OFFSET UNITYSDK_OFFSET(0x14C5CF30)
#define BPDKILGLJNF_BEPPCHEDPGK_OFFSET UNITYSDK_OFFSET(0x14C5B830)
#define BPDKILGLJNF_BPJHODOCDGO_OFFSET UNITYSDK_OFFSET(0x14C5B480)
#define BPDKILGLJNF_CAKBEHMCOIH_OFFSET UNITYSDK_OFFSET(0x14C59C00)
#define BPDKILGLJNF_CDBKBLNPFKA_OFFSET UNITYSDK_OFFSET(0x14C5BDC0)
#define BPDKILGLJNF_CEFCNCHMDKK_OFFSET UNITYSDK_OFFSET(0x14C58FA0)
#define BPDKILGLJNF_EADHHAGEHFO_OFFSET UNITYSDK_OFFSET(0x14C5B2F0)
#define BPDKILGLJNF_EIHLPEAIFFA_OFFSET UNITYSDK_OFFSET(0x14C5CB30)
#define BPDKILGLJNF_ENDKEJALFMH_OFFSET UNITYSDK_OFFSET(0x14C5B790)
#define BPDKILGLJNF_FBDDALGEEMK_OFFSET UNITYSDK_OFFSET(0x14C5CD20)
#define BPDKILGLJNF_FJBEELNGDIH_OFFSET UNITYSDK_OFFSET(0x14C5CFF0)
#define BPDKILGLJNF_FLIIMHGOADH_OFFSET UNITYSDK_OFFSET(0x14C58B30)
#define BPDKILGLJNF_FMMNCIOJNFP_OFFSET UNITYSDK_OFFSET(0x14C5C680)
#define BPDKILGLJNF_GGJBLJOHFFP_OFFSET UNITYSDK_OFFSET(0x14C5C9A0)
#define BPDKILGLJNF_GNGOLCIDDIF_OFFSET UNITYSDK_OFFSET(0x14C5B370)
#define BPDKILGLJNF_HBLGDKFCCLP_OFFSET UNITYSDK_OFFSET(0x14C5AB10)
#define BPDKILGLJNF_HKFIJALPJEK_OFFSET UNITYSDK_OFFSET(0x14C5A2C0)
#define BPDKILGLJNF_IMOFJFIHFED_OFFSET UNITYSDK_OFFSET(0x14C5A690)
#define BPDKILGLJNF_JFHOBAOPKLE_OFFSET UNITYSDK_OFFSET(0x14C5C0C0)
#define BPDKILGLJNF_JJFIKMFFCPG_OFFSET UNITYSDK_OFFSET(0x14C5C200)
#define BPDKILGLJNF_JOIFDHPFMMF_OFFSET UNITYSDK_OFFSET(0x14C5B990)
#define BPDKILGLJNF_KCHCDNMMKHP_OFFSET UNITYSDK_OFFSET(0x14C5D0A0)
#define BPDKILGLJNF_KCJCGHJBEDA_OFFSET UNITYSDK_OFFSET(0x14C5C170)
#define BPDKILGLJNF_KFFDHLGMALK_OFFSET UNITYSDK_OFFSET(0x14C5C120)
#define BPDKILGLJNF_KIGIGAGKFLO_OFFSET UNITYSDK_OFFSET(0x14C59580)
#define BPDKILGLJNF_KJHAAONMAJA_OFFSET UNITYSDK_OFFSET(0x14C5AFE0)
#define BPDKILGLJNF_KLACMDIJGGJ_OFFSET UNITYSDK_OFFSET(0x14C59040)
#define BPDKILGLJNF_KLBLILNEJBH_OFFSET UNITYSDK_OFFSET(0x14C5ADD0)
#define BPDKILGLJNF_KNHIPNDIPFL_OFFSET UNITYSDK_OFFSET(0x14C5C4E0)
#define BPDKILGLJNF_LIONKJMGJEM_OFFSET UNITYSDK_OFFSET(0x14C5BE40)
#define BPDKILGLJNF_MEABFHNDJAP_OFFSET UNITYSDK_OFFSET(0x14C5A420)
#define BPDKILGLJNF_NCPPNHIPDKI_OFFSET UNITYSDK_OFFSET(0x14C59BA0)
#define BPDKILGLJNF_OCLLPCHBDGN_OFFSET UNITYSDK_OFFSET(0x14C5A490)
#define BPDKILGLJNF_OGBLNCFOMGF_OFFSET UNITYSDK_OFFSET(0x14C59270)
#define BPDKILGLJNF_OKJCHFGIKBH_OFFSET UNITYSDK_OFFSET(0x14C5B080)
#define BPDKILGLJNF_PBNILIAKGEB_OFFSET UNITYSDK_OFFSET(0x14C5CAA0)
#define BPDKILGLJNF_PKAKEEDFCDG_OFFSET UNITYSDK_OFFSET(0x14C5C1F0)
#define BPDKILGLJNF_PNJDJNHFEFO_OFFSET UNITYSDK_OFFSET(0x14C591E0)
#define BPDKILGLJNF_PONACLLEPGB_OFFSET UNITYSDK_OFFSET(0x14C58AE0)
#define BPDKILGLJNF__CTOR_OFFSET UNITYSDK_OFFSET(0x14C58A20)

inline static constexpr unsigned int BPDKILGLJNF_TypeDefinitionIndex = 50583;

class BPDKILGLJNF : public ::System::Object
{
public:
	::System::Action* EHLNOOHLECM; // 0x10
	::UnityEngine::AnimationCurve* DKFKCCOCNPH; // 0x18
	::System::Func_1<::MoleMole::UICameraAtom>* CFDKIKFJOEG; // 0x20
	::System::Collections::Generic::List_1<::PCCLPFJOMMB*>* ELJGJLPPEGN; // 0x28
	::MoleMole::Config::ConfigCameraNoise* HHFGHKCHHIN; // 0x30
	::UnityEngine::AnimationCurve* GJHFIMFEJMM; // 0x38
	::NDJMMOGDHMK* OPOLMJLMHCD; // 0x40
	::System::Action* ALHPCLAJJPE; // 0x48
	::GHICACFMBNP* LOBDJHGKIIF; // 0x50
	::MoleMole::UICinemaPlayPageController* JGFKBBFIPJF; // 0x58
	::System::Action_1<::MoleMole::UICameraAtom>* HJECKFBBMNM; // 0x60
	::MCEOPOKPJCD* CADAKNLILDN; // 0x68
	::System::Single LMFPBKOAOAI; // 0x70
	::System::Single JECLCOGANON; // 0x74
	::JIDGAGGLMNM EEMOPKCLEGM; // 0x78
	::System::Single CLJNOHDLMLO; // 0x7C
	::System::Single MJCJODNEHCJ; // 0x80
	::BPDKILGLJNF_GHKFOCFBAOM OEIENBOFNMC; // 0x84
	::NIKEPBMMCAM IIHGNBNLLNG; // 0xA4

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BPDKILGLJNF__CTOR_OFFSET))(this);
	}

	::System::Void PONACLLEPGB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BPDKILGLJNF_PONACLLEPGB_OFFSET))(this);
	}

	::System::Void CEFCNCHMDKK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BPDKILGLJNF_CEFCNCHMDKK_OFFSET))(this);
	}

	::System::Void KLACMDIJGGJ(::System::Collections::Generic::List_1<::System::Int32>* DPMCIDOPNBN, ::System::Collections::Generic::List_1<::System::Single>* KDEFBFFHIIM, ::System::Single AFCMMAOGIDH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Int32>*, ::System::Collections::Generic::List_1<::System::Single>*, ::System::Single))((::PBYTE)hIl2Cpp + BPDKILGLJNF_KLACMDIJGGJ_OFFSET))(this, DPMCIDOPNBN, KDEFBFFHIIM, AFCMMAOGIDH);
	}

	::System::Void AIJCAPGMLDO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BPDKILGLJNF_AIJCAPGMLDO_OFFSET))(this);
	}

	::System::Void FLIIMHGOADH(::JIDGAGGLMNM EEMOPKCLEGM)
	{
		return ((::System::Void(*)(::PVOID, ::JIDGAGGLMNM))((::PBYTE)hIl2Cpp + BPDKILGLJNF_FLIIMHGOADH_OFFSET))(this, EEMOPKCLEGM);
	}

	::System::Boolean HKFIJALPJEK()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BPDKILGLJNF_HKFIJALPJEK_OFFSET))(this);
	}

	::System::Void MEABFHNDJAP(::System::String* BIEDEFCGJHP)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + BPDKILGLJNF_MEABFHNDJAP_OFFSET))(this, BIEDEFCGJHP);
	}

	::System::Void IMOFJFIHFED(::GHICACFMBNP* PHGBOCIDLEI, ::MoleMole::Config::ConfigHollowCameraShake* BGBCNLEBGEL, ::System::Boolean HAFDIMGJBHC)
	{
		return ((::System::Void(*)(::PVOID, ::GHICACFMBNP*, ::MoleMole::Config::ConfigHollowCameraShake*, ::System::Boolean))((::PBYTE)hIl2Cpp + BPDKILGLJNF_IMOFJFIHFED_OFFSET))(this, PHGBOCIDLEI, BGBCNLEBGEL, HAFDIMGJBHC);
	}

	::System::Void HBLGDKFCCLP(::MoleMole::UICameraAtom PGDMJGFPANJ)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UICameraAtom))((::PBYTE)hIl2Cpp + BPDKILGLJNF_HBLGDKFCCLP_OFFSET))(this, PGDMJGFPANJ);
	}

	::System::Void KLBLILNEJBH(::MoleMole::Config::ConfigCameraNoise* KNMLJGINGBA, ::System::Single GJCIGEHBHNB, ::System::Single BBPHDFLJMEA, ::UnityEngine::AnimationCurve* DHINBENGKGK)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigCameraNoise*, ::System::Single, ::System::Single, ::UnityEngine::AnimationCurve*))((::PBYTE)hIl2Cpp + BPDKILGLJNF_KLBLILNEJBH_OFFSET))(this, KNMLJGINGBA, GJCIGEHBHNB, BBPHDFLJMEA, DHINBENGKGK);
	}

	::System::Void KJHAAONMAJA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BPDKILGLJNF_KJHAAONMAJA_OFFSET))(this);
	}

	::System::Void OKJCHFGIKBH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BPDKILGLJNF_OKJCHFGIKBH_OFFSET))(this);
	}

	::MoleMole::UICameraAtom GNGOLCIDDIF()
	{
		return ((::MoleMole::UICameraAtom(*)(::PVOID))((::PBYTE)hIl2Cpp + BPDKILGLJNF_GNGOLCIDDIF_OFFSET))(this);
	}

	::System::Void PNJDJNHFEFO(::MCEOPOKPJCD* DEGJBKMLCHP)
	{
		return ((::System::Void(*)(::PVOID, ::MCEOPOKPJCD*))((::PBYTE)hIl2Cpp + BPDKILGLJNF_PNJDJNHFEFO_OFFSET))(this, DEGJBKMLCHP);
	}

	::System::Void ENDKEJALFMH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BPDKILGLJNF_ENDKEJALFMH_OFFSET))(this);
	}

	::System::Void JOIFDHPFMMF(::MoleMole::CinemaCameraPosEnum FDAOLKDNALL, ::System::Boolean JPFBKJPJOFF, ::System::Boolean NPPMJEIPMFC)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::CinemaCameraPosEnum, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + BPDKILGLJNF_JOIFDHPFMMF_OFFSET))(this, FDAOLKDNALL, JPFBKJPJOFF, NPPMJEIPMFC);
	}

	::System::Void JFHOBAOPKLE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BPDKILGLJNF_JFHOBAOPKLE_OFFSET))(this);
	}

	::System::Void KFFDHLGMALK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BPDKILGLJNF_KFFDHLGMALK_OFFSET))(this);
	}

	::System::Void KCJCGHJBEDA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BPDKILGLJNF_KCJCGHJBEDA_OFFSET))(this);
	}

	::System::Void PKAKEEDFCDG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BPDKILGLJNF_PKAKEEDFCDG_OFFSET))(this);
	}

	::MoleMole::UICameraAtom BPJHODOCDGO()
	{
		return ((::MoleMole::UICameraAtom(*)(::PVOID))((::PBYTE)hIl2Cpp + BPDKILGLJNF_BPJHODOCDGO_OFFSET))(this);
	}

	::System::Void JJFIKMFFCPG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BPDKILGLJNF_JJFIKMFFCPG_OFFSET))(this);
	}

	::System::Void ADGPMGIONDE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BPDKILGLJNF_ADGPMGIONDE_OFFSET))(this);
	}

	::System::Void OGBLNCFOMGF(::MoleMole::ConfigUICinema* PGHICALGPKH)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::ConfigUICinema*))((::PBYTE)hIl2Cpp + BPDKILGLJNF_OGBLNCFOMGF_OFFSET))(this, PGHICALGPKH);
	}

	::System::Void KIGIGAGKFLO(::JIDGAGGLMNM ONNJDPJNGOB, ::UnityEngine::AnimationCurve* FAJHPKBELMF)
	{
		return ((::System::Void(*)(::PVOID, ::JIDGAGGLMNM, ::UnityEngine::AnimationCurve*))((::PBYTE)hIl2Cpp + BPDKILGLJNF_KIGIGAGKFLO_OFFSET))(this, ONNJDPJNGOB, FAJHPKBELMF);
	}

	::System::Void LIONKJMGJEM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BPDKILGLJNF_LIONKJMGJEM_OFFSET))(this);
	}

	::System::Void NCPPNHIPDKI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BPDKILGLJNF_NCPPNHIPDKI_OFFSET))(this);
	}

	::System::Void KNHIPNDIPFL(::System::Collections::Generic::List_1<::System::Int32>* DPMCIDOPNBN, ::System::Collections::Generic::List_1<::System::Single>* KDEFBFFHIIM, ::System::Single AFCMMAOGIDH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Int32>*, ::System::Collections::Generic::List_1<::System::Single>*, ::System::Single))((::PBYTE)hIl2Cpp + BPDKILGLJNF_KNHIPNDIPFL_OFFSET))(this, DPMCIDOPNBN, KDEFBFFHIIM, AFCMMAOGIDH);
	}

	::System::Void FMMNCIOJNFP(::System::Boolean ABAMLCNDAJF)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + BPDKILGLJNF_FMMNCIOJNFP_OFFSET))(this, ABAMLCNDAJF);
	}

	::System::Void PBNILIAKGEB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BPDKILGLJNF_PBNILIAKGEB_OFFSET))(this);
	}

	::System::Void CAKBEHMCOIH(::JIDGAGGLMNM ONNJDPJNGOB, ::MoleMole::CinemaSinglePushPullParamsStruct GKGDONMNBOM)
	{
		return ((::System::Void(*)(::PVOID, ::JIDGAGGLMNM, ::MoleMole::CinemaSinglePushPullParamsStruct))((::PBYTE)hIl2Cpp + BPDKILGLJNF_CAKBEHMCOIH_OFFSET))(this, ONNJDPJNGOB, GKGDONMNBOM);
	}

	::System::Void OCLLPCHBDGN(::System::String* BIEDEFCGJHP)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + BPDKILGLJNF_OCLLPCHBDGN_OFFSET))(this, BIEDEFCGJHP);
	}

	::System::Void FBDDALGEEMK(::IMGOEEGCILO HNOPAJLDCFB)
	{
		return ((::System::Void(*)(::PVOID, ::IMGOEEGCILO))((::PBYTE)hIl2Cpp + BPDKILGLJNF_FBDDALGEEMK_OFFSET))(this, HNOPAJLDCFB);
	}

	::System::Void CDBKBLNPFKA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BPDKILGLJNF_CDBKBLNPFKA_OFFSET))(this);
	}

	::System::Void BEPPCHEDPGK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BPDKILGLJNF_BEPPCHEDPGK_OFFSET))(this);
	}

	::System::Void BBOMJDBNHIC(::MoleMole::UICinemaPlayPageController* JGFKBBFIPJF)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UICinemaPlayPageController*))((::PBYTE)hIl2Cpp + BPDKILGLJNF_BBOMJDBNHIC_OFFSET))(this, JGFKBBFIPJF);
	}

	::System::Void GGJBLJOHFFP(::UnityEngine::Camera* LLFDABJAHII)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + BPDKILGLJNF_GGJBLJOHFFP_OFFSET))(this, LLFDABJAHII);
	}

	::System::Void EADHHAGEHFO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BPDKILGLJNF_EADHHAGEHFO_OFFSET))(this);
	}

	::MoleMole::UICameraAtom FJBEELNGDIH()
	{
		return ((::MoleMole::UICameraAtom(*)(::PVOID))((::PBYTE)hIl2Cpp + BPDKILGLJNF_FJBEELNGDIH_OFFSET))(this);
	}

	::System::Void EIHLPEAIFFA(::MoleMole::Config::ConfigHollowCameraShake* BGBCNLEBGEL, ::System::Single FBNIOMKFDAM)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigHollowCameraShake*, ::System::Single))((::PBYTE)hIl2Cpp + BPDKILGLJNF_EIHLPEAIFFA_OFFSET))(this, BGBCNLEBGEL, FBNIOMKFDAM);
	}

	::System::Void KCHCDNMMKHP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BPDKILGLJNF_KCHCDNMMKHP_OFFSET))(this);
	}
};
