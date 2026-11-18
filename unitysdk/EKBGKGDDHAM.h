#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NLLJDOHBCJA.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/CKMMPOGHDFI.h"
#include "unitysdk/DCBBMOHJDOJ.h"
#include "unitysdk/DNPKHODEMFG_1.h"
#include "unitysdk/Foundation/Unreal/FTransform.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/IKOBMGNNNNK.h"
#include "unitysdk/JOHNONOOOCH.h"
#include "unitysdk/MENGACGOHOG.h"
#include "unitysdk/MoleMole/Config/ConfigCircularSector3D.h"
#include "unitysdk/MoleMole/Config/ConfigInteractionFanCylinder.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/NHKLBKEABJB.h"
#include "unitysdk/NKGKDNFNPIN.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/System/ValueTuple_3.h"

class BLCIDFMMHIL;
class CAFBIOHKMHB;
class CIIJJIJBFPN;
class ENGKPGFGGLM;
class IAGLACHHAPE;
class ILGGMFDKGPC;
class IMJOHEPEJHK;
class MBFJNJKKBGM;
class NAABJCEJKAK;
class NJGDKNIDMMC;
class OEGFJABLDPO;
namespace MoleMole::Battle { class Entity; }
namespace System { class String; }
namespace UnityEngine { class Collider; }

