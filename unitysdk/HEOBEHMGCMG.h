#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
#include "unitysdk/RPG/GameCore/AetherSpiritType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/IGKFNIEJGLM.h"
class EFJCLCMOLGO;
class IKEAIHBEKDG;
class PLPEFCEBDCH;
namespace RPG::GameCore { class AbilityBeingLimbo; }
namespace RPG::GameCore { class AbilityCurrentSPChange; }
namespace RPG::GameCore { class AbilitySkillPropertyChange; }
namespace RPG::GameCore { class CharacterDataComponent; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class LevelGameModeStateChanged; }
namespace RPG::GameCore { class LevelTurnUltraSkillCancel; }
namespace RPG::GameCore { class LevelTurnUltraSkillExecutingBegin; }
namespace RPG::GameCore { class SkillCharacterComponent; }
namespace RPG::GameCore { class TurnBasedAbilityComponent; }
namespace RPG::GameCore { class TurnBasedModifierInstance; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class ParticleSystem; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Image; }

#define HEOBEHMGCMG_AFMHNCLHNDP_OFFSET UNITYSDK_OFFSET(0x1A20BFF0)
#define HEOBEHMGCMG_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x1A20CA90)
#define HEOBEHMGCMG_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x1A20D050)
#define HEOBEHMGCMG_BBPGKAAAHCH_OFFSET UNITYSDK_OFFSET(0x1A20C460)
#define HEOBEHMGCMG_BFDGGBJLEBA_OFFSET UNITYSDK_OFFSET(0x1A20B810)
#define HEOBEHMGCMG_CCTOR_OFFSET UNITYSDK_OFFSET(0x1A20D610)
#define HEOBEHMGCMG_CFLADHCMBMK_OFFSET UNITYSDK_OFFSET(0x1A20B0F0)
#define HEOBEHMGCMG_CTOR_OFFSET UNITYSDK_OFFSET(0x1A20D5E0)
#define HEOBEHMGCMG_DAOHLCBLMHO_OFFSET UNITYSDK_OFFSET(0x1A20B3F0)
#define HEOBEHMGCMG_DDCDDLKFKNI_OFFSET UNITYSDK_OFFSET(0x1A20CA00)
#define HEOBEHMGCMG_DICPMEJINGC_OFFSET UNITYSDK_OFFSET(0x1A20A390)
#define HEOBEHMGCMG_DKDDCGACIKG_OFFSET UNITYSDK_OFFSET(0x1A209210)
#define HEOBEHMGCMG_DMBMGCGDMCE_OFFSET UNITYSDK_OFFSET(0x1A209D80)
#define HEOBEHMGCMG_DOFNOIEDPFN_OFFSET UNITYSDK_OFFSET(0x1A20B730)
#define HEOBEHMGCMG_EBLJAEJIGLP_OFFSET UNITYSDK_OFFSET(0x1A20C760)
#define HEOBEHMGCMG_EBPDLMBPLBL_OFFSET UNITYSDK_OFFSET(0x1A209FC0)
#define HEOBEHMGCMG_EKLBJFJJHMD_OFFSET UNITYSDK_OFFSET(0x1A20B2B0)
#define HEOBEHMGCMG_FIHLOKNBBJC_OFFSET UNITYSDK_OFFSET(0x1A20AD00)
#define HEOBEHMGCMG_GBGKIDGGLFA_OFFSET UNITYSDK_OFFSET(0x1A20BA90)
#define HEOBEHMGCMG_GDNJDJFADMO_OFFSET UNITYSDK_OFFSET(0x1A20B8E0)
#define HEOBEHMGCMG_GOLKPFPKODP_OFFSET UNITYSDK_OFFSET(0x1A209C30)
#define HEOBEHMGCMG_HIACEJHMHOA_OFFSET UNITYSDK_OFFSET(0x1A20C090)
#define HEOBEHMGCMG_HICFADLNCBF_OFFSET UNITYSDK_OFFSET(0x1A20C5E0)
#define HEOBEHMGCMG_HIGIPLKECPF_OFFSET UNITYSDK_OFFSET(0x1A20BE00)
#define HEOBEHMGCMG_IAODJDMCKNE_OFFSET UNITYSDK_OFFSET(0x1A20ABF0)
#define HEOBEHMGCMG_IBFMMHHFGEF_OFFSET UNITYSDK_OFFSET(0x1A20A720)
#define HEOBEHMGCMG_IHJCDKFFJLF_OFFSET UNITYSDK_OFFSET(0x1A20C520)
#define HEOBEHMGCMG_IMGLILHFONK_OFFSET UNITYSDK_OFFSET(0x1A20C910)
#define HEOBEHMGCMG_JFDACEKAICI_OFFSET UNITYSDK_OFFSET(0x1A20B150)
#define HEOBEHMGCMG_JMDBCBFABOO_OFFSET UNITYSDK_OFFSET(0x1A20C820)
#define HEOBEHMGCMG_JOIAFAJPFND_OFFSET UNITYSDK_OFFSET(0x1A209170)
#define HEOBEHMGCMG_KANMCJHEFJJ_OFFSET UNITYSDK_OFFSET(0x1A209640)
#define HEOBEHMGCMG_KPIFHHIBFEH_OFFSET UNITYSDK_OFFSET(0x1A20C220)
#define HEOBEHMGCMG_LACAPACNEPI_OFFSET UNITYSDK_OFFSET(0x1A2094F0)
#define HEOBEHMGCMG_LBLKLMMLFJA_OFFSET UNITYSDK_OFFSET(0x1A20ADE0)
#define HEOBEHMGCMG_LBPHINKONCH_OFFSET UNITYSDK_OFFSET(0x1A20B670)
#define HEOBEHMGCMG_LECLADPCHAJ_OFFSET UNITYSDK_OFFSET(0x1A209BE0)
#define HEOBEHMGCMG_LINJJNOLHCC_OFFSET UNITYSDK_OFFSET(0x1A20B7A0)
#define HEOBEHMGCMG_LJDOJCKMMDD_OFFSET UNITYSDK_OFFSET(0x1A20C120)
#define HEOBEHMGCMG_MCIPELFGBJG_OFFSET UNITYSDK_OFFSET(0x1A209120)
#define HEOBEHMGCMG_MFAHHGLGOBM_OFFSET UNITYSDK_OFFSET(0x1A20C3A0)
#define HEOBEHMGCMG_MFCBBPPFMPO_OFFSET UNITYSDK_OFFSET(0x1A209A20)
#define HEOBEHMGCMG_MFCDFGNIBFN_OFFSET UNITYSDK_OFFSET(0x1A20B880)
#define HEOBEHMGCMG_MFLBMIBHGLC_OFFSET UNITYSDK_OFFSET(0x1A20C6A0)
#define HEOBEHMGCMG_MNLFPHAOAGP_OFFSET UNITYSDK_OFFSET(0x1A20A170)
#define HEOBEHMGCMG_MPPEBPAINNI_OFFSET UNITYSDK_OFFSET(0x1A209F10)
#define HEOBEHMGCMG_NEMAILGLJDG_OFFSET UNITYSDK_OFFSET(0x1A2098B0)
#define HEOBEHMGCMG_NGNACJONELO_OFFSET UNITYSDK_OFFSET(0x1A20B4B0)
#define HEOBEHMGCMG_NLMPFLIBPIP_OFFSET UNITYSDK_OFFSET(0x1A20B230)
#define HEOBEHMGCMG_ODGLPKEOBDA_OFFSET UNITYSDK_OFFSET(0x1A209B80)
#define HEOBEHMGCMG_OFEJADOLMKI_OFFSET UNITYSDK_OFFSET(0x1A20A860)
#define HEOBEHMGCMG_ONACQUIRE_OFFSET UNITYSDK_OFFSET(0x1A2095A0)
#define HEOBEHMGCMG_ONRETURN_OFFSET UNITYSDK_OFFSET(0x1A209710)
#define HEOBEHMGCMG_PGCIIGMHODG_OFFSET UNITYSDK_OFFSET(0x1A20C2E0)
#define HEOBEHMGCMG__INITVARONCE_OFFSET UNITYSDK_OFFSET(0x1A209790)
#define HEOBEHMGCMG__ONBIND_OFFSET UNITYSDK_OFFSET(0x1A208DF0)
#define HEOBEHMGCMG__ONINITPARAMS_OFFSET UNITYSDK_OFFSET(0x1A209440)
#define HEOBEHMGCMG__ONTICK_OFFSET UNITYSDK_OFFSET(0x1A209840)
#define HEOBEHMGCMG__SETUPVIEW_OFFSET UNITYSDK_OFFSET(0x1A2097F0)

