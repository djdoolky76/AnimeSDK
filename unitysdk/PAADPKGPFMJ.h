#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BPFKOIIMKBG.h"
#include "unitysdk/LKLOMEEPIEM.h"
#include "unitysdk/RPG/GameCore/AnimZoneTransition.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/IMOHEHDKGPK.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/UnityEngine/AnimatorStateInfo.h"
class CBMGBGGBNCF;
class EFPPMIHCBAA;
class ELIICJFAPLL;
class FJDDMMEHBLE;
class IKKAFGPNEGO;
class NNMDLFNKKCP;
class ODLKDMDPHAI;
class PAADPKGPFMJ_LIJIFNDLBDF;
namespace RPG::Client { class IAssetOperation; }
namespace RPG::Client { class MockAnimator; }
namespace RPG::GameCore { class FreeStyleAnimClipGroupZoneInfo; }
namespace RPG::GameCore { class FreeStyleAnimClipZoneInfo; }
namespace RPG::GameCore { class FreeStyleComponent; }
namespace RPG::GameCore { class FreeStyleMotionConfigRow; }
namespace RPG::GameCore { class FreeStyleMotionInfoConfig; }
namespace RPG::GameCore { class FreeStyleState; }
namespace RPG::GameCore { class FreeStyleTriggerGraphInfo; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class AnimationClip; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class AnimatorOverrideController; }
namespace UnityEngine { class RuntimeAnimatorController; }

