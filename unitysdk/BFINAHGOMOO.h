#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
#include "unitysdk/InControl/InputDeviceClass.h"
#include "unitysdk/RPG/Client/ActionBarItemUIStyle.h"
#include "unitysdk/RPG/Client/ActionBarUpdateTiming.h"
#include "unitysdk/BAHMMEEMJOB.h"
#include "unitysdk/IGKFNIEJGLM.h"
class ADLGBJAOFPD;
class CAOEEDDAPIK;
class CAOEEDDAPIK_NNBFMHKHMKO;
class DNBDPIOLLHH;
class FMPCODLIOLG;
class GAHPNAEGACM;
class GEDMHFPPBHN;
class ICKOGPBKGIK;
class KOAOAKKCCPK;
class MADHNHEMBOJ;
class OOJBKJBLALH;
class PNADGAFDGPL;
namespace RPG::Client { class BattleGamePhase; }
namespace RPG::Client { class MonoInControlMove; }
namespace RPG::Client { class MonoInControlTip; }
namespace RPG::Client { class RPGAnimationEvent; }
namespace RPG::GameCore { class BattleEventDataComponent; }
namespace RPG::GameCore { class BattleInstance; }
namespace RPG::GameCore { class EventManager; }
namespace RPG::GameCore { class LevelEntityActionDelayChanged; }
namespace RPG::GameCore { class LevelGameModeStateChanged; }
namespace RPG::GameCore { class LevelUIComponent; }
namespace System { class Nullable; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Button; }
namespace UnityEngine::UI { class RectMask2D; }
namespace UnityEngine::UI { class ScrollRect; }
namespace UnityEngine::UI { class Text; }

