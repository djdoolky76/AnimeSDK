#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
#include "unitysdk/InControl/InputDeviceClass.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/IGKFNIEJGLM.h"
#include "unitysdk/RPG/Client/TextID.h"
class KECKKGPEKPJ;
namespace RPG::Client { class LongPressEvent; }
namespace RPG::Client { class MonoInControlButton; }
namespace RPG::Client { class MonoInControlTip; }
namespace RPG::GameCore { class AbilityCurrentSPChange; }
namespace RPG::GameCore { class AbilityCurrentSpecialSPChange; }
namespace RPG::GameCore { class AvatarDataComponent; }
namespace RPG::GameCore { class BattleInstance; }
namespace RPG::GameCore { class EntityRevive; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class LevelCharacterReviveFromRevivable; }
namespace RPG::GameCore { class LevelTurnUltraSkillExecutingBegin; }
namespace RPG::GameCore { class LevelUIComponent; }
namespace RPG::GameCore { class SkillCharacterComponent; }
namespace RPG::GameCore { class SkillData; }
namespace RPG::GameCore { class SpecialAvatarRow; }
namespace RPG::GameCore { class TurnBasedModifierInstance; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class ParticleSystem; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }

#define PMPMKGFGICF_ACOAJHKBEAO_OFFSET UNITYSDK_OFFSET(0xC3270C0)
#define PMPMKGFGICF_AFBDGPJHKJM_OFFSET UNITYSDK_OFFSET(0xC328490)
#define PMPMKGFGICF_AFCJHIGGPGD_OFFSET UNITYSDK_OFFSET(0xC3257F0)
#define PMPMKGFGICF_AHAAHLMMIMG_OFFSET UNITYSDK_OFFSET(0xC3254A0)
#define PMPMKGFGICF_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0xC328AD0)
#define PMPMKGFGICF_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0xC328FF0)
#define PMPMKGFGICF_BBPGKAAAHCH_OFFSET UNITYSDK_OFFSET(0xC328790)
#define PMPMKGFGICF_BLILDBCEGFH_OFFSET UNITYSDK_OFFSET(0xC3250F0)
#define PMPMKGFGICF_CAGIAMEFOLL_OFFSET UNITYSDK_OFFSET(0xC324E40)
#define PMPMKGFGICF_CFLMMIMOJCE_OFFSET UNITYSDK_OFFSET(0xC3247E0)
#define PMPMKGFGICF_CNBDJFOFALP_OFFSET UNITYSDK_OFFSET(0xC3263E0)
#define PMPMKGFGICF_CNDKEOBIPFP_OFFSET UNITYSDK_OFFSET(0xC325F20)
#define PMPMKGFGICF_CTOR_OFFSET UNITYSDK_OFFSET(0xC3294D0)
#define PMPMKGFGICF_DCODHLFNNGL_OFFSET UNITYSDK_OFFSET(0xC323E30)
#define PMPMKGFGICF_DGBLGHCOEJM_OFFSET UNITYSDK_OFFSET(0xC325230)
#define PMPMKGFGICF_DGMBHHIANKI_OFFSET UNITYSDK_OFFSET(0xC324270)
#define PMPMKGFGICF_DHHDFAAJMMC_OFFSET UNITYSDK_OFFSET(0xC323DB0)
#define PMPMKGFGICF_DJGAGDJAOAP_OFFSET UNITYSDK_OFFSET(0xC326520)
#define PMPMKGFGICF_DJOCIIMOHDE_OFFSET UNITYSDK_OFFSET(0xC3268F0)
#define PMPMKGFGICF_DMBMGCGDMCE_OFFSET UNITYSDK_OFFSET(0xC325960)
#define PMPMKGFGICF_DOJJJIIMEEB_OFFSET UNITYSDK_OFFSET(0xC3250A0)
#define PMPMKGFGICF_EBLJAEJIGLP_OFFSET UNITYSDK_OFFSET(0xC328550)
#define PMPMKGFGICF_EBPDLMBPLBL_OFFSET UNITYSDK_OFFSET(0xC326140)
#define PMPMKGFGICF_ECOHEIAHIAO_OFFSET UNITYSDK_OFFSET(0xC324970)
#define PMPMKGFGICF_EJIDIMAJPHO_OFFSET UNITYSDK_OFFSET(0xC327710)
#define PMPMKGFGICF_EKGCGIDIFJJ_OFFSET UNITYSDK_OFFSET(0xC324060)
#define PMPMKGFGICF_EOEIPIPHOEK_OFFSET UNITYSDK_OFFSET(0xC326ED0)
#define PMPMKGFGICF_FHLFDJMAOMA_OFFSET UNITYSDK_OFFSET(0xC3269E0)
#define PMPMKGFGICF_FIHLOKNBBJC_OFFSET UNITYSDK_OFFSET(0xC325B50)
#define PMPMKGFGICF_FLMNNCDLPKM_OFFSET UNITYSDK_OFFSET(0xC324D90)
#define PMPMKGFGICF_FMJOMIMELPH_OFFSET UNITYSDK_OFFSET(0xC324530)
#define PMPMKGFGICF_FONIBOKMJMK_OFFSET UNITYSDK_OFFSET(0xC324920)
#define PMPMKGFGICF_GEHLAGGHKLK_OFFSET UNITYSDK_OFFSET(0xC324350)
#define PMPMKGFGICF_GJPGIPEDCFF_OFFSET UNITYSDK_OFFSET(0xC327C30)
#define PMPMKGFGICF_GNLNBDCLBCM_OFFSET UNITYSDK_OFFSET(0xC3271D0)
#define PMPMKGFGICF_HEKJCPJFDFJ_OFFSET UNITYSDK_OFFSET(0xC327E00)
#define PMPMKGFGICF_HKLCKJEOOAI_OFFSET UNITYSDK_OFFSET(0xC328050)
#define PMPMKGFGICF_HKMDDBGNDLG_OFFSET UNITYSDK_OFFSET(0xC327E60)
#define PMPMKGFGICF_HLMOGJDNEBC_OFFSET UNITYSDK_OFFSET(0xC325A90)
#define PMPMKGFGICF_HONDKHHKNFO_OFFSET UNITYSDK_OFFSET(0xC3286D0)
#define PMPMKGFGICF_IGKLLEDHENA_OFFSET UNITYSDK_OFFSET(0xC3273A0)
#define PMPMKGFGICF_IHJCDKFFJLF_OFFSET UNITYSDK_OFFSET(0xC328610)
#define PMPMKGFGICF_IPMGACIGPOE_OFFSET UNITYSDK_OFFSET(0xC328220)
#define PMPMKGFGICF_JBLGPKIONIH_OFFSET UNITYSDK_OFFSET(0xC324840)
#define PMPMKGFGICF_JGBPIEFPBLJ_OFFSET UNITYSDK_OFFSET(0xC324D30)
#define PMPMKGFGICF_JGMBGDACCAI_OFFSET UNITYSDK_OFFSET(0xC3244A0)
#define PMPMKGFGICF_JJDEBMCFINC_OFFSET UNITYSDK_OFFSET(0xC328A10)
#define PMPMKGFGICF_JPAKNOFIKEI_OFFSET UNITYSDK_OFFSET(0xC326720)
#define PMPMKGFGICF_KBCJCMBBEDL_OFFSET UNITYSDK_OFFSET(0xC327980)
#define PMPMKGFGICF_KBCNINCDBLP_OFFSET UNITYSDK_OFFSET(0xC326290)
#define PMPMKGFGICF_KEJILDLIFLF_OFFSET UNITYSDK_OFFSET(0xC328310)
#define PMPMKGFGICF_KEOMDNJFBLL_OFFSET UNITYSDK_OFFSET(0xC325E40)
#define PMPMKGFGICF_KGDICCHNHPF_OFFSET UNITYSDK_OFFSET(0xC324FC0)
#define PMPMKGFGICF_KHCBFBGMKBJ_OFFSET UNITYSDK_OFFSET(0xC328850)
#define PMPMKGFGICF_KMEJCOJBODL_OFFSET UNITYSDK_OFFSET(0xC327AD0)
#define PMPMKGFGICF_KMKEGNFJIOI_OFFSET UNITYSDK_OFFSET(0xC325780)
#define PMPMKGFGICF_LIPOPGDFIHH_OFFSET UNITYSDK_OFFSET(0xC325300)
#define PMPMKGFGICF_MFAHHGLGOBM_OFFSET UNITYSDK_OFFSET(0xC3283D0)
#define PMPMKGFGICF_MKCCDODPHBJ_OFFSET UNITYSDK_OFFSET(0xC326580)
#define PMPMKGFGICF_MNCEAELFCEC_OFFSET UNITYSDK_OFFSET(0xC325450)
#define PMPMKGFGICF_MNKIIPJBIKD_OFFSET UNITYSDK_OFFSET(0xC3276A0)
#define PMPMKGFGICF_MNLFPHAOAGP_OFFSET UNITYSDK_OFFSET(0xC325C20)
#define PMPMKGFGICF_MOAAJNENAIK_OFFSET UNITYSDK_OFFSET(0xC327D80)
#define PMPMKGFGICF_NIJJPBOIGBI_OFFSET UNITYSDK_OFFSET(0xC323E90)
#define PMPMKGFGICF_NJOLGHLJMOC_OFFSET UNITYSDK_OFFSET(0xC325380)
#define PMPMKGFGICF_NKCHCLFJLPJ_OFFSET UNITYSDK_OFFSET(0xC328160)
#define PMPMKGFGICF_ODGLPKEOBDA_OFFSET UNITYSDK_OFFSET(0xC325900)
#define PMPMKGFGICF_ODHBBFCDGJB_OFFSET UNITYSDK_OFFSET(0xC327770)
#define PMPMKGFGICF_OGPAMKGAGJF_OFFSET UNITYSDK_OFFSET(0xC325660)
#define PMPMKGFGICF_PFPGMDMLNEN_OFFSET UNITYSDK_OFFSET(0xC3265D0)
#define PMPMKGFGICF_PMBIKNDECFA_OFFSET UNITYSDK_OFFSET(0xC328910)
#define PMPMKGFGICF__ONBIND_OFFSET UNITYSDK_OFFSET(0xC323CA0)
#define PMPMKGFGICF__ONDISPOSE_OFFSET UNITYSDK_OFFSET(0xC325050)
#define PMPMKGFGICF__ONTICK_OFFSET UNITYSDK_OFFSET(0xC324EE0)

