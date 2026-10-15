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

#define PAADPKGPFMJ_AEGMLJMJBDO_OFFSET UNITYSDK_OFFSET(0xBFB3420)
#define PAADPKGPFMJ_AEIJEOHONOD_OFFSET UNITYSDK_OFFSET(0xBFB7410)
#define PAADPKGPFMJ_AGPHBLGBODG_OFFSET UNITYSDK_OFFSET(0xBFB3550)
#define PAADPKGPFMJ_AIEHPMGLBDM_OFFSET UNITYSDK_OFFSET(0xBFB7940)
#define PAADPKGPFMJ_AKFAMKCALKE_OFFSET UNITYSDK_OFFSET(0xBFB1D40)
#define PAADPKGPFMJ_ALAKHAGJDLD_OFFSET UNITYSDK_OFFSET(0xBFB5CC0)
#define PAADPKGPFMJ_BBAAKDLMEGC_OFFSET UNITYSDK_OFFSET(0xBFB7A60)
#define PAADPKGPFMJ_BEGLEELNNIJ_OFFSET UNITYSDK_OFFSET(0xBFB40E0)
#define PAADPKGPFMJ_BFLENEMBIBM_OFFSET UNITYSDK_OFFSET(0xBFB2D00)
#define PAADPKGPFMJ_BFMAIDAAAEJ_OFFSET UNITYSDK_OFFSET(0xBFB3E60)
#define PAADPKGPFMJ_BNOFMHKIKAF_OFFSET UNITYSDK_OFFSET(0xBFBCCC0)
#define PAADPKGPFMJ_CFNIBAOJGEL_OFFSET UNITYSDK_OFFSET(0xBFB4850)
#define PAADPKGPFMJ_CJEGEMACKHE_OFFSET UNITYSDK_OFFSET(0xBFBA5A0)
#define PAADPKGPFMJ_CLLDFFBOILO_OFFSET UNITYSDK_OFFSET(0xBFB3AF0)
#define PAADPKGPFMJ_CTOR_OFFSET UNITYSDK_OFFSET(0xBFB29A0)
#define PAADPKGPFMJ_DEBGBMGNNBK_OFFSET UNITYSDK_OFFSET(0xBFB76F0)
#define PAADPKGPFMJ_DEFALHLCDAG_OFFSET UNITYSDK_OFFSET(0xBFB1E80)
#define PAADPKGPFMJ_DEHMMHNDPGK_OFFSET UNITYSDK_OFFSET(0xBFBBFA0)
#define PAADPKGPFMJ_DGHNJMFPKNM_OFFSET UNITYSDK_OFFSET(0xBFB9BB0)
#define PAADPKGPFMJ_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBFB3D40)
#define PAADPKGPFMJ_DMIPLBHNJOA_OFFSET UNITYSDK_OFFSET(0xBFB73A0)
#define PAADPKGPFMJ_DMPFAAAEMOL_OFFSET UNITYSDK_OFFSET(0xBFB1C10)
#define PAADPKGPFMJ_EAEHCILBMEB_OFFSET UNITYSDK_OFFSET(0xBFBA850)
#define PAADPKGPFMJ_EAKIHFBEJJD_OFFSET UNITYSDK_OFFSET(0xBFBB360)
#define PAADPKGPFMJ_ECLODICLCKJ_OFFSET UNITYSDK_OFFSET(0xBFB5610)
#define PAADPKGPFMJ_ELAEGBNFMKA_OFFSET UNITYSDK_OFFSET(0xBFB8980)
#define PAADPKGPFMJ_EOIKCGKAFPD_OFFSET UNITYSDK_OFFSET(0xBFB7890)
#define PAADPKGPFMJ_EPJGHCAIMIF_OFFSET UNITYSDK_OFFSET(0xBFB4DE0)
#define PAADPKGPFMJ_FBHJPDAEDGI_OFFSET UNITYSDK_OFFSET(0xBFBCD10)
#define PAADPKGPFMJ_FDHHDJADDKF_OFFSET UNITYSDK_OFFSET(0xBFB78F0)
#define PAADPKGPFMJ_FGFBHNLOCKL_OFFSET UNITYSDK_OFFSET(0xBFBA630)
#define PAADPKGPFMJ_FLHGPJNNFEK_OFFSET UNITYSDK_OFFSET(0xBFBC340)
#define PAADPKGPFMJ_FMHKLHAKMKO_OFFSET UNITYSDK_OFFSET(0xBFBCD70)
#define PAADPKGPFMJ_GAMDAKHAJAO_OFFSET UNITYSDK_OFFSET(0xBFBCCE0)
#define PAADPKGPFMJ_GET_FREESTYLECHARACTERCONFIGPATH_OFFSET UNITYSDK_OFFSET(0xBFBCCA0)
#define PAADPKGPFMJ_GET_FREESTYLECHARACTERID_OFFSET UNITYSDK_OFFSET(0xBFBCC80)
#define PAADPKGPFMJ_GFGOCGHIBLI_OFFSET UNITYSDK_OFFSET(0xBFB7760)
#define PAADPKGPFMJ_GHDIJCNKKOM_OFFSET UNITYSDK_OFFSET(0xBFBCD80)
#define PAADPKGPFMJ_GIIKLKGPFCB_OFFSET UNITYSDK_OFFSET(0xBFB54C0)
#define PAADPKGPFMJ_GLLJEOCGMHL_OFFSET UNITYSDK_OFFSET(0xBFBB490)
#define PAADPKGPFMJ_HBMKMKPEMEK_OFFSET UNITYSDK_OFFSET(0xBFBABE0)
#define PAADPKGPFMJ_HCLBGDGMOLA_OFFSET UNITYSDK_OFFSET(0xBFB2870)
#define PAADPKGPFMJ_HFHCGNAEIJC_OFFSET UNITYSDK_OFFSET(0xBFBCD20)
#define PAADPKGPFMJ_HJILOJEFMCL_OFFSET UNITYSDK_OFFSET(0xBFB9160)
#define PAADPKGPFMJ_HKBINCEPGIF_OFFSET UNITYSDK_OFFSET(0xBFB68C0)
#define PAADPKGPFMJ_HNHJKCBPCLF_OFFSET UNITYSDK_OFFSET(0xBFB34B0)
#define PAADPKGPFMJ_IDLJKIHOJFO_OFFSET UNITYSDK_OFFSET(0xBFB2740)
#define PAADPKGPFMJ_IDOHAHCIBLA_OFFSET UNITYSDK_OFFSET(0xBFB41E0)
#define PAADPKGPFMJ_IFLCIMDBDOI_OFFSET UNITYSDK_OFFSET(0xBFB3F20)
#define PAADPKGPFMJ_IJFHNMBPCIK_OFFSET UNITYSDK_OFFSET(0xBFB7480)
#define PAADPKGPFMJ_IKNJGNMPHEH_OFFSET UNITYSDK_OFFSET(0xBFB8B20)
#define PAADPKGPFMJ_ILADCLGGLPF_OFFSET UNITYSDK_OFFSET(0xBFB1CB0)
#define PAADPKGPFMJ_ILOAJPPHBLI_OFFSET UNITYSDK_OFFSET(0xBFBB240)
#define PAADPKGPFMJ_INHHIGAOCNE_OFFSET UNITYSDK_OFFSET(0xBFB4390)
#define PAADPKGPFMJ_JBEAEAFCGKA_OFFSET UNITYSDK_OFFSET(0xBFBCD00)
#define PAADPKGPFMJ_JIHLMNLJFKK_OFFSET UNITYSDK_OFFSET(0xBFBC4B0)
#define PAADPKGPFMJ_JJJBKMKAOBB_OFFSET UNITYSDK_OFFSET(0xBFB87C0)
#define PAADPKGPFMJ_JKBBODBFKBI_OFFSET UNITYSDK_OFFSET(0xBFB2410)
#define PAADPKGPFMJ_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0xBFB2D60)
#define PAADPKGPFMJ_JPDDLOABEIP_OFFSET UNITYSDK_OFFSET(0xBFB2290)
#define PAADPKGPFMJ_KCAKFNNLIKC_OFFSET UNITYSDK_OFFSET(0xBFB2540)
#define PAADPKGPFMJ_KJCGJLPMEDC_OFFSET UNITYSDK_OFFSET(0xBFBCDA0)
#define PAADPKGPFMJ_KMGFJJFLMMO_OFFSET UNITYSDK_OFFSET(0xBFB2DD0)
#define PAADPKGPFMJ_KOGFGAOOEMA_OFFSET UNITYSDK_OFFSET(0xBFB2160)
#define PAADPKGPFMJ_LCKONADBELB_OFFSET UNITYSDK_OFFSET(0xBFBB370)
#define PAADPKGPFMJ_LCKPCHCJDJL_OFFSET UNITYSDK_OFFSET(0xBFB6AA0)
#define PAADPKGPFMJ_LDAMHBBILAD_OFFSET UNITYSDK_OFFSET(0xBFBCC20)
#define PAADPKGPFMJ_LGINDCCNKKJ_OFFSET UNITYSDK_OFFSET(0xBFB6F20)
#define PAADPKGPFMJ_LGPLHCGEBLM_OFFSET UNITYSDK_OFFSET(0xBFB7AB0)
#define PAADPKGPFMJ_LKPDDKPMCCB_OFFSET UNITYSDK_OFFSET(0xBFB63F0)
#define PAADPKGPFMJ_MAHCHECNLEP_1_OFFSET UNITYSDK_OFFSET(0xBFB4A30)
#define PAADPKGPFMJ_MAHCHECNLEP_OFFSET UNITYSDK_OFFSET(0xBFB3370)
#define PAADPKGPFMJ_MLGOECAMKOL_OFFSET UNITYSDK_OFFSET(0xBFBC820)
#define PAADPKGPFMJ_MPNJBFIAGHN_1_OFFSET UNITYSDK_OFFSET(0xBFB53D0)
#define PAADPKGPFMJ_MPNJBFIAGHN_OFFSET UNITYSDK_OFFSET(0xBFB5270)
#define PAADPKGPFMJ_NEBAIHMALAI_OFFSET UNITYSDK_OFFSET(0xBFB9880)
#define PAADPKGPFMJ_NFKONKKPLJK_OFFSET UNITYSDK_OFFSET(0xBFB7FA0)
#define PAADPKGPFMJ_NGOEHMMHPEN_OFFSET UNITYSDK_OFFSET(0xBFBCD90)
#define PAADPKGPFMJ_NHJEMDBODLO_OFFSET UNITYSDK_OFFSET(0xBFB45F0)
#define PAADPKGPFMJ_NLCDIIFGOIE_OFFSET UNITYSDK_OFFSET(0xBFB5D80)
#define PAADPKGPFMJ_NOBHPALJPAG_OFFSET UNITYSDK_OFFSET(0xBFB57A0)
#define PAADPKGPFMJ_NPBIEPKDEII_OFFSET UNITYSDK_OFFSET(0xBFB6200)
#define PAADPKGPFMJ_NPGHJNNFANA_OFFSET UNITYSDK_OFFSET(0xBFB7EC0)
#define PAADPKGPFMJ_OKGLMMBLPDD_OFFSET UNITYSDK_OFFSET(0xBFBAAA0)
#define PAADPKGPFMJ_OMIEJPMJALB_OFFSET UNITYSDK_OFFSET(0xBFB2050)
#define PAADPKGPFMJ_PHLPMPFOFBC_OFFSET UNITYSDK_OFFSET(0xBFB3FD0)
#define PAADPKGPFMJ_SET_FREESTYLECHARACTERCONFIGPATH_OFFSET UNITYSDK_OFFSET(0xBFBCCB0)
#define PAADPKGPFMJ_SET_FREESTYLECHARACTERID_OFFSET UNITYSDK_OFFSET(0xBFBCC90)