#define PAADPKGPFMJ_AEGMLJMJBDO_OFFSET UNITYSDK_OFFSET(0xBFBAF30)
#define PAADPKGPFMJ_AEIJEOHONOD_OFFSET UNITYSDK_OFFSET(0xBFC1860)
#define PAADPKGPFMJ_AGPHBLGBODG_OFFSET UNITYSDK_OFFSET(0xBFBB330)
#define PAADPKGPFMJ_AIEHPMGLBDM_OFFSET UNITYSDK_OFFSET(0xBFC1B20)
#define PAADPKGPFMJ_AKFAMKCALKE_OFFSET UNITYSDK_OFFSET(0xBFB94B0)
#define PAADPKGPFMJ_ALAKHAGJDLD_OFFSET UNITYSDK_OFFSET(0xBFC0150)
#define PAADPKGPFMJ_BBAAKDLMEGC_OFFSET UNITYSDK_OFFSET(0xBFC1C50)
#define PAADPKGPFMJ_BEGLEELNNIJ_OFFSET UNITYSDK_OFFSET(0xBFBC1F0)
#define PAADPKGPFMJ_BFLENEMBIBM_OFFSET UNITYSDK_OFFSET(0xBFBA590)
#define PAADPKGPFMJ_BFMAIDAAAEJ_OFFSET UNITYSDK_OFFSET(0xBFBBF30)
#define PAADPKGPFMJ_BNOFMHKIKAF_OFFSET UNITYSDK_OFFSET(0xBFC41E0)
#define PAADPKGPFMJ_CFNIBAOJGEL_OFFSET UNITYSDK_OFFSET(0xBFBE4E0)
#define PAADPKGPFMJ_CJEGEMACKHE_OFFSET UNITYSDK_OFFSET(0xBFBAEA0)
#define PAADPKGPFMJ_CLLDFFBOILO_OFFSET UNITYSDK_OFFSET(0xBFBB8C0)
#define PAADPKGPFMJ_CTOR_OFFSET UNITYSDK_OFFSET(0xBFBA240)
#define PAADPKGPFMJ_DEBGBMGNNBK_OFFSET UNITYSDK_OFFSET(0xBFC1930)
#define PAADPKGPFMJ_DEFALHLCDAG_OFFSET UNITYSDK_OFFSET(0xBFB9730)
#define PAADPKGPFMJ_DEHMMHNDPGK_OFFSET UNITYSDK_OFFSET(0xBFC3510)
#define PAADPKGPFMJ_DGHNJMFPKNM_OFFSET UNITYSDK_OFFSET(0xBFBDB30)
#define PAADPKGPFMJ_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBFBBBD0)
#define PAADPKGPFMJ_DMIPLBHNJOA_OFFSET UNITYSDK_OFFSET(0xBFC17F0)
#define PAADPKGPFMJ_DMPFAAAEMOL_OFFSET UNITYSDK_OFFSET(0xBFB9380)
#define PAADPKGPFMJ_EAEHCILBMEB_OFFSET UNITYSDK_OFFSET(0xBFBBCE0)
#define PAADPKGPFMJ_EAKIHFBEJJD_OFFSET UNITYSDK_OFFSET(0xBFBAD80)
#define PAADPKGPFMJ_ECLODICLCKJ_OFFSET UNITYSDK_OFFSET(0xBFBFAA0)
#define PAADPKGPFMJ_ELAEGBNFMKA_OFFSET UNITYSDK_OFFSET(0xBFBB190)
#define PAADPKGPFMJ_EOIKCGKAFPD_OFFSET UNITYSDK_OFFSET(0xBFC1AC0)
#define PAADPKGPFMJ_EPJGHCAIMIF_OFFSET UNITYSDK_OFFSET(0xBFBEC40)
#define PAADPKGPFMJ_FBHJPDAEDGI_OFFSET UNITYSDK_OFFSET(0xBFC4210)
#define PAADPKGPFMJ_FDHHDJADDKF_OFFSET UNITYSDK_OFFSET(0xBFBBFF0)
#define PAADPKGPFMJ_FGFBHNLOCKL_OFFSET UNITYSDK_OFFSET(0xBFBA5F0)
#define PAADPKGPFMJ_FLHGPJNNFEK_OFFSET UNITYSDK_OFFSET(0xBFC38C0)
#define PAADPKGPFMJ_FMHKLHAKMKO_OFFSET UNITYSDK_OFFSET(0xBFC4270)
#define PAADPKGPFMJ_GAMDAKHAJAO_OFFSET UNITYSDK_OFFSET(0xBFC0130)
#define PAADPKGPFMJ_GET_FREESTYLECHARACTERCONFIGPATH_OFFSET UNITYSDK_OFFSET(0xBFC41C0)
#define PAADPKGPFMJ_GET_FREESTYLECHARACTERID_OFFSET UNITYSDK_OFFSET(0xBFC41A0)
#define PAADPKGPFMJ_GFGOCGHIBLI_OFFSET UNITYSDK_OFFSET(0xBFC19A0)
#define PAADPKGPFMJ_GHDIJCNKKOM_OFFSET UNITYSDK_OFFSET(0xBFC4280)
#define PAADPKGPFMJ_GIIKLKGPFCB_OFFSET UNITYSDK_OFFSET(0xBFBF960)
#define PAADPKGPFMJ_GLLJEOCGMHL_OFFSET UNITYSDK_OFFSET(0xBFC29F0)
#define PAADPKGPFMJ_HBMKMKPEMEK_OFFSET UNITYSDK_OFFSET(0xBFBF220)
#define PAADPKGPFMJ_HCLBGDGMOLA_OFFSET UNITYSDK_OFFSET(0xBFBA110)
#define PAADPKGPFMJ_HFHCGNAEIJC_OFFSET UNITYSDK_OFFSET(0xBFC4220)
#define PAADPKGPFMJ_HJILOJEFMCL_OFFSET UNITYSDK_OFFSET(0xBFC2090)
#define PAADPKGPFMJ_HKBINCEPGIF_OFFSET UNITYSDK_OFFSET(0xBFC0D60)
#define PAADPKGPFMJ_HNHJKCBPCLF_OFFSET UNITYSDK_OFFSET(0xBFBB0F0)
#define PAADPKGPFMJ_IDLJKIHOJFO_OFFSET UNITYSDK_OFFSET(0xBFB9FE0)
#define PAADPKGPFMJ_IDOHAHCIBLA_OFFSET UNITYSDK_OFFSET(0xBFBC2F0)
#define PAADPKGPFMJ_IFLCIMDBDOI_OFFSET UNITYSDK_OFFSET(0xBFBC040)
#define PAADPKGPFMJ_IJFHNMBPCIK_OFFSET UNITYSDK_OFFSET(0xBFC18D0)
#define PAADPKGPFMJ_IKNJGNMPHEH_OFFSET UNITYSDK_OFFSET(0xBFBD4F0)
#define PAADPKGPFMJ_ILADCLGGLPF_OFFSET UNITYSDK_OFFSET(0xBFB9420)
#define PAADPKGPFMJ_ILOAJPPHBLI_OFFSET UNITYSDK_OFFSET(0xBFBAFC0)
#define PAADPKGPFMJ_INHHIGAOCNE_OFFSET UNITYSDK_OFFSET(0xBFBC4B0)
#define PAADPKGPFMJ_JBEAEAFCGKA_OFFSET UNITYSDK_OFFSET(0xBFC4200)
#define PAADPKGPFMJ_JIHLMNLJFKK_OFFSET UNITYSDK_OFFSET(0xBFC3A30)
#define PAADPKGPFMJ_JJJBKMKAOBB_OFFSET UNITYSDK_OFFSET(0xBFBE6D0)
#define PAADPKGPFMJ_JKBBODBFKBI_OFFSET UNITYSDK_OFFSET(0xBFB9CB0)
#define PAADPKGPFMJ_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0xBFBA800)
#define PAADPKGPFMJ_JPDDLOABEIP_OFFSET UNITYSDK_OFFSET(0xBFB9B30)
#define PAADPKGPFMJ_KCAKFNNLIKC_OFFSET UNITYSDK_OFFSET(0xBFB9DE0)
#define PAADPKGPFMJ_KJCGJLPMEDC_OFFSET UNITYSDK_OFFSET(0xBFC42A0)
#define PAADPKGPFMJ_KMGFJJFLMMO_OFFSET UNITYSDK_OFFSET(0xBFBA870)
#define PAADPKGPFMJ_KOGFGAOOEMA_OFFSET UNITYSDK_OFFSET(0xBFB9A00)
#define PAADPKGPFMJ_LCKONADBELB_OFFSET UNITYSDK_OFFSET(0xBFC28C0)
#define PAADPKGPFMJ_LCKPCHCJDJL_OFFSET UNITYSDK_OFFSET(0xBFC0F30)
#define PAADPKGPFMJ_LDAMHBBILAD_OFFSET UNITYSDK_OFFSET(0xBFBCC70)
#define PAADPKGPFMJ_LGINDCCNKKJ_OFFSET UNITYSDK_OFFSET(0xBFC1390)
#define PAADPKGPFMJ_LGPLHCGEBLM_OFFSET UNITYSDK_OFFSET(0xBFC1CA0)
#define PAADPKGPFMJ_LKPDDKPMCCB_OFFSET UNITYSDK_OFFSET(0xBFC0850)
#define PAADPKGPFMJ_MAHCHECNLEP_1_OFFSET UNITYSDK_OFFSET(0xBFBE890)
#define PAADPKGPFMJ_MAHCHECNLEP_OFFSET UNITYSDK_OFFSET(0xBFBADF0)
#define PAADPKGPFMJ_MLGOECAMKOL_OFFSET UNITYSDK_OFFSET(0xBFC3DA0)
#define PAADPKGPFMJ_MPNJBFIAGHN_1_OFFSET UNITYSDK_OFFSET(0xBFBF870)
#define PAADPKGPFMJ_MPNJBFIAGHN_OFFSET UNITYSDK_OFFSET(0xBFBF0C0)
#define PAADPKGPFMJ_NEBAIHMALAI_OFFSET UNITYSDK_OFFSET(0xBFBC700)
#define PAADPKGPFMJ_NFKONKKPLJK_OFFSET UNITYSDK_OFFSET(0xBFBCCD0)
#define PAADPKGPFMJ_NGOEHMMHPEN_OFFSET UNITYSDK_OFFSET(0xBFC4290)
#define PAADPKGPFMJ_NHJEMDBODLO_OFFSET UNITYSDK_OFFSET(0xBFBCA10)
#define PAADPKGPFMJ_NLCDIIFGOIE_OFFSET UNITYSDK_OFFSET(0xBFC0210)
#define PAADPKGPFMJ_NOBHPALJPAG_OFFSET UNITYSDK_OFFSET(0xBFBFC30)
#define PAADPKGPFMJ_NPBIEPKDEII_OFFSET UNITYSDK_OFFSET(0xBFC0670)
#define PAADPKGPFMJ_NPGHJNNFANA_OFFSET UNITYSDK_OFFSET(0xBFBBB10)
#define PAADPKGPFMJ_OKGLMMBLPDD_OFFSET UNITYSDK_OFFSET(0xBFC2780)
#define PAADPKGPFMJ_OMIEJPMJALB_OFFSET UNITYSDK_OFFSET(0xBFB98F0)
#define PAADPKGPFMJ_PHLPMPFOFBC_OFFSET UNITYSDK_OFFSET(0xBFBC0F0)
#define PAADPKGPFMJ_SET_FREESTYLECHARACTERCONFIGPATH_OFFSET UNITYSDK_OFFSET(0xBFC41D0)
#define PAADPKGPFMJ_SET_FREESTYLECHARACTERID_OFFSET UNITYSDK_OFFSET(0xBFC41B0)

