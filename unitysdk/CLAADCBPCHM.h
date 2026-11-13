#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CLAADCBPCHM_InChargeState.h"
#include "unitysdk/FMPCODLIOLG.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/SkillSPProgressType.h"
#include "unitysdk/IGKFNIEJGLM.h"
class DEKDEPEBHNC;
class HONHNENMAJM;
class KECKKGPEKPJ;
namespace RPG::GameCore { class AbilityCurrentSPChange; }
namespace RPG::GameCore { class AbilityCurrentSpecialSPChange; }
namespace RPG::GameCore { class AbilityMaxSPChange; }
namespace RPG::GameCore { class AbilityMaxSpecialSPChange; }
namespace RPG::GameCore { class AbilitySkillPropertyChange; }
namespace RPG::GameCore { class CharacterDataComponent; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class LevelTurnUltraSkillCancel; }
namespace RPG::GameCore { class LevelTurnUltraSkillEnd; }
namespace RPG::GameCore { class LevelTurnUltraSkillExecutingBegin; }
namespace RPG::GameCore { class LevelUIComponent; }
namespace RPG::GameCore { class SkillCharacterComponent; }
namespace RPG::GameCore { class SkillData; }
namespace RPG::GameCore { class TurnBasedAbilityComponent; }
namespace RPG::GameCore { class TurnBasedModifierInstance; }
namespace System { class Object; }
namespace UnityEngine { class Transform; }

