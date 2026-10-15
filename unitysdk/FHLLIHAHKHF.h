#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/GameModeState.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/FOPPJDFMDGH.h"
#include "unitysdk/IGKFNIEJGLM.h"
#include "unitysdk/UnityEngine/Ray.h"
class AKOBFMCEJKL;
namespace RPG::Client { class BattleShowMessageManager_Message; }
namespace RPG::Client { class ScreenEventHandler; }
namespace RPG::GameCore { class BattleInstance; }
namespace RPG::GameCore { class EntityManager; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class LevelGameModeStateChanged; }
namespace RPG::GameCore { class LevelUIComponent; }
namespace RPG::GameCore { class TeamDataComponent; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::EventSystems { class PointerEventData; }

#define FHLLIHAHKHF_ABEKFDHFIKK_OFFSET UNITYSDK_OFFSET(0x15784960)
#define FHLLIHAHKHF_AFKGJNAIPEE_OFFSET UNITYSDK_OFFSET(0x15788290)
#define FHLLIHAHKHF_AKAAHNMDBLO_OFFSET UNITYSDK_OFFSET(0x15786990)
#define FHLLIHAHKHF_ANNACCPFDAL_OFFSET UNITYSDK_OFFSET(0x15788DE0)
#define FHLLIHAHKHF_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x15789040)
#define FHLLIHAHKHF_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x157893A0)
#define FHLLIHAHKHF_BJPCKMDDLNP_OFFSET UNITYSDK_OFFSET(0x15785790)
#define FHLLIHAHKHF_COPMFNMEIGL_OFFSET UNITYSDK_OFFSET(0x15784DE0)
#define FHLLIHAHKHF_CTOR_OFFSET UNITYSDK_OFFSET(0x157896C0)
#define FHLLIHAHKHF_DEOLPGGBLPP_OFFSET UNITYSDK_OFFSET(0x15785860)
#define FHLLIHAHKHF_DHHDFAAJMMC_OFFSET UNITYSDK_OFFSET(0x15783C10)
#define FHLLIHAHKHF_DINGIFOODJG_OFFSET UNITYSDK_OFFSET(0x15784620)
#define FHLLIHAHKHF_DKNEMADMADE_OFFSET UNITYSDK_OFFSET(0x15788CE0)
#define FHLLIHAHKHF_DNHBFCDPMIH_OFFSET UNITYSDK_OFFSET(0x15787D60)
#define FHLLIHAHKHF_DOFNOIEDPFN_OFFSET UNITYSDK_OFFSET(0x15784F10)
#define FHLLIHAHKHF_DOOENBIGAHN_OFFSET UNITYSDK_OFFSET(0x15785D60)
#define FHLLIHAHKHF_ECNIHKDDCDH_OFFSET UNITYSDK_OFFSET(0x15785FC0)
#define FHLLIHAHKHF_EKGCGIDIFJJ_OFFSET UNITYSDK_OFFSET(0x15784440)
#define FHLLIHAHKHF_FJGMBBPCGDJ_OFFSET UNITYSDK_OFFSET(0x15784F70)
#define FHLLIHAHKHF_FLCMJLKCIFG_OFFSET UNITYSDK_OFFSET(0x15784210)
#define FHLLIHAHKHF_GDGFDAABMJM_OFFSET UNITYSDK_OFFSET(0x157845D0)
#define FHLLIHAHKHF_HBFDPHCOAMG_OFFSET UNITYSDK_OFFSET(0x15784010)
#define FHLLIHAHKHF_HKGPNGHFJGI_OFFSET UNITYSDK_OFFSET(0x15785590)
#define FHLLIHAHKHF_HKNGGKJDKKB_OFFSET UNITYSDK_OFFSET(0x15788670)
#define FHLLIHAHKHF_IFCNAGOJFPN_OFFSET UNITYSDK_OFFSET(0x15784D80)
#define FHLLIHAHKHF_INHEKNGAMFF_OFFSET UNITYSDK_OFFSET(0x15786420)
#define FHLLIHAHKHF_JCNLBDLHCFN_OFFSET UNITYSDK_OFFSET(0x15788C00)
#define FHLLIHAHKHF_JGNDOPPBEMM_OFFSET UNITYSDK_OFFSET(0x15784A90)
#define FHLLIHAHKHF_JIABCJLODJI_OFFSET UNITYSDK_OFFSET(0x15784480)
#define FHLLIHAHKHF_JOOOLJNLIOK_OFFSET UNITYSDK_OFFSET(0x15788E70)
#define FHLLIHAHKHF_KGOMOPCELIC_OFFSET UNITYSDK_OFFSET(0x15787870)
#define FHLLIHAHKHF_KJBPCGIKKFP_OFFSET UNITYSDK_OFFSET(0x157858D0)
#define FHLLIHAHKHF_KONNDNPPNHA_OFFSET UNITYSDK_OFFSET(0x157854F0)
#define FHLLIHAHKHF_KPCDCBLPIDE_OFFSET UNITYSDK_OFFSET(0x15784B70)
#define FHLLIHAHKHF_LJDOJCKMMDD_OFFSET UNITYSDK_OFFSET(0x15788B10)
#define FHLLIHAHKHF_LMFEGCPCLBM_OFFSET UNITYSDK_OFFSET(0x15787FF0)
#define FHLLIHAHKHF_LPPMHKLBBGH_OFFSET UNITYSDK_OFFSET(0x15785000)
#define FHLLIHAHKHF_MFCOLPLGEJI_OFFSET UNITYSDK_OFFSET(0x157848F0)
#define FHLLIHAHKHF_MPNCNKCOJKB_OFFSET UNITYSDK_OFFSET(0x15786C50)
#define FHLLIHAHKHF_NIDGPEAGODE_OFFSET UNITYSDK_OFFSET(0x15787750)
#define FHLLIHAHKHF_NIJJPBOIGBI_OFFSET UNITYSDK_OFFSET(0x15783CA0)
#define FHLLIHAHKHF_NILKKAPHMPP_OFFSET UNITYSDK_OFFSET(0x157887F0)
#define FHLLIHAHKHF_NJMHKBODOJL_OFFSET UNITYSDK_OFFSET(0x15788990)
#define FHLLIHAHKHF_NKALEPGMOPO_OFFSET UNITYSDK_OFFSET(0x15788A90)
#define FHLLIHAHKHF_NLACAHNCPPP_1_OFFSET UNITYSDK_OFFSET(0x15785E00)
#define FHLLIHAHKHF_NLACAHNCPPP_OFFSET UNITYSDK_OFFSET(0x15785E90)
#define FHLLIHAHKHF_PDOPDDHKPOL_OFFSET UNITYSDK_OFFSET(0x15786CA0)
#define FHLLIHAHKHF_PMNIDBJMMHF_OFFSET UNITYSDK_OFFSET(0x15788FB0)
#define FHLLIHAHKHF__ONBIND_OFFSET UNITYSDK_OFFSET(0x15783BB0)
#define FHLLIHAHKHF__ONDISPOSE_OFFSET UNITYSDK_OFFSET(0x15784570)
#define FHLLIHAHKHF__ONTICK_OFFSET UNITYSDK_OFFSET(0x15783FB0)

inline static constexpr unsigned int FHLLIHAHKHF_TypeDefinitionIndex = 72032;