inline static constexpr unsigned int PAADPKGPFMJ_TypeDefinitionIndex = 57285;

	class PAADPKGPFMJ : public ::System::Object
	{
	public:
		::PAADPKGPFMJ_LIJIFNDLBDF* NABFFOFNLCE; // 0x10
		::RPG::Client::MockAnimator* APPGGMLEPLN; // 0x18
		::RPG::GameCore::FreeStyleMotionConfigRow* PJIDMPKKFKA; // 0x20
		::System::Action_1<::System::UInt32>* NJKGFILIKCP; // 0x28
		::ODLKDMDPHAI* JPADGLBMNBH; // 0x30
		::ELIICJFAPLL* KLEJBOIODLI; // 0x38
		::UnityEngine::AnimatorOverrideController* KENAPFGJKOM; // 0x40
		::RPG::GameCore::FreeStyleComponent* JHFKOHNKLMH; // 0x48
		::RPG::Client::IAssetOperation* JHDCADNDAFO; // 0x50
		::System::Action_2<::System::UInt32, ::BPFKOIIMKBG>* AEIHAGMJBPA; // 0x58
		::System::Collections::Generic::List_1<::CBMGBGGBNCF*>* GANMGOCFDIA; // 0x60
		::System::Collections::Generic::List_1<::RPG::GameCore::FreeStyleAnimClipGroupZoneInfo*>* BDKEJANNLCD; // 0x68
		::System::Collections::Generic::List_1<::System::Collections::Generic::KeyValuePair_2<::UnityEngine::AnimationClip*, ::UnityEngine::AnimationClip*>>* LFFHHHKPLIP; // 0x70
		::Il2CppArray<::IKKAFGPNEGO*>* FDHOAEDHKCH; // 0x78
		::ODLKDMDPHAI* EIJLFMCEAEK; // 0x80
		::System::String* _FreeStyleCharacterConfigPath_k__BackingField; // 0x88
		::RPG::GameCore::FreeStyleMotionInfoConfig* PINMAEFAFGI; // 0x90
		::RPG::Client::IAssetOperation* OGDOGDKHMCL; // 0x98
		::EFPPMIHCBAA* EGIKBCFNLMD; // 0xA0
		::ODLKDMDPHAI* CJDNNIPLHAN; // 0xA8
		::System::Collections::Generic::Dictionary_2<::System::String*, ::NNMDLFNKKCP*>* GNNLHGINFDM; // 0xB0
		::RPG::GameCore::TaskContext* EEFMDEHLLFI; // 0xB8
		::System::String* _FreeStyleCharacterID_k__BackingField; // 0xC0
		::System::Collections::Generic::List_1<::RPG::GameCore::FreeStyleAnimClipZoneInfo*>* IDCGAECLCLO; // 0xC8
		::ELIICJFAPLL* OGOMFAENEEK; // 0xD0
		::UnityEngine::RuntimeAnimatorController* NBECDBIDDOP; // 0xD8
		::RPG::Client::IAssetOperation* FLPMBHPIAIH; // 0xE0
		::FJDDMMEHBLE* IGHAHBNLIJA; // 0xE8
		::System::String* EOBACEDNGHH; // 0xF0
		::System::Action_2<::System::Int32, ::BPFKOIIMKBG>* ILAHFOIJAPF; // 0xF8
		::RPG::Client::IAssetOperation* BLKPFJLGBKL; // 0x100
		::ODLKDMDPHAI* LLBADFLDEIA; // 0x108
		::System::UInt32 MDICCICAPKK; // 0x110
		::System::Int32 ANNMJFIIBFE; // 0x114
		::System::Boolean IKNJHELIECJ; // 0x118
		::System::Byte _padding0[0x3];
		::LKLOMEEPIEM LLKLDMJGNEE; // 0x11C
		::System::Int32 ABBBKLNONAN; // 0x13C
		::System::Int32 MEANOCBEKDH; // 0x140
		::System::Int32 NNELMPEODBC; // 0x144
		// static const ::System::Object NCKLGBDBDOL; // 0x0
		// static const ::System::Object OCBJJHPLLKG; // 0x0
		// static const ::System::Object CEEDEIGMBPK; // 0x0
		::System::Void _ctor(::RPG::GameCore::FreeStyleComponent* a1, ::RPG::Client::MockAnimator* a2, ::RPG::GameCore::TaskContext* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FreeStyleComponent*, ::RPG::Client::MockAnimator*, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + PAADPKGPFMJ_CTOR_OFFSET))(this, a1, a2, a3);
		}

		::NNMDLFNKKCP* DMPFAAAEMOL(::System::String* a1)
		{
			return ((::NNMDLFNKKCP*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + PAADPKGPFMJ_DMPFAAAEMOL_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IEnumerable_1<::NNMDLFNKKCP*>* ILADCLGGLPF()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::NNMDLFNKKCP*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PAADPKGPFMJ_ILADCLGGLPF_OFFSET))(this);
		}

		::System::Void AKFAMKCALKE(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + PAADPKGPFMJ_AKFAMKCALKE_OFFSET))(this, a1);
		}

		::System::Void DEFALHLCDAG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PAADPKGPFMJ_DEFALHLCDAG_OFFSET))(this);
		}

		::System::Void OMIEJPMJALB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PAADPKGPFMJ_OMIEJPMJALB_OFFSET))(this);
		}

		::System::Void KOGFGAOOEMA(::UnityEngine::Animator* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*))((::PBYTE)hIl2Cpp + PAADPKGPFMJ_KOGFGAOOEMA_OFFSET))(this, a1);
		}

		::System::Void JPDDLOABEIP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PAADPKGPFMJ_JPDDLOABEIP_OFFSET))(this);
		}

		::System::Void JKBBODBFKBI(::UnityEngine::AnimatorOverrideController* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::AnimatorOverrideController*))((::PBYTE)hIl2Cpp + PAADPKGPFMJ_JKBBODBFKBI_OFFSET))(this, a1);
		}

		::System::Void KCAKFNNLIKC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PAADPKGPFMJ_KCAKFNNLIKC_OFFSET))(this);
		}

		::System::Void IDLJKIHOJFO(::UnityEngine::AnimatorOverrideController* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::AnimatorOverrideController*))((::PBYTE)hIl2Cpp + PAADPKGPFMJ_IDLJKIHOJFO_OFFSET))(this, a1);
		}

		::System::Boolean HCLBGDGMOLA(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + PAADPKGPFMJ_HCLBGDGMOLA_OFFSET))(this, a1);
		}

		::System::Void BFLENEMBIBM(::System::UInt32 a1, ::System::Action* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Action*))((::PBYTE)hIl2Cpp + PAADPKGPFMJ_BFLENEMBIBM_OFFSET))(this, a1, a2);
		}

		::System::Void JLANKNHFKCN(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + PAADPKGPFMJ_JLANKNHFKCN_OFFSET))(this, a1);
		}

		::System::Void KMGFJJFLMMO(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + PAADPKGPFMJ_KMGFJJFLMMO_OFFSET))(this, a1);
		}

		::System::Void AEGMLJMJBDO(::UnityEngine::Animator* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*))((::PBYTE)hIl2Cpp + PAADPKGPFMJ_AEGMLJMJBDO_OFFSET))(this, a1);
		}

		::System::Void HNHJKCBPCLF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PAADPKGPFMJ_HNHJKCBPCLF_OFFSET))(this);
		}

		::System::Void CLLDFFBOILO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PAADPKGPFMJ_CLLDFFBOILO_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PAADPKGPFMJ_DISPOSE_OFFSET))(this);
		}

		::RPG::GameCore::FreeStyleTriggerGraphInfo* BFMAIDAAAEJ(::System::String* a1)
		{
			return ((::RPG::GameCore::FreeStyleTriggerGraphInfo*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + PAADPKGPFMJ_BFMAIDAAAEJ_OFFSET))(this, a1);
		}

		::RPG::GameCore::FreeStyleMotionInfoConfig* IFLCIMDBDOI(::System::UInt32 a1, ::System::Boolean a2)
		{
			return ((::RPG::GameCore::FreeStyleMotionInfoConfig*(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + PAADPKGPFMJ_IFLCIMDBDOI_OFFSET))(this, a1, a2);
		}

		::IMOHEHDKGPK PHLPMPFOFBC(::System::Boolean a1)
		{
			return ((::IMOHEHDKGPK(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + PAADPKGPFMJ_PHLPMPFOFBC_OFFSET))(this, a1);
		}

		::System::Boolean BEGLEELNNIJ(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + PAADPKGPFMJ_BEGLEELNNIJ_OFFSET))(this, a1);
		}

		::System::Void IDOHAHCIBLA(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PAADPKGPFMJ_IDOHAHCIBLA_OFFSET))(this, a1);
		}

		::System::Void INHHIGAOCNE(::System::Int32 a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + PAADPKGPFMJ_INHHIGAOCNE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void NHJEMDBODLO(::System::Int32 a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + PAADPKGPFMJ_NHJEMDBODLO_OFFSET))(this, a1, a2, a3);
		}

		::System::Void AGPHBLGBODG(::System::UInt32 a1, ::RPG::GameCore::FreeStyleMotionInfoConfig* a2, ::System::Nullable_1<::LKLOMEEPIEM> a3, ::System::Boolean a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::FreeStyleMotionInfoConfig*, ::System::Nullable_1<::LKLOMEEPIEM>, ::System::Boolean))((::PBYTE)hIl2Cpp + PAADPKGPFMJ_AGPHBLGBODG_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void CFNIBAOJGEL(::UnityEngine::AnimationClip* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::AnimationClip*))((::PBYTE)hIl2Cpp + PAADPKGPFMJ_CFNIBAOJGEL_OFFSET))(this, a1);
		}

		::System::Void MAHCHECNLEP(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + PAADPKGPFMJ_MAHCHECNLEP_OFFSET))(this, a1);
		}

		::System::Void MAHCHECNLEP_1(::System::Boolean a1, ::BPFKOIIMKBG a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::BPFKOIIMKBG))((::PBYTE)hIl2Cpp + PAADPKGPFMJ_MAHCHECNLEP_1_OFFSET))(this, a1, a2);
		}

		::System::Void EPJGHCAIMIF(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + PAADPKGPFMJ_EPJGHCAIMIF_OFFSET))(this, a1);
		}

		::System::Void MPNJBFIAGHN(::UnityEngine::Animator* a1, ::Il2CppArray<::System::Boolean>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*, ::Il2CppArray<::System::Boolean>*))((::PBYTE)hIl2Cpp + PAADPKGPFMJ_MPNJBFIAGHN_OFFSET))(this, a1, a2);
		}

		::System::Void MPNJBFIAGHN_1(::UnityEngine::AnimatorStateInfo a1, ::UnityEngine::AnimatorStateInfo a2, ::System::Boolean a3, ::Il2CppArray<::System::Boolean>* a4)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::AnimatorStateInfo, ::UnityEngine::AnimatorStateInfo, ::System::Boolean, ::Il2CppArray<::System::Boolean>*))((::PBYTE)hIl2Cpp + PAADPKGPFMJ_MPNJBFIAGHN_1_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::String* GIIKLKGPFCB()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PAADPKGPFMJ_GIIKLKGPFCB_OFFSET))(this);
		}

		::System::Single ECLODICLCKJ()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + PAADPKGPFMJ_ECLODICLCKJ_OFFSET))(this);
		}

		::System::Boolean NOBHPALJPAG(::System::Nullable_1<::System::Single> a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Nullable_1<::System::Single>))((::PBYTE)hIl2Cpp + PAADPKGPFMJ_NOBHPALJPAG_OFFSET))(this, a1);
		}

		::System::Boolean ALAKHAGJDLD()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PAADPKGPFMJ_ALAKHAGJDLD_OFFSET))(this);
		}

		::System::Boolean NLCDIIFGOIE()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PAADPKGPFMJ_NLCDIIFGOIE_OFFSET))(this);
		}

		::System::Boolean NPBIEPKDEII()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PAADPKGPFMJ_NPBIEPKDEII_OFFSET))(this);
		}

		::System::Void LKPDDKPMCCB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PAADPKGPFMJ_LKPDDKPMCCB_OFFSET))(this);
		}

		::System::Single HKBINCEPGIF()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + PAADPKGPFMJ_HKBINCEPGIF_OFFSET))(this);
		}

		::System::Single LCKPCHCJDJL()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + PAADPKGPFMJ_LCKPCHCJDJL_OFFSET))(this);
		}

		::System::Void LGINDCCNKKJ(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + PAADPKGPFMJ_LGINDCCNKKJ_OFFSET))(this, a1, a2);
		}

		::System::Void DMIPLBHNJOA(::PAADPKGPFMJ_LIJIFNDLBDF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PAADPKGPFMJ_LIJIFNDLBDF*))((::PBYTE)hIl2Cpp + PAADPKGPFMJ_DMIPLBHNJOA_OFFSET))(this, a1);
		}

		::System::Void AEIJEOHONOD(::PAADPKGPFMJ_LIJIFNDLBDF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PAADPKGPFMJ_LIJIFNDLBDF*))((::PBYTE)hIl2Cpp + PAADPKGPFMJ_AEIJEOHONOD_OFFSET))(this, a1);
		}

		::System::Void IJFHNMBPCIK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PAADPKGPFMJ_IJFHNMBPCIK_OFFSET))(this);
		}

		::System::Void DEBGBMGNNBK(::System::Collections::Generic::List_1<::RPG::GameCore::FreeStyleState*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::FreeStyleState*>*))((::PBYTE)hIl2Cpp + PAADPKGPFMJ_DEBGBMGNNBK_OFFSET))(this, a1);
		}

		::System::Boolean GFGOCGHIBLI(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + PAADPKGPFMJ_GFGOCGHIBLI_OFFSET))(this, a1);
		}

		::System::Boolean EOIKCGKAFPD(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + PAADPKGPFMJ_EOIKCGKAFPD_OFFSET))(this, a1);
		}

		::System::Void FDHHDJADDKF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PAADPKGPFMJ_FDHHDJADDKF_OFFSET))(this);
		}

		::System::Void BBAAKDLMEGC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PAADPKGPFMJ_BBAAKDLMEGC_OFFSET))(this);
		}

		::System::Void AIEHPMGLBDM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PAADPKGPFMJ_AIEHPMGLBDM_OFFSET))(this);
		}

		::System::Void NPGHJNNFANA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PAADPKGPFMJ_NPGHJNNFANA_OFFSET))(this);
		}

		::IKKAFGPNEGO* NFKONKKPLJK(::System::UInt32 a1)
		{
			return ((::IKKAFGPNEGO*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PAADPKGPFMJ_NFKONKKPLJK_OFFSET))(this, a1);
		}

		::IKKAFGPNEGO* JJJBKMKAOBB(::UnityEngine::AnimationClip* a1, ::RPG::GameCore::FreeStyleMotionConfigRow* a2)
		{
			return ((::IKKAFGPNEGO*(*)(::PVOID, ::UnityEngine::AnimationClip*, ::RPG::GameCore::FreeStyleMotionConfigRow*))((::PBYTE)hIl2Cpp + PAADPKGPFMJ_JJJBKMKAOBB_OFFSET))(this, a1, a2);
		}

		::System::Void ELAEGBNFMKA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PAADPKGPFMJ_ELAEGBNFMKA_OFFSET))(this);
		}

		::System::Void LGPLHCGEBLM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PAADPKGPFMJ_LGPLHCGEBLM_OFFSET))(this);
		}

		::System::Void IKNJGNMPHEH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PAADPKGPFMJ_IKNJGNMPHEH_OFFSET))(this);
		}

		::System::Void HJILOJEFMCL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PAADPKGPFMJ_HJILOJEFMCL_OFFSET))(this);
		}

		::System::Void DGHNJMFPKNM(::IKKAFGPNEGO* a1, ::RPG::GameCore::FreeStyleMotionInfoConfig* a2, ::LKLOMEEPIEM a3)
		{
			return ((::System::Void(*)(::PVOID, ::IKKAFGPNEGO*, ::RPG::GameCore::FreeStyleMotionInfoConfig*, ::LKLOMEEPIEM))((::PBYTE)hIl2Cpp + PAADPKGPFMJ_DGHNJMFPKNM_OFFSET))(this, a1, a2, a3);
		}

		::System::Void CJEGEMACKHE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PAADPKGPFMJ_CJEGEMACKHE_OFFSET))(this);
		}

		::System::Void FGFBHNLOCKL(::System::UInt32 a1, ::System::Action* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Action*))((::PBYTE)hIl2Cpp + PAADPKGPFMJ_FGFBHNLOCKL_OFFSET))(this, a1, a2);
		}

		::System::Void EAEHCILBMEB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PAADPKGPFMJ_EAEHCILBMEB_OFFSET))(this);
		}

		::RPG::Client::IAssetOperation* OKGLMMBLPDD(::System::String* a1)
		{
			return ((::RPG::Client::IAssetOperation*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + PAADPKGPFMJ_OKGLMMBLPDD_OFFSET))(this, a1);
		}

		::System::Void HBMKMKPEMEK(::UnityEngine::AnimatorStateInfo a1, ::RPG::GameCore::AnimZoneTransition a2, ::Il2CppArray<::System::Boolean>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::AnimatorStateInfo, ::RPG::GameCore::AnimZoneTransition, ::Il2CppArray<::System::Boolean>*))((::PBYTE)hIl2Cpp + PAADPKGPFMJ_HBMKMKPEMEK_OFFSET))(this, a1, a2, a3);
		}

		::System::Void ILOAJPPHBLI(::UnityEngine::Animator* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*))((::PBYTE)hIl2Cpp + PAADPKGPFMJ_ILOAJPPHBLI_OFFSET))(this, a1);
		}

		::System::Void LCKONADBELB(::ODLKDMDPHAI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ODLKDMDPHAI*))((::PBYTE)hIl2Cpp + PAADPKGPFMJ_LCKONADBELB_OFFSET))(this, a1);
		}

		::System::Void GLLJEOCGMHL(::UnityEngine::Animator* a1, ::System::Int32 a2, ::ODLKDMDPHAI* a3, ::ODLKDMDPHAI* a4, ::ELIICJFAPLL* a5)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*, ::System::Int32, ::ODLKDMDPHAI*, ::ODLKDMDPHAI*, ::ELIICJFAPLL*))((::PBYTE)hIl2Cpp + PAADPKGPFMJ_GLLJEOCGMHL_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void FLHGPJNNFEK(::ODLKDMDPHAI* a1, ::System::Boolean a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::ODLKDMDPHAI*, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + PAADPKGPFMJ_FLHGPJNNFEK_OFFSET))(this, a1, a2, a3);
		}

		::System::Void JIHLMNLJFKK(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + PAADPKGPFMJ_JIHLMNLJFKK_OFFSET))(this, a1);
		}

		::System::Void MLGOECAMKOL(::System::Single a1, ::System::Single a2, ::ODLKDMDPHAI* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::ODLKDMDPHAI*))((::PBYTE)hIl2Cpp + PAADPKGPFMJ_MLGOECAMKOL_OFFSET))(this, a1, a2, a3);
		}

		::System::Void DEHMMHNDPGK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PAADPKGPFMJ_DEHMMHNDPGK_OFFSET))(this);
		}

		::System::Void NEBAIHMALAI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PAADPKGPFMJ_NEBAIHMALAI_OFFSET))(this);
		}

		::System::Boolean LDAMHBBILAD()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PAADPKGPFMJ_LDAMHBBILAD_OFFSET))(this);
		}

		::System::Boolean EAKIHFBEJJD()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PAADPKGPFMJ_EAKIHFBEJJD_OFFSET))(this);
		}

		::System::String* get_FreeStyleCharacterID()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PAADPKGPFMJ_GET_FREESTYLECHARACTERID_OFFSET))(this);
		}

		::System::Void set_FreeStyleCharacterID(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + PAADPKGPFMJ_SET_FREESTYLECHARACTERID_OFFSET))(this, a1);
		}

		::System::String* get_FreeStyleCharacterConfigPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PAADPKGPFMJ_GET_FREESTYLECHARACTERCONFIGPATH_OFFSET))(this);
		}

		::System::Void set_FreeStyleCharacterConfigPath(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + PAADPKGPFMJ_SET_FREESTYLECHARACTERCONFIGPATH_OFFSET))(this, a1);
		}

		::System::UInt32 BNOFMHKIKAF()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PAADPKGPFMJ_BNOFMHKIKAF_OFFSET))(this);
		}

		::System::Single GAMDAKHAJAO()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + PAADPKGPFMJ_GAMDAKHAJAO_OFFSET))(this);
		}

		::RPG::GameCore::FreeStyleComponent* JBEAEAFCGKA()
		{
			return ((::RPG::GameCore::FreeStyleComponent*(*)(::PVOID))((::PBYTE)hIl2Cpp + PAADPKGPFMJ_JBEAEAFCGKA_OFFSET))(this);
		}

		::RPG::Client::MockAnimator* FBHJPDAEDGI()
		{
			return ((::RPG::Client::MockAnimator*(*)(::PVOID))((::PBYTE)hIl2Cpp + PAADPKGPFMJ_FBHJPDAEDGI_OFFSET))(this);
		}

		::System::UInt32 HFHCGNAEIJC()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PAADPKGPFMJ_HFHCGNAEIJC_OFFSET))(this);
		}

		::FJDDMMEHBLE* FMHKLHAKMKO()
		{
			return ((::FJDDMMEHBLE*(*)(::PVOID))((::PBYTE)hIl2Cpp + PAADPKGPFMJ_FMHKLHAKMKO_OFFSET))(this);
		}

		::RPG::GameCore::TaskContext* GHDIJCNKKOM()
		{
			return ((::RPG::GameCore::TaskContext*(*)(::PVOID))((::PBYTE)hIl2Cpp + PAADPKGPFMJ_GHDIJCNKKOM_OFFSET))(this);
		}

		::UnityEngine::AnimatorOverrideController* NGOEHMMHPEN()
		{
			return ((::UnityEngine::AnimatorOverrideController*(*)(::PVOID))((::PBYTE)hIl2Cpp + PAADPKGPFMJ_NGOEHMMHPEN_OFFSET))(this);
		}

		::IKKAFGPNEGO* KJCGJLPMEDC()
		{
			return ((::IKKAFGPNEGO*(*)(::PVOID))((::PBYTE)hIl2Cpp + PAADPKGPFMJ_KJCGJLPMEDC_OFFSET))(this);
		}

	};