#define CLAADCBPCHM_ACAOFNJELNN_OFFSET UNITYSDK_OFFSET(0x1AD54130)
#define CLAADCBPCHM_AFMHNCLHNDP_OFFSET UNITYSDK_OFFSET(0x1AD57020)
#define CLAADCBPCHM_ALPLJIKFHNG_OFFSET UNITYSDK_OFFSET(0x1AD55310)
#define CLAADCBPCHM_APKDADOCMGI_OFFSET UNITYSDK_OFFSET(0x1AD52F20)
#define CLAADCBPCHM_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x1AD57D20)
#define CLAADCBPCHM_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x1AD58180)
#define CLAADCBPCHM_BBGGEBDCJJK_OFFSET UNITYSDK_OFFSET(0x1AD55C20)
#define CLAADCBPCHM_BBPGKAAAHCH_OFFSET UNITYSDK_OFFSET(0x1AD572F0)
#define CLAADCBPCHM_BDFHFPKMFGM_OFFSET UNITYSDK_OFFSET(0x1AD55ED0)
#define CLAADCBPCHM_BFDGGBJLEBA_OFFSET UNITYSDK_OFFSET(0x1AD56CF0)
#define CLAADCBPCHM_BGLCJHDKMMD_OFFSET UNITYSDK_OFFSET(0x1AD54C60)
#define CLAADCBPCHM_BONEBLMEHBD_OFFSET UNITYSDK_OFFSET(0x1AD53C80)
#define CLAADCBPCHM_BPEGIDAPNIP_OFFSET UNITYSDK_OFFSET(0x1AD53190)
#define CLAADCBPCHM_CFLADHCMBMK_OFFSET UNITYSDK_OFFSET(0x1AD53A70)
#define CLAADCBPCHM_CNDKEOBIPFP_OFFSET UNITYSDK_OFFSET(0x1AD549E0)
#define CLAADCBPCHM_CNIECAJNPOO_OFFSET UNITYSDK_OFFSET(0x1AD54EE0)
#define CLAADCBPCHM_CTOR_OFFSET UNITYSDK_OFFSET(0x1AD585C0)
#define CLAADCBPCHM_DBGGIHEJACL_OFFSET UNITYSDK_OFFSET(0x1AD56B80)
#define CLAADCBPCHM_DBHAHOLPOCA_OFFSET UNITYSDK_OFFSET(0x1AD56160)
#define CLAADCBPCHM_DICPMEJINGC_OFFSET UNITYSDK_OFFSET(0x1AD55F30)
#define CLAADCBPCHM_DMBMGCGDMCE_OFFSET UNITYSDK_OFFSET(0x1AD53FF0)
#define CLAADCBPCHM_DPNJLJEGBMN_OFFSET UNITYSDK_OFFSET(0x1AD560A0)
#define CLAADCBPCHM_EAOGLDEIMJO_OFFSET UNITYSDK_OFFSET(0x1AD576F0)
#define CLAADCBPCHM_EBLJAEJIGLP_OFFSET UNITYSDK_OFFSET(0x1AD579F0)
#define CLAADCBPCHM_EBPDLMBPLBL_OFFSET UNITYSDK_OFFSET(0x1AD543C0)
#define CLAADCBPCHM_EIAFGCLFMNL_OFFSET UNITYSDK_OFFSET(0x1AD56E40)
#define CLAADCBPCHM_FHFJGMABNBA_OFFSET UNITYSDK_OFFSET(0x1AD55DB0)
#define CLAADCBPCHM_FIHLOKNBBJC_OFFSET UNITYSDK_OFFSET(0x1AD55400)
#define CLAADCBPCHM_FLJMKABENAD_OFFSET UNITYSDK_OFFSET(0x1AD56D80)
#define CLAADCBPCHM_GDNJDJFADMO_OFFSET UNITYSDK_OFFSET(0x1AD56A50)
#define CLAADCBPCHM_GOLKPFPKODP_OFFSET UNITYSDK_OFFSET(0x1AD53F90)
#define CLAADCBPCHM_HALDNLMGLHA_OFFSET UNITYSDK_OFFSET(0x1AD57930)
#define CLAADCBPCHM_HFOJJHHABFL_OFFSET UNITYSDK_OFFSET(0x1AD55A10)
#define CLAADCBPCHM_HICFADLNCBF_OFFSET UNITYSDK_OFFSET(0x1AD57870)
#define CLAADCBPCHM_HONDKHHKNFO_OFFSET UNITYSDK_OFFSET(0x1AD57630)
#define CLAADCBPCHM_IBFMMHHFGEF_OFFSET UNITYSDK_OFFSET(0x1AD55160)
#define CLAADCBPCHM_IHJCDKFFJLF_OFFSET UNITYSDK_OFFSET(0x1AD57570)
#define CLAADCBPCHM_IJFNEODDFMN_OFFSET UNITYSDK_OFFSET(0x1AD55880)
#define CLAADCBPCHM_IMJGDBIEEPP_OFFSET UNITYSDK_OFFSET(0x1AD57C60)
#define CLAADCBPCHM_JFDACEKAICI_OFFSET UNITYSDK_OFFSET(0x1AD53BA0)
#define CLAADCBPCHM_JJDEBMCFINC_OFFSET UNITYSDK_OFFSET(0x1AD57BA0)
#define CLAADCBPCHM_JMDBCBFABOO_OFFSET UNITYSDK_OFFSET(0x1AD57AB0)
#define CLAADCBPCHM_JMNFOCENFLP_1_OFFSET UNITYSDK_OFFSET(0x1AD56E00)
#define CLAADCBPCHM_JMNFOCENFLP_OFFSET UNITYSDK_OFFSET(0x1AD53DC0)
#define CLAADCBPCHM_JOOGNNINJKL_OFFSET UNITYSDK_OFFSET(0x1AD56CB0)
#define CLAADCBPCHM_KANMCJHEFJJ_OFFSET UNITYSDK_OFFSET(0x1AD55C70)
#define CLAADCBPCHM_KBANLIDKMJB_OFFSET UNITYSDK_OFFSET(0x1AD56F90)
#define CLAADCBPCHM_KBCIFMBOHAI_OFFSET UNITYSDK_OFFSET(0x1AD56EA0)
#define CLAADCBPCHM_KBCNINCDBLP_OFFSET UNITYSDK_OFFSET(0x1AD545B0)
#define CLAADCBPCHM_KGCAOLCOBJJ_OFFSET UNITYSDK_OFFSET(0x1AD56780)
#define CLAADCBPCHM_KHCBFBGMKBJ_OFFSET UNITYSDK_OFFSET(0x1AD57430)
#define CLAADCBPCHM_LACAPACNEPI_OFFSET UNITYSDK_OFFSET(0x1AD52E80)
#define CLAADCBPCHM_LBLKLMMLFJA_OFFSET UNITYSDK_OFFSET(0x1AD55520)
#define CLAADCBPCHM_LECLADPCHAJ_OFFSET UNITYSDK_OFFSET(0x1AD53F00)
#define CLAADCBPCHM_LOHOLLJJMIL_OFFSET UNITYSDK_OFFSET(0x1AD56660)
#define CLAADCBPCHM_MFAHHGLGOBM_OFFSET UNITYSDK_OFFSET(0x1AD57230)
#define CLAADCBPCHM_MFCDFGNIBFN_OFFSET UNITYSDK_OFFSET(0x1AD56920)
#define CLAADCBPCHM_MNDMECJAOII_OFFSET UNITYSDK_OFFSET(0x1AD56FE0)
#define CLAADCBPCHM_MNLFPHAOAGP_OFFSET UNITYSDK_OFFSET(0x1AD54760)
#define CLAADCBPCHM_MPPEBPAINNI_OFFSET UNITYSDK_OFFSET(0x1AD56D30)
#define CLAADCBPCHM_NEMAILGLJDG_OFFSET UNITYSDK_OFFSET(0x1AD53820)
#define CLAADCBPCHM_NGNACJONELO_OFFSET UNITYSDK_OFFSET(0x1AD56740)
#define CLAADCBPCHM_NKPPGDENJAE_OFFSET UNITYSDK_OFFSET(0x1AD53CC0)
#define CLAADCBPCHM_ODGLPKEOBDA_OFFSET UNITYSDK_OFFSET(0x1AD54250)
#define CLAADCBPCHM_OEHPIOOIJDN_OFFSET UNITYSDK_OFFSET(0x1AD570E0)
#define CLAADCBPCHM_OJPBOCBMKDD_OFFSET UNITYSDK_OFFSET(0x1AD56480)
#define CLAADCBPCHM_ONACQUIRE_OFFSET UNITYSDK_OFFSET(0x1AD53070)
#define CLAADCBPCHM_ONRETURN_OFFSET UNITYSDK_OFFSET(0x1AD532A0)
#define CLAADCBPCHM_PBHHAKABHCH_OFFSET UNITYSDK_OFFSET(0x1AD57060)
#define CLAADCBPCHM_PEIBGBPGBKL_OFFSET UNITYSDK_OFFSET(0x1AD577B0)
#define CLAADCBPCHM_PFPGMDMLNEN_OFFSET UNITYSDK_OFFSET(0x1AD556B0)
#define CLAADCBPCHM_PGCIIGMHODG_OFFSET UNITYSDK_OFFSET(0x1AD571A0)
#define CLAADCBPCHM_PHBLFEFNICJ_OFFSET UNITYSDK_OFFSET(0x1AD570A0)
#define CLAADCBPCHM_PMDONNAJEFC_OFFSET UNITYSDK_OFFSET(0x1AD55E70)
#define CLAADCBPCHM_PMOEIJJGNHE_OFFSET UNITYSDK_OFFSET(0x1AD56DC0)
#define CLAADCBPCHM__INITVARONCE_OFFSET UNITYSDK_OFFSET(0x1AD53340)
#define CLAADCBPCHM__ONDISPOSE_OFFSET UNITYSDK_OFFSET(0x1AD53500)
#define CLAADCBPCHM__ONINITPARAMS_OFFSET UNITYSDK_OFFSET(0x1AD52D50)
#define CLAADCBPCHM__ONTICK_OFFSET UNITYSDK_OFFSET(0x1AD53560)
#define CLAADCBPCHM__SETUPVIEW_OFFSET UNITYSDK_OFFSET(0x1AD534B0)