	class FHLLIHAHKHF : public ::FMPCODLIOLG
	{
	public:
		::RPG::Client::ScreenEventHandler* LNGFIMJABDK; // 0x60
		::RPG::GameCore::EntityManager* LPILDKDAGDP; // 0x68
		::System::String* BFKFNGINKKO; // 0x70
		::AKOBFMCEJKL* CPMKHGNEFEI; // 0x78
		::RPG::GameCore::TeamDataComponent* AIAJJIEBAJD; // 0x80
		::RPG::GameCore::BattleInstance* IFKCCHIFMOC; // 0x88
		::RPG::GameCore::LevelUIComponent* GEAHNEAGEBG; // 0x90
		::RPG::GameCore::GameModeState KLDNPBNHABE; // 0x98
		::UnityEngine::Vector2 LKMGNHCEFED; // 0x9C
		::System::Single COHEGIIFNOO; // 0xA4
		::System::Single CCLPJBEGBEJ; // 0xA8
		::System::Single LAFONBAOMMH; // 0xAC
		::System::UInt32 MAAHJDHGELL; // 0xB0
		::System::Byte _padding0[0x4];
		::RPG::Client::TextID DHOBJJBAJGC; // 0xB8
		::System::Single BFMNOBMBJAC; // 0xC8
		::System::Boolean LANEAJPGLEI; // 0xCC
		::System::Boolean JEBMKKEAIBF; // 0xCD
		::System::Boolean KAIGHPJLDJP; // 0xCE
		::System::Boolean EKODFJMGIKG; // 0xCF
		::System::Single DCCJCIBLMDO; // 0xD0
		::System::Single BEEBFABAGFD; // 0xD4
		::System::Boolean CEFMLNIHEFJ; // 0xD8
		::System::Boolean IIFHEBPNANN; // 0xD9
		::System::Byte _padding1[0x2];
		::System::Single HFKDAFHFLCC; // 0xDC
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FHLLIHAHKHF_CTOR_OFFSET))(this);
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FHLLIHAHKHF__ONBIND_OFFSET))(this);
		}

		::System::Void DHHDFAAJMMC(::IGKFNIEJGLM a1)
		{
			return ((::System::Void(*)(::PVOID, ::IGKFNIEJGLM))((::PBYTE)hIl2Cpp + FHLLIHAHKHF_DHHDFAAJMMC_OFFSET))(this, a1);
		}

		::System::Void NIJJPBOIGBI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FHLLIHAHKHF_NIJJPBOIGBI_OFFSET))(this);
		}

		::System::Void _OnTick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FHLLIHAHKHF__ONTICK_OFFSET))(this, a1);
		}

		::System::Void EKGCGIDIFJJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FHLLIHAHKHF_EKGCGIDIFJJ_OFFSET))(this);
		}

		::System::Void JIABCJLODJI(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + FHLLIHAHKHF_JIABCJLODJI_OFFSET))(this, a1);
		}

		::System::Void _OnDispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FHLLIHAHKHF__ONDISPOSE_OFFSET))(this);
		}

		::System::Void GDGFDAABMJM(::RPG::GameCore::BattleInstance* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BattleInstance*))((::PBYTE)hIl2Cpp + FHLLIHAHKHF_GDGFDAABMJM_OFFSET))(this, a1);
		}

		::System::Void MFCOLPLGEJI(::RPG::Client::BattleShowMessageManager_Message* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::BattleShowMessageManager_Message*))((::PBYTE)hIl2Cpp + FHLLIHAHKHF_MFCOLPLGEJI_OFFSET))(this, a1);
		}

		::System::Void ABEKFDHFIKK(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + FHLLIHAHKHF_ABEKFDHFIKK_OFFSET))(this, a1, a2);
		}

		::System::Void JGNDOPPBEMM(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FHLLIHAHKHF_JGNDOPPBEMM_OFFSET))(this, a1);
		}

		::System::Void IFCNAGOJFPN(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + FHLLIHAHKHF_IFCNAGOJFPN_OFFSET))(this, a1);
		}

		::System::Void COPMFNMEIGL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FHLLIHAHKHF_COPMFNMEIGL_OFFSET))(this);
		}

		::System::Void DOFNOIEDPFN(::RPG::GameCore::LevelGameModeStateChanged* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelGameModeStateChanged*))((::PBYTE)hIl2Cpp + FHLLIHAHKHF_DOFNOIEDPFN_OFFSET))(this, a1);
		}

		::System::Void DINGIFOODJG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FHLLIHAHKHF_DINGIFOODJG_OFFSET))(this);
		}

		::System::Void FJGMBBPCGDJ(::UnityEngine::EventSystems::PointerEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + FHLLIHAHKHF_FJGMBBPCGDJ_OFFSET))(this, a1);
		}

		::System::Void KONNDNPPNHA(::UnityEngine::EventSystems::PointerEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + FHLLIHAHKHF_KONNDNPPNHA_OFFSET))(this, a1);
		}

		::System::Void BJPCKMDDLNP(::UnityEngine::EventSystems::PointerEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + FHLLIHAHKHF_BJPCKMDDLNP_OFFSET))(this, a1);
		}

		::System::Void KJBPCGIKKFP(::UnityEngine::EventSystems::PointerEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + FHLLIHAHKHF_KJBPCGIKKFP_OFFSET))(this, a1);
		}

		::System::Void INHEKNGAMFF(::UnityEngine::EventSystems::PointerEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + FHLLIHAHKHF_INHEKNGAMFF_OFFSET))(this, a1);
		}

		::System::Void AKAAHNMDBLO(::UnityEngine::EventSystems::PointerEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + FHLLIHAHKHF_AKAAHNMDBLO_OFFSET))(this, a1);
		}

		::System::Boolean KPCDCBLPIDE()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FHLLIHAHKHF_KPCDCBLPIDE_OFFSET))(this);
		}

		::System::Boolean DEOLPGGBLPP(::UnityEngine::EventSystems::PointerEventData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + FHLLIHAHKHF_DEOLPGGBLPP_OFFSET))(this, a1);
		}

		::System::Void LPPMHKLBBGH(::UnityEngine::EventSystems::PointerEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + FHLLIHAHKHF_LPPMHKLBBGH_OFFSET))(this, a1);
		}

		::System::Void HKGPNGHFJGI(::UnityEngine::EventSystems::PointerEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + FHLLIHAHKHF_HKGPNGHFJGI_OFFSET))(this, a1);
		}

		::System::Void FLCMJLKCIFG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FHLLIHAHKHF_FLCMJLKCIFG_OFFSET))(this);
		}

		::System::Void PDOPDDHKPOL(::UnityEngine::EventSystems::PointerEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + FHLLIHAHKHF_PDOPDDHKPOL_OFFSET))(this, a1);
		}

		::System::Boolean AFKGJNAIPEE(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2, ::UnityEngine::EventSystems::PointerEventData* a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + FHLLIHAHKHF_AFKGJNAIPEE_OFFSET))(this, a1, a2, a3);
		}

		::System::Int32 HKNGGKJDKKB(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + FHLLIHAHKHF_HKNGGKJDKKB_OFFSET))(this, a1, a2);
		}

		::System::Boolean KGOMOPCELIC(::RPG::GameCore::GameEntity* a1, ::UnityEngine::Ray a2, ::System::Single a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::UnityEngine::Ray, ::System::Single))((::PBYTE)hIl2Cpp + FHLLIHAHKHF_KGOMOPCELIC_OFFSET))(this, a1, a2, a3);
		}

		::RPG::GameCore::GameEntity* LMFEGCPCLBM(::RPG::GameCore::GameEntity* a1, ::UnityEngine::Ray a2)
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::UnityEngine::Ray))((::PBYTE)hIl2Cpp + FHLLIHAHKHF_LMFEGCPCLBM_OFFSET))(this, a1, a2);
		}

		::System::Void DNHBFCDPMIH(::RPG::GameCore::GameEntity* a1, ::System::Collections::Generic::List_1<::FOPPJDFMDGH>* a2, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Collections::Generic::List_1<::FOPPJDFMDGH>*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + FHLLIHAHKHF_DNHBFCDPMIH_OFFSET))(this, a1, a2, a3);
		}

		::FOPPJDFMDGH NJMHKBODOJL(::RPG::GameCore::GameEntity* a1, ::System::Collections::Generic::List_1<::FOPPJDFMDGH>* a2)
		{
			return ((::FOPPJDFMDGH(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Collections::Generic::List_1<::FOPPJDFMDGH>*))((::PBYTE)hIl2Cpp + FHLLIHAHKHF_NJMHKBODOJL_OFFSET))(this, a1, a2);
		}

		::System::Void NILKKAPHMPP(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + FHLLIHAHKHF_NILKKAPHMPP_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Vector2 NLACAHNCPPP(::UnityEngine::Vector2 a1)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + FHLLIHAHKHF_NLACAHNCPPP_OFFSET))(this, a1);
		}

		::System::Int32 NLACAHNCPPP_1(::System::Int32 a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FHLLIHAHKHF_NLACAHNCPPP_1_OFFSET))(this, a1);
		}

		::UnityEngine::Vector2 ECNIHKDDCDH()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + FHLLIHAHKHF_ECNIHKDDCDH_OFFSET))(this);
		}

		::System::Void DOOENBIGAHN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FHLLIHAHKHF_DOOENBIGAHN_OFFSET))(this);
		}

		::System::Void NIDGPEAGODE(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + FHLLIHAHKHF_NIDGPEAGODE_OFFSET))(this, a1);
		}

		::System::Void MPNCNKCOJKB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FHLLIHAHKHF_MPNCNKCOJKB_OFFSET))(this);
		}

		::System::Void HBFDPHCOAMG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FHLLIHAHKHF_HBFDPHCOAMG_OFFSET))(this);
		}

		::System::Boolean NKALEPGMOPO()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FHLLIHAHKHF_NKALEPGMOPO_OFFSET))(this);
		}

		::System::Void LJDOJCKMMDD(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FHLLIHAHKHF_LJDOJCKMMDD_OFFSET))(this, a1);
		}

		::System::Void JCNLBDLHCFN(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FHLLIHAHKHF_JCNLBDLHCFN_OFFSET))(this, a1);
		}

		::System::Void DKNEMADMADE(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FHLLIHAHKHF_DKNEMADMADE_OFFSET))(this, a1);
		}

		::System::Void ANNACCPFDAL(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FHLLIHAHKHF_ANNACCPFDAL_OFFSET))(this, a1);
		}

		::System::Void JOOOLJNLIOK(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FHLLIHAHKHF_JOOOLJNLIOK_OFFSET))(this, a1);
		}

		::System::Void PMNIDBJMMHF(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FHLLIHAHKHF_PMNIDBJMMHF_OFFSET))(this, a1);
		}

		::System::Void AutoBindCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FHLLIHAHKHF_AUTOBINDCALLBACK_OFFSET))(this);
		}

		::System::Void AutoRemoveCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FHLLIHAHKHF_AUTOREMOVECALLBACK_OFFSET))(this);
		}

	};
