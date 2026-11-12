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

#define FHLLIHAHKHF_ABEKFDHFIKK_OFFSET UNITYSDK_OFFSET(0x166A54A0)
#define FHLLIHAHKHF_AFKGJNAIPEE_OFFSET UNITYSDK_OFFSET(0x166A8DD0)
#define FHLLIHAHKHF_AKAAHNMDBLO_OFFSET UNITYSDK_OFFSET(0x166A74E0)
#define FHLLIHAHKHF_ANNACCPFDAL_OFFSET UNITYSDK_OFFSET(0x166A9930)
#define FHLLIHAHKHF_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x166A9B90)
#define FHLLIHAHKHF_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x166A9EF0)
#define FHLLIHAHKHF_BJPCKMDDLNP_OFFSET UNITYSDK_OFFSET(0x166A62F0)
#define FHLLIHAHKHF_COPMFNMEIGL_OFFSET UNITYSDK_OFFSET(0x166A5930)
#define FHLLIHAHKHF_CTOR_OFFSET UNITYSDK_OFFSET(0x166AA210)
#define FHLLIHAHKHF_DEOLPGGBLPP_OFFSET UNITYSDK_OFFSET(0x166A63B0)
#define FHLLIHAHKHF_DINGIFOODJG_OFFSET UNITYSDK_OFFSET(0x166A5160)
#define FHLLIHAHKHF_DKNEMADMADE_OFFSET UNITYSDK_OFFSET(0x166A9830)
#define FHLLIHAHKHF_DNHBFCDPMIH_OFFSET UNITYSDK_OFFSET(0x166A88B0)
#define FHLLIHAHKHF_DOFNOIEDPFN_OFFSET UNITYSDK_OFFSET(0x166A5A60)
#define FHLLIHAHKHF_DOOENBIGAHN_OFFSET UNITYSDK_OFFSET(0x166A68B0)
#define FHLLIHAHKHF_ECNIHKDDCDH_OFFSET UNITYSDK_OFFSET(0x166A6B10)
#define FHLLIHAHKHF_FJGMBBPCGDJ_OFFSET UNITYSDK_OFFSET(0x166A5AC0)
#define FHLLIHAHKHF_FLCMJLKCIFG_OFFSET UNITYSDK_OFFSET(0x166A4D50)
#define FHLLIHAHKHF_GDGFDAABMJM_OFFSET UNITYSDK_OFFSET(0x166A5110)
#define FHLLIHAHKHF_HBFDPHCOAMG_OFFSET UNITYSDK_OFFSET(0x166A4B50)
#define FHLLIHAHKHF_HKGPNGHFJGI_OFFSET UNITYSDK_OFFSET(0x166A60F0)
#define FHLLIHAHKHF_HKNGGKJDKKB_OFFSET UNITYSDK_OFFSET(0x166A91B0)
#define FHLLIHAHKHF_IFCNAGOJFPN_OFFSET UNITYSDK_OFFSET(0x166A58D0)
#define FHLLIHAHKHF_INHEKNGAMFF_OFFSET UNITYSDK_OFFSET(0x166A6F70)
#define FHLLIHAHKHF_JCNLBDLHCFN_OFFSET UNITYSDK_OFFSET(0x166A9750)
#define FHLLIHAHKHF_JGNDOPPBEMM_OFFSET UNITYSDK_OFFSET(0x166A55E0)
#define FHLLIHAHKHF_JIABCJLODJI_OFFSET UNITYSDK_OFFSET(0x166A4FC0)
#define FHLLIHAHKHF_JOOOLJNLIOK_OFFSET UNITYSDK_OFFSET(0x166A99C0)
#define FHLLIHAHKHF_KGOMOPCELIC_OFFSET UNITYSDK_OFFSET(0x166A83C0)
#define FHLLIHAHKHF_KJBPCGIKKFP_OFFSET UNITYSDK_OFFSET(0x166A6420)
#define FHLLIHAHKHF_KONNDNPPNHA_OFFSET UNITYSDK_OFFSET(0x166A6040)
#define FHLLIHAHKHF_KPCDCBLPIDE_OFFSET UNITYSDK_OFFSET(0x166A56D0)
#define FHLLIHAHKHF_LJDOJCKMMDD_OFFSET UNITYSDK_OFFSET(0x166A9660)
#define FHLLIHAHKHF_LMFEGCPCLBM_OFFSET UNITYSDK_OFFSET(0x166A8B40)
#define FHLLIHAHKHF_LPPMHKLBBGH_OFFSET UNITYSDK_OFFSET(0x166A5B50)
#define FHLLIHAHKHF_MFCOLPLGEJI_OFFSET UNITYSDK_OFFSET(0x166A5430)
#define FHLLIHAHKHF_MPNCNKCOJKB_OFFSET UNITYSDK_OFFSET(0x166A77A0)
#define FHLLIHAHKHF_NIDGPEAGODE_OFFSET UNITYSDK_OFFSET(0x166A82A0)
#define FHLLIHAHKHF_NILKKAPHMPP_OFFSET UNITYSDK_OFFSET(0x166A9330)
#define FHLLIHAHKHF_NJMHKBODOJL_OFFSET UNITYSDK_OFFSET(0x166A94D0)
#define FHLLIHAHKHF_NKALEPGMOPO_OFFSET UNITYSDK_OFFSET(0x166A95D0)
#define FHLLIHAHKHF_NLACAHNCPPP_1_OFFSET UNITYSDK_OFFSET(0x166A6950)
#define FHLLIHAHKHF_NLACAHNCPPP_OFFSET UNITYSDK_OFFSET(0x166A69E0)
#define FHLLIHAHKHF_PDOPDDHKPOL_OFFSET UNITYSDK_OFFSET(0x166A77F0)
#define FHLLIHAHKHF_PMNIDBJMMHF_OFFSET UNITYSDK_OFFSET(0x166A9B00)
#define FHLLIHAHKHF__INITVARONCE_OFFSET UNITYSDK_OFFSET(0x166A47D0)
#define FHLLIHAHKHF__ONBIND_OFFSET UNITYSDK_OFFSET(0x166A46A0)
#define FHLLIHAHKHF__ONDISPOSE_OFFSET UNITYSDK_OFFSET(0x166A50B0)
#define FHLLIHAHKHF__ONINITPARAMS_OFFSET UNITYSDK_OFFSET(0x166A4750)
#define FHLLIHAHKHF__ONTICK_OFFSET UNITYSDK_OFFSET(0x166A4AF0)
#define FHLLIHAHKHF__SETUPVIEW_OFFSET UNITYSDK_OFFSET(0x166A4F80)