#define BFINAHGOMOO_AGANMPDDNJK_OFFSET UNITYSDK_OFFSET(0xB16B0B0)
#define BFINAHGOMOO_AKKNJPFJHGM_OFFSET UNITYSDK_OFFSET(0xB167BB0)
#define BFINAHGOMOO_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0xB16C540)
#define BFINAHGOMOO_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0xB16CA10)
#define BFINAHGOMOO_BIEBHFOGKBH_OFFSET UNITYSDK_OFFSET(0xB16A260)
#define BFINAHGOMOO_BJJDNCFMCKD_OFFSET UNITYSDK_OFFSET(0xB1686D0)
#define BFINAHGOMOO_BJMCLBPMBLM_OFFSET UNITYSDK_OFFSET(0xB168EA0)
#define BFINAHGOMOO_BNKPNHPDMJM_OFFSET UNITYSDK_OFFSET(0xB165C40)
#define BFINAHGOMOO_CAGIAMEFOLL_OFFSET UNITYSDK_OFFSET(0xB167DF0)
#define BFINAHGOMOO_CANCKGOGCGA_OFFSET UNITYSDK_OFFSET(0xB16ADD0)
#define BFINAHGOMOO_CEHJDKJCEIK_OFFSET UNITYSDK_OFFSET(0xB169500)
#define BFINAHGOMOO_CEKNKALJFKN_OFFSET UNITYSDK_OFFSET(0xB168E10)
#define BFINAHGOMOO_CTOR_OFFSET UNITYSDK_OFFSET(0xB16CEB0)
#define BFINAHGOMOO_DBFEILMEPML_OFFSET UNITYSDK_OFFSET(0xB16C260)
#define BFINAHGOMOO_DBKOPPBGJOJ_OFFSET UNITYSDK_OFFSET(0xB168800)
#define BFINAHGOMOO_DCIDHEOKJEO_OFFSET UNITYSDK_OFFSET(0xB166360)
#define BFINAHGOMOO_DFDECGLLJJI_OFFSET UNITYSDK_OFFSET(0xB169CC0)
#define BFINAHGOMOO_DGALLPNFOON_OFFSET UNITYSDK_OFFSET(0xB169640)
#define BFINAHGOMOO_DHHDFAAJMMC_OFFSET UNITYSDK_OFFSET(0xB166EC0)
#define BFINAHGOMOO_DJPFFGBPMFC_OFFSET UNITYSDK_OFFSET(0xB1663C0)
#define BFINAHGOMOO_DNEMAMEPFCO_OFFSET UNITYSDK_OFFSET(0xB16C4B0)
#define BFINAHGOMOO_DOFNOIEDPFN_OFFSET UNITYSDK_OFFSET(0xB168D60)
#define BFINAHGOMOO_DOOKOPCGLEA_OFFSET UNITYSDK_OFFSET(0xB1697D0)
#define BFINAHGOMOO_EBKDCLNLMLG_OFFSET UNITYSDK_OFFSET(0xB16C3B0)
#define BFINAHGOMOO_ECOHEIAHIAO_OFFSET UNITYSDK_OFFSET(0xB166F30)
#define BFINAHGOMOO_EGCAHBHLOLM_OFFSET UNITYSDK_OFFSET(0xB168F50)
#define BFINAHGOMOO_EKGCGIDIFJJ_OFFSET UNITYSDK_OFFSET(0xB167210)
#define BFINAHGOMOO_EMCPEPDLBBI_OFFSET UNITYSDK_OFFSET(0xB16AB00)
#define BFINAHGOMOO_FMHCEEKAGEG_OFFSET UNITYSDK_OFFSET(0xB167AC0)
#define BFINAHGOMOO_FMMBFHDEIMO_OFFSET UNITYSDK_OFFSET(0xB1689D0)
#define BFINAHGOMOO_FNMHMOLOPJN_OFFSET UNITYSDK_OFFSET(0xB16C0F0)
#define BFINAHGOMOO_FPJBHJAKBJL_OFFSET UNITYSDK_OFFSET(0xB168BB0)
#define BFINAHGOMOO_FPKAEALMHJF_OFFSET UNITYSDK_OFFSET(0xB16BC00)
#define BFINAHGOMOO_GEDGNMIPLAN_OFFSET UNITYSDK_OFFSET(0xB166020)
#define BFINAHGOMOO_GFEBHNKPENL_OFFSET UNITYSDK_OFFSET(0xB1690A0)
#define BFINAHGOMOO_GICILAMDOJB_OFFSET UNITYSDK_OFFSET(0xB167F20)
#define BFINAHGOMOO_GLPEBIEDIKG_OFFSET UNITYSDK_OFFSET(0xB1665D0)
#define BFINAHGOMOO_GMMMJMBPHPA_OFFSET UNITYSDK_OFFSET(0xB166430)
#define BFINAHGOMOO_HACDOPJBPKD_OFFSET UNITYSDK_OFFSET(0xB167350)
#define BFINAHGOMOO_HBLIOCCBBFL_OFFSET UNITYSDK_OFFSET(0xB1672F0)
#define BFINAHGOMOO_HEJNEHEPMKF_OFFSET UNITYSDK_OFFSET(0xB16BFC0)
#define BFINAHGOMOO_HGNPCPODKBE_OFFSET UNITYSDK_OFFSET(0xB169720)
#define BFINAHGOMOO_HLHFGIAKCKA_OFFSET UNITYSDK_OFFSET(0xB16C320)
#define BFINAHGOMOO_HLHNLNIIAGO_OFFSET UNITYSDK_OFFSET(0xB16AE40)
#define BFINAHGOMOO_HMMPNGCGLAC_1_OFFSET UNITYSDK_OFFSET(0xB16B390)
#define BFINAHGOMOO_HMMPNGCGLAC_2_OFFSET UNITYSDK_OFFSET(0xB16B800)
#define BFINAHGOMOO_HMMPNGCGLAC_OFFSET UNITYSDK_OFFSET(0xB16B180)
#define BFINAHGOMOO_IFPBLKNHHFP_OFFSET UNITYSDK_OFFSET(0xB16A2D0)
#define BFINAHGOMOO_IOJCDMBPKEO_OFFSET UNITYSDK_OFFSET(0xB1676B0)
#define BFINAHGOMOO_IOOHFJNEHAL_OFFSET UNITYSDK_OFFSET(0xB169950)
#define BFINAHGOMOO_KMPFLKIGNMA_OFFSET UNITYSDK_OFFSET(0xB1687B0)
#define BFINAHGOMOO_KOHNANPGGNA_OFFSET UNITYSDK_OFFSET(0xB16BB00)
#define BFINAHGOMOO_LBPLIIMDMKF_OFFSET UNITYSDK_OFFSET(0xB1684B0)
#define BFINAHGOMOO_LCPFLNPDJKE_OFFSET UNITYSDK_OFFSET(0xB165CA0)
#define BFINAHGOMOO_LJDOJCKMMDD_OFFSET UNITYSDK_OFFSET(0xB16BF00)
#define BFINAHGOMOO_LLGONICEHMI_OFFSET UNITYSDK_OFFSET(0xB168530)
#define BFINAHGOMOO_LOCLEFBPIJB_OFFSET UNITYSDK_OFFSET(0xB169F60)
#define BFINAHGOMOO_MIKJOEINLJF_OFFSET UNITYSDK_OFFSET(0xB1690F0)
#define BFINAHGOMOO_MKMPINOBNGL_OFFSET UNITYSDK_OFFSET(0xB16ACB0)
#define BFINAHGOMOO_NECEALBHFAB_OFFSET UNITYSDK_OFFSET(0xB16BCE0)
#define BFINAHGOMOO_NEINMKKJPJN_OFFSET UNITYSDK_OFFSET(0xB166B90)
#define BFINAHGOMOO_NIJJPBOIGBI_OFFSET UNITYSDK_OFFSET(0xB166D20)
#define BFINAHGOMOO_NJBDJBHEBAN_OFFSET UNITYSDK_OFFSET(0xB167FB0)
#define BFINAHGOMOO_NNEKDONGAHH_OFFSET UNITYSDK_OFFSET(0xB16BE40)
#define BFINAHGOMOO_NOIIFDEBEHM_OFFSET UNITYSDK_OFFSET(0xB16B640)
#define BFINAHGOMOO_OLDFILCAJHL_OFFSET UNITYSDK_OFFSET(0xB167A40)
#define BFINAHGOMOO_OMFIDFONGFM_OFFSET UNITYSDK_OFFSET(0xB168960)
#define BFINAHGOMOO_PACMHPGMNAM_OFFSET UNITYSDK_OFFSET(0xB169B30)
#define BFINAHGOMOO_PCHILFDHOHL_OFFSET UNITYSDK_OFFSET(0xB16BDF0)
#define BFINAHGOMOO_PEPBNAJCJDO_OFFSET UNITYSDK_OFFSET(0xB167840)
#define BFINAHGOMOO_PKJJKOIDMII_OFFSET UNITYSDK_OFFSET(0xB169460)
#define BFINAHGOMOO_PLMFHCKPGFM_OFFSET UNITYSDK_OFFSET(0xB168FD0)
#define BFINAHGOMOO__ONBIND_OFFSET UNITYSDK_OFFSET(0xB166670)
#define BFINAHGOMOO__ONDISPOSE_OFFSET UNITYSDK_OFFSET(0xB167D30)
#define BFINAHGOMOO__ONTICK_OFFSET UNITYSDK_OFFSET(0xB167500)
#define BFINAHGOMOO___ONBINDHANDLERS_B__46_0_OFFSET UNITYSDK_OFFSET(0xB16CF60)

	class BFINAHGOMOO : public ::FMPCODLIOLG
	{
	public:
		::CAOEEDDAPIK* CKLIKCBAFDM; // 0x60
		::UnityEngine::Transform* JALLLDGGPGA; // 0x68
		::System::Collections::Generic::List_1<::CAOEEDDAPIK*>* BIFIPINEAEI; // 0x70
		::UnityEngine::Animation* IBNHKALADFA; // 0x78
		::UnityEngine::Transform* NNGAJAAFBJA; // 0x80
		::UnityEngine::UI::ScrollRect* DNGOBOCIMNC; // 0x88
		::UnityEngine::UI::Button* NFMNEGPHDMC; // 0x90
		::RPG::Client::RPGAnimationEvent* FPIHKNJFHEA; // 0x98
		::UnityEngine::UI::Text* PGGJMGJMPLD; // 0xA0
		::UnityEngine::Transform* NJEMHIAAEKC; // 0xA8
		::RPG::GameCore::EventManager* EBOCGAJBGPG; // 0xB0
		::KOAOAKKCCPK* CDMFHPLLFEC; // 0xB8
		::UnityEngine::UI::RectMask2D* IJMIEFINFNM; // 0xC0
		::CAOEEDDAPIK* NNDODCIDFOL; // 0xC8
		::UnityEngine::RectTransform* DDMJJAKCOID; // 0xD0
		::UnityEngine::UI::Text* NKGDDICJONK; // 0xD8
		::UnityEngine::Animation* JPHOOFFIAAH; // 0xE0
		::UnityEngine::UI::Text* CPNLPOKMOCD; // 0xE8
		::UnityEngine::UI::Text* LAHDIKPDDBP; // 0xF0
		::UnityEngine::RectTransform* ONOIOGCEMOE; // 0xF8
		::UnityEngine::Transform* ELCPCEKPEOA; // 0x100
		::UnityEngine::Transform* FKNHOBELIPO; // 0x108
		::CAOEEDDAPIK* HHDEDEEBGHE; // 0x110
		::MADHNHEMBOJ* PKIGHMIMJLF; // 0x118
		::System::Collections::Generic::List_1<::CAOEEDDAPIK*>* DMBLIDFJIJB; // 0x120
		::RPG::Client::MonoInControlMove* HEOGCBFENDD; // 0x128
		::System::Collections::Generic::List_1<::ADLGBJAOFPD*>* GJGGILDKAMF; // 0x130
		::CAOEEDDAPIK* AIPKOKLDHCM; // 0x138
		::UnityEngine::RectTransform* OIGBCANMBOM; // 0x140
		::UnityEngine::UI::Text* BDDMCOPBCGI; // 0x148
		::RPG::Client::MonoInControlTip* HBHIMMJCGAA; // 0x150
		::ICKOGPBKGIK* BKOHPMFAMPM; // 0x158
		::OOJBKJBLALH* GCBIHHMMIHI; // 0x160
		::UnityEngine::Transform* BDLMHHDHMCK; // 0x168
		::RPG::Client::BattleGamePhase* GGOAHEIADBP; // 0x170
		::UnityEngine::Transform* LGMJNNMOFLK; // 0x178
		::UnityEngine::UI::Text* DNHIPDNPOLB; // 0x180
		::RPG::GameCore::LevelUIComponent* OMCLLLAHOIP; // 0x188
		::RPG::GameCore::BattleInstance* IFKCCHIFMOC; // 0x190
		::System::Int32 MDELMGANMFE; // 0x198
		::System::Boolean BNICLPJDONP; // 0x19C
		::System::Boolean KGMLKIMPKJE; // 0x19D
		::System::Boolean GPPGDLCIAEK; // 0x19E
		::System::Boolean OAFBNBIDBNE; // 0x19F
		::System::Single INIHPCIHDDJ; // 0x1A0
		::System::Nullable* EAMHLPNNBOH; // 0x1A4
		::System::Boolean ABOPMLDEKEM; // 0x1A6
		::System::Boolean IBNFMECKMEK; // 0x1A7
		::System::Boolean GBHHHINHLMK; // 0x1A8
		// static const ::System::String* LCFLIGNCNOK; // 0x0
		// static const ::System::String* IOCPGKLNAPK; // 0x0
		// static const ::System::String* GBBCBMALMOD; // 0x0
		// static const ::System::String* FNEPKOJHIHP; // 0x0
		// static const ::System::String* GMDPOALGICF; // 0x0
		// static const ::System::Object ENEEMDJIEEA; // 0x0
		// static const ::System::Object LFCHIONCEDF; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BFINAHGOMOO_CTOR_OFFSET))(this);
		}

		::System::Void BNKPNHPDMJM(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + BFINAHGOMOO_BNKPNHPDMJM_OFFSET))(this, a1);
		}

		::System::Void LCPFLNPDJKE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BFINAHGOMOO_LCPFLNPDJKE_OFFSET))(this);
		}

		::System::Void GEDGNMIPLAN(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + BFINAHGOMOO_GEDGNMIPLAN_OFFSET))(this, a1);
		}

		::System::Void DJPFFGBPMFC(::DNBDPIOLLHH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DNBDPIOLLHH*))((::PBYTE)hIl2Cpp + BFINAHGOMOO_DJPFFGBPMFC_OFFSET))(this, a1);
		}

		::System::Boolean DCIDHEOKJEO(::PNADGAFDGPL* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::PNADGAFDGPL*))((::PBYTE)hIl2Cpp + BFINAHGOMOO_DCIDHEOKJEO_OFFSET))(this, a1);
		}

		::ADLGBJAOFPD* GLPEBIEDIKG(::DNBDPIOLLHH* a1)
		{
			return ((::ADLGBJAOFPD*(*)(::PVOID, ::DNBDPIOLLHH*))((::PBYTE)hIl2Cpp + BFINAHGOMOO_GLPEBIEDIKG_OFFSET))(this, a1);
		}

		::ADLGBJAOFPD* GMMMJMBPHPA(::System::UInt32 a1)
		{
			return ((::ADLGBJAOFPD*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BFINAHGOMOO_GMMMJMBPHPA_OFFSET))(this, a1);
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BFINAHGOMOO__ONBIND_OFFSET))(this);
		}

		::System::Void NEINMKKJPJN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BFINAHGOMOO_NEINMKKJPJN_OFFSET))(this);
		}

		::System::Void NIJJPBOIGBI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BFINAHGOMOO_NIJJPBOIGBI_OFFSET))(this);
		}

		::System::Void DHHDFAAJMMC(::IGKFNIEJGLM a1)
		{
			return ((::System::Void(*)(::PVOID, ::IGKFNIEJGLM))((::PBYTE)hIl2Cpp + BFINAHGOMOO_DHHDFAAJMMC_OFFSET))(this, a1);
		}

		::System::Void ECOHEIAHIAO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BFINAHGOMOO_ECOHEIAHIAO_OFFSET))(this);
		}

		::System::Void EKGCGIDIFJJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BFINAHGOMOO_EKGCGIDIFJJ_OFFSET))(this);
		}

		::System::Void _OnTick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + BFINAHGOMOO__ONTICK_OFFSET))(this, a1);
		}

		::System::Void _OnDispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BFINAHGOMOO__ONDISPOSE_OFFSET))(this);
		}

		::System::Void CAGIAMEFOLL(::InControl::InputDeviceClass a1)
		{
			return ((::System::Void(*)(::PVOID, ::InControl::InputDeviceClass))((::PBYTE)hIl2Cpp + BFINAHGOMOO_CAGIAMEFOLL_OFFSET))(this, a1);
		}

		::System::Void GICILAMDOJB(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + BFINAHGOMOO_GICILAMDOJB_OFFSET))(this, a1);
		}

		::System::Void NJBDJBHEBAN(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + BFINAHGOMOO_NJBDJBHEBAN_OFFSET))(this, a1);
		}

		::System::Void BJJDNCFMCKD(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + BFINAHGOMOO_BJJDNCFMCKD_OFFSET))(this, a1);
		}

		::System::Void KMPFLKIGNMA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BFINAHGOMOO_KMPFLKIGNMA_OFFSET))(this);
		}

		::System::Void DBKOPPBGJOJ(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BFINAHGOMOO_DBKOPPBGJOJ_OFFSET))(this, a1);
		}

		::System::Void OMFIDFONGFM(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BFINAHGOMOO_OMFIDFONGFM_OFFSET))(this, a1);
		}

		::System::Void FPJBHJAKBJL(::RPG::GameCore::LevelEntityActionDelayChanged* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelEntityActionDelayChanged*))((::PBYTE)hIl2Cpp + BFINAHGOMOO_FPJBHJAKBJL_OFFSET))(this, a1);
		}

		::System::Void DOFNOIEDPFN(::RPG::GameCore::LevelGameModeStateChanged* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelGameModeStateChanged*))((::PBYTE)hIl2Cpp + BFINAHGOMOO_DOFNOIEDPFN_OFFSET))(this, a1);
		}

		::System::Void HBLIOCCBBFL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BFINAHGOMOO_HBLIOCCBBFL_OFFSET))(this);
		}

		::System::Void LBPLIIMDMKF(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + BFINAHGOMOO_LBPLIIMDMKF_OFFSET))(this, a1);
		}

		::System::Void CEKNKALJFKN(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BFINAHGOMOO_CEKNKALJFKN_OFFSET))(this, a1);
		}

		::System::Void EGCAHBHLOLM(::BAHMMEEMJOB a1)
		{
			return ((::System::Void(*)(::PVOID, ::BAHMMEEMJOB))((::PBYTE)hIl2Cpp + BFINAHGOMOO_EGCAHBHLOLM_OFFSET))(this, a1);
		}

		::System::Void GFEBHNKPENL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BFINAHGOMOO_GFEBHNKPENL_OFFSET))(this);
		}

		::System::Void PLMFHCKPGFM(::BAHMMEEMJOB a1)
		{
			return ((::System::Void(*)(::PVOID, ::BAHMMEEMJOB))((::PBYTE)hIl2Cpp + BFINAHGOMOO_PLMFHCKPGFM_OFFSET))(this, a1);
		}

		::System::Void PKJJKOIDMII()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BFINAHGOMOO_PKJJKOIDMII_OFFSET))(this);
		}

		::System::Void DGALLPNFOON(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BFINAHGOMOO_DGALLPNFOON_OFFSET))(this, a1);
		}

		::System::Boolean MIKJOEINLJF(::BAHMMEEMJOB a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::BAHMMEEMJOB))((::PBYTE)hIl2Cpp + BFINAHGOMOO_MIKJOEINLJF_OFFSET))(this, a1);
		}

		::System::Boolean CEHJDKJCEIK()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BFINAHGOMOO_CEHJDKJCEIK_OFFSET))(this);
		}

		::System::Void BJMCLBPMBLM(::RPG::Client::ActionBarUpdateTiming a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActionBarUpdateTiming))((::PBYTE)hIl2Cpp + BFINAHGOMOO_BJMCLBPMBLM_OFFSET))(this, a1);
		}

		::System::Void PEPBNAJCJDO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BFINAHGOMOO_PEPBNAJCJDO_OFFSET))(this);
		}

		::System::Void OLDFILCAJHL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BFINAHGOMOO_OLDFILCAJHL_OFFSET))(this);
		}

		::System::Void IOJCDMBPKEO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BFINAHGOMOO_IOJCDMBPKEO_OFFSET))(this);
		}

		::System::Void FMHCEEKAGEG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BFINAHGOMOO_FMHCEEKAGEG_OFFSET))(this);
		}

		::System::Void AKKNJPFJHGM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BFINAHGOMOO_AKKNJPFJHGM_OFFSET))(this);
		}

		::CAOEEDDAPIK* EMCPEPDLBBI(::CAOEEDDAPIK_NNBFMHKHMKO* a1)
		{
			return ((::CAOEEDDAPIK*(*)(::PVOID, ::CAOEEDDAPIK_NNBFMHKHMKO*))((::PBYTE)hIl2Cpp + BFINAHGOMOO_EMCPEPDLBBI_OFFSET))(this, a1);
		}

		::System::Void BIEBHFOGKBH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BFINAHGOMOO_BIEBHFOGKBH_OFFSET))(this);
		}

		::System::Void PACMHPGMNAM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BFINAHGOMOO_PACMHPGMNAM_OFFSET))(this);
		}

		::System::Void DFDECGLLJJI(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + BFINAHGOMOO_DFDECGLLJJI_OFFSET))(this, a1);
		}

		::System::Void LOCLEFBPIJB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BFINAHGOMOO_LOCLEFBPIJB_OFFSET))(this);
		}

		::System::Void IFPBLKNHHFP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BFINAHGOMOO_IFPBLKNHHFP_OFFSET))(this);
		}

		::GEDMHFPPBHN* FMMBFHDEIMO()
		{
			return ((::GEDMHFPPBHN*(*)(::PVOID))((::PBYTE)hIl2Cpp + BFINAHGOMOO_FMMBFHDEIMO_OFFSET))(this);
		}

		::System::Boolean IOOHFJNEHAL()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BFINAHGOMOO_IOOHFJNEHAL_OFFSET))(this);
		}

		::System::Void DOOKOPCGLEA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BFINAHGOMOO_DOOKOPCGLEA_OFFSET))(this);
		}

		::System::Boolean CANCKGOGCGA(::GAHPNAEGACM* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::GAHPNAEGACM*))((::PBYTE)hIl2Cpp + BFINAHGOMOO_CANCKGOGCGA_OFFSET))(this, a1);
		}

		::System::String* AGANMPDDNJK(::GEDMHFPPBHN* a1)
		{
			return ((::System::String*(*)(::PVOID, ::GEDMHFPPBHN*))((::PBYTE)hIl2Cpp + BFINAHGOMOO_AGANMPDDNJK_OFFSET))(this, a1);
		}

		::System::Void HLHNLNIIAGO(::GEDMHFPPBHN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GEDMHFPPBHN*))((::PBYTE)hIl2Cpp + BFINAHGOMOO_HLHNLNIIAGO_OFFSET))(this, a1);
		}

		::CAOEEDDAPIK* HMMPNGCGLAC(::CAOEEDDAPIK_NNBFMHKHMKO* a1)
		{
			return ((::CAOEEDDAPIK*(*)(::PVOID, ::CAOEEDDAPIK_NNBFMHKHMKO*))((::PBYTE)hIl2Cpp + BFINAHGOMOO_HMMPNGCGLAC_OFFSET))(this, a1);
		}

		::CAOEEDDAPIK* HMMPNGCGLAC_1(::RPG::Client::ActionBarItemUIStyle a1, ::CAOEEDDAPIK_NNBFMHKHMKO* a2)
		{
			return ((::CAOEEDDAPIK*(*)(::PVOID, ::RPG::Client::ActionBarItemUIStyle, ::CAOEEDDAPIK_NNBFMHKHMKO*))((::PBYTE)hIl2Cpp + BFINAHGOMOO_HMMPNGCGLAC_1_OFFSET))(this, a1, a2);
		}

		::System::Void NOIIFDEBEHM(::CAOEEDDAPIK_NNBFMHKHMKO* a1, ::CAOEEDDAPIK* a2)
		{
			return ((::System::Void(*)(::PVOID, ::CAOEEDDAPIK_NNBFMHKHMKO*, ::CAOEEDDAPIK*))((::PBYTE)hIl2Cpp + BFINAHGOMOO_NOIIFDEBEHM_OFFSET))(this, a1, a2);
		}

		::CAOEEDDAPIK* HMMPNGCGLAC_2(::RPG::GameCore::BattleEventDataComponent* a1, ::CAOEEDDAPIK_NNBFMHKHMKO* a2)
		{
			return ((::CAOEEDDAPIK*(*)(::PVOID, ::RPG::GameCore::BattleEventDataComponent*, ::CAOEEDDAPIK_NNBFMHKHMKO*))((::PBYTE)hIl2Cpp + BFINAHGOMOO_HMMPNGCGLAC_2_OFFSET))(this, a1, a2);
		}

		::CAOEEDDAPIK* HGNPCPODKBE(::System::UInt32 a1)
		{
			return ((::CAOEEDDAPIK*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BFINAHGOMOO_HGNPCPODKBE_OFFSET))(this, a1);
		}

		::CAOEEDDAPIK* KOHNANPGGNA(::System::UInt32 a1)
		{
			return ((::CAOEEDDAPIK*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BFINAHGOMOO_KOHNANPGGNA_OFFSET))(this, a1);
		}

		::GAHPNAEGACM* MKMPINOBNGL(::System::UInt32 a1)
		{
			return ((::GAHPNAEGACM*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BFINAHGOMOO_MKMPINOBNGL_OFFSET))(this, a1);
		}

		::System::Void LLGONICEHMI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BFINAHGOMOO_LLGONICEHMI_OFFSET))(this);
		}

		::System::Void FPKAEALMHJF(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + BFINAHGOMOO_FPKAEALMHJF_OFFSET))(this, a1);
		}

		::System::Void HACDOPJBPKD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BFINAHGOMOO_HACDOPJBPKD_OFFSET))(this);
		}

		::System::Boolean NECEALBHFAB()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BFINAHGOMOO_NECEALBHFAB_OFFSET))(this);
		}

		::FMPCODLIOLG* PCHILFDHOHL()
		{
			return ((::FMPCODLIOLG*(*)(::PVOID))((::PBYTE)hIl2Cpp + BFINAHGOMOO_PCHILFDHOHL_OFFSET))(this);
		}

		::System::Void NNEKDONGAHH(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BFINAHGOMOO_NNEKDONGAHH_OFFSET))(this, a1);
		}

		::System::Void LJDOJCKMMDD(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BFINAHGOMOO_LJDOJCKMMDD_OFFSET))(this, a1);
		}

		::System::Void HEJNEHEPMKF(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BFINAHGOMOO_HEJNEHEPMKF_OFFSET))(this, a1);
		}

		::System::Void FNMHMOLOPJN(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BFINAHGOMOO_FNMHMOLOPJN_OFFSET))(this, a1);
		}

		::System::Void DBFEILMEPML(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BFINAHGOMOO_DBFEILMEPML_OFFSET))(this, a1);
		}

		::System::Void HLHFGIAKCKA(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BFINAHGOMOO_HLHFGIAKCKA_OFFSET))(this, a1);
		}

		::System::Void EBKDCLNLMLG(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BFINAHGOMOO_EBKDCLNLMLG_OFFSET))(this, a1);
		}

		::System::Void DNEMAMEPFCO(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BFINAHGOMOO_DNEMAMEPFCO_OFFSET))(this, a1);
		}

		::System::Void AutoBindCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BFINAHGOMOO_AUTOBINDCALLBACK_OFFSET))(this);
		}

		::System::Void AutoRemoveCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BFINAHGOMOO_AUTOREMOVECALLBACK_OFFSET))(this);
		}

		::System::Void __OnBindHandlers_b__46_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BFINAHGOMOO___ONBINDHANDLERS_B__46_0_OFFSET))(this);
		}

	};
