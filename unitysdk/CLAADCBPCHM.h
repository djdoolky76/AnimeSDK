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
namespace RPG::GameCore { class TurnBasedAbilityComponent; }
namespace RPG::GameCore { class TurnBasedModifierInstance; }
namespace System { class Object; }
namespace UnityEngine { class Transform; }

#define CLAADCBPCHM_ACAOFNJELNN_OFFSET UNITYSDK_OFFSET(0xD76B980)
#define CLAADCBPCHM_AFMHNCLHNDP_OFFSET UNITYSDK_OFFSET(0xD76E770)
#define CLAADCBPCHM_ALPLJIKFHNG_OFFSET UNITYSDK_OFFSET(0xD76CA50)
#define CLAADCBPCHM_APKDADOCMGI_OFFSET UNITYSDK_OFFSET(0xD76A600)
#define CLAADCBPCHM_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0xD76F470)
#define CLAADCBPCHM_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0xD76F8D0)
#define CLAADCBPCHM_BBGGEBDCJJK_OFFSET UNITYSDK_OFFSET(0xD76D1E0)
#define CLAADCBPCHM_BBPGKAAAHCH_OFFSET UNITYSDK_OFFSET(0xD76EA40)
#define CLAADCBPCHM_BDFHFPKMFGM_OFFSET UNITYSDK_OFFSET(0xD76D490)
#define CLAADCBPCHM_BFDGGBJLEBA_OFFSET UNITYSDK_OFFSET(0xD76E440)
#define CLAADCBPCHM_BGLCJHDKMMD_OFFSET UNITYSDK_OFFSET(0xD76C380)
#define CLAADCBPCHM_BONEBLMEHBD_OFFSET UNITYSDK_OFFSET(0xD76B350)
#define CLAADCBPCHM_BPEGIDAPNIP_OFFSET UNITYSDK_OFFSET(0xD76A870)
#define CLAADCBPCHM_CFLADHCMBMK_OFFSET UNITYSDK_OFFSET(0xD76B140)
#define CLAADCBPCHM_CNDKEOBIPFP_OFFSET UNITYSDK_OFFSET(0xD76C0F0)
#define CLAADCBPCHM_CNIECAJNPOO_OFFSET UNITYSDK_OFFSET(0xD76C610)
#define CLAADCBPCHM_CTOR_OFFSET UNITYSDK_OFFSET(0xD76FD10)
#define CLAADCBPCHM_DBGGIHEJACL_OFFSET UNITYSDK_OFFSET(0xD76E2D0)
#define CLAADCBPCHM_DBHAHOLPOCA_OFFSET UNITYSDK_OFFSET(0xD76D720)
#define CLAADCBPCHM_DHHDFAAJMMC_OFFSET UNITYSDK_OFFSET(0xD76A420)
#define CLAADCBPCHM_DICPMEJINGC_OFFSET UNITYSDK_OFFSET(0xD76D4F0)
#define CLAADCBPCHM_DMBMGCGDMCE_OFFSET UNITYSDK_OFFSET(0xD76B840)
#define CLAADCBPCHM_DPNJLJEGBMN_OFFSET UNITYSDK_OFFSET(0xD76D660)
#define CLAADCBPCHM_EAOGLDEIMJO_OFFSET UNITYSDK_OFFSET(0xD76EE40)
#define CLAADCBPCHM_EBLJAEJIGLP_OFFSET UNITYSDK_OFFSET(0xD76F140)
#define CLAADCBPCHM_EBPDLMBPLBL_OFFSET UNITYSDK_OFFSET(0xD76BAB0)
#define CLAADCBPCHM_EIAFGCLFMNL_OFFSET UNITYSDK_OFFSET(0xD76E590)
#define CLAADCBPCHM_EKGCGIDIFJJ_OFFSET UNITYSDK_OFFSET(0xD76AB80)
#define CLAADCBPCHM_FHFJGMABNBA_OFFSET UNITYSDK_OFFSET(0xD76D370)
#define CLAADCBPCHM_FIHLOKNBBJC_OFFSET UNITYSDK_OFFSET(0xD76CB40)
#define CLAADCBPCHM_FLJMKABENAD_OFFSET UNITYSDK_OFFSET(0xD76E4D0)
#define CLAADCBPCHM_GDNJDJFADMO_OFFSET UNITYSDK_OFFSET(0xD76E1A0)
#define CLAADCBPCHM_GOLKPFPKODP_OFFSET UNITYSDK_OFFSET(0xD76B7E0)
#define CLAADCBPCHM_HALDNLMGLHA_OFFSET UNITYSDK_OFFSET(0xD76F080)
#define CLAADCBPCHM_HFOJJHHABFL_OFFSET UNITYSDK_OFFSET(0xD76DBA0)
#define CLAADCBPCHM_HICFADLNCBF_OFFSET UNITYSDK_OFFSET(0xD76EFC0)
#define CLAADCBPCHM_HONDKHHKNFO_OFFSET UNITYSDK_OFFSET(0xD76ED80)
#define CLAADCBPCHM_IBFMMHHFGEF_OFFSET UNITYSDK_OFFSET(0xD76C8A0)
#define CLAADCBPCHM_IHJCDKFFJLF_OFFSET UNITYSDK_OFFSET(0xD76ECC0)
#define CLAADCBPCHM_IJFNEODDFMN_OFFSET UNITYSDK_OFFSET(0xD76CFD0)
#define CLAADCBPCHM_IMJGDBIEEPP_OFFSET UNITYSDK_OFFSET(0xD76F3B0)
#define CLAADCBPCHM_JFDACEKAICI_OFFSET UNITYSDK_OFFSET(0xD76B270)
#define CLAADCBPCHM_JJDEBMCFINC_OFFSET UNITYSDK_OFFSET(0xD76F2F0)
#define CLAADCBPCHM_JMDBCBFABOO_OFFSET UNITYSDK_OFFSET(0xD76F200)
#define CLAADCBPCHM_JMNFOCENFLP_1_OFFSET UNITYSDK_OFFSET(0xD76E550)
#define CLAADCBPCHM_JMNFOCENFLP_OFFSET UNITYSDK_OFFSET(0xD76B490)
#define CLAADCBPCHM_JOOGNNINJKL_OFFSET UNITYSDK_OFFSET(0xD76E400)
#define CLAADCBPCHM_KANMCJHEFJJ_OFFSET UNITYSDK_OFFSET(0xD76D230)
#define CLAADCBPCHM_KBANLIDKMJB_OFFSET UNITYSDK_OFFSET(0xD76E6E0)
#define CLAADCBPCHM_KBCIFMBOHAI_OFFSET UNITYSDK_OFFSET(0xD76E5F0)
#define CLAADCBPCHM_KBCNINCDBLP_OFFSET UNITYSDK_OFFSET(0xD76BCA0)
#define CLAADCBPCHM_KGCAOLCOBJJ_OFFSET UNITYSDK_OFFSET(0xD76DED0)
#define CLAADCBPCHM_KHCBFBGMKBJ_OFFSET UNITYSDK_OFFSET(0xD76EB80)
#define CLAADCBPCHM_LACAPACNEPI_OFFSET UNITYSDK_OFFSET(0xD76A560)
#define CLAADCBPCHM_LBLKLMMLFJA_OFFSET UNITYSDK_OFFSET(0xD76CC60)
#define CLAADCBPCHM_LECLADPCHAJ_OFFSET UNITYSDK_OFFSET(0xD76B750)
#define CLAADCBPCHM_LOHOLLJJMIL_OFFSET UNITYSDK_OFFSET(0xD76DDB0)
#define CLAADCBPCHM_MFAHHGLGOBM_OFFSET UNITYSDK_OFFSET(0xD76E980)
#define CLAADCBPCHM_MFCDFGNIBFN_OFFSET UNITYSDK_OFFSET(0xD76E070)
#define CLAADCBPCHM_MNDMECJAOII_OFFSET UNITYSDK_OFFSET(0xD76E730)
#define CLAADCBPCHM_MNLFPHAOAGP_OFFSET UNITYSDK_OFFSET(0xD76BE60)
#define CLAADCBPCHM_MPPEBPAINNI_OFFSET UNITYSDK_OFFSET(0xD76E480)
#define CLAADCBPCHM_NEMAILGLJDG_OFFSET UNITYSDK_OFFSET(0xD76AEE0)
#define CLAADCBPCHM_NGNACJONELO_OFFSET UNITYSDK_OFFSET(0xD76DE90)
#define CLAADCBPCHM_NIJJPBOIGBI_OFFSET UNITYSDK_OFFSET(0xD76AA10)
#define CLAADCBPCHM_NKPPGDENJAE_OFFSET UNITYSDK_OFFSET(0xD76B390)
#define CLAADCBPCHM_ODGLPKEOBDA_OFFSET UNITYSDK_OFFSET(0xD76B5E0)
#define CLAADCBPCHM_OEHPIOOIJDN_OFFSET UNITYSDK_OFFSET(0xD76E830)
#define CLAADCBPCHM_OJPBOCBMKDD_OFFSET UNITYSDK_OFFSET(0xD76D9C0)
#define CLAADCBPCHM_ONACQUIRE_OFFSET UNITYSDK_OFFSET(0xD76A750)
#define CLAADCBPCHM_ONRETURN_OFFSET UNITYSDK_OFFSET(0xD76A980)
#define CLAADCBPCHM_PBHHAKABHCH_OFFSET UNITYSDK_OFFSET(0xD76E7B0)
#define CLAADCBPCHM_PEIBGBPGBKL_OFFSET UNITYSDK_OFFSET(0xD76EF00)
#define CLAADCBPCHM_PFPGMDMLNEN_OFFSET UNITYSDK_OFFSET(0xD76CE00)
#define CLAADCBPCHM_PGCIIGMHODG_OFFSET UNITYSDK_OFFSET(0xD76E8F0)
#define CLAADCBPCHM_PHBLFEFNICJ_OFFSET UNITYSDK_OFFSET(0xD76E7F0)
#define CLAADCBPCHM_PMDONNAJEFC_OFFSET UNITYSDK_OFFSET(0xD76D430)
#define CLAADCBPCHM_PMOEIJJGNHE_OFFSET UNITYSDK_OFFSET(0xD76E510)
#define CLAADCBPCHM__ONDISPOSE_OFFSET UNITYSDK_OFFSET(0xD76ABD0)
#define CLAADCBPCHM__ONTICK_OFFSET UNITYSDK_OFFSET(0xD76AC30)