inline static constexpr unsigned int CLAADCBPCHM_TypeDefinitionIndex = 74037;

	class CLAADCBPCHM : public ::FMPCODLIOLG
	{
	public:
		::RPG::GameCore::GameEntity* KAKEIDJDNHJ; // 0x60
		::RPG::GameCore::SkillData* JDPPBAGBACJ; // 0x68
		::RPG::GameCore::LevelUIComponent* FGCIJADADDA; // 0x70
		::RPG::GameCore::SkillCharacterComponent* ENMHNNNJPPN; // 0x78
		::RPG::GameCore::CharacterDataComponent* HANEKMPLHHP; // 0x80
		::UnityEngine::Transform* NDEBJKAMBGK; // 0x88
		::UnityEngine::Transform* ENJGHGIHJBD; // 0x90
		::HONHNENMAJM* CABHPPKKPHF; // 0x98
		::RPG::GameCore::TurnBasedAbilityComponent* HFFKONIDMGL; // 0xA0
		::System::Boolean BGFPEEIAJGN; // 0xA8
		::System::Boolean KAMFJJAAPKC; // 0xA9
		::System::Byte _padding0[0x2];
		::RPG::GameCore::SkillSPProgressType AMGLDBPMEHE; // 0xAC
		::RPG::GameCore::FixPoint PFEOIILLKJB; // 0xB0
		::CLAADCBPCHM_InChargeState CBFPPJCJPME; // 0xB8
		::System::Boolean DONBLPLIDFG; // 0xBC
		::System::Boolean LHBBBIPCMBA; // 0xBD
		::System::Boolean NOJDEAMLKDG; // 0xBE
		::System::Boolean JNABFHBJLBI; // 0xBF
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLAADCBPCHM_CTOR_OFFSET))(this);
		}

		::System::Void _OnInitParams(::IGKFNIEJGLM a1)
		{
			return ((::System::Void(*)(::PVOID, ::IGKFNIEJGLM))((::PBYTE)hIl2Cpp + CLAADCBPCHM__ONINITPARAMS_OFFSET))(this, a1);
		}

		::System::Void OnAcquire(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLAADCBPCHM_ONACQUIRE_OFFSET))(this, a1);
		}

		::System::Void OnReturn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLAADCBPCHM_ONRETURN_OFFSET))(this);
		}

		::System::Void _InitVarOnce()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLAADCBPCHM__INITVARONCE_OFFSET))(this);
		}

		::System::Void _SetupView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLAADCBPCHM__SETUPVIEW_OFFSET))(this);
		}

		::System::Void _OnDispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLAADCBPCHM__ONDISPOSE_OFFSET))(this);
		}

		::System::Void _OnTick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLAADCBPCHM__ONTICK_OFFSET))(this, a1);
		}

		::System::Void BONEBLMEHBD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLAADCBPCHM_BONEBLMEHBD_OFFSET))(this);
		}

		::System::Void NKPPGDENJAE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLAADCBPCHM_NKPPGDENJAE_OFFSET))(this);
		}

		::System::Void JMNFOCENFLP(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLAADCBPCHM_JMNFOCENFLP_OFFSET))(this, a1);
		}

		::System::Void LECLADPCHAJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLAADCBPCHM_LECLADPCHAJ_OFFSET))(this);
		}

		::System::Void DMBMGCGDMCE(::RPG::GameCore::LevelTurnUltraSkillExecutingBegin* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelTurnUltraSkillExecutingBegin*))((::PBYTE)hIl2Cpp + CLAADCBPCHM_DMBMGCGDMCE_OFFSET))(this, a1);
		}

		::System::Void EBPDLMBPLBL(::RPG::GameCore::TurnBasedModifierInstance* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + CLAADCBPCHM_EBPDLMBPLBL_OFFSET))(this, a1);
		}

		::System::Void KBCNINCDBLP(::RPG::GameCore::TurnBasedModifierInstance* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + CLAADCBPCHM_KBCNINCDBLP_OFFSET))(this, a1);
		}

		::System::Void MNLFPHAOAGP(::RPG::GameCore::AbilityCurrentSPChange* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AbilityCurrentSPChange*))((::PBYTE)hIl2Cpp + CLAADCBPCHM_MNLFPHAOAGP_OFFSET))(this, a1);
		}

		::System::Void CNDKEOBIPFP(::RPG::GameCore::AbilityCurrentSpecialSPChange* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AbilityCurrentSpecialSPChange*))((::PBYTE)hIl2Cpp + CLAADCBPCHM_CNDKEOBIPFP_OFFSET))(this, a1);
		}

		::System::Void BGLCJHDKMMD(::RPG::GameCore::AbilityMaxSPChange* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AbilityMaxSPChange*))((::PBYTE)hIl2Cpp + CLAADCBPCHM_BGLCJHDKMMD_OFFSET))(this, a1);
		}

		::System::Void CNIECAJNPOO(::RPG::GameCore::AbilityMaxSpecialSPChange* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AbilityMaxSpecialSPChange*))((::PBYTE)hIl2Cpp + CLAADCBPCHM_CNIECAJNPOO_OFFSET))(this, a1);
		}

		::System::Void IBFMMHHFGEF(::RPG::GameCore::AbilitySkillPropertyChange* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AbilitySkillPropertyChange*))((::PBYTE)hIl2Cpp + CLAADCBPCHM_IBFMMHHFGEF_OFFSET))(this, a1);
		}

		::System::Void ALPLJIKFHNG(::DEKDEPEBHNC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DEKDEPEBHNC*))((::PBYTE)hIl2Cpp + CLAADCBPCHM_ALPLJIKFHNG_OFFSET))(this, a1);
		}

		::System::Void FIHLOKNBBJC(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLAADCBPCHM_FIHLOKNBBJC_OFFSET))(this, a1);
		}

		::System::Void LBLKLMMLFJA(::RPG::GameCore::LevelTurnUltraSkillCancel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelTurnUltraSkillCancel*))((::PBYTE)hIl2Cpp + CLAADCBPCHM_LBLKLMMLFJA_OFFSET))(this, a1);
		}

		::System::Void PFPGMDMLNEN(::KECKKGPEKPJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KECKKGPEKPJ*))((::PBYTE)hIl2Cpp + CLAADCBPCHM_PFPGMDMLNEN_OFFSET))(this, a1);
		}

		::System::Void IJFNEODDFMN(::RPG::GameCore::LevelTurnUltraSkillEnd* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelTurnUltraSkillEnd*))((::PBYTE)hIl2Cpp + CLAADCBPCHM_IJFNEODDFMN_OFFSET))(this, a1);
		}

		::System::Void BBGGEBDCJJK(::KECKKGPEKPJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KECKKGPEKPJ*))((::PBYTE)hIl2Cpp + CLAADCBPCHM_BBGGEBDCJJK_OFFSET))(this, a1);
		}

		::System::Void KANMCJHEFJJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLAADCBPCHM_KANMCJHEFJJ_OFFSET))(this);
		}

		::System::Void BPEGIDAPNIP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLAADCBPCHM_BPEGIDAPNIP_OFFSET))(this);
		}

		::System::Void LACAPACNEPI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLAADCBPCHM_LACAPACNEPI_OFFSET))(this);
		}

		::System::Void NEMAILGLJDG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLAADCBPCHM_NEMAILGLJDG_OFFSET))(this);
		}

		::System::Void PMDONNAJEFC(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLAADCBPCHM_PMDONNAJEFC_OFFSET))(this, a1);
		}

		::System::Void BDFHFPKMFGM(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLAADCBPCHM_BDFHFPKMFGM_OFFSET))(this, a1);
		}

		::System::Void DICPMEJINGC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLAADCBPCHM_DICPMEJINGC_OFFSET))(this);
		}

		::System::Void DBHAHOLPOCA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLAADCBPCHM_DBHAHOLPOCA_OFFSET))(this);
		}

		::System::Void DPNJLJEGBMN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLAADCBPCHM_DPNJLJEGBMN_OFFSET))(this);
		}

		::CLAADCBPCHM_InChargeState OJPBOCBMKDD()
		{
			return ((::CLAADCBPCHM_InChargeState(*)(::PVOID))((::PBYTE)hIl2Cpp + CLAADCBPCHM_OJPBOCBMKDD_OFFSET))(this);
		}

		::System::Void NGNACJONELO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLAADCBPCHM_NGNACJONELO_OFFSET))(this);
		}

		::System::Void KGCAOLCOBJJ(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLAADCBPCHM_KGCAOLCOBJJ_OFFSET))(this, a1);
		}

		::RPG::GameCore::FixPoint CFLADHCMBMK()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLAADCBPCHM_CFLADHCMBMK_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint MFCDFGNIBFN()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLAADCBPCHM_MFCDFGNIBFN_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint GDNJDJFADMO()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLAADCBPCHM_GDNJDJFADMO_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint DBGGIHEJACL()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLAADCBPCHM_DBGGIHEJACL_OFFSET))(this);
		}

		::System::Boolean JFDACEKAICI(::RPG::GameCore::FixPoint a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLAADCBPCHM_JFDACEKAICI_OFFSET))(this, a1);
		}

		::System::Boolean LOHOLLJJMIL(::RPG::GameCore::FixPoint a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLAADCBPCHM_LOHOLLJJMIL_OFFSET))(this, a1);
		}

		::System::Void JOOGNNINJKL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLAADCBPCHM_JOOGNNINJKL_OFFSET))(this);
		}

		::System::Void BFDGGBJLEBA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLAADCBPCHM_BFDGGBJLEBA_OFFSET))(this);
		}

		::System::Void MPPEBPAINNI(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLAADCBPCHM_MPPEBPAINNI_OFFSET))(this, a1);
		}

		::System::Void FLJMKABENAD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLAADCBPCHM_FLJMKABENAD_OFFSET))(this);
		}

		::System::Void PMOEIJJGNHE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLAADCBPCHM_PMOEIJJGNHE_OFFSET))(this);
		}

		::System::Void JMNFOCENFLP_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLAADCBPCHM_JMNFOCENFLP_1_OFFSET))(this);
		}

		::UnityEngine::Transform* EIAFGCLFMNL()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLAADCBPCHM_EIAFGCLFMNL_OFFSET))(this);
		}

		::System::Void FHFJGMABNBA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLAADCBPCHM_FHFJGMABNBA_OFFSET))(this);
		}

		::System::Void KBCIFMBOHAI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLAADCBPCHM_KBCIFMBOHAI_OFFSET))(this);
		}

		::System::Boolean ODGLPKEOBDA(::System::Boolean a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLAADCBPCHM_ODGLPKEOBDA_OFFSET))(this, a1);
		}

		::System::Void KBANLIDKMJB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLAADCBPCHM_KBANLIDKMJB_OFFSET))(this);
		}

		::System::Void HFOJJHHABFL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLAADCBPCHM_HFOJJHHABFL_OFFSET))(this);
		}

		::System::Boolean MNDMECJAOII()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLAADCBPCHM_MNDMECJAOII_OFFSET))(this);
		}

		::System::Void AFMHNCLHNDP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLAADCBPCHM_AFMHNCLHNDP_OFFSET))(this);
		}

		::System::Void PBHHAKABHCH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLAADCBPCHM_PBHHAKABHCH_OFFSET))(this);
		}

		::System::Boolean ACAOFNJELNN()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLAADCBPCHM_ACAOFNJELNN_OFFSET))(this);
		}

		::System::Boolean GOLKPFPKODP()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLAADCBPCHM_GOLKPFPKODP_OFFSET))(this);
		}

		::System::Void PHBLFEFNICJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLAADCBPCHM_PHBLFEFNICJ_OFFSET))(this);
		}

		::System::Void APKDADOCMGI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLAADCBPCHM_APKDADOCMGI_OFFSET))(this);
		}

		::System::Void OEHPIOOIJDN(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLAADCBPCHM_OEHPIOOIJDN_OFFSET))(this, a1);
		}

		::System::Void PGCIIGMHODG(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLAADCBPCHM_PGCIIGMHODG_OFFSET))(this, a1);
		}

		::System::Void MFAHHGLGOBM(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLAADCBPCHM_MFAHHGLGOBM_OFFSET))(this, a1);
		}

		::System::Void BBPGKAAAHCH(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLAADCBPCHM_BBPGKAAAHCH_OFFSET))(this, a1);
		}

		::System::Void KHCBFBGMKBJ(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLAADCBPCHM_KHCBFBGMKBJ_OFFSET))(this, a1);
		}

		::System::Void IHJCDKFFJLF(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLAADCBPCHM_IHJCDKFFJLF_OFFSET))(this, a1);
		}

		::System::Void HONDKHHKNFO(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLAADCBPCHM_HONDKHHKNFO_OFFSET))(this, a1);
		}

		::System::Void EAOGLDEIMJO(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLAADCBPCHM_EAOGLDEIMJO_OFFSET))(this, a1);
		}

		::System::Void PEIBGBPGBKL(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLAADCBPCHM_PEIBGBPGBKL_OFFSET))(this, a1);
		}

		::System::Void HICFADLNCBF(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLAADCBPCHM_HICFADLNCBF_OFFSET))(this, a1);
		}

		::System::Void HALDNLMGLHA(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLAADCBPCHM_HALDNLMGLHA_OFFSET))(this, a1);
		}

		::System::Void EBLJAEJIGLP(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLAADCBPCHM_EBLJAEJIGLP_OFFSET))(this, a1);
		}

		::System::Void JMDBCBFABOO(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLAADCBPCHM_JMDBCBFABOO_OFFSET))(this, a1);
		}

		::System::Void JJDEBMCFINC(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLAADCBPCHM_JJDEBMCFINC_OFFSET))(this, a1);
		}

		::System::Void IMJGDBIEEPP(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLAADCBPCHM_IMJGDBIEEPP_OFFSET))(this, a1);
		}

		::System::Void AutoBindCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLAADCBPCHM_AUTOBINDCALLBACK_OFFSET))(this);
		}

		::System::Void AutoRemoveCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLAADCBPCHM_AUTOREMOVECALLBACK_OFFSET))(this);
		}

	};