inline static constexpr unsigned int PAADPKGPFMJ_TypeDefinitionIndex = 57285;

	class PAADPKGPFMJ : public ::System::Object
	{
	public:
		::ELIICJFAPLL* KLEJBOIODLI; // 0x10
		::System::Action_2<::System::UInt32, ::BPFKOIIMKBG>* AEIHAGMJBPA; // 0x18
		::RPG::GameCore::TaskContext* EEFMDEHLLFI; // 0x20
		::System::Collections::Generic::List_1<::RPG::GameCore::FreeStyleAnimClipGroupZoneInfo*>* BDKEJANNLCD; // 0x28
		::ODLKDMDPHAI* CJDNNIPLHAN; // 0x30
		::ELIICJFAPLL* OGOMFAENEEK; // 0x38
		::System::Collections::Generic::Dictionary_2<::System::String*, ::NNMDLFNKKCP*>* GNNLHGINFDM; // 0x40
		::RPG::GameCore::FreeStyleComponent* JHFKOHNKLMH; // 0x48
		::PAADPKGPFMJ_LIJIFNDLBDF* NABFFOFNLCE; // 0x50
		::RPG::GameCore::FreeStyleMotionConfigRow* PJIDMPKKFKA; // 0x58
		::System::String* EOBACEDNGHH; // 0x60
		::RPG::Client::IAssetOperation* JHDCADNDAFO; // 0x68
		::ODLKDMDPHAI* JPADGLBMNBH; // 0x70
		::System::Collections::Generic::List_1<::CBMGBGGBNCF*>* GANMGOCFDIA; // 0x78
		::System::Action_2<::System::Int32, ::BPFKOIIMKBG>* ILAHFOIJAPF; // 0x80
		::ODLKDMDPHAI* LLBADFLDEIA; // 0x88
		::Il2CppArray<::IKKAFGPNEGO*>* FDHOAEDHKCH; // 0x90
		::RPG::Client::IAssetOperation* BLKPFJLGBKL; // 0x98
		::System::String* _FreeStyleCharacterID_k__BackingField; // 0xA0
		::System::String* _FreeStyleCharacterConfigPath_k__BackingField; // 0xA8
		::System::Collections::Generic::List_1<::System::Collections::Generic::KeyValuePair_2<::UnityEngine::AnimationClip*, ::UnityEngine::AnimationClip*>>* LFFHHHKPLIP; // 0xB0
		::RPG::Client::MockAnimator* APPGGMLEPLN; // 0xB8
		::UnityEngine::AnimatorOverrideController* KENAPFGJKOM; // 0xC0
		::ODLKDMDPHAI* EIJLFMCEAEK; // 0xC8
		::RPG::Client::IAssetOperation* OGDOGDKHMCL; // 0xD0
		::System::Collections::Generic::List_1<::RPG::GameCore::FreeStyleAnimClipZoneInfo*>* IDCGAECLCLO; // 0xD8
		::RPG::Client::IAssetOperation* FLPMBHPIAIH; // 0xE0
		::UnityEngine::RuntimeAnimatorController* NBECDBIDDOP; // 0xE8
		::System::Action_1<::System::UInt32>* NJKGFILIKCP; // 0xF0
		::EFPPMIHCBAA* EGIKBCFNLMD; // 0xF8
		::FJDDMMEHBLE* IGHAHBNLIJA; // 0x100
		::RPG::GameCore::FreeStyleMotionInfoConfig* PINMAEFAFGI; // 0x108
		::System::Boolean IKNJHELIECJ; // 0x110
		::System::Byte _padding0[0x3];
		::System::Int32 MEANOCBEKDH; // 0x114
		::System::UInt32 MDICCICAPKK; // 0x118
		::System::Int32 ABBBKLNONAN; // 0x11C
		::System::Int32 NNELMPEODBC; // 0x120
		::LKLOMEEPIEM LLKLDMJGNEE; // 0x124
		::System::Int32 ANNMJFIIBFE; // 0x144
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
