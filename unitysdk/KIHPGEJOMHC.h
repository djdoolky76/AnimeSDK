#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
#include "unitysdk/KIHPGEJOMHC_IBJIOCDFFPA.h"
#include "unitysdk/KIHPGEJOMHC_MemberFrontApproach.h"
#include "unitysdk/KIHPGEJOMHC_MemberFrontDirection.h"
#include "unitysdk/KIHPGEJOMHC_MemberFrontPoseRejectReason.h"
#include "unitysdk/KIHPGEJOMHC_MemberFrontRouteBuildResult.h"
#include "unitysdk/KIHPGEJOMHC_NavigatePhase.h"
#include "unitysdk/RPG/GameCore/AdvNavigationFailReason.h"
#include "unitysdk/RPG/GameCore/CharacterMotionFlag.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/KIHPGEJOMHC_GLEPACIIPLL.h"
#include "unitysdk/UnityEngine/Quaternion.h"
class FOOIINCDBFA;
class GAJEPPFKCIA;
class MGFNHJEOCOC;
class PEDAPLLONJD;
namespace RPG::GameCore { class AdventureCharacterController; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class PetPartyMemberFrontDestination; }
namespace RPG::GameCore { class PetPartyRandomStrollDestination; }
namespace RPG::GameCore { class TaskConfig; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }
namespace UnityEngine::AI { class NavMeshPath; }