inline static constexpr unsigned int CLAADCBPCHM_TypeDefinitionIndex = 72008;

	class CLAADCBPCHM : public ::FMPCODLIOLG
	{
	public:
		::RPG::GameCore::LevelUIComponent* FGCIJADADDA; // 0x60
		::RPG::GameCore::CharacterDataComponent* HANEKMPLHHP; // 0x68
		::UnityEngine::Transform* ENJGHGIHJBD; // 0x70
		::RPG::GameCore::TurnBasedAbilityComponent* HFFKONIDMGL; // 0x78
		::HONHNENMAJM* CABHPPKKPHF; // 0x80
		::RPG::GameCore::GameEntity* KAKEIDJDNHJ; // 0x88
		::RPG::GameCore::SkillCharacterComponent* ENMHNNNJPPN; // 0x90
		::UnityEngine::Transform* NDEBJKAMBGK; // 0x98
		::RPG::GameCore::FixPoint PFEOIILLKJB; // 0xA0
		::CLAADCBPCHM_InChargeState CBFPPJCJPME; // 0xA8
		::System::Boolean JNABFHBJLBI; // 0xAC
		::System::Boolean LHBBBIPCMBA; // 0xAD
		::System::Boolean DONBLPLIDFG; // 0xAE
		::System::Boolean KAMFJJAAPKC; // 0xAF
		::System::Boolean BGFPEEIAJGN; // 0xB0
		::System::Boolean NOJDEAMLKDG; // 0xB1
		::System::Byte _padding0[0x2];
		::RPG::GameCore::SkillSPProgressType AMGLDBPMEHE; // 0xB4
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLAADCBPCHM_CTOR_OFFSET))(this);
		}

		::System::Void DHHDFAAJMMC(::IGKFNIEJGLM a1)
		{
			return ((::System::Void(*)(::PVOID, ::IGKFNIEJGLM))((::PBYTE)hIl2Cpp + CLAADCBPCHM_DHHDFAAJMMC_OFFSET))(this, a1);
		}

		::System::Void OnAcquire(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLAADCBPCHM_ONACQUIRE_OFFSET))(this, a1);
		}

		::System::Void OnReturn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLAADCBPCHM_ONRETURN_OFFSET))(this);
		}

		::System::Void NIJJPBOIGBI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLAADCBPCHM_NIJJPBOIGBI_OFFSET))(this);
		}

		::System::Void EKGCGIDIFJJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLAADCBPCHM_EKGCGIDIFJJ_OFFSET))(this);
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