inline static constexpr unsigned int HEOBEHMGCMG_TypeDefinitionIndex = 73364;

	class HEOBEHMGCMG : public ::FMPCODLIOLG
	{
	public:
		::UnityEngine::UI::Image* AMNPLNKPOJF; // 0x60
		::UnityEngine::UI::Image* AJKPFICIIIP; // 0x68
		::IKEAIHBEKDG* CHIFNDEFKKM; // 0x70
		::PLPEFCEBDCH* KEPANBEOIFI; // 0x78
		::UnityEngine::ParticleSystem* ECEAKMDACGP; // 0x80
		::RPG::GameCore::GameEntity* KAKEIDJDNHJ; // 0x88
		::UnityEngine::Transform* ENJGHGIHJBD; // 0x90
		::RPG::GameCore::TurnBasedAbilityComponent* HFFKONIDMGL; // 0x98
		::UnityEngine::Transform* NJOPKIBEDKG; // 0xA0
		::RPG::GameCore::SkillCharacterComponent* ENMHNNNJPPN; // 0xA8
		::RPG::GameCore::CharacterDataComponent* HANEKMPLHHP; // 0xB0
		::UnityEngine::Animation* LIFEJLAJJKO; // 0xB8
		::UnityEngine::Transform* LKHHMNJKLJH; // 0xC0
		::RPG::GameCore::FixPoint PFEOIILLKJB; // 0xC8
		::System::Boolean JNABFHBJLBI; // 0xD0
		::System::Boolean LHBBBIPCMBA; // 0xD1
		::System::Boolean AGOKEBMANKE; // 0xD2
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::AetherSpiritType, ::System::String*>** StaticGet_CAFPCALCIGD()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::AetherSpiritType, ::System::String*>**)UnitySDK::FromName("", "HEOBEHMGCMG")->GetStaticField(0x73690);
		}

		// static const ::System::String* GGCDKJBKFBA; // 0x0
		// static const ::System::String* GAIHBEPFFOD; // 0x0
		// static const ::System::String* LMHJHHEELLO; // 0x0
		// static const ::System::String* NNMNBGDBJAN; // 0x0
		// static const ::System::String* BKCEMFNIODM; // 0x0
		// static const ::System::String* IBADJDNJCDI; // 0x0
		// static const ::System::String* OBIEDABFANC; // 0x0
		// static const ::System::String* JGOAFCLMKEP; // 0x0
		// static const ::System::String* GOHNCLAIJKE; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEOBEHMGCMG_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HEOBEHMGCMG_CCTOR_OFFSET))();
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEOBEHMGCMG__ONBIND_OFFSET))(this);
		}

		::System::Void MCIPELFGBJG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEOBEHMGCMG_MCIPELFGBJG_OFFSET))(this);
		}

		::System::Void JOIAFAJPFND()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEOBEHMGCMG_JOIAFAJPFND_OFFSET))(this);
		}

		::System::Void DKDDCGACIKG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEOBEHMGCMG_DKDDCGACIKG_OFFSET))(this);
		}

		::System::Void _OnInitParams(::IGKFNIEJGLM a1)
		{
			return ((::System::Void(*)(::PVOID, ::IGKFNIEJGLM))((::PBYTE)hIl2Cpp + HEOBEHMGCMG__ONINITPARAMS_OFFSET))(this, a1);
		}

		::System::Void OnAcquire(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + HEOBEHMGCMG_ONACQUIRE_OFFSET))(this, a1);
		}

		::System::Void OnReturn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEOBEHMGCMG_ONRETURN_OFFSET))(this);
		}

		::System::Void _InitVarOnce()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEOBEHMGCMG__INITVARONCE_OFFSET))(this);
		}

		::System::Void _SetupView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEOBEHMGCMG__SETUPVIEW_OFFSET))(this);
		}

		::System::Void _OnTick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + HEOBEHMGCMG__ONTICK_OFFSET))(this, a1);
		}

		::System::Void MFCBBPPFMPO(::RPG::GameCore::AbilityBeingLimbo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AbilityBeingLimbo*))((::PBYTE)hIl2Cpp + HEOBEHMGCMG_MFCBBPPFMPO_OFFSET))(this, a1);
		}

		::System::Void LECLADPCHAJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEOBEHMGCMG_LECLADPCHAJ_OFFSET))(this);
		}

		::System::Void DMBMGCGDMCE(::RPG::GameCore::LevelTurnUltraSkillExecutingBegin* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelTurnUltraSkillExecutingBegin*))((::PBYTE)hIl2Cpp + HEOBEHMGCMG_DMBMGCGDMCE_OFFSET))(this, a1);
		}

		::System::Void EBPDLMBPLBL(::RPG::GameCore::TurnBasedModifierInstance* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + HEOBEHMGCMG_EBPDLMBPLBL_OFFSET))(this, a1);
		}

		::System::Void MNLFPHAOAGP(::RPG::GameCore::AbilityCurrentSPChange* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AbilityCurrentSPChange*))((::PBYTE)hIl2Cpp + HEOBEHMGCMG_MNLFPHAOAGP_OFFSET))(this, a1);
		}

		::System::Void IBFMMHHFGEF(::RPG::GameCore::AbilitySkillPropertyChange* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AbilitySkillPropertyChange*))((::PBYTE)hIl2Cpp + HEOBEHMGCMG_IBFMMHHFGEF_OFFSET))(this, a1);
		}

		::System::Void IAODJDMCKNE(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + HEOBEHMGCMG_IAODJDMCKNE_OFFSET))(this, a1);
		}

		::System::Void FIHLOKNBBJC(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + HEOBEHMGCMG_FIHLOKNBBJC_OFFSET))(this, a1);
		}

		::System::Void LBLKLMMLFJA(::RPG::GameCore::LevelTurnUltraSkillCancel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelTurnUltraSkillCancel*))((::PBYTE)hIl2Cpp + HEOBEHMGCMG_LBLKLMMLFJA_OFFSET))(this, a1);
		}

		::System::Void EKLBJFJJHMD(::EFJCLCMOLGO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EFJCLCMOLGO*))((::PBYTE)hIl2Cpp + HEOBEHMGCMG_EKLBJFJJHMD_OFFSET))(this, a1);
		}

		::System::Void DAOHLCBLMHO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEOBEHMGCMG_DAOHLCBLMHO_OFFSET))(this);
		}

		::System::Void LBPHINKONCH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEOBEHMGCMG_LBPHINKONCH_OFFSET))(this);
		}

		::System::Void DOFNOIEDPFN(::RPG::GameCore::LevelGameModeStateChanged* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelGameModeStateChanged*))((::PBYTE)hIl2Cpp + HEOBEHMGCMG_DOFNOIEDPFN_OFFSET))(this, a1);
		}

		::System::Void KANMCJHEFJJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEOBEHMGCMG_KANMCJHEFJJ_OFFSET))(this);
		}

		::System::Void LACAPACNEPI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEOBEHMGCMG_LACAPACNEPI_OFFSET))(this);
		}

		::System::Void NEMAILGLJDG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEOBEHMGCMG_NEMAILGLJDG_OFFSET))(this);
		}

		::System::Void DICPMEJINGC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEOBEHMGCMG_DICPMEJINGC_OFFSET))(this);
		}

		::System::Void NGNACJONELO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEOBEHMGCMG_NGNACJONELO_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint CFLADHCMBMK()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + HEOBEHMGCMG_CFLADHCMBMK_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint MFCDFGNIBFN()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + HEOBEHMGCMG_MFCDFGNIBFN_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint GDNJDJFADMO()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + HEOBEHMGCMG_GDNJDJFADMO_OFFSET))(this);
		}

		::System::Boolean JFDACEKAICI(::RPG::GameCore::FixPoint a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + HEOBEHMGCMG_JFDACEKAICI_OFFSET))(this, a1);
		}

		::System::Void OFEJADOLMKI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEOBEHMGCMG_OFEJADOLMKI_OFFSET))(this);
		}

		::System::Void LINJJNOLHCC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEOBEHMGCMG_LINJJNOLHCC_OFFSET))(this);
		}

		::System::Void GBGKIDGGLFA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEOBEHMGCMG_GBGKIDGGLFA_OFFSET))(this);
		}

		::System::Void HIGIPLKECPF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEOBEHMGCMG_HIGIPLKECPF_OFFSET))(this);
		}

		::System::Void BFDGGBJLEBA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEOBEHMGCMG_BFDGGBJLEBA_OFFSET))(this);
		}

		::System::Void MPPEBPAINNI(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + HEOBEHMGCMG_MPPEBPAINNI_OFFSET))(this, a1);
		}

		::System::Void NLMPFLIBPIP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEOBEHMGCMG_NLMPFLIBPIP_OFFSET))(this);
		}

		::System::Void ODGLPKEOBDA(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + HEOBEHMGCMG_ODGLPKEOBDA_OFFSET))(this, a1);
		}

		::System::Void AFMHNCLHNDP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEOBEHMGCMG_AFMHNCLHNDP_OFFSET))(this);
		}

		::System::Void GOLKPFPKODP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEOBEHMGCMG_GOLKPFPKODP_OFFSET))(this);
		}

		::System::Void HIACEJHMHOA(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HEOBEHMGCMG_HIACEJHMHOA_OFFSET))(this, a1);
		}

		::System::Void LJDOJCKMMDD(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HEOBEHMGCMG_LJDOJCKMMDD_OFFSET))(this, a1);
		}

		::System::Void KPIFHHIBFEH(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HEOBEHMGCMG_KPIFHHIBFEH_OFFSET))(this, a1);
		}

		::System::Void PGCIIGMHODG(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HEOBEHMGCMG_PGCIIGMHODG_OFFSET))(this, a1);
		}

		::System::Void MFAHHGLGOBM(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HEOBEHMGCMG_MFAHHGLGOBM_OFFSET))(this, a1);
		}

		::System::Void BBPGKAAAHCH(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HEOBEHMGCMG_BBPGKAAAHCH_OFFSET))(this, a1);
		}

		::System::Void IHJCDKFFJLF(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HEOBEHMGCMG_IHJCDKFFJLF_OFFSET))(this, a1);
		}

		::System::Void HICFADLNCBF(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HEOBEHMGCMG_HICFADLNCBF_OFFSET))(this, a1);
		}

		::System::Void MFLBMIBHGLC(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HEOBEHMGCMG_MFLBMIBHGLC_OFFSET))(this, a1);
		}

		::System::Void EBLJAEJIGLP(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HEOBEHMGCMG_EBLJAEJIGLP_OFFSET))(this, a1);
		}

		::System::Void JMDBCBFABOO(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HEOBEHMGCMG_JMDBCBFABOO_OFFSET))(this, a1);
		}

		::System::Void IMGLILHFONK(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HEOBEHMGCMG_IMGLILHFONK_OFFSET))(this, a1);
		}

		::System::Void DDCDDLKFKNI(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HEOBEHMGCMG_DDCDDLKFKNI_OFFSET))(this, a1);
		}

		::System::Void AutoBindCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEOBEHMGCMG_AUTOBINDCALLBACK_OFFSET))(this);
		}

		::System::Void AutoRemoveCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEOBEHMGCMG_AUTOREMOVECALLBACK_OFFSET))(this);
		}

	};