inline static constexpr unsigned int PMPMKGFGICF_TypeDefinitionIndex = 71481;

	class PMPMKGFGICF : public ::FMPCODLIOLG
	{
	public:
		::RPG::GameCore::GameEntity* KAKEIDJDNHJ; // 0x60
		::RPG::GameCore::AvatarDataComponent* HFKMDPCLJJB; // 0x68
		::RPG::GameCore::BattleInstance* HGGJPIPDJPC; // 0x70
		::RPG::Client::MonoInControlTip* OOBBOFLHLDH; // 0x78
		::RPG::GameCore::SpecialAvatarRow* PHDPOMDNDLA; // 0x80
		::RPG::GameCore::SkillCharacterComponent* ENMHNNNJPPN; // 0x88
		::RPG::Client::MonoInControlButton* CNEGCPEAGPG; // 0x90
		::UnityEngine::Transform* MOGAILKHMNA; // 0x98
		::RPG::Client::LongPressEvent* DKDCOOGHBAF; // 0xA0
		::UnityEngine::RectTransform* KMKJNFBIODC; // 0xA8
		::UnityEngine::ParticleSystem* OHEBELLLKPA; // 0xB0
		::RPG::Client::LongPressEvent* DNIPHLBEIJE; // 0xB8
		::RPG::GameCore::LevelUIComponent* FGCIJADADDA; // 0xC0
		::RPG::Client::LongPressEvent* BMILMPPOIHI; // 0xC8
		::System::Boolean IDBHEIBEGBA; // 0xD0
		::System::Boolean AACOEMJJIIM; // 0xD1
		::System::Boolean DKMCEELJAIC; // 0xD2
		::System::Boolean JNABFHBJLBI; // 0xD3
		::System::Boolean HPANHHBEELO; // 0xD4
		::System::Boolean LCKENFJKKHJ; // 0xD5
		::System::Boolean FDCNAJBOBHP; // 0xD6
		::System::Byte _padding0[0x1];
		::System::Int32 FFNBLDFFMCN; // 0xD8
		::UnityEngine::Vector2 DOOOJPOMIIE; // 0xDC
		::UnityEngine::Vector2 EGDAFIOFPJH; // 0xE4
		::UnityEngine::Vector2 FKCOOIOMGID; // 0xEC
		::UnityEngine::Vector2 FKGAFFOMOIE; // 0xF4
		::UnityEngine::Vector2 NAFMELOMCGH; // 0xFC
		::UnityEngine::Vector2 KDGCCJBHNDE; // 0x104
		::UnityEngine::Vector2 EFIODDHLDEG; // 0x10C
		::UnityEngine::Vector2 KHCFOHOPLPJ; // 0x114
		// static const ::System::String* BKNKKNOEEMM; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PMPMKGFGICF_CTOR_OFFSET))(this);
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PMPMKGFGICF__ONBIND_OFFSET))(this);
		}

		::System::Void DHHDFAAJMMC(::IGKFNIEJGLM a1)
		{
			return ((::System::Void(*)(::PVOID, ::IGKFNIEJGLM))((::PBYTE)hIl2Cpp + PMPMKGFGICF_DHHDFAAJMMC_OFFSET))(this, a1);
		}

		::System::Void DCODHLFNNGL(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + PMPMKGFGICF_DCODHLFNNGL_OFFSET))(this, a1);
		}

		::System::Void DGMBHHIANKI(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + PMPMKGFGICF_DGMBHHIANKI_OFFSET))(this, a1);
		}

		::System::Void CFLMMIMOJCE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PMPMKGFGICF_CFLMMIMOJCE_OFFSET))(this);
		}

		::System::Void FONIBOKMJMK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PMPMKGFGICF_FONIBOKMJMK_OFFSET))(this);
		}

		::System::Void NIJJPBOIGBI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PMPMKGFGICF_NIJJPBOIGBI_OFFSET))(this);
		}

		::System::Void ECOHEIAHIAO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PMPMKGFGICF_ECOHEIAHIAO_OFFSET))(this);
		}

		::System::Void EKGCGIDIFJJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PMPMKGFGICF_EKGCGIDIFJJ_OFFSET))(this);
		}

		::System::Void CAGIAMEFOLL(::InControl::InputDeviceClass a1)
		{
			return ((::System::Void(*)(::PVOID, ::InControl::InputDeviceClass))((::PBYTE)hIl2Cpp + PMPMKGFGICF_CAGIAMEFOLL_OFFSET))(this, a1);
		}

		::System::Void _OnTick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + PMPMKGFGICF__ONTICK_OFFSET))(this, a1);
		}

		::System::Void KGDICCHNHPF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PMPMKGFGICF_KGDICCHNHPF_OFFSET))(this);
		}

		::System::Void _OnDispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PMPMKGFGICF__ONDISPOSE_OFFSET))(this);
		}

		::System::Void DOJJJIIMEEB(::UnityEngine::Transform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + PMPMKGFGICF_DOJJJIIMEEB_OFFSET))(this, a1);
		}

		::System::Void BLILDBCEGFH(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + PMPMKGFGICF_BLILDBCEGFH_OFFSET))(this, a1);
		}

		::System::Void DGBLGHCOEJM(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + PMPMKGFGICF_DGBLGHCOEJM_OFFSET))(this, a1);
		}

		::System::Void NJOLGHLJMOC(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + PMPMKGFGICF_NJOLGHLJMOC_OFFSET))(this, a1);
		}

		::System::Void MNCEAELFCEC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PMPMKGFGICF_MNCEAELFCEC_OFFSET))(this);
		}

		::System::Void OGPAMKGAGJF(::RPG::GameCore::EntityRevive* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::EntityRevive*))((::PBYTE)hIl2Cpp + PMPMKGFGICF_OGPAMKGAGJF_OFFSET))(this, a1);
		}

		::System::Void KMKEGNFJIOI(::RPG::GameCore::LevelCharacterReviveFromRevivable* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelCharacterReviveFromRevivable*))((::PBYTE)hIl2Cpp + PMPMKGFGICF_KMKEGNFJIOI_OFFSET))(this, a1);
		}

		::System::Void AFCJHIGGPGD(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + PMPMKGFGICF_AFCJHIGGPGD_OFFSET))(this, a1);
		}

		::System::Void DMBMGCGDMCE(::RPG::GameCore::LevelTurnUltraSkillExecutingBegin* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelTurnUltraSkillExecutingBegin*))((::PBYTE)hIl2Cpp + PMPMKGFGICF_DMBMGCGDMCE_OFFSET))(this, a1);
		}

		::System::Void HLMOGJDNEBC(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + PMPMKGFGICF_HLMOGJDNEBC_OFFSET))(this, a1);
		}

		::System::Void FIHLOKNBBJC(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + PMPMKGFGICF_FIHLOKNBBJC_OFFSET))(this, a1);
		}

		::System::Void MNLFPHAOAGP(::RPG::GameCore::AbilityCurrentSPChange* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AbilityCurrentSPChange*))((::PBYTE)hIl2Cpp + PMPMKGFGICF_MNLFPHAOAGP_OFFSET))(this, a1);
		}

		::System::Void CNDKEOBIPFP(::RPG::GameCore::AbilityCurrentSpecialSPChange* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AbilityCurrentSpecialSPChange*))((::PBYTE)hIl2Cpp + PMPMKGFGICF_CNDKEOBIPFP_OFFSET))(this, a1);
		}

		::System::Void EBPDLMBPLBL(::RPG::GameCore::TurnBasedModifierInstance* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + PMPMKGFGICF_EBPDLMBPLBL_OFFSET))(this, a1);
		}

		::System::Void KBCNINCDBLP(::RPG::GameCore::TurnBasedModifierInstance* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + PMPMKGFGICF_KBCNINCDBLP_OFFSET))(this, a1);
		}

		::System::Void CNBDJFOFALP(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + PMPMKGFGICF_CNBDJFOFALP_OFFSET))(this, a1);
		}

		::System::Void PFPGMDMLNEN(::KECKKGPEKPJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KECKKGPEKPJ*))((::PBYTE)hIl2Cpp + PMPMKGFGICF_PFPGMDMLNEN_OFFSET))(this, a1);
		}

		::System::Void JPAKNOFIKEI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PMPMKGFGICF_JPAKNOFIKEI_OFFSET))(this);
		}

		::System::Void FHLFDJMAOMA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PMPMKGFGICF_FHLFDJMAOMA_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::TextID>* GNLNBDCLBCM(::RPG::GameCore::SkillData* a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::TextID>*(*)(::PVOID, ::RPG::GameCore::SkillData*))((::PBYTE)hIl2Cpp + PMPMKGFGICF_GNLNBDCLBCM_OFFSET))(this, a1);
		}

		::System::Boolean IGKLLEDHENA()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PMPMKGFGICF_IGKLLEDHENA_OFFSET))(this);
		}

		::System::Void JGBPIEFPBLJ(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + PMPMKGFGICF_JGBPIEFPBLJ_OFFSET))(this, a1);
		}

		::System::Boolean EOEIPIPHOEK()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PMPMKGFGICF_EOEIPIPHOEK_OFFSET))(this);
		}

		::System::Void MNKIIPJBIKD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PMPMKGFGICF_MNKIIPJBIKD_OFFSET))(this);
		}

		::System::Void EJIDIMAJPHO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PMPMKGFGICF_EJIDIMAJPHO_OFFSET))(this);
		}

		::System::Void ODHBBFCDGJB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PMPMKGFGICF_ODHBBFCDGJB_OFFSET))(this);
		}

		::System::Void DJGAGDJAOAP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PMPMKGFGICF_DJGAGDJAOAP_OFFSET))(this);
		}

		::System::Void MKCCDODPHBJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PMPMKGFGICF_MKCCDODPHBJ_OFFSET))(this);
		}

		::System::Void ODGLPKEOBDA(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + PMPMKGFGICF_ODGLPKEOBDA_OFFSET))(this, a1);
		}

		::System::Void FLMNNCDLPKM(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + PMPMKGFGICF_FLMNNCDLPKM_OFFSET))(this, a1);
		}

		::System::Void LIPOPGDFIHH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PMPMKGFGICF_LIPOPGDFIHH_OFFSET))(this);
		}

		::System::Void AHAAHLMMIMG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PMPMKGFGICF_AHAAHLMMIMG_OFFSET))(this);
		}

		::System::Void JGMBGDACCAI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PMPMKGFGICF_JGMBGDACCAI_OFFSET))(this);
		}

		::System::Void KEOMDNJFBLL(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + PMPMKGFGICF_KEOMDNJFBLL_OFFSET))(this, a1);
		}

		::System::Void KBCJCMBBEDL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PMPMKGFGICF_KBCJCMBBEDL_OFFSET))(this);
		}

		::System::Void GJPGIPEDCFF(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + PMPMKGFGICF_GJPGIPEDCFF_OFFSET))(this, a1);
		}

		::System::Void MOAAJNENAIK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PMPMKGFGICF_MOAAJNENAIK_OFFSET))(this);
		}

		::System::Void HEKJCPJFDFJ(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + PMPMKGFGICF_HEKJCPJFDFJ_OFFSET))(this, a1);
		}

		::System::Void GEHLAGGHKLK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PMPMKGFGICF_GEHLAGGHKLK_OFFSET))(this);
		}

		::UnityEngine::Vector2 ACOAJHKBEAO()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + PMPMKGFGICF_ACOAJHKBEAO_OFFSET))(this);
		}

		::System::Void DJOCIIMOHDE(::System::Int32 a1, ::System::Boolean a2, ::RPG::GameCore::GameEntity* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + PMPMKGFGICF_DJOCIIMOHDE_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean KMEJCOJBODL()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PMPMKGFGICF_KMEJCOJBODL_OFFSET))(this);
		}

		::System::Boolean HKMDDBGNDLG()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PMPMKGFGICF_HKMDDBGNDLG_OFFSET))(this);
		}

		::System::Void FMJOMIMELPH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PMPMKGFGICF_FMJOMIMELPH_OFFSET))(this);
		}

		::System::Void JBLGPKIONIH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PMPMKGFGICF_JBLGPKIONIH_OFFSET))(this);
		}

		::System::Void HKLCKJEOOAI(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PMPMKGFGICF_HKLCKJEOOAI_OFFSET))(this, a1);
		}

		::System::Void NKCHCLFJLPJ(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PMPMKGFGICF_NKCHCLFJLPJ_OFFSET))(this, a1);
		}

		::System::Void IPMGACIGPOE(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PMPMKGFGICF_IPMGACIGPOE_OFFSET))(this, a1);
		}

		::System::Void KEJILDLIFLF(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PMPMKGFGICF_KEJILDLIFLF_OFFSET))(this, a1);
		}

		::System::Void MFAHHGLGOBM(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PMPMKGFGICF_MFAHHGLGOBM_OFFSET))(this, a1);
		}

		::System::Void AFBDGPJHKJM(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PMPMKGFGICF_AFBDGPJHKJM_OFFSET))(this, a1);
		}

		::System::Void EBLJAEJIGLP(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PMPMKGFGICF_EBLJAEJIGLP_OFFSET))(this, a1);
		}

		::System::Void IHJCDKFFJLF(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PMPMKGFGICF_IHJCDKFFJLF_OFFSET))(this, a1);
		}

		::System::Void HONDKHHKNFO(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PMPMKGFGICF_HONDKHHKNFO_OFFSET))(this, a1);
		}

		::System::Void BBPGKAAAHCH(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PMPMKGFGICF_BBPGKAAAHCH_OFFSET))(this, a1);
		}

		::System::Void KHCBFBGMKBJ(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PMPMKGFGICF_KHCBFBGMKBJ_OFFSET))(this, a1);
		}

		::System::Void PMBIKNDECFA(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PMPMKGFGICF_PMBIKNDECFA_OFFSET))(this, a1);
		}

		::System::Void JJDEBMCFINC(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PMPMKGFGICF_JJDEBMCFINC_OFFSET))(this, a1);
		}

		::System::Void AutoBindCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PMPMKGFGICF_AUTOBINDCALLBACK_OFFSET))(this);
		}

		::System::Void AutoRemoveCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PMPMKGFGICF_AUTOREMOVECALLBACK_OFFSET))(this);
		}

	};