#define KIHPGEJOMHC_AGKNLMDENAG_OFFSET UNITYSDK_OFFSET(0x19EEE530)
#define KIHPGEJOMHC_AHAGKIHBFAJ_OFFSET UNITYSDK_OFFSET(0x19EEA130)
#define KIHPGEJOMHC_AHBJEHFCPIK_OFFSET UNITYSDK_OFFSET(0x19EE99B0)
#define KIHPGEJOMHC_BCGODIIPGJI_OFFSET UNITYSDK_OFFSET(0x19EE6310)
#define KIHPGEJOMHC_BFJIFFPOMPI_OFFSET UNITYSDK_OFFSET(0x19EE7590)
#define KIHPGEJOMHC_BHOBMEHFGPJ_OFFSET UNITYSDK_OFFSET(0x19EEC650)
#define KIHPGEJOMHC_BIAOOJMNEAK_OFFSET UNITYSDK_OFFSET(0x19EEBB20)
#define KIHPGEJOMHC_BJLJJLBDCMJ_OFFSET UNITYSDK_OFFSET(0x19EEFE10)
#define KIHPGEJOMHC_BOKLNLAHNPE_OFFSET UNITYSDK_OFFSET(0x19EECF60)
#define KIHPGEJOMHC_BPPLOAPAMJL_OFFSET UNITYSDK_OFFSET(0x19EEB020)
#define KIHPGEJOMHC_CBPOFDKAHML_OFFSET UNITYSDK_OFFSET(0x19EEC420)
#define KIHPGEJOMHC_CCMOCMFGONF_OFFSET UNITYSDK_OFFSET(0x19EEC220)
#define KIHPGEJOMHC_CGJGDOPDHCM_OFFSET UNITYSDK_OFFSET(0x19EED020)
#define KIHPGEJOMHC_CKHBBBLNJAG_OFFSET UNITYSDK_OFFSET(0x19EE86D0)
#define KIHPGEJOMHC_CLJCANDLIAF_OFFSET UNITYSDK_OFFSET(0x19EEFB90)
#define KIHPGEJOMHC_CTOR_OFFSET UNITYSDK_OFFSET(0x19EE5A30)
#define KIHPGEJOMHC_DBDOCEOAFCH_OFFSET UNITYSDK_OFFSET(0x19EE8020)
#define KIHPGEJOMHC_DISPOSE_OFFSET UNITYSDK_OFFSET(0x19EE8280)
#define KIHPGEJOMHC_DJHJPBMEJCK_OFFSET UNITYSDK_OFFSET(0x19EEEC90)
#define KIHPGEJOMHC_DNJHCMNHNOP_OFFSET UNITYSDK_OFFSET(0x19EE89E0)
#define KIHPGEJOMHC_EFPGIDNAFGB_OFFSET UNITYSDK_OFFSET(0x19EE8170)
#define KIHPGEJOMHC_EIHBAMNOFDG_OFFSET UNITYSDK_OFFSET(0x19EE6CA0)
#define KIHPGEJOMHC_EJCEGEFFINC_OFFSET UNITYSDK_OFFSET(0x19EEBAB0)
#define KIHPGEJOMHC_FALKLEOPNEE_OFFSET UNITYSDK_OFFSET(0x19EE8D60)
#define KIHPGEJOMHC_FEHPMAGHDNK_OFFSET UNITYSDK_OFFSET(0x19EE7980)
#define KIHPGEJOMHC_FFDMNNLCOJM_OFFSET UNITYSDK_OFFSET(0x19EEB360)
#define KIHPGEJOMHC_FKDDNFNBCMB_OFFSET UNITYSDK_OFFSET(0x19EE7060)
#define KIHPGEJOMHC_FKOKCBEPEEL_OFFSET UNITYSDK_OFFSET(0x19EEBDF0)
#define KIHPGEJOMHC_GAGENIBFBMJ_OFFSET UNITYSDK_OFFSET(0x19EEB9F0)
#define KIHPGEJOMHC_GDCDEONIMJB_OFFSET UNITYSDK_OFFSET(0x19EE7260)
#define KIHPGEJOMHC_GDPPEGFCHOM_OFFSET UNITYSDK_OFFSET(0x19EEF660)
#define KIHPGEJOMHC_GETCONFIG_OFFSET UNITYSDK_OFFSET(0x19EE5C30)
#define KIHPGEJOMHC_GHELMJJGJJF_OFFSET UNITYSDK_OFFSET(0x19EE8B90)
#define KIHPGEJOMHC_GIMHIHIIBNN_OFFSET UNITYSDK_OFFSET(0x19EE6030)
#define KIHPGEJOMHC_GJJOFFJKCAM_OFFSET UNITYSDK_OFFSET(0x19EEB980)
#define KIHPGEJOMHC_GKGABKFKDPM_OFFSET UNITYSDK_OFFSET(0x19EE5F70)
#define KIHPGEJOMHC_GLGFKDFFNNL_OFFSET UNITYSDK_OFFSET(0x19EEC380)
#define KIHPGEJOMHC_GPGDNOEJKCH_OFFSET UNITYSDK_OFFSET(0x19EEF0A0)
#define KIHPGEJOMHC_HABBLEHAMFH_OFFSET UNITYSDK_OFFSET(0x19EEC190)
#define KIHPGEJOMHC_HKOHJFLLDOC_OFFSET UNITYSDK_OFFSET(0x19EED2E0)
#define KIHPGEJOMHC_HMBBDIGBNDA_OFFSET UNITYSDK_OFFSET(0x19EEACF0)
#define KIHPGEJOMHC_HPAPEALEFGJ_OFFSET UNITYSDK_OFFSET(0x19EEA2D0)
#define KIHPGEJOMHC_IACHAMBEPCK_OFFSET UNITYSDK_OFFSET(0x19EE6160)
#define KIHPGEJOMHC_IEDHKIEBPPN_OFFSET UNITYSDK_OFFSET(0x19EE7EE0)
#define KIHPGEJOMHC_IEHDCLOBHBC_OFFSET UNITYSDK_OFFSET(0x19EE87B0)
#define KIHPGEJOMHC_IGEOCDFMOFA_OFFSET UNITYSDK_OFFSET(0x19EEA750)
#define KIHPGEJOMHC_IHCNIEFBEPO_OFFSET UNITYSDK_OFFSET(0x19EE70C0)
#define KIHPGEJOMHC_IIECMNAACJI_OFFSET UNITYSDK_OFFSET(0x19EEBFF0)
#define KIHPGEJOMHC_JECBLLNINAD_OFFSET UNITYSDK_OFFSET(0x19EEC4F0)
#define KIHPGEJOMHC_JEFJAMFJBAK_OFFSET UNITYSDK_OFFSET(0x19EE9B10)
#define KIHPGEJOMHC_JOLMDDNIOFE_OFFSET UNITYSDK_OFFSET(0x19EE80C0)
#define KIHPGEJOMHC_KIPHEAJKGJF_OFFSET UNITYSDK_OFFSET(0x19EE7170)
#define KIHPGEJOMHC_KKAPIGAMFOF_OFFSET UNITYSDK_OFFSET(0x19EE73C0)
#define KIHPGEJOMHC_KLENAKKAMPL_OFFSET UNITYSDK_OFFSET(0x19EEB590)
#define KIHPGEJOMHC_KMHLHONMNPH_OFFSET UNITYSDK_OFFSET(0x19EE6620)
#define KIHPGEJOMHC_KMIIMMCOBBC_OFFSET UNITYSDK_OFFSET(0x19EEAEB0)
#define KIHPGEJOMHC_LAPJNJAMHMI_OFFSET UNITYSDK_OFFSET(0x19EED3B0)
#define KIHPGEJOMHC_LEHBJIAAIAD_OFFSET UNITYSDK_OFFSET(0x19EE6AC0)
#define KIHPGEJOMHC_LHLAFABHMMD_OFFSET UNITYSDK_OFFSET(0x19EEA910)
#define KIHPGEJOMHC_LJNMLKGOCMI_OFFSET UNITYSDK_OFFSET(0x19EE9510)
#define KIHPGEJOMHC_LLCDDOBNLBJ_OFFSET UNITYSDK_OFFSET(0x19EEBE80)
#define KIHPGEJOMHC_LMNNKFBKCBP_OFFSET UNITYSDK_OFFSET(0x19EE8EE0)
#define KIHPGEJOMHC_MBCCNOOPHAD_OFFSET UNITYSDK_OFFSET(0x19EEBB90)
#define KIHPGEJOMHC_MJJJPGJBDJF_OFFSET UNITYSDK_OFFSET(0x19EE6BF0)
#define KIHPGEJOMHC_MLPEFFHDJCJ_OFFSET UNITYSDK_OFFSET(0x19EE8860)
#define KIHPGEJOMHC_MOOPNHLGPNB_OFFSET UNITYSDK_OFFSET(0x19EE83F0)
#define KIHPGEJOMHC_NDHJOBDAPBG_OFFSET UNITYSDK_OFFSET(0x19EEB140)
#define KIHPGEJOMHC_NDMKJMAHCCM_OFFSET UNITYSDK_OFFSET(0x19EEBFA0)
#define KIHPGEJOMHC_NKHIAFIOAJO_OFFSET UNITYSDK_OFFSET(0x19EEC110)
#define KIHPGEJOMHC_NPOGOAJBLKF_OFFSET UNITYSDK_OFFSET(0x19EEDB60)
#define KIHPGEJOMHC_OAEHFOJFKAM_OFFSET UNITYSDK_OFFSET(0x19EE61E0)
#define KIHPGEJOMHC_ONDJEHANDAO_OFFSET UNITYSDK_OFFSET(0x19EEE5E0)
#define KIHPGEJOMHC_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x19EE5C70)
#define KIHPGEJOMHC_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x19EE6960)
#define KIHPGEJOMHC_PAMLFIODPHL_OFFSET UNITYSDK_OFFSET(0x19EEEAB0)
#define KIHPGEJOMHC_PBEFPHNCIDJ_OFFSET UNITYSDK_OFFSET(0x19EE7C30)
#define KIHPGEJOMHC_PJGCJMLBBAJ_OFFSET UNITYSDK_OFFSET(0x19EEF5D0)
#define KIHPGEJOMHC_PLPDNKKJDLD_OFFSET UNITYSDK_OFFSET(0x19EEB660)
#define KIHPGEJOMHC_PMADCOEFAEC_OFFSET UNITYSDK_OFFSET(0x19EEEDE0)
#define KIHPGEJOMHC_PNMEFDMIAHF_OFFSET UNITYSDK_OFFSET(0x19EEAF70)
#define KIHPGEJOMHC_TICK_OFFSET UNITYSDK_OFFSET(0x19EE6D10)

