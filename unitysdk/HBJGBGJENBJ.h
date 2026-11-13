#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
#include "unitysdk/HBJGBGJENBJ_ButtonState.h"
#include "unitysdk/InControl/InputDeviceClass.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/RPG/GameCore/SkillCharacterComponent_UseSkillErrorInfo.h"
class DEKDEPEBHNC;
class FMPCODLIOLG;
namespace RPG::Client { class LongPressEvent; }
namespace RPG::Client { class MonoInControlButton; }
namespace RPG::Client { class MonoInControlTip; }
namespace RPG::GameCore { class AbilityBeingLimbo; }
namespace RPG::GameCore { class AbilityCurrentSPChange; }
namespace RPG::GameCore { class AbilityMaxSPChange; }
namespace RPG::GameCore { class BattleInstance; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class LevelEntityBpChange; }
namespace RPG::GameCore { class LevelTurnStateChanged; }
namespace RPG::GameCore { class LevelTurnUltraSkillCancel; }
namespace RPG::GameCore { class LevelTurnUltraSkillExecutingBegin; }
namespace RPG::GameCore { class LevelUIComponent; }
namespace RPG::GameCore { class SkillData; }
namespace RPG::GameCore { class TurnBasedAbilityComponent; }
namespace RPG::GameCore { class TurnBasedModifierInstance; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Action_2; }