#define EKBGKGDDHAM_ACAHFMEHPGG_OFFSET UNITYSDK_OFFSET(0x11A95DF0)
#define EKBGKGDDHAM_AEKFIPDNKCC_OFFSET UNITYSDK_OFFSET(0x11A95580)
#define EKBGKGDDHAM_AHDPEEAJKDE_OFFSET UNITYSDK_OFFSET(0x11A944D0)
#define EKBGKGDDHAM_AHLJPFDIOFF_OFFSET UNITYSDK_OFFSET(0x11A95D30)
#define EKBGKGDDHAM_ALIEEDNPKPA_OFFSET UNITYSDK_OFFSET(0x11A954C0)
#define EKBGKGDDHAM_ALONMDAJOIP_OFFSET UNITYSDK_OFFSET(0x11A91670)
#define EKBGKGDDHAM_APCJCKKAEHP_OFFSET UNITYSDK_OFFSET(0x11A92270)
#define EKBGKGDDHAM_BCFHCGAIHAH_OFFSET UNITYSDK_OFFSET(0x11A94F70)
#define EKBGKGDDHAM_BCIEBENNIHN_OFFSET UNITYSDK_OFFSET(0x11A93140)
#define EKBGKGDDHAM_BNOHEDHHFKB_OFFSET UNITYSDK_OFFSET(0x11A93B80)
#define EKBGKGDDHAM_BOJOHDJODNL_OFFSET UNITYSDK_OFFSET(0x11A930C0)
#define EKBGKGDDHAM_BOKIDPBPNAE_OFFSET UNITYSDK_OFFSET(0x11A96460)
#define EKBGKGDDHAM_CPBAEBELCAB_OFFSET UNITYSDK_OFFSET(0x11A93B90)
#define EKBGKGDDHAM_DPJMHHEAHHP_OFFSET UNITYSDK_OFFSET(0x11A93BA0)
#define EKBGKGDDHAM_EBOAMJBNALK_OFFSET UNITYSDK_OFFSET(0x11A93F30)
#define EKBGKGDDHAM_FDHLKGCINMO_OFFSET UNITYSDK_OFFSET(0x11A957D0)
#define EKBGKGDDHAM_FJCDFEBEGGO_OFFSET UNITYSDK_OFFSET(0x11A91AA0)
#define EKBGKGDDHAM_FLGNDPKLOLJ_OFFSET UNITYSDK_OFFSET(0x11A93370)
#define EKBGKGDDHAM_GMBDELLIELC_OFFSET UNITYSDK_OFFSET(0x11A95F80)
#define EKBGKGDDHAM_GNPPAFCGMGO_OFFSET UNITYSDK_OFFSET(0x11A91C00)
#define EKBGKGDDHAM_HBGJALDIFJH_1_OFFSET UNITYSDK_OFFSET(0x11A936E0)
#define EKBGKGDDHAM_HBGJALDIFJH_2_OFFSET UNITYSDK_OFFSET(0x11A93AE0)
#define EKBGKGDDHAM_HBGJALDIFJH_OFFSET UNITYSDK_OFFSET(0x11A92A70)
#define EKBGKGDDHAM_HPCKNKKLIPM_OFFSET UNITYSDK_OFFSET(0x11A93460)
#define EKBGKGDDHAM_IIJJEDDABNO_OFFSET UNITYSDK_OFFSET(0x11A92060)
#define EKBGKGDDHAM_JFECJBCIPHD_OFFSET UNITYSDK_OFFSET(0x11A95100)
#define EKBGKGDDHAM_KANCDFEFFMA_OFFSET UNITYSDK_OFFSET(0x11A92C10)
#define EKBGKGDDHAM_KBDFIEGOHJL_OFFSET UNITYSDK_OFFSET(0x11A93A10)
#define EKBGKGDDHAM_MJIMNNFEKNB_OFFSET UNITYSDK_OFFSET(0x11A93960)
#define EKBGKGDDHAM_MNMECDCLIOB_OFFSET UNITYSDK_OFFSET(0x11A96270)
#define EKBGKGDDHAM_NCLLMNEIFHP_1_OFFSET UNITYSDK_OFFSET(0x11A968A0)
#define EKBGKGDDHAM_NCLLMNEIFHP_OFFSET UNITYSDK_OFFSET(0x11A93EA0)
#define EKBGKGDDHAM_NEFJKMIFCDP_OFFSET UNITYSDK_OFFSET(0x11A956F0)
#define EKBGKGDDHAM_NGKOAOIPBEA_1_OFFSET UNITYSDK_OFFSET(0x11A91F90)
#define EKBGKGDDHAM_NGKOAOIPBEA_OFFSET UNITYSDK_OFFSET(0x11A91EE0)
#define EKBGKGDDHAM_NJMPCMNEAGE_OFFSET UNITYSDK_OFFSET(0x11A949A0)
#define EKBGKGDDHAM_NMBLFIDMIDH_1_OFFSET UNITYSDK_OFFSET(0x11A95ED0)
#define EKBGKGDDHAM_NMBLFIDMIDH_OFFSET UNITYSDK_OFFSET(0x11A948D0)
#define EKBGKGDDHAM_NOCEDICEJGB_OFFSET UNITYSDK_OFFSET(0x11A92E50)
#define EKBGKGDDHAM_OAOMEGJGJAK_OFFSET UNITYSDK_OFFSET(0x11A92590)
#define EKBGKGDDHAM_OKKECAFPMGD_OFFSET UNITYSDK_OFFSET(0x11A94A50)
#define EKBGKGDDHAM_PLBNKDLDFFB_OFFSET UNITYSDK_OFFSET(0x11A93210)
#define EKBGKGDDHAM_POJAGMPPGPH_OFFSET UNITYSDK_OFFSET(0x11A91780)
#define EKBGKGDDHAM_PPLDIFHCPCJ_1_OFFSET UNITYSDK_OFFSET(0x11A92360)
#define EKBGKGDDHAM_PPLDIFHCPCJ_OFFSET UNITYSDK_OFFSET(0x11A946C0)

inline static constexpr unsigned int EKBGKGDDHAM_TypeDefinitionIndex = 88050;

class EKBGKGDDHAM : public ::System::Object
{
public:
	static ::System::Boolean ALONMDAJOIP(::BLCIDFMMHIL*& PBMIBHKGNGK, ::ILGGMFDKGPC*& DGOMMGANKBO, ::MoleMole::EntityHandle& DJHFOGHIFEJ)
	{
		return ((::System::Boolean(*)(::BLCIDFMMHIL*&, ::ILGGMFDKGPC*&, ::MoleMole::EntityHandle&))((::PBYTE)hIl2Cpp + EKBGKGDDHAM_ALONMDAJOIP_OFFSET))(PBMIBHKGNGK, DGOMMGANKBO, DJHFOGHIFEJ);
	}