inline static constexpr unsigned int KIHPGEJOMHC_TypeDefinitionIndex = 54244;

	class KIHPGEJOMHC : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::GameEntity* GCNPJAEJMGA; // 0x18
		::MGFNHJEOCOC* OFKGLJOAMLD; // 0x20
		::RPG::GameCore::GameEntity* CMNJDMKPPIA; // 0x28
		::RPG::GameCore::GameEntity* EOHOFFHHJKC; // 0x30
		::PEDAPLLONJD* IFEABAFDNIB; // 0x38
		::RPG::GameCore::GameEntity* MNELKDDGGNJ; // 0x40
		::FOOIINCDBFA* JFMDCAIDMHJ; // 0x48
		::PEDAPLLONJD* KPJMDJAALJF; // 0x50
		::GAJEPPFKCIA* KDEAEMBOBOK; // 0x58
		::RPG::GameCore::PetPartyRandomStrollDestination* GHAHDJHDOEE; // 0x60
		::RPG::GameCore::GameEntity* EAGINDINJHE; // 0x68
		::UnityEngine::AI::NavMeshPath* IAOJNJIBNNI; // 0x70
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x78
		::Il2CppArray<::UnityEngine::Vector3>* JDMLLKKHOMC; // 0x80
		::Il2CppArray<::UnityEngine::Vector3>* FMPIJAAEILB; // 0x88
		::RPG::GameCore::PetPartyMemberFrontDestination* AFDAILMPCPE; // 0x90
		::RPG::GameCore::AdventureCharacterController* APNMGGMMPPN; // 0x98
		::Il2CppArray<::UnityEngine::Vector3>* PIFHJEDFJIO; // 0xA0
		::PEDAPLLONJD* HGKBLIINDPI; // 0xA8
		::Il2CppArray<::UnityEngine::Vector3>* KEFJNGOPPKK; // 0xB0
		::System::Single NBCOPLGFJON; // 0xB8
		::System::Single MMDDKLGKEKL; // 0xBC
		::KIHPGEJOMHC_IBJIOCDFFPA KCFOAKAINNO; // 0xC0
		::UnityEngine::Vector3 GLFIIFDCPDO; // 0xCC
		::System::Single EGJBKCDDLJO; // 0xD8
		::KIHPGEJOMHC_MemberFrontApproach FCLHAMFIKMC; // 0xDC
		::System::Int32 LGCDGJJBOFJ; // 0xE0
		::System::Int32 JEGAOFKPHFG; // 0xE4
		::System::Single MDNCBCPDBOA; // 0xE8
		::System::Int32 JNMKNEBBJPG; // 0xEC
		::System::Boolean EIHOBDBEAAM; // 0xF0
		::System::Boolean OKFKMBGHEOB; // 0xF1
		::System::Boolean PLEIMFNBJBL; // 0xF2
		::System::Boolean CJGOMJJHCKC; // 0xF3
		::System::Single GHIONIBDMNK; // 0xF4
		::System::Boolean CAICBMEIPDF; // 0xF8
		::System::Boolean DLDOBEFOOFN; // 0xF9
		::System::Byte _padding0[0x2];
		::KIHPGEJOMHC_IBJIOCDFFPA HPCGLEKNGPF; // 0xFC
		::UnityEngine::Vector3 CCCCMKPCNMO; // 0x108
		::System::Single KNKOMOGDLOJ; // 0x114
		::UnityEngine::Vector3 AACDMNLCNFB; // 0x118
		::RPG::GameCore::AdvNavigationFailReason DABKHDICLNA; // 0x124
		::UnityEngine::Vector3 MBPIBLLNFHO; // 0x128
		::RPG::GameCore::CharacterMotionFlag JEFOMAFAHAI; // 0x134
		::UnityEngine::Vector3 ELDJGCHLGEK; // 0x138
		::System::Single OBNNDFBKOEL; // 0x144
		::System::Single NKIGIHGLKKB; // 0x148
		::KIHPGEJOMHC_NavigatePhase NOHNKAIALPJ; // 0x14C
		::KIHPGEJOMHC_MemberFrontApproach EHEICIHDPIE; // 0x150
		::UnityEngine::Vector3 DJAGNFFDBAD; // 0x154
		::KIHPGEJOMHC_MemberFrontDirection APFDCNPHEMN; // 0x160
		::System::Boolean JJPKPNIEFJM; // 0x164
		::System::Boolean OKJCMDOEBNM; // 0x165
		::System::Boolean OBHMEGIICKG; // 0x166
		::System::Boolean CJJMPFHCICK; // 0x167
		::KIHPGEJOMHC_MemberFrontApproach ABJBBAHHBEN; // 0x168
		::System::Single PGDCHKCEOBD; // 0x16C
		::System::Boolean BEFCKACBOFI; // 0x170
		::System::Boolean PHIPPHJPMAD; // 0x171
		::System::Boolean KPGNOKBLNBN; // 0x172
		::System::Boolean CPGNMMHCMGF; // 0x173
		::System::Int32 LBMANLJCEFO; // 0x174
		// static const ::System::Object FICPFPPHJDJ; // 0x0
		// static const ::System::Object HEMAEBACBCF; // 0x0
		// static const ::System::Object LAGABGKHOGL; // 0x0
		// static const ::System::Object CEODLNFDFCB; // 0x0
		// static const ::System::Object ALDMACMFNMM; // 0x0
		// static const ::System::Object NAKCBAOACBK; // 0x0
		// static const ::System::Object OOABLPNHHLJ; // 0x0
		// static const ::System::Object BGMEAPLOAKI; // 0x0
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::MGFNHJEOCOC* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::MGFNHJEOCOC*))((::PBYTE)hIl2Cpp + KIHPGEJOMHC_CTOR_OFFSET))(this, a1, a2);
		}

		::RPG::GameCore::TaskConfig* GetConfig()
		{
			return ((::RPG::GameCore::TaskConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + KIHPGEJOMHC_GETCONFIG_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KIHPGEJOMHC_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KIHPGEJOMHC_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + KIHPGEJOMHC_TICK_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KIHPGEJOMHC_DISPOSE_OFFSET))(this);
		}

		::System::Void BCGODIIPGJI(::RPG::GameCore::PetPartyRandomStrollDestination* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PetPartyRandomStrollDestination*))((::PBYTE)hIl2Cpp + KIHPGEJOMHC_BCGODIIPGJI_OFFSET))(this, a1);
		}

		::System::Void KMHLHONMNPH(::RPG::GameCore::PetPartyMemberFrontDestination* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PetPartyMemberFrontDestination*))((::PBYTE)hIl2Cpp + KIHPGEJOMHC_KMHLHONMNPH_OFFSET))(this, a1);
		}

		::System::Boolean OAEHFOJFKAM()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KIHPGEJOMHC_OAEHFOJFKAM_OFFSET))(this);
		}

		::System::Boolean IEHDCLOBHBC()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KIHPGEJOMHC_IEHDCLOBHBC_OFFSET))(this);
		}

		::System::Void EIHBAMNOFDG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KIHPGEJOMHC_EIHBAMNOFDG_OFFSET))(this);
		}

		::System::Void KKAPIGAMFOF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KIHPGEJOMHC_KKAPIGAMFOF_OFFSET))(this);
		}

		::System::Void IEDHKIEBPPN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KIHPGEJOMHC_IEDHKIEBPPN_OFFSET))(this);
		}

		::System::Void PBEFPHNCIDJ(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + KIHPGEJOMHC_PBEFPHNCIDJ_OFFSET))(this, a1);
		}

		::System::Void NDHJOBDAPBG(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + KIHPGEJOMHC_NDHJOBDAPBG_OFFSET))(this, a1);
		}

		::System::Boolean PNMEFDMIAHF()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KIHPGEJOMHC_PNMEFDMIAHF_OFFSET))(this);
		}

		::System::Boolean JEFJAMFJBAK(::UnityEngine::Vector3 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + KIHPGEJOMHC_JEFJAMFJBAK_OFFSET))(this, a1);
		}

		::System::Void BFJIFFPOMPI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KIHPGEJOMHC_BFJIFFPOMPI_OFFSET))(this);
		}

		::System::Boolean HPAPEALEFGJ(::UnityEngine::Vector3 a1, ::UnityEngine::Quaternion a2, ::System::Boolean a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::System::Boolean))((::PBYTE)hIl2Cpp + KIHPGEJOMHC_HPAPEALEFGJ_OFFSET))(this, a1, a2, a3);
		}

		::System::Void FFDMNNLCOJM(::System::Boolean a1, ::System::Boolean a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + KIHPGEJOMHC_FFDMNNLCOJM_OFFSET))(this, a1, a2, a3);
		}

		::System::Void KLENAKKAMPL(::System::Boolean a1, ::System::Boolean a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + KIHPGEJOMHC_KLENAKKAMPL_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean EJCEGEFFINC()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KIHPGEJOMHC_EJCEGEFFINC_OFFSET))(this);
		}

		::System::Void BIAOOJMNEAK(::System::Boolean a1, ::RPG::GameCore::AdvNavigationFailReason a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::RPG::GameCore::AdvNavigationFailReason))((::PBYTE)hIl2Cpp + KIHPGEJOMHC_BIAOOJMNEAK_OFFSET))(this, a1, a2);
		}

		::System::Boolean KIPHEAJKGJF()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KIHPGEJOMHC_KIPHEAJKGJF_OFFSET))(this);
		}

		::System::Void LLCDDOBNLBJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KIHPGEJOMHC_LLCDDOBNLBJ_OFFSET))(this);
		}

		::System::Void MBCCNOOPHAD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KIHPGEJOMHC_MBCCNOOPHAD_OFFSET))(this);
		}

		::System::Void IIECMNAACJI(::RPG::GameCore::AdvNavigationFailReason a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AdvNavigationFailReason))((::PBYTE)hIl2Cpp + KIHPGEJOMHC_IIECMNAACJI_OFFSET))(this, a1);
		}

		::System::Void FKOKCBEPEEL(::RPG::GameCore::AdvNavigationFailReason a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AdvNavigationFailReason))((::PBYTE)hIl2Cpp + KIHPGEJOMHC_FKOKCBEPEEL_OFFSET))(this, a1);
		}

		::System::Void AHAGKIHBFAJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KIHPGEJOMHC_AHAGKIHBFAJ_OFFSET))(this);
		}

		::System::Void IGEOCDFMOFA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KIHPGEJOMHC_IGEOCDFMOFA_OFFSET))(this);
		}

		::System::Void KMIIMMCOBBC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KIHPGEJOMHC_KMIIMMCOBBC_OFFSET))(this);
		}

		::System::Boolean NKHIAFIOAJO()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KIHPGEJOMHC_NKHIAFIOAJO_OFFSET))(this);
		}

		::System::Void AHBJEHFCPIK(::KIHPGEJOMHC_MemberFrontRouteBuildResult a1)
		{
			return ((::System::Void(*)(::PVOID, ::KIHPGEJOMHC_MemberFrontRouteBuildResult))((::PBYTE)hIl2Cpp + KIHPGEJOMHC_AHBJEHFCPIK_OFFSET))(this, a1);
		}

		::System::Void FEHPMAGHDNK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KIHPGEJOMHC_FEHPMAGHDNK_OFFSET))(this);
		}

		::System::Void HABBLEHAMFH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KIHPGEJOMHC_HABBLEHAMFH_OFFSET))(this);
		}

		::System::Void GDCDEONIMJB(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + KIHPGEJOMHC_GDCDEONIMJB_OFFSET))(this, a1);
		}

		::System::Void DBDOCEOAFCH(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + KIHPGEJOMHC_DBDOCEOAFCH_OFFSET))(this, a1);
		}

		::System::Void NDMKJMAHCCM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KIHPGEJOMHC_NDMKJMAHCCM_OFFSET))(this);
		}

		::System::Void EFPGIDNAFGB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KIHPGEJOMHC_EFPGIDNAFGB_OFFSET))(this);
		}

		::System::Void HMBBDIGBNDA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KIHPGEJOMHC_HMBBDIGBNDA_OFFSET))(this);
		}

		::System::Void CCMOCMFGONF(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + KIHPGEJOMHC_CCMOCMFGONF_OFFSET))(this, a1);
		}

		::System::Void JOLMDDNIOFE(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + KIHPGEJOMHC_JOLMDDNIOFE_OFFSET))(this, a1);
		}

		::System::Void CBPOFDKAHML(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + KIHPGEJOMHC_CBPOFDKAHML_OFFSET))(this, a1);
		}

		::System::Void GLGFKDFFNNL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KIHPGEJOMHC_GLGFKDFFNNL_OFFSET))(this);
		}

		::System::Void IACHAMBEPCK(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + KIHPGEJOMHC_IACHAMBEPCK_OFFSET))(this, a1);
		}

		::System::Void IHCNIEFBEPO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KIHPGEJOMHC_IHCNIEFBEPO_OFFSET))(this);
		}

		::System::Void LEHBJIAAIAD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KIHPGEJOMHC_LEHBJIAAIAD_OFFSET))(this);
		}

		::KIHPGEJOMHC_MemberFrontRouteBuildResult LJNMLKGOCMI()
		{
			return ((::KIHPGEJOMHC_MemberFrontRouteBuildResult(*)(::PVOID))((::PBYTE)hIl2Cpp + KIHPGEJOMHC_LJNMLKGOCMI_OFFSET))(this);
		}

		::KIHPGEJOMHC_MemberFrontRouteBuildResult JECBLLNINAD(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::Single a3, ::System::Single a4, ::KIHPGEJOMHC_MemberFrontApproach a5)
		{
			return ((::KIHPGEJOMHC_MemberFrontRouteBuildResult(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::System::Single, ::KIHPGEJOMHC_MemberFrontApproach))((::PBYTE)hIl2Cpp + KIHPGEJOMHC_JECBLLNINAD_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Boolean BHOBMEHFGPJ(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::Single a3, ::System::Single a4, ::KIHPGEJOMHC_MemberFrontApproach a5)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::System::Single, ::KIHPGEJOMHC_MemberFrontApproach))((::PBYTE)hIl2Cpp + KIHPGEJOMHC_BHOBMEHFGPJ_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Int32 LAPJNJAMHMI(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::System::Single a4, ::System::Boolean a5, ::Il2CppArray<::UnityEngine::Vector3>* a6)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::System::Boolean, ::Il2CppArray<::UnityEngine::Vector3>*))((::PBYTE)hIl2Cpp + KIHPGEJOMHC_LAPJNJAMHMI_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Boolean PLPDNKKJDLD(::UnityEngine::Vector3 a1, ::Il2CppArray<::UnityEngine::Vector3>* a2, ::System::Int32 a3, ::RPG::GameCore::GameEntity* a4, ::System::Single a5, ::System::Single a6, ::System::Single a7, ::System::Single a8)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::Il2CppArray<::UnityEngine::Vector3>*, ::System::Int32, ::RPG::GameCore::GameEntity*, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + KIHPGEJOMHC_PLPDNKKJDLD_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
		}

		::System::Boolean NPOGOAJBLKF(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::RPG::GameCore::GameEntity* a3, ::System::Single a4, ::System::Single a5, ::System::Single a6, ::System::Boolean a7, ::System::Single a8, ::UnityEngine::Vector3 a9, ::System::Single a10)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::RPG::GameCore::GameEntity*, ::System::Single, ::System::Single, ::System::Single, ::System::Boolean, ::System::Single, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + KIHPGEJOMHC_NPOGOAJBLKF_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10);
		}

		::System::Boolean PAMLFIODPHL(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::Single a3, ::System::Single a4, ::System::Boolean a5, ::System::Single a6)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::System::Single, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + KIHPGEJOMHC_PAMLFIODPHL_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Boolean LMNNKFBKCBP(::KIHPGEJOMHC_MemberFrontApproach a1, ::KIHPGEJOMHC_MemberFrontPoseRejectReason a2, ::KIHPGEJOMHC_GLEPACIIPLL a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::KIHPGEJOMHC_MemberFrontApproach, ::KIHPGEJOMHC_MemberFrontPoseRejectReason, ::KIHPGEJOMHC_GLEPACIIPLL))((::PBYTE)hIl2Cpp + KIHPGEJOMHC_LMNNKFBKCBP_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean BOKLNLAHNPE(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + KIHPGEJOMHC_BOKLNLAHNPE_OFFSET))(this, a1, a2);
		}

		static ::System::Boolean PMADCOEFAEC(::KIHPGEJOMHC_MemberFrontApproach a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3)
		{
			return ((::System::Boolean(*)(::KIHPGEJOMHC_MemberFrontApproach, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + KIHPGEJOMHC_PMADCOEFAEC_OFFSET))(a1, a2, a3);
		}

		::System::Boolean CGJGDOPDHCM(::UnityEngine::Vector3 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + KIHPGEJOMHC_CGJGDOPDHCM_OFFSET))(this, a1);
		}

		::System::Boolean LHLAFABHMMD(::UnityEngine::Vector3 a1, ::RPG::GameCore::GameEntity* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + KIHPGEJOMHC_LHLAFABHMMD_OFFSET))(this, a1, a2);
		}

		::System::Boolean GPGDNOEJKCH(::UnityEngine::Vector3 a1, ::KIHPGEJOMHC_IBJIOCDFFPA a2, ::RPG::GameCore::GameEntity* a3, ::RPG::GameCore::GameEntity* a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::KIHPGEJOMHC_IBJIOCDFFPA, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + KIHPGEJOMHC_GPGDNOEJKCH_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Boolean ONDJEHANDAO(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::RPG::GameCore::GameEntity* a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + KIHPGEJOMHC_ONDJEHANDAO_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean GDPPEGFCHOM(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::KIHPGEJOMHC_IBJIOCDFFPA a3, ::RPG::GameCore::GameEntity* a4, ::RPG::GameCore::GameEntity* a5)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::KIHPGEJOMHC_IBJIOCDFFPA, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + KIHPGEJOMHC_GDPPEGFCHOM_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		static ::System::Boolean FALKLEOPNEE(::RPG::GameCore::GameEntity* a1, ::KIHPGEJOMHC_IBJIOCDFFPA a2)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::GameEntity*, ::KIHPGEJOMHC_IBJIOCDFFPA))((::PBYTE)hIl2Cpp + KIHPGEJOMHC_FALKLEOPNEE_OFFSET))(a1, a2);
		}

		static ::System::Boolean CKHBBBLNJAG(::RPG::GameCore::GameEntity* a1, ::UnityEngine::Vector3 a2)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::GameEntity*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + KIHPGEJOMHC_CKHBBBLNJAG_OFFSET))(a1, a2);
		}

		static ::System::Boolean GHELMJJGJJF(::RPG::GameCore::GameEntity* a1, ::UnityEngine::Vector3 a2)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::GameEntity*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + KIHPGEJOMHC_GHELMJJGJJF_OFFSET))(a1, a2);
		}

		::System::Single AGKNLMDENAG()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + KIHPGEJOMHC_AGKNLMDENAG_OFFSET))(this);
		}

		static ::System::Single CLJCANDLIAF(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3)
		{
			return ((::System::Single(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + KIHPGEJOMHC_CLJCANDLIAF_OFFSET))(a1, a2, a3);
		}

		static ::System::Single DJHJPBMEJCK(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3)
		{
			return ((::System::Single(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + KIHPGEJOMHC_DJHJPBMEJCK_OFFSET))(a1, a2, a3);
		}

		static ::System::Single BPPLOAPAMJL(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2)
		{
			return ((::System::Single(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + KIHPGEJOMHC_BPPLOAPAMJL_OFFSET))(a1, a2);
		}

		static ::UnityEngine::Vector3 GJJOFFJKCAM(::UnityEngine::Vector3 a1)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + KIHPGEJOMHC_GJJOFFJKCAM_OFFSET))(a1);
		}

		static ::System::Boolean PJGCJMLBBAJ(::System::Single a1, ::System::Single a2, ::System::Single a3, ::System::Single a4)
		{
			return ((::System::Boolean(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + KIHPGEJOMHC_PJGCJMLBBAJ_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Boolean FKDDNFNBCMB(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + KIHPGEJOMHC_FKDDNFNBCMB_OFFSET))(a1);
		}

		::System::Boolean MLPEFFHDJCJ(::System::Single a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + KIHPGEJOMHC_MLPEFFHDJCJ_OFFSET))(this, a1);
		}

		::System::Void MJJJPGJBDJF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KIHPGEJOMHC_MJJJPGJBDJF_OFFSET))(this);
		}

		static ::System::Single GAGENIBFBMJ(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + KIHPGEJOMHC_GAGENIBFBMJ_OFFSET))(a1, a2);
		}

		static ::System::Boolean BJLJJLBDCMJ(::System::Single a1)
		{
			return ((::System::Boolean(*)(::System::Single))((::PBYTE)hIl2Cpp + KIHPGEJOMHC_BJLJJLBDCMJ_OFFSET))(a1);
		}

		::System::Boolean GIMHIHIIBNN()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KIHPGEJOMHC_GIMHIHIIBNN_OFFSET))(this);
		}

		static ::System::Boolean MOOPNHLGPNB(::RPG::GameCore::PetPartyRandomStrollDestination* a1)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::PetPartyRandomStrollDestination*))((::PBYTE)hIl2Cpp + KIHPGEJOMHC_MOOPNHLGPNB_OFFSET))(a1);
		}

		static ::System::Boolean DNJHCMNHNOP(::RPG::GameCore::PetPartyMemberFrontDestination* a1)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::PetPartyMemberFrontDestination*))((::PBYTE)hIl2Cpp + KIHPGEJOMHC_DNJHCMNHNOP_OFFSET))(a1);
		}

		::System::Void HKOHJFLLDOC(::Il2CppArray<::UnityEngine::Vector3>* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Vector3>*, ::System::Int32))((::PBYTE)hIl2Cpp + KIHPGEJOMHC_HKOHJFLLDOC_OFFSET))(this, a1, a2);
		}

		::System::Void GKGABKFKDPM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KIHPGEJOMHC_GKGABKFKDPM_OFFSET))(this);
		}

	};