#define HBJGBGJENBJ_ACEJKHOPEEH_OFFSET UNITYSDK_OFFSET(0x1B79DA60)
#define HBJGBGJENBJ_ANJIFDBMBKF_OFFSET UNITYSDK_OFFSET(0x1B79F7D0)
#define HBJGBGJENBJ_AOIKACHBEPB_OFFSET UNITYSDK_OFFSET(0x1B79F510)
#define HBJGBGJENBJ_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x1B7A0910)
#define HBJGBGJENBJ_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x1B7A0EF0)
#define HBJGBGJENBJ_BBPGKAAAHCH_OFFSET UNITYSDK_OFFSET(0x1B7A03A0)
#define HBJGBGJENBJ_BCFEJCJALAA_OFFSET UNITYSDK_OFFSET(0x1B79F5B0)
#define HBJGBGJENBJ_BGLCJHDKMMD_OFFSET UNITYSDK_OFFSET(0x1B79E9C0)
#define HBJGBGJENBJ_BIHNFBEKBJJ_OFFSET UNITYSDK_OFFSET(0x1B79EFB0)
#define HBJGBGJENBJ_BKKGPNEDPBA_OFFSET UNITYSDK_OFFSET(0x1B79F090)
#define HBJGBGJENBJ_CAGIAMEFOLL_OFFSET UNITYSDK_OFFSET(0x1B79D5C0)
#define HBJGBGJENBJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1B7A1490)
#define HBJGBGJENBJ_DMBMGCGDMCE_OFFSET UNITYSDK_OFFSET(0x1B79E160)
#define HBJGBGJENBJ_DPDOCIHLBOB_OFFSET UNITYSDK_OFFSET(0x1B79D7F0)
#define HBJGBGJENBJ_DPEJJBCFGMA_OFFSET UNITYSDK_OFFSET(0x1B79F620)
#define HBJGBGJENBJ_EAOGLDEIMJO_OFFSET UNITYSDK_OFFSET(0x1B7A05E0)
#define HBJGBGJENBJ_EBLJAEJIGLP_OFFSET UNITYSDK_OFFSET(0x1B7A0760)
#define HBJGBGJENBJ_EBPDLMBPLBL_OFFSET UNITYSDK_OFFSET(0x1B79E460)
#define HBJGBGJENBJ_ECLBBIDAIJP_OFFSET UNITYSDK_OFFSET(0x1B79FF20)
#define HBJGBGJENBJ_ECOHEIAHIAO_OFFSET UNITYSDK_OFFSET(0x1B79D1A0)
#define HBJGBGJENBJ_EDFDIAKEGIK_OFFSET UNITYSDK_OFFSET(0x1B79F120)
#define HBJGBGJENBJ_EEGHOOOKKJE_OFFSET UNITYSDK_OFFSET(0x1B7A02E0)
#define HBJGBGJENBJ_EGJHNAOPEEP_OFFSET UNITYSDK_OFFSET(0x1B79F040)
#define HBJGBGJENBJ_EJIDIMAJPHO_OFFSET UNITYSDK_OFFSET(0x1B79FA10)
#define HBJGBGJENBJ_FGLPIJMMOLG_OFFSET UNITYSDK_OFFSET(0x1B79D6D0)
#define HBJGBGJENBJ_FHLFDJMAOMA_OFFSET UNITYSDK_OFFSET(0x1B79F770)
#define HBJGBGJENBJ_FIHLOKNBBJC_OFFSET UNITYSDK_OFFSET(0x1B79ECB0)
#define HBJGBGJENBJ_GOLKPFPKODP_OFFSET UNITYSDK_OFFSET(0x1B79E050)
#define HBJGBGJENBJ_HPPFKEJFFKD_OFFSET UNITYSDK_OFFSET(0x1B79DA10)
#define HBJGBGJENBJ_IACKDHHCMML_OFFSET UNITYSDK_OFFSET(0x1B79FFE0)
#define HBJGBGJENBJ_IAODJDMCKNE_OFFSET UNITYSDK_OFFSET(0x1B79EBE0)
#define HBJGBGJENBJ_IHJCDKFFJLF_OFFSET UNITYSDK_OFFSET(0x1B7A0520)
#define HBJGBGJENBJ_JEDFAMDCGDN_OFFSET UNITYSDK_OFFSET(0x1B79DBC0)
#define HBJGBGJENBJ_JLDMMLNLEAC_OFFSET UNITYSDK_OFFSET(0x1B79D660)
#define HBJGBGJENBJ_JMDBCBFABOO_OFFSET UNITYSDK_OFFSET(0x1B7A0820)
#define HBJGBGJENBJ_JPAKNOFIKEI_OFFSET UNITYSDK_OFFSET(0x1B79F220)
#define HBJGBGJENBJ_KBCNINCDBLP_OFFSET UNITYSDK_OFFSET(0x1B79E630)
#define HBJGBGJENBJ_KGPNGPAJPJI_OFFSET UNITYSDK_OFFSET(0x1B79E260)
#define HBJGBGJENBJ_KHCBFBGMKBJ_OFFSET UNITYSDK_OFFSET(0x1B7A0460)
#define HBJGBGJENBJ_KNAJEEHIGEO_OFFSET UNITYSDK_OFFSET(0x1B79DAD0)
#define HBJGBGJENBJ_KPIFHHIBFEH_OFFSET UNITYSDK_OFFSET(0x1B7A00A0)
#define HBJGBGJENBJ_LACAPACNEPI_OFFSET UNITYSDK_OFFSET(0x1B79F1C0)
#define HBJGBGJENBJ_LBLKLMMLFJA_OFFSET UNITYSDK_OFFSET(0x1B79EE00)
#define HBJGBGJENBJ_LECLADPCHAJ_OFFSET UNITYSDK_OFFSET(0x1B79E000)
#define HBJGBGJENBJ_LHPGDKAEPPI_OFFSET UNITYSDK_OFFSET(0x1B79FE60)
#define HBJGBGJENBJ_LMPEFJNCKBE_OFFSET UNITYSDK_OFFSET(0x1B79FC40)
#define HBJGBGJENBJ_MFAHHGLGOBM_OFFSET UNITYSDK_OFFSET(0x1B7A0220)
#define HBJGBGJENBJ_MFCBBPPFMPO_OFFSET UNITYSDK_OFFSET(0x1B79DD70)
#define HBJGBGJENBJ_MFLBMIBHGLC_OFFSET UNITYSDK_OFFSET(0x1B7A06A0)
#define HBJGBGJENBJ_MNLFPHAOAGP_OFFSET UNITYSDK_OFFSET(0x1B79E7A0)
#define HBJGBGJENBJ_NDBAGPNGAFL_OFFSET UNITYSDK_OFFSET(0x1B79FCB0)
#define HBJGBGJENBJ_NEMAILGLJDG_OFFSET UNITYSDK_OFFSET(0x1B79D4C0)
#define HBJGBGJENBJ_NJDMJODMLFF_OFFSET UNITYSDK_OFFSET(0x1B79FE10)
#define HBJGBGJENBJ_OAAOHHINHPH_OFFSET UNITYSDK_OFFSET(0x1B79CFA0)
#define HBJGBGJENBJ_ODGLPKEOBDA_OFFSET UNITYSDK_OFFSET(0x1B79DF10)
#define HBJGBGJENBJ_ODHBBFCDGJB_OFFSET UNITYSDK_OFFSET(0x1B79FA70)
#define HBJGBGJENBJ_PGCIIGMHODG_OFFSET UNITYSDK_OFFSET(0x1B7A0160)
#define HBJGBGJENBJ_PNFAHABNEMH_OFFSET UNITYSDK_OFFSET(0x1B79D7A0)
#define HBJGBGJENBJ__INITVARONCE_OFFSET UNITYSDK_OFFSET(0x1B79CFE0)
#define HBJGBGJENBJ__ONBIND_OFFSET UNITYSDK_OFFSET(0x1B79CE00)
#define HBJGBGJENBJ__ONTICK_OFFSET UNITYSDK_OFFSET(0x1B79D450)
#define HBJGBGJENBJ__SETUPVIEW_OFFSET UNITYSDK_OFFSET(0x1B79D580)