inline static constexpr unsigned int FHLLIHAHKHF_TypeDefinitionIndex = 74063;

	class FHLLIHAHKHF : public ::FMPCODLIOLG
	{
	public:
		::RPG::Client::ScreenEventHandler* LNGFIMJABDK; // 0x60
		::RPG::GameCore::BattleInstance* IFKCCHIFMOC; // 0x68
		::RPG::GameCore::LevelUIComponent* GEAHNEAGEBG; // 0x70
		::System::String* BFKFNGINKKO; // 0x78
		::RPG::GameCore::TeamDataComponent* AIAJJIEBAJD; // 0x80
		::AKOBFMCEJKL* CPMKHGNEFEI; // 0x88
		::RPG::GameCore::EntityManager* LPILDKDAGDP; // 0x90
		::UnityEngine::Vector2 LKMGNHCEFED; // 0x98
		::System::Single CCLPJBEGBEJ; // 0xA0
		::System::Single COHEGIIFNOO; // 0xA4
		::System::Boolean JEBMKKEAIBF; // 0xA8
		::System::Boolean KAIGHPJLDJP; // 0xA9
		::System::Boolean IIFHEBPNANN; // 0xAA
		::System::Boolean EKODFJMGIKG; // 0xAB
		::System::Boolean CEFMLNIHEFJ; // 0xAC
		::System::Boolean LANEAJPGLEI; // 0xAD
		::System::Byte _padding0[0x2];
		::RPG::GameCore::GameModeState KLDNPBNHABE; // 0xB0
		::System::Single LAFONBAOMMH; // 0xB4
		::System::UInt32 MAAHJDHGELL; // 0xB8
		::System::Byte _padding1[0x4];
		::RPG::Client::TextID DHOBJJBAJGC; // 0xC0
		::System::Single DCCJCIBLMDO; // 0xD0
		::System::Single HFKDAFHFLCC; // 0xD4
		::System::Single BFMNOBMBJAC; // 0xD8
		::System::Single BEEBFABAGFD; // 0xDC
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FHLLIHAHKHF_CTOR_OFFSET))(this);
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FHLLIHAHKHF__ONBIND_OFFSET))(this);
		}

		::System::Void _OnInitParams(::IGKFNIEJGLM a1)
		{
			return ((::System::Void(*)(::PVOID, ::IGKFNIEJGLM))((::PBYTE)hIl2Cpp + FHLLIHAHKHF__ONINITPARAMS_OFFSET))(this, a1);
		}

		::System::Void _InitVarOnce()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FHLLIHAHKHF__INITVARONCE_OFFSET))(this);
		}

		::System::Void _OnTick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FHLLIHAHKHF__ONTICK_OFFSET))(this, a1);
		}

		::System::Void _SetupView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FHLLIHAHKHF__SETUPVIEW_OFFSET))(this);
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
