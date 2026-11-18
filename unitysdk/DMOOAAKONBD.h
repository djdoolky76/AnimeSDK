#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FJKELPPNPBF.h"
#include "unitysdk/LJMMJPIDCBN.h"
#include "unitysdk/MoleMole/Config/InputType.h"
#include "unitysdk/MoleMole/CloudButtonRumbleType.h"
#include "unitysdk/MoleMole/MobileTouchRumbleBattleMode.h"
#include "unitysdk/MoleMole/MobileTouchRumbleDevice.h"
#include "unitysdk/MoleMole/MobileTouchRumbleEnableType.h"
#include "unitysdk/ScePadTriggerMask.h"
#include "unitysdk/DMOOAAKONBD_PEKENGCFIHC.h"

namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class GamepadRumbleEntry; }
namespace System { class EventArgs; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define DMOOAAKONBD_AGCBDELBBNP_OFFSET UNITYSDK_OFFSET(0x15875FE0)
#define DMOOAAKONBD_ALFMLNFMBJP_OFFSET UNITYSDK_OFFSET(0x158784A0)
#define DMOOAAKONBD_APKPHCDCGOG_OFFSET UNITYSDK_OFFSET(0x15872FC0)
#define DMOOAAKONBD_BJAFGJIFOKB_OFFSET UNITYSDK_OFFSET(0x15876570)
#define DMOOAAKONBD_BMFIFOGBABJ_OFFSET UNITYSDK_OFFSET(0x15879210)
#define DMOOAAKONBD_CEHFDACNPBA_OFFSET UNITYSDK_OFFSET(0x158753B0)
#define DMOOAAKONBD_DDLHBFECMMA_OFFSET UNITYSDK_OFFSET(0x15876C30)
#define DMOOAAKONBD_DFNAAGHBBFL_OFFSET UNITYSDK_OFFSET(0x15875FF0)
#define DMOOAAKONBD_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15873930)
#define DMOOAAKONBD_DLHOFDMAPKE_OFFSET UNITYSDK_OFFSET(0x15874660)
#define DMOOAAKONBD_DMFGIDMIJBE_OFFSET UNITYSDK_OFFSET(0x15876E90)
#define DMOOAAKONBD_EBCHJCABCCF_OFFSET UNITYSDK_OFFSET(0x15878C30)
#define DMOOAAKONBD_ECBBPOBIGNL_OFFSET UNITYSDK_OFFSET(0x15878B00)
#define DMOOAAKONBD_EDBCMGPIEFE_OFFSET UNITYSDK_OFFSET(0x15877D00)
#define DMOOAAKONBD_EKHAOJFEHCF_OFFSET UNITYSDK_OFFSET(0x15876730)
#define DMOOAAKONBD_ENHJLCDKCCD_OFFSET UNITYSDK_OFFSET(0x15875280)
#define DMOOAAKONBD_FFMECAJCFHL_1_OFFSET UNITYSDK_OFFSET(0x15875B10)
#define DMOOAAKONBD_FFMECAJCFHL_OFFSET UNITYSDK_OFFSET(0x15875A20)
#define DMOOAAKONBD_FMJIOCDIJLN_OFFSET UNITYSDK_OFFSET(0x15875790)
#define DMOOAAKONBD_FOKKGBKEDFI_OFFSET UNITYSDK_OFFSET(0x15876E40)
#define DMOOAAKONBD_GADPLBIOOCN_OFFSET UNITYSDK_OFFSET(0x15874460)
#define DMOOAAKONBD_GCKJHDMEDHD_OFFSET UNITYSDK_OFFSET(0x158753C0)
#define DMOOAAKONBD_GFDEIAKGDKB_OFFSET UNITYSDK_OFFSET(0x15874CC0)
#define DMOOAAKONBD_GHOJNFIJHOO_OFFSET UNITYSDK_OFFSET(0x158743C0)
#define DMOOAAKONBD_GMJLJEBELAF_OFFSET UNITYSDK_OFFSET(0x158741C0)
#define DMOOAAKONBD_HHOOLDCIEBB_OFFSET UNITYSDK_OFFSET(0x15878CC0)
#define DMOOAAKONBD_HIMMKDELICB_OFFSET UNITYSDK_OFFSET(0x15876150)
#define DMOOAAKONBD_HKIABPFCGGG_OFFSET UNITYSDK_OFFSET(0x15878EA0)
#define DMOOAAKONBD_HKJAOKMNGCH_OFFSET UNITYSDK_OFFSET(0x158792B0)
#define DMOOAAKONBD_IAEBFACEPOL_OFFSET UNITYSDK_OFFSET(0x15875E70)
#define DMOOAAKONBD_IIFHFJNCIMC_OFFSET UNITYSDK_OFFSET(0x15874600)
#define DMOOAAKONBD_IJJJLHEGMAM_OFFSET UNITYSDK_OFFSET(0x15875EC0)
#define DMOOAAKONBD_JKECHGEMFFL_OFFSET UNITYSDK_OFFSET(0x15872810)
#define DMOOAAKONBD_KAGGLMHGEGN_OFFSET UNITYSDK_OFFSET(0x158774F0)
#define DMOOAAKONBD_KFEEALBHMPH_OFFSET UNITYSDK_OFFSET(0x15878640)
#define DMOOAAKONBD_KHJAPLJIOAN_OFFSET UNITYSDK_OFFSET(0x15878BA0)
#define DMOOAAKONBD_KKFBPICDMOI_OFFSET UNITYSDK_OFFSET(0x15873500)
#define DMOOAAKONBD_LGFKJMKOEII_OFFSET UNITYSDK_OFFSET(0x15875450)
#define DMOOAAKONBD_LOCKBHKAPEN_OFFSET UNITYSDK_OFFSET(0x15876B50)
#define DMOOAAKONBD_LPOAMMLFGGD_OFFSET UNITYSDK_OFFSET(0x15874E20)
#define DMOOAAKONBD_MDGKPIKKICA_OFFSET UNITYSDK_OFFSET(0x15877190)
#define DMOOAAKONBD_MEDOENPCFJF_OFFSET UNITYSDK_OFFSET(0x15878B50)
#define DMOOAAKONBD_MICOLHGFDNF_OFFSET UNITYSDK_OFFSET(0x15873830)
#define DMOOAAKONBD_NABKAIJJBGL_OFFSET UNITYSDK_OFFSET(0x15877B90)
#define DMOOAAKONBD_NADAPLENHPM_OFFSET UNITYSDK_OFFSET(0x15877360)
#define DMOOAAKONBD_NFICJMIAAGC_OFFSET UNITYSDK_OFFSET(0x15878AC0)
#define DMOOAAKONBD_NGKIIEHBPEI_OFFSET UNITYSDK_OFFSET(0x15873EB0)
#define DMOOAAKONBD_NLDPOLGCGAG_OFFSET UNITYSDK_OFFSET(0x158727D0)
#define DMOOAAKONBD_NNNAEIJOODM_OFFSET UNITYSDK_OFFSET(0x158789B0)
#define DMOOAAKONBD_OBAJFAFDMMI_OFFSET UNITYSDK_OFFSET(0x15876EF0)
#define DMOOAAKONBD_OBBLCJGFDPB_OFFSET UNITYSDK_OFFSET(0x15877420)
#define DMOOAAKONBD_OFFBJBOCFNP_OFFSET UNITYSDK_OFFSET(0x158759B0)
#define DMOOAAKONBD_OKJCHFGIKBH_OFFSET UNITYSDK_OFFSET(0x15877480)
#define DMOOAAKONBD_OLHIGGBGALK_OFFSET UNITYSDK_OFFSET(0x15877410)
#define DMOOAAKONBD_ONCREATE_OFFSET UNITYSDK_OFFSET(0x15872520)
#define DMOOAAKONBD_ONSTART_OFFSET UNITYSDK_OFFSET(0x15872850)
#define DMOOAAKONBD_PBPLEJFBJNK_OFFSET UNITYSDK_OFFSET(0x15873200)
#define DMOOAAKONBD_PEBDGHCGADJ_OFFSET UNITYSDK_OFFSET(0x15877180)
#define DMOOAAKONBD_PIAJBFFOKGH_OFFSET UNITYSDK_OFFSET(0x158756D0)
#define DMOOAAKONBD_PLDMNLCHCEN_OFFSET UNITYSDK_OFFSET(0x15874D70)
#define DMOOAAKONBD_PMCLCKAOKBD_OFFSET UNITYSDK_OFFSET(0x15872D00)
#define DMOOAAKONBD__CTOR_OFFSET UNITYSDK_OFFSET(0x15873DD0)

inline static constexpr unsigned int DMOOAAKONBD_TypeDefinitionIndex = 82812;

class DMOOAAKONBD
{
public:
	::System::Collections::Generic::List_1<::LJMMJPIDCBN>* IHECJBCPKDE; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::FJKELPPNPBF>* ICAJACCPKLJ; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::System::UInt32>*>* HPPDKDOGKHK; // 0x20
	::System::Collections::Generic::List_1<::LJMMJPIDCBN>* IMKBILAPJPM; // 0x28
	::System::Collections::Generic::List_1<::System::Object*>* HEEEPEEIBJA; // 0x30
	::MoleMole::MobileTouchRumbleBattleMode FLMPLHBENCP; // 0x38
	::System::Int32 JMHDGOMLBBD; // 0x3C
	::System::Int32 AFLEPLPJCCG; // 0x40
	::System::Int32 IEPMFGNPBDC; // 0x44
	::System::Int32 MECGFGDJJNF; // 0x48
	::MoleMole::CloudButtonRumbleType BEICLPCPKOH; // 0x4C
	::System::Int32 CHFOBMKOELN; // 0x50
	::System::Int32 ANHODIHIMFO; // 0x54
	::System::Boolean IDGEMGIJOAM; // 0x58
	::System::Boolean PBPCPKKBHJI; // 0x59
	::System::Byte _padding0[0x2];
	::System::Int32 LDIFMJJNAPD; // 0x5C
	::MoleMole::MobileTouchRumbleDevice FJNAPPPCFBN; // 0x60
	::MoleMole::MobileTouchRumbleEnableType AFHAMPEKJKK; // 0x64

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DMOOAAKONBD__CTOR_OFFSET))(this);
	}

	::System::Void OnCreate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DMOOAAKONBD_ONCREATE_OFFSET))(this);
	}

	::System::Void OnStart()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DMOOAAKONBD_ONSTART_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DMOOAAKONBD_DISPOSE_OFFSET))(this);
	}

	::System::Void PMCLCKAOKBD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DMOOAAKONBD_PMCLCKAOKBD_OFFSET))(this);
	}

	static ::System::String* GHOJNFIJHOO(::System::String* AELLPLBJELA)
	{
		return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + DMOOAAKONBD_GHOJNFIJHOO_OFFSET))(AELLPLBJELA);
	}

	::System::Void GADPLBIOOCN(::ScePadTriggerMask BBBMHIMMIFN, ::System::String* AELLPLBJELA, ::System::Boolean DGNBJBOCCCM)
	{
		return ((::System::Void(*)(::PVOID, ::ScePadTriggerMask, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + DMOOAAKONBD_GADPLBIOOCN_OFFSET))(this, BBBMHIMMIFN, AELLPLBJELA, DGNBJBOCCCM);
	}

	::System::Void GFDEIAKGDKB(::System::EventArgs* KOIBHLHLMFC)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + DMOOAAKONBD_GFDEIAKGDKB_OFFSET))(this, KOIBHLHLMFC);
	}

	::System::Void PLDMNLCHCEN(::System::Int32 PHLFMCCNEGD)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + DMOOAAKONBD_PLDMNLCHCEN_OFFSET))(this, PHLFMCCNEGD);
	}

	::System::Void KKFBPICDMOI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DMOOAAKONBD_KKFBPICDMOI_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::LJMMJPIDCBN>* IIFHFJNCIMC(::ScePadTriggerMask BBBMHIMMIFN)
	{
		return ((::System::Collections::Generic::List_1<::LJMMJPIDCBN>*(*)(::PVOID, ::ScePadTriggerMask))((::PBYTE)hIl2Cpp + DMOOAAKONBD_IIFHFJNCIMC_OFFSET))(this, BBBMHIMMIFN);
	}

	::System::Void ENHJLCDKCCD(::MoleMole::MobileTouchRumbleDevice GPCONFBLNKN)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::MobileTouchRumbleDevice))((::PBYTE)hIl2Cpp + DMOOAAKONBD_ENHJLCDKCCD_OFFSET))(this, GPCONFBLNKN);
	}

	::MoleMole::MobileTouchRumbleBattleMode CEHFDACNPBA()
	{
		return ((::MoleMole::MobileTouchRumbleBattleMode(*)(::PVOID))((::PBYTE)hIl2Cpp + DMOOAAKONBD_CEHFDACNPBA_OFFSET))(this);
	}

	::System::Void MICOLHGFDNF(::System::Boolean ONJJAFLHDKB)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + DMOOAAKONBD_MICOLHGFDNF_OFFSET))(this, ONJJAFLHDKB);
	}

	::System::Void GCKJHDMEDHD(::MoleMole::Config::InputType DALJDJDLHEA)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::InputType))((::PBYTE)hIl2Cpp + DMOOAAKONBD_GCKJHDMEDHD_OFFSET))(this, DALJDJDLHEA);
	}

	static ::System::Boolean FMJIOCDIJLN(::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Boolean(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + DMOOAAKONBD_FMJIOCDIJLN_OFFSET))(KECKGDFIALJ);
	}

	::System::Void OFFBJBOCFNP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DMOOAAKONBD_OFFBJBOCFNP_OFFSET))(this);
	}

	::System::Void FFMECAJCFHL(::System::String* KDPCIAPDOLK, ::UnityEngine::GameObject* HODAIDNDKHD, ::System::Boolean NPPMJEIPMFC, ::System::Boolean LKPHCNGPOLK)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::GameObject*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + DMOOAAKONBD_FFMECAJCFHL_OFFSET))(this, KDPCIAPDOLK, HODAIDNDKHD, NPPMJEIPMFC, LKPHCNGPOLK);
	}

	::System::Void IAEBFACEPOL(::System::Int32 PHLFMCCNEGD)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + DMOOAAKONBD_IAEBFACEPOL_OFFSET))(this, PHLFMCCNEGD);
	}

	::System::Void IJJJLHEGMAM(::System::EventArgs* KOIBHLHLMFC)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + DMOOAAKONBD_IJJJLHEGMAM_OFFSET))(this, KOIBHLHLMFC);
	}

	::MoleMole::CloudButtonRumbleType AGCBDELBBNP()
	{
		return ((::MoleMole::CloudButtonRumbleType(*)(::PVOID))((::PBYTE)hIl2Cpp + DMOOAAKONBD_AGCBDELBBNP_OFFSET))(this);
	}

	::System::Void DFNAAGHBBFL(::ScePadTriggerMask BBBMHIMMIFN, ::System::String* AELLPLBJELA)
	{
		return ((::System::Void(*)(::PVOID, ::ScePadTriggerMask, ::System::String*))((::PBYTE)hIl2Cpp + DMOOAAKONBD_DFNAAGHBBFL_OFFSET))(this, BBBMHIMMIFN, AELLPLBJELA);
	}

	::System::Void HIMMKDELICB(::System::Int32 PHLFMCCNEGD)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + DMOOAAKONBD_HIMMKDELICB_OFFSET))(this, PHLFMCCNEGD);
	}

	::System::Void BJAFGJIFOKB(::System::String* MCOHLHMKLIP, ::System::UInt32 MLIGANAEDBC)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::UInt32))((::PBYTE)hIl2Cpp + DMOOAAKONBD_BJAFGJIFOKB_OFFSET))(this, MCOHLHMKLIP, MLIGANAEDBC);
	}

	static ::System::Boolean EKHAOJFEHCF()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + DMOOAAKONBD_EKHAOJFEHCF_OFFSET))();
	}

	::System::Boolean LOCKBHKAPEN()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DMOOAAKONBD_LOCKBHKAPEN_OFFSET))(this);
	}

	::System::Void DDLHBFECMMA(::ScePadTriggerMask BBBMHIMMIFN, ::System::String* AELLPLBJELA, ::System::Single MDPPNMIPDMP)
	{
		return ((::System::Void(*)(::PVOID, ::ScePadTriggerMask, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + DMOOAAKONBD_DDLHBFECMMA_OFFSET))(this, BBBMHIMMIFN, AELLPLBJELA, MDPPNMIPDMP);
	}

	::System::Void FOKKGBKEDFI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DMOOAAKONBD_FOKKGBKEDFI_OFFSET))(this);
	}

	::System::Boolean DMFGIDMIJBE()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DMOOAAKONBD_DMFGIDMIJBE_OFFSET))(this);
	}

	::MoleMole::MobileTouchRumbleDevice PEBDGHCGADJ()
	{
		return ((::MoleMole::MobileTouchRumbleDevice(*)(::PVOID))((::PBYTE)hIl2Cpp + DMOOAAKONBD_PEBDGHCGADJ_OFFSET))(this);
	}

	static ::System::Boolean MDGKPIKKICA()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + DMOOAAKONBD_MDGKPIKKICA_OFFSET))();
	}

	::System::Void NADAPLENHPM(::System::EventArgs* KOIBHLHLMFC)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + DMOOAAKONBD_NADAPLENHPM_OFFSET))(this, KOIBHLHLMFC);
	}

	::MoleMole::MobileTouchRumbleEnableType OLHIGGBGALK()
	{
		return ((::MoleMole::MobileTouchRumbleEnableType(*)(::PVOID))((::PBYTE)hIl2Cpp + DMOOAAKONBD_OLHIGGBGALK_OFFSET))(this);
	}

	static ::System::Boolean NLDPOLGCGAG()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + DMOOAAKONBD_NLDPOLGCGAG_OFFSET))();
	}

	::System::Void OBBLCJGFDPB(::System::Int32 PHLFMCCNEGD)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + DMOOAAKONBD_OBBLCJGFDPB_OFFSET))(this, PHLFMCCNEGD);
	}

	::System::Void OKJCHFGIKBH(::System::Single PMNLNNGEIFM)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + DMOOAAKONBD_OKJCHFGIKBH_OFFSET))(this, PMNLNNGEIFM);
	}

	::System::Void EDBCMGPIEFE(::MoleMole::MobileTouchRumbleEnableType MLLBLNABAJO)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::MobileTouchRumbleEnableType))((::PBYTE)hIl2Cpp + DMOOAAKONBD_EDBCMGPIEFE_OFFSET))(this, MLLBLNABAJO);
	}

	::System::Void DLHOFDMAPKE(::ScePadTriggerMask BBBMHIMMIFN)
	{
		return ((::System::Void(*)(::PVOID, ::ScePadTriggerMask))((::PBYTE)hIl2Cpp + DMOOAAKONBD_DLHOFDMAPKE_OFFSET))(this, BBBMHIMMIFN);
	}

	static ::System::Boolean OBAJFAFDMMI()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + DMOOAAKONBD_OBAJFAFDMMI_OFFSET))();
	}

	::System::Void ALFMLNFMBJP(::ScePadTriggerMask BBBMHIMMIFN, ::System::String* AELLPLBJELA, ::System::String* LMDGFDIHPDM, ::System::Single MDPPNMIPDMP, ::System::UInt32 IENMHKHBDHA, ::System::Boolean GPFAIEDKEPD, ::MoleMole::Config::InputType MMKCAIIJAIK)
	{
		return ((::System::Void(*)(::PVOID, ::ScePadTriggerMask, ::System::String*, ::System::String*, ::System::Single, ::System::UInt32, ::System::Boolean, ::MoleMole::Config::InputType))((::PBYTE)hIl2Cpp + DMOOAAKONBD_ALFMLNFMBJP_OFFSET))(this, BBBMHIMMIFN, AELLPLBJELA, LMDGFDIHPDM, MDPPNMIPDMP, IENMHKHBDHA, GPFAIEDKEPD, MMKCAIIJAIK);
	}

	::System::Void KFEEALBHMPH(::ScePadTriggerMask BBBMHIMMIFN, ::System::String* AELLPLBJELA, ::System::String* LMDGFDIHPDM, ::System::UInt32 IENMHKHBDHA, ::System::Boolean GPFAIEDKEPD, ::MoleMole::Config::InputType MMKCAIIJAIK)
	{
		return ((::System::Void(*)(::PVOID, ::ScePadTriggerMask, ::System::String*, ::System::String*, ::System::UInt32, ::System::Boolean, ::MoleMole::Config::InputType))((::PBYTE)hIl2Cpp + DMOOAAKONBD_KFEEALBHMPH_OFFSET))(this, BBBMHIMMIFN, AELLPLBJELA, LMDGFDIHPDM, IENMHKHBDHA, GPFAIEDKEPD, MMKCAIIJAIK);
	}

	static ::System::Boolean JKECHGEMFFL()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + DMOOAAKONBD_JKECHGEMFFL_OFFSET))();
	}

	::System::Void LPOAMMLFGGD(::System::String* MCOHLHMKLIP, ::System::UInt32 MLIGANAEDBC)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::UInt32))((::PBYTE)hIl2Cpp + DMOOAAKONBD_LPOAMMLFGGD_OFFSET))(this, MCOHLHMKLIP, MLIGANAEDBC);
	}

	::System::Boolean NGKIIEHBPEI()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DMOOAAKONBD_NGKIIEHBPEI_OFFSET))(this);
	}

	::System::Void PBPLEJFBJNK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DMOOAAKONBD_PBPLEJFBJNK_OFFSET))(this);
	}

	::System::Void NABKAIJJBGL(::System::Single PMNLNNGEIFM)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + DMOOAAKONBD_NABKAIJJBGL_OFFSET))(this, PMNLNNGEIFM);
	}

	::System::Boolean LGFKJMKOEII()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DMOOAAKONBD_LGFKJMKOEII_OFFSET))(this);
	}

	::System::Void PIAJBFFOKGH(::ScePadTriggerMask BBBMHIMMIFN, ::DMOOAAKONBD_PEKENGCFIHC& param_1)
	{
		return ((::System::Void(*)(::PVOID, ::ScePadTriggerMask, ::DMOOAAKONBD_PEKENGCFIHC&))((::PBYTE)hIl2Cpp + DMOOAAKONBD_PIAJBFFOKGH_OFFSET))(this, BBBMHIMMIFN, param_1);
	}

	::System::Void MEDOENPCFJF(::MoleMole::MobileTouchRumbleBattleMode OJONIIHHHCI)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::MobileTouchRumbleBattleMode))((::PBYTE)hIl2Cpp + DMOOAAKONBD_MEDOENPCFJF_OFFSET))(this, OJONIIHHHCI);
	}

	static ::System::Boolean KHJAPLJIOAN()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + DMOOAAKONBD_KHJAPLJIOAN_OFFSET))();
	}

	::System::Boolean GMJLJEBELAF(::System::Boolean NPPMJEIPMFC)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + DMOOAAKONBD_GMJLJEBELAF_OFFSET))(this, NPPMJEIPMFC);
	}

	::System::Void NNNAEIJOODM(::ScePadTriggerMask BBBMHIMMIFN, ::System::String* AELLPLBJELA, ::System::Boolean DGNBJBOCCCM)
	{
		return ((::System::Void(*)(::PVOID, ::ScePadTriggerMask, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + DMOOAAKONBD_NNNAEIJOODM_OFFSET))(this, BBBMHIMMIFN, AELLPLBJELA, DGNBJBOCCCM);
	}

	::System::Void APKPHCDCGOG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DMOOAAKONBD_APKPHCDCGOG_OFFSET))(this);
	}

	static ::System::Boolean EBCHJCABCCF()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + DMOOAAKONBD_EBCHJCABCCF_OFFSET))();
	}

	::System::Void HHOOLDCIEBB(::MoleMole::CloudButtonRumbleType JCPEPKBLDJL)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::CloudButtonRumbleType))((::PBYTE)hIl2Cpp + DMOOAAKONBD_HHOOLDCIEBB_OFFSET))(this, JCPEPKBLDJL);
	}

	::System::Void HKIABPFCGGG(::System::Int32 PHLFMCCNEGD)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + DMOOAAKONBD_HKIABPFCGGG_OFFSET))(this, PHLFMCCNEGD);
	}

	::System::Void BMFIFOGBABJ(::System::EventArgs* KOIBHLHLMFC)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + DMOOAAKONBD_BMFIFOGBABJ_OFFSET))(this, KOIBHLHLMFC);
	}

	::System::Void HKJAOKMNGCH(::System::String* MCOHLHMKLIP, ::System::UInt32 MLIGANAEDBC)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::UInt32))((::PBYTE)hIl2Cpp + DMOOAAKONBD_HKJAOKMNGCH_OFFSET))(this, MCOHLHMKLIP, MLIGANAEDBC);
	}

	static ::System::Boolean NFICJMIAAGC()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + DMOOAAKONBD_NFICJMIAAGC_OFFSET))();
	}

	::System::Boolean ECBBPOBIGNL()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DMOOAAKONBD_ECBBPOBIGNL_OFFSET))(this);
	}

	::System::Void KAGGLMHGEGN(::System::Single PMNLNNGEIFM)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + DMOOAAKONBD_KAGGLMHGEGN_OFFSET))(this, PMNLNNGEIFM);
	}

	::System::Void FFMECAJCFHL_1(::System::String* MCOHLHMKLIP, ::MoleMole::Config::GamepadRumbleEntry* BHBOHMNGMPK, ::UnityEngine::GameObject* HODAIDNDKHD, ::System::Boolean NPPMJEIPMFC, ::System::Boolean LKPHCNGPOLK)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::MoleMole::Config::GamepadRumbleEntry*, ::UnityEngine::GameObject*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + DMOOAAKONBD_FFMECAJCFHL_1_OFFSET))(this, MCOHLHMKLIP, BHBOHMNGMPK, HODAIDNDKHD, NPPMJEIPMFC, LKPHCNGPOLK);
	}
};