inline static constexpr unsigned int HBJGBGJENBJ_TypeDefinitionIndex = 73618;

	class HBJGBGJENBJ : public ::FMPCODLIOLG
	{
	public:
		::RPG::Client::MonoInControlButton* OKPAHCBDGKF; // 0x60
		::RPG::GameCore::SkillData* IMAOAAEJOIE; // 0x68
		::RPG::GameCore::TurnBasedAbilityComponent* HFFKONIDMGL; // 0x70
		::RPG::GameCore::BattleInstance* CKPCDFOHJIE; // 0x78
		::RPG::Client::MonoInControlTip* OOBBOFLHLDH; // 0x80
		::RPG::GameCore::LevelUIComponent* FGCIJADADDA; // 0x88
		::System::Action_2<::System::Object*, ::System::Object*>* KEJPOONHNNJ; // 0x90
		::RPG::Client::LongPressEvent* BDGDKFKOBIM; // 0x98
		::RPG::GameCore::GameEntity* OJAHLJGABMJ; // 0xA0
		::System::Boolean JNABFHBJLBI; // 0xA8
		::System::Byte _padding0[0x3];
		::HBJGBGJENBJ_ButtonState DLNIGFGLPLJ; // 0xAC
		::System::Int32 PKCOOAMIMHC; // 0xB0
		::UnityEngine::Vector3 KJHOBHCOIEM; // 0xB4
		// static const ::System::Object EJEONLGGNBB; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HBJGBGJENBJ_CTOR_OFFSET))(this);
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HBJGBGJENBJ__ONBIND_OFFSET))(this);
		}

		::FMPCODLIOLG* OAAOHHINHPH()
		{
			return ((::FMPCODLIOLG*(*)(::PVOID))((::PBYTE)hIl2Cpp + HBJGBGJENBJ_OAAOHHINHPH_OFFSET))(this);
		}

		::System::Void _InitVarOnce()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HBJGBGJENBJ__INITVARONCE_OFFSET))(this);
		}

		::System::Void ECOHEIAHIAO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HBJGBGJENBJ_ECOHEIAHIAO_OFFSET))(this);
		}

		::System::Void _OnTick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + HBJGBGJENBJ__ONTICK_OFFSET))(this, a1);
		}

		::System::Void _SetupView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HBJGBGJENBJ__SETUPVIEW_OFFSET))(this);
		}

		::System::Void CAGIAMEFOLL(::InControl::InputDeviceClass a1)
		{
			return ((::System::Void(*)(::PVOID, ::InControl::InputDeviceClass))((::PBYTE)hIl2Cpp + HBJGBGJENBJ_CAGIAMEFOLL_OFFSET))(this, a1);
		}

		::System::Void FGLPIJMMOLG(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + HBJGBGJENBJ_FGLPIJMMOLG_OFFSET))(this, a1);
		}

		::System::Void PNFAHABNEMH(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + HBJGBGJENBJ_PNFAHABNEMH_OFFSET))(this, a1);
		}

		::System::Void HPPFKEJFFKD(::System::Action_2<::System::Object*, ::System::Object*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_2<::System::Object*, ::System::Object*>*))((::PBYTE)hIl2Cpp + HBJGBGJENBJ_HPPFKEJFFKD_OFFSET))(this, a1);
		}

		::System::Void ACEJKHOPEEH(::RPG::GameCore::SkillData* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::SkillData*, ::System::Int32))((::PBYTE)hIl2Cpp + HBJGBGJENBJ_ACEJKHOPEEH_OFFSET))(this, a1, a2);
		}

		::System::Void KNAJEEHIGEO(::RPG::GameCore::SkillData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::SkillData*))((::PBYTE)hIl2Cpp + HBJGBGJENBJ_KNAJEEHIGEO_OFFSET))(this, a1);
		}

		::System::Void MFCBBPPFMPO(::RPG::GameCore::AbilityBeingLimbo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AbilityBeingLimbo*))((::PBYTE)hIl2Cpp + HBJGBGJENBJ_MFCBBPPFMPO_OFFSET))(this, a1);
		}

		::System::Void LECLADPCHAJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HBJGBGJENBJ_LECLADPCHAJ_OFFSET))(this);
		}

		::System::Void DMBMGCGDMCE(::RPG::GameCore::LevelTurnUltraSkillExecutingBegin* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelTurnUltraSkillExecutingBegin*))((::PBYTE)hIl2Cpp + HBJGBGJENBJ_DMBMGCGDMCE_OFFSET))(this, a1);
		}

		::System::Void KGPNGPAJPJI(::DEKDEPEBHNC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DEKDEPEBHNC*))((::PBYTE)hIl2Cpp + HBJGBGJENBJ_KGPNGPAJPJI_OFFSET))(this, a1);
		}

		::System::Void EBPDLMBPLBL(::RPG::GameCore::TurnBasedModifierInstance* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + HBJGBGJENBJ_EBPDLMBPLBL_OFFSET))(this, a1);
		}

		::System::Void KBCNINCDBLP(::RPG::GameCore::TurnBasedModifierInstance* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + HBJGBGJENBJ_KBCNINCDBLP_OFFSET))(this, a1);
		}

		::System::Void MNLFPHAOAGP(::RPG::GameCore::AbilityCurrentSPChange* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AbilityCurrentSPChange*))((::PBYTE)hIl2Cpp + HBJGBGJENBJ_MNLFPHAOAGP_OFFSET))(this, a1);
		}

		::System::Void BGLCJHDKMMD(::RPG::GameCore::AbilityMaxSPChange* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AbilityMaxSPChange*))((::PBYTE)hIl2Cpp + HBJGBGJENBJ_BGLCJHDKMMD_OFFSET))(this, a1);
		}

		::System::Void IAODJDMCKNE(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + HBJGBGJENBJ_IAODJDMCKNE_OFFSET))(this, a1);
		}

		::System::Void FIHLOKNBBJC(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + HBJGBGJENBJ_FIHLOKNBBJC_OFFSET))(this, a1);
		}

		::System::Void LBLKLMMLFJA(::RPG::GameCore::LevelTurnUltraSkillCancel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelTurnUltraSkillCancel*))((::PBYTE)hIl2Cpp + HBJGBGJENBJ_LBLKLMMLFJA_OFFSET))(this, a1);
		}

		::System::Void BIHNFBEKBJJ(::RPG::GameCore::LevelTurnStateChanged* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelTurnStateChanged*))((::PBYTE)hIl2Cpp + HBJGBGJENBJ_BIHNFBEKBJJ_OFFSET))(this, a1);
		}

		::System::Void BKKGPNEDPBA(::RPG::GameCore::LevelEntityBpChange* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelEntityBpChange*))((::PBYTE)hIl2Cpp + HBJGBGJENBJ_BKKGPNEDPBA_OFFSET))(this, a1);
		}

		::System::Void EDFDIAKEGIK(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HBJGBGJENBJ_EDFDIAKEGIK_OFFSET))(this, a1);
		}

		::System::Void JLDMMLNLEAC(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + HBJGBGJENBJ_JLDMMLNLEAC_OFFSET))(this, a1);
		}

		::System::Void DPDOCIHLBOB(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + HBJGBGJENBJ_DPDOCIHLBOB_OFFSET))(this, a1);
		}

		::System::Void JPAKNOFIKEI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HBJGBGJENBJ_JPAKNOFIKEI_OFFSET))(this);
		}

		::System::Void FHLFDJMAOMA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HBJGBGJENBJ_FHLFDJMAOMA_OFFSET))(this);
		}

		::System::Void ANJIFDBMBKF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HBJGBGJENBJ_ANJIFDBMBKF_OFFSET))(this);
		}

		::System::Void EJIDIMAJPHO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HBJGBGJENBJ_EJIDIMAJPHO_OFFSET))(this);
		}

		::System::Void ODHBBFCDGJB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HBJGBGJENBJ_ODHBBFCDGJB_OFFSET))(this);
		}

		::System::Void AOIKACHBEPB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HBJGBGJENBJ_AOIKACHBEPB_OFFSET))(this);
		}

		::System::Void DPEJJBCFGMA(::System::Int32 a1, ::System::Boolean a2, ::RPG::GameCore::GameEntity* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + HBJGBGJENBJ_DPEJJBCFGMA_OFFSET))(this, a1, a2, a3);
		}

		::System::Void LACAPACNEPI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HBJGBGJENBJ_LACAPACNEPI_OFFSET))(this);
		}

		::System::Void ODGLPKEOBDA(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + HBJGBGJENBJ_ODGLPKEOBDA_OFFSET))(this, a1);
		}

		::System::Void JEDFAMDCGDN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HBJGBGJENBJ_JEDFAMDCGDN_OFFSET))(this);
		}

		::System::Void LMPEFJNCKBE(::HBJGBGJENBJ_ButtonState a1)
		{
			return ((::System::Void(*)(::PVOID, ::HBJGBGJENBJ_ButtonState))((::PBYTE)hIl2Cpp + HBJGBGJENBJ_LMPEFJNCKBE_OFFSET))(this, a1);
		}

		::RPG::GameCore::SkillCharacterComponent_UseSkillErrorInfo NDBAGPNGAFL()
		{
			return ((::RPG::GameCore::SkillCharacterComponent_UseSkillErrorInfo(*)(::PVOID))((::PBYTE)hIl2Cpp + HBJGBGJENBJ_NDBAGPNGAFL_OFFSET))(this);
		}

		::System::Void GOLKPFPKODP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HBJGBGJENBJ_GOLKPFPKODP_OFFSET))(this);
		}

		::System::Void NEMAILGLJDG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HBJGBGJENBJ_NEMAILGLJDG_OFFSET))(this);
		}

		::HBJGBGJENBJ_ButtonState NJDMJODMLFF()
		{
			return ((::HBJGBGJENBJ_ButtonState(*)(::PVOID))((::PBYTE)hIl2Cpp + HBJGBGJENBJ_NJDMJODMLFF_OFFSET))(this);
		}

		::System::Boolean EGJHNAOPEEP()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HBJGBGJENBJ_EGJHNAOPEEP_OFFSET))(this);
		}

		::System::Int32 BCFEJCJALAA()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HBJGBGJENBJ_BCFEJCJALAA_OFFSET))(this);
		}

		::System::Void LHPGDKAEPPI(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HBJGBGJENBJ_LHPGDKAEPPI_OFFSET))(this, a1);
		}

		::System::Void ECLBBIDAIJP(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HBJGBGJENBJ_ECLBBIDAIJP_OFFSET))(this, a1);
		}

		::System::Void IACKDHHCMML(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HBJGBGJENBJ_IACKDHHCMML_OFFSET))(this, a1);
		}

		::System::Void KPIFHHIBFEH(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HBJGBGJENBJ_KPIFHHIBFEH_OFFSET))(this, a1);
		}

		::System::Void PGCIIGMHODG(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HBJGBGJENBJ_PGCIIGMHODG_OFFSET))(this, a1);
		}

		::System::Void MFAHHGLGOBM(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HBJGBGJENBJ_MFAHHGLGOBM_OFFSET))(this, a1);
		}

		::System::Void EEGHOOOKKJE(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HBJGBGJENBJ_EEGHOOOKKJE_OFFSET))(this, a1);
		}

		::System::Void BBPGKAAAHCH(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HBJGBGJENBJ_BBPGKAAAHCH_OFFSET))(this, a1);
		}

		::System::Void KHCBFBGMKBJ(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HBJGBGJENBJ_KHCBFBGMKBJ_OFFSET))(this, a1);
		}

		::System::Void IHJCDKFFJLF(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HBJGBGJENBJ_IHJCDKFFJLF_OFFSET))(this, a1);
		}

		::System::Void EAOGLDEIMJO(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HBJGBGJENBJ_EAOGLDEIMJO_OFFSET))(this, a1);
		}

		::System::Void MFLBMIBHGLC(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HBJGBGJENBJ_MFLBMIBHGLC_OFFSET))(this, a1);
		}

		::System::Void EBLJAEJIGLP(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HBJGBGJENBJ_EBLJAEJIGLP_OFFSET))(this, a1);
		}

		::System::Void JMDBCBFABOO(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HBJGBGJENBJ_JMDBCBFABOO_OFFSET))(this, a1);
		}

		::System::Void AutoBindCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HBJGBGJENBJ_AUTOBINDCALLBACK_OFFSET))(this);
		}

		::System::Void AutoRemoveCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HBJGBGJENBJ_AUTOREMOVECALLBACK_OFFSET))(this);
		}

	};