	static ::CAFBIOHKMHB* FJCDFEBEGGO()
	{
		return ((::CAFBIOHKMHB*(*)())((::PBYTE)hIl2Cpp + EKBGKGDDHAM_FJCDFEBEGGO_OFFSET))();
	}

	static ::System::Boolean GNPPAFCGMGO(::MoleMole::EntityHandle& HPADNAEINPK, ::MoleMole::Config::ConfigInteractionFanCylinder& DFMKILICPFB, ::DCBBMOHJDOJ& ABJOBELOMEE)
	{
		return ((::System::Boolean(*)(::MoleMole::EntityHandle&, ::MoleMole::Config::ConfigInteractionFanCylinder&, ::DCBBMOHJDOJ&))((::PBYTE)hIl2Cpp + EKBGKGDDHAM_GNPPAFCGMGO_OFFSET))(HPADNAEINPK, DFMKILICPFB, ABJOBELOMEE);
	}

	static ::System::Boolean NGKOAOIPBEA(::MoleMole::EntityHandle& HPADNAEINPK)
	{
		return ((::System::Boolean(*)(::MoleMole::EntityHandle&))((::PBYTE)hIl2Cpp + EKBGKGDDHAM_NGKOAOIPBEA_OFFSET))(HPADNAEINPK);
	}

	static ::IKOBMGNNNNK IIJJEDDABNO(::MoleMole::Config::ConfigCircularSector3D DFMKILICPFB)
	{
		return ((::IKOBMGNNNNK(*)(::MoleMole::Config::ConfigCircularSector3D))((::PBYTE)hIl2Cpp + EKBGKGDDHAM_IIJJEDDABNO_OFFSET))(DFMKILICPFB);
	}

	static ::Foundation::Unreal::FTransform APCJCKKAEHP(::IMJOHEPEJHK* GMKILPBDCFN, ::MoleMole::EntityHandle HPADNAEINPK)
	{
		return ((::Foundation::Unreal::FTransform(*)(::IMJOHEPEJHK*, ::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + EKBGKGDDHAM_APCJCKKAEHP_OFFSET))(GMKILPBDCFN, HPADNAEINPK);
	}

	static ::System::Boolean OAOMEGJGJAK(::Foundation::Unreal::FTransform& GBMLHHANFFN, ::Foundation::Unreal::FTransform& HODAIDNDKHD, ::System::Single& KBLPIOHAIDA, ::System::Single& AFCMBMGGGHB)
	{
		return ((::System::Boolean(*)(::Foundation::Unreal::FTransform&, ::Foundation::Unreal::FTransform&, ::System::Single&, ::System::Single&))((::PBYTE)hIl2Cpp + EKBGKGDDHAM_OAOMEGJGJAK_OFFSET))(GBMLHHANFFN, HODAIDNDKHD, KBLPIOHAIDA, AFCMBMGGGHB);
	}

	static ::System::Boolean HBGJALDIFJH(::MoleMole::EntityHandle& HPADNAEINPK, ::OEGFJABLDPO*& GMKILPBDCFN)
	{
		return ((::System::Boolean(*)(::MoleMole::EntityHandle&, ::OEGFJABLDPO*&))((::PBYTE)hIl2Cpp + EKBGKGDDHAM_HBGJALDIFJH_OFFSET))(HPADNAEINPK, GMKILPBDCFN);
	}

	static ::MENGACGOHOG NOCEDICEJGB(::IKOBMGNNNNK& EKMMCCMCHAB, ::NHKLBKEABJB& KEJBNLGPFOB)
	{
		return ((::MENGACGOHOG(*)(::IKOBMGNNNNK&, ::NHKLBKEABJB&))((::PBYTE)hIl2Cpp + EKBGKGDDHAM_NOCEDICEJGB_OFFSET))(EKMMCCMCHAB, KEJBNLGPFOB);
	}

	static ::System::Boolean POJAGMPPGPH(::BLCIDFMMHIL* PBMIBHKGNGK, ::ILGGMFDKGPC*& DGOMMGANKBO, ::MoleMole::EntityHandle& DJHFOGHIFEJ)
	{
		return ((::System::Boolean(*)(::BLCIDFMMHIL*, ::ILGGMFDKGPC*&, ::MoleMole::EntityHandle&))((::PBYTE)hIl2Cpp + EKBGKGDDHAM_POJAGMPPGPH_OFFSET))(PBMIBHKGNGK, DGOMMGANKBO, DJHFOGHIFEJ);
	}

	static ::System::Single BOJOHDJODNL(::System::Single EGEGIMGMJHN)
	{
		return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + EKBGKGDDHAM_BOJOHDJODNL_OFFSET))(EGEGIMGMJHN);
	}

	static ::System::Boolean BCIEBENNIHN(::MoleMole::EntityHandle& HPADNAEINPK, ::MoleMole::Config::ConfigInteractionFanCylinder& DFMKILICPFB, ::CIIJJIJBFPN*& AGNLMKIFIEM)
	{
		return ((::System::Boolean(*)(::MoleMole::EntityHandle&, ::MoleMole::Config::ConfigInteractionFanCylinder&, ::CIIJJIJBFPN*&))((::PBYTE)hIl2Cpp + EKBGKGDDHAM_BCIEBENNIHN_OFFSET))(HPADNAEINPK, DFMKILICPFB, AGNLMKIFIEM);
	}

	static ::MBFJNJKKBGM* PLBNKDLDFFB()
	{
		return ((::MBFJNJKKBGM*(*)())((::PBYTE)hIl2Cpp + EKBGKGDDHAM_PLBNKDLDFFB_OFFSET))();
	}

	static ::System::Single FLGNDPKLOLJ(::UnityEngine::Collider* CBLGCIFLMKL)
	{
		return ((::System::Single(*)(::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + EKBGKGDDHAM_FLGNDPKLOLJ_OFFSET))(CBLGCIFLMKL);
	}

	static ::System::Boolean HPCKNKKLIPM(::BLCIDFMMHIL* OGMFOALCDAE)
	{
		return ((::System::Boolean(*)(::BLCIDFMMHIL*))((::PBYTE)hIl2Cpp + EKBGKGDDHAM_HPCKNKKLIPM_OFFSET))(OGMFOALCDAE);
	}

	static ::System::Boolean HBGJALDIFJH_1(::MoleMole::EntityHandle& HPADNAEINPK, ::MoleMole::Config::ConfigInteractionFanCylinder& DFMKILICPFB, ::OEGFJABLDPO*& GMKILPBDCFN)
	{
		return ((::System::Boolean(*)(::MoleMole::EntityHandle&, ::MoleMole::Config::ConfigInteractionFanCylinder&, ::OEGFJABLDPO*&))((::PBYTE)hIl2Cpp + EKBGKGDDHAM_HBGJALDIFJH_1_OFFSET))(HPADNAEINPK, DFMKILICPFB, GMKILPBDCFN);
	}

	static ::System::Boolean KBDFIEGOHJL(::MoleMole::Config::ConfigCircularSector3D& DFMKILICPFB, ::NJGDKNIDMMC*& AGNLMKIFIEM)
	{
		return ((::System::Boolean(*)(::MoleMole::Config::ConfigCircularSector3D&, ::NJGDKNIDMMC*&))((::PBYTE)hIl2Cpp + EKBGKGDDHAM_KBDFIEGOHJL_OFFSET))(DFMKILICPFB, AGNLMKIFIEM);
	}

	static ::OEGFJABLDPO* HBGJALDIFJH_2(::CIIJJIJBFPN*& EJPLPIGGJDJ, ::IAGLACHHAPE*& PHHCLADFGJL, ::MoleMole::EntityHandle& HPADNAEINPK)
	{
		return ((::OEGFJABLDPO*(*)(::CIIJJIJBFPN*&, ::IAGLACHHAPE*&, ::MoleMole::EntityHandle&))((::PBYTE)hIl2Cpp + EKBGKGDDHAM_HBGJALDIFJH_2_OFFSET))(EJPLPIGGJDJ, PHHCLADFGJL, HPADNAEINPK);
	}

	static ::System::Boolean BNOHEDHHFKB()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + EKBGKGDDHAM_BNOHEDHHFKB_OFFSET))();
	}

	static ::System::Boolean DPJMHHEAHHP(::MoleMole::Config::ConfigInteractionFanCylinder& DFMKILICPFB, ::OEGFJABLDPO*& GMKILPBDCFN, ::System::Single& JJBEBAHFKGL)
	{
		return ((::System::Boolean(*)(::MoleMole::Config::ConfigInteractionFanCylinder&, ::OEGFJABLDPO*&, ::System::Single&))((::PBYTE)hIl2Cpp + EKBGKGDDHAM_DPJMHHEAHHP_OFFSET))(DFMKILICPFB, GMKILPBDCFN, JJBEBAHFKGL);
	}

	static ::System::ValueTuple_3<::IKOBMGNNNNK, ::IKOBMGNNNNK, ::MENGACGOHOG> EBOAMJBNALK(::System::ValueTuple_2<::MoleMole::Config::ConfigCircularSector3D, ::NHKLBKEABJB>& ICNABJIPMCD, ::NHKLBKEABJB& KEJBNLGPFOB)
	{
		return ((::System::ValueTuple_3<::IKOBMGNNNNK, ::IKOBMGNNNNK, ::MENGACGOHOG>(*)(::System::ValueTuple_2<::MoleMole::Config::ConfigCircularSector3D, ::NHKLBKEABJB>&, ::NHKLBKEABJB&))((::PBYTE)hIl2Cpp + EKBGKGDDHAM_EBOAMJBNALK_OFFSET))(ICNABJIPMCD, KEJBNLGPFOB);
	}

	static ::NHKLBKEABJB PPLDIFHCPCJ(::DNPKHODEMFG_1<::MoleMole::Battle::Entity*>& EJGGBLPBKLO)
	{
		return ((::NHKLBKEABJB(*)(::DNPKHODEMFG_1<::MoleMole::Battle::Entity*>&))((::PBYTE)hIl2Cpp + EKBGKGDDHAM_PPLDIFHCPCJ_OFFSET))(EJGGBLPBKLO);
	}

	static ::IKOBMGNNNNK AHDPEEAJKDE(::System::ValueTuple_2<::MoleMole::Config::ConfigCircularSector3D, ::NHKLBKEABJB>& ICNABJIPMCD)
	{
		return ((::IKOBMGNNNNK(*)(::System::ValueTuple_2<::MoleMole::Config::ConfigCircularSector3D, ::NHKLBKEABJB>&))((::PBYTE)hIl2Cpp + EKBGKGDDHAM_AHDPEEAJKDE_OFFSET))(ICNABJIPMCD);
	}

	static ::System::Boolean NMBLFIDMIDH(::Foundation::ViewObject::ViewObjectHandle& EOJOGGEFMFC)
	{
		return ((::System::Boolean(*)(::Foundation::ViewObject::ViewObjectHandle&))((::PBYTE)hIl2Cpp + EKBGKGDDHAM_NMBLFIDMIDH_OFFSET))(EOJOGGEFMFC);
	}

	static ::System::Void NJMPCMNEAGE(::ENGKPGFGGLM* FFNKDGGHBPP, ::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::ENGKPGFGGLM*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + EKBGKGDDHAM_NJMPCMNEAGE_OFFSET))(FFNKDGGHBPP, KECKGDFIALJ);
	}

	static ::System::Boolean OKKECAFPMGD(::MoleMole::EntityHandle& KECKGDFIALJ, ::MoleMole::Config::ConfigCircularSector3D& DFMKILICPFB, ::NJGDKNIDMMC*& AGNLMKIFIEM)
	{
		return ((::System::Boolean(*)(::MoleMole::EntityHandle&, ::MoleMole::Config::ConfigCircularSector3D&, ::NJGDKNIDMMC*&))((::PBYTE)hIl2Cpp + EKBGKGDDHAM_OKKECAFPMGD_OFFSET))(KECKGDFIALJ, DFMKILICPFB, AGNLMKIFIEM);
	}

	static ::System::Void BCFHCGAIHAH(::ENGKPGFGGLM* FFNKDGGHBPP, ::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::ENGKPGFGGLM*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + EKBGKGDDHAM_BCFHCGAIHAH_OFFSET))(FFNKDGGHBPP, KECKGDFIALJ);
	}

	static ::System::Boolean NGKOAOIPBEA_1(::Foundation::ViewObject::ViewObjectHandle& EOJOGGEFMFC)
	{
		return ((::System::Boolean(*)(::Foundation::ViewObject::ViewObjectHandle&))((::PBYTE)hIl2Cpp + EKBGKGDDHAM_NGKOAOIPBEA_1_OFFSET))(EOJOGGEFMFC);
	}

	static ::System::Single JFECJBCIPHD(::Foundation::Unreal::FTransform& KDEHMPGOCEP, ::Foundation::Unreal::FTransform& PADJNMGMGHO, ::System::Single& APCPABNMLIO, ::System::Single& NBHPMFEDONG)
	{
		return ((::System::Single(*)(::Foundation::Unreal::FTransform&, ::Foundation::Unreal::FTransform&, ::System::Single&, ::System::Single&))((::PBYTE)hIl2Cpp + EKBGKGDDHAM_JFECJBCIPHD_OFFSET))(KDEHMPGOCEP, PADJNMGMGHO, APCPABNMLIO, NBHPMFEDONG);
	}

	static ::NLLJDOHBCJA ALIEEDNPKPA()
	{
		return ((::NLLJDOHBCJA(*)())((::PBYTE)hIl2Cpp + EKBGKGDDHAM_ALIEEDNPKPA_OFFSET))();
	}

	static ::System::Boolean AEKFIPDNKCC(::BLCIDFMMHIL* OGMFOALCDAE)
	{
		return ((::System::Boolean(*)(::BLCIDFMMHIL*))((::PBYTE)hIl2Cpp + EKBGKGDDHAM_AEKFIPDNKCC_OFFSET))(OGMFOALCDAE);
	}

	static ::System::Boolean CPBAEBELCAB()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + EKBGKGDDHAM_CPBAEBELCAB_OFFSET))();
	}

	static ::System::Boolean NEFJKMIFCDP(::MoleMole::EntityHandle& HPADNAEINPK, ::System::String*& CHJBBJKDKOK)
	{
		return ((::System::Boolean(*)(::MoleMole::EntityHandle&, ::System::String*&))((::PBYTE)hIl2Cpp + EKBGKGDDHAM_NEFJKMIFCDP_OFFSET))(HPADNAEINPK, CHJBBJKDKOK);
	}

	static ::Foundation::Unreal::FTransform FDHLKGCINMO(::MoleMole::EntityHandle& HPADNAEINPK)
	{
		return ((::Foundation::Unreal::FTransform(*)(::MoleMole::EntityHandle&))((::PBYTE)hIl2Cpp + EKBGKGDDHAM_FDHLKGCINMO_OFFSET))(HPADNAEINPK);
	}

	static ::System::Boolean AHLJPFDIOFF(::BLCIDFMMHIL* OGMFOALCDAE)
	{
		return ((::System::Boolean(*)(::BLCIDFMMHIL*))((::PBYTE)hIl2Cpp + EKBGKGDDHAM_AHLJPFDIOFF_OFFSET))(OGMFOALCDAE);
	}

	static ::System::Single ACAHFMEHPGG(::System::Single MFMMNDAHFAD, ::System::Single GEAPCBMJIHI)
	{
		return ((::System::Single(*)(::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + EKBGKGDDHAM_ACAHFMEHPGG_OFFSET))(MFMMNDAHFAD, GEAPCBMJIHI);
	}

	static ::System::Single KANCDFEFFMA(::MoleMole::EntityHandle& HPADNAEINPK)
	{
		return ((::System::Single(*)(::MoleMole::EntityHandle&))((::PBYTE)hIl2Cpp + EKBGKGDDHAM_KANCDFEFFMA_OFFSET))(HPADNAEINPK);
	}

	static ::System::Boolean NMBLFIDMIDH_1(::MoleMole::EntityHandle& HPADNAEINPK)
	{
		return ((::System::Boolean(*)(::MoleMole::EntityHandle&))((::PBYTE)hIl2Cpp + EKBGKGDDHAM_NMBLFIDMIDH_1_OFFSET))(HPADNAEINPK);
	}

	static ::OEGFJABLDPO* NCLLMNEIFHP(::CIIJJIJBFPN*& EJPLPIGGJDJ, ::IAGLACHHAPE*& PHHCLADFGJL)
	{
		return ((::OEGFJABLDPO*(*)(::CIIJJIJBFPN*&, ::IAGLACHHAPE*&))((::PBYTE)hIl2Cpp + EKBGKGDDHAM_NCLLMNEIFHP_OFFSET))(EJPLPIGGJDJ, PHHCLADFGJL);
	}

	static ::System::Boolean MJIMNNFEKNB(::MoleMole::Config::ConfigInteractionFanCylinder DFMKILICPFB)
	{
		return ((::System::Boolean(*)(::MoleMole::Config::ConfigInteractionFanCylinder))((::PBYTE)hIl2Cpp + EKBGKGDDHAM_MJIMNNFEKNB_OFFSET))(DFMKILICPFB);
	}

	static ::NKGKDNFNPIN GMBDELLIELC(::DCBBMOHJDOJ& ABJOBELOMEE, ::NHKLBKEABJB& KEJBNLGPFOB)
	{
		return ((::NKGKDNFNPIN(*)(::DCBBMOHJDOJ&, ::NHKLBKEABJB&))((::PBYTE)hIl2Cpp + EKBGKGDDHAM_GMBDELLIELC_OFFSET))(ABJOBELOMEE, KEJBNLGPFOB);
	}

	static ::JOHNONOOOCH MNMECDCLIOB(::CKMMPOGHDFI& HODAIDNDKHD)
	{
		return ((::JOHNONOOOCH(*)(::CKMMPOGHDFI&))((::PBYTE)hIl2Cpp + EKBGKGDDHAM_MNMECDCLIOB_OFFSET))(HODAIDNDKHD);
	}

	static ::NHKLBKEABJB PPLDIFHCPCJ_1(::MoleMole::EntityHandle& HPADNAEINPK)
	{
		return ((::NHKLBKEABJB(*)(::MoleMole::EntityHandle&))((::PBYTE)hIl2Cpp + EKBGKGDDHAM_PPLDIFHCPCJ_1_OFFSET))(HPADNAEINPK);
	}

	static ::NHKLBKEABJB BOKIDPBPNAE(::NAABJCEJKAK*& MDIIBHFCPGO)
	{
		return ((::NHKLBKEABJB(*)(::NAABJCEJKAK*&))((::PBYTE)hIl2Cpp + EKBGKGDDHAM_BOKIDPBPNAE_OFFSET))(MDIIBHFCPGO);
	}

	static ::System::Boolean NCLLMNEIFHP_1(::OEGFJABLDPO*& GMKILPBDCFN)
	{
		return ((::System::Boolean(*)(::OEGFJABLDPO*&))((::PBYTE)hIl2Cpp + EKBGKGDDHAM_NCLLMNEIFHP_1_OFFSET))(GMKILPBDCFN);
	}
};
