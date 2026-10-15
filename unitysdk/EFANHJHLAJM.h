#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EFANHJHLAJM_ActiveType.h"
#include "unitysdk/FMPCODLIOLG.h"
#include "unitysdk/IGKFNIEJGLM.h"
#include "unitysdk/UnityEngine/Rect.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace RPG::Client { class MonsterPhaseChangeParams; }
namespace RPG::Client { class UIFollow3DTarget; }
namespace RPG::GameCore { class AbilityCharacterModelChange; }
namespace RPG::GameCore { class CharacterDataComponent; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class LevelUIComponent; }
namespace RPG::GameCore { class TurnBasedGameMode; }
namespace System { class Object; }
namespace UnityEngine { class RectTransform; }

#define EFANHJHLAJM_ACMNLDLKINC_OFFSET UNITYSDK_OFFSET(0x13A46290)
#define EFANHJHLAJM_AIFLMCJJFKB_OFFSET UNITYSDK_OFFSET(0x13A44320)
#define EFANHJHLAJM_AOJMBDBLBIL_OFFSET UNITYSDK_OFFSET(0x13A45FC0)
#define EFANHJHLAJM_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x13A467B0)
#define EFANHJHLAJM_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x13A46C50)
#define EFANHJHLAJM_BECADHBHGGN_OFFSET UNITYSDK_OFFSET(0x13A45350)
#define EFANHJHLAJM_BJOGNFAIAPO_OFFSET UNITYSDK_OFFSET(0x13A44450)
#define EFANHJHLAJM_BLCMCABJHKP_OFFSET UNITYSDK_OFFSET(0x13A45710)
#define EFANHJHLAJM_BLGCKLHBOHE_OFFSET UNITYSDK_OFFSET(0x13A460D0)
#define EFANHJHLAJM_CCGFKCEHGGE_OFFSET UNITYSDK_OFFSET(0x13A46690)
#define EFANHJHLAJM_CCTOR_OFFSET UNITYSDK_OFFSET(0x13A470F0)
#define EFANHJHLAJM_CDCFJGJECBJ_OFFSET UNITYSDK_OFFSET(0x13A46720)
#define EFANHJHLAJM_CTOR_OFFSET UNITYSDK_OFFSET(0x13A470C0)
#define EFANHJHLAJM_DAOHLCBLMHO_OFFSET UNITYSDK_OFFSET(0x13A455D0)
#define EFANHJHLAJM_DHHDFAAJMMC_OFFSET UNITYSDK_OFFSET(0x13A444D0)
#define EFANHJHLAJM_DJKOANKJJMJ_OFFSET UNITYSDK_OFFSET(0x13A45940)
#define EFANHJHLAJM_DMPECNLMBJH_OFFSET UNITYSDK_OFFSET(0x13A45BD0)
#define EFANHJHLAJM_DOHMJNLJAJM_OFFSET UNITYSDK_OFFSET(0x13A45E00)
#define EFANHJHLAJM_ECKOFMEAHNB_OFFSET UNITYSDK_OFFSET(0x13A453F0)
#define EFANHJHLAJM_EKGCGIDIFJJ_OFFSET UNITYSDK_OFFSET(0x13A44A20)
#define EFANHJHLAJM_FDKKHFFLFEA_OFFSET UNITYSDK_OFFSET(0x13A45530)
#define EFANHJHLAJM_FIHPNLLBGJK_OFFSET UNITYSDK_OFFSET(0x13A45260)
#define EFANHJHLAJM_FLFDNCNPDNI_OFFSET UNITYSDK_OFFSET(0x13A454E0)
#define EFANHJHLAJM_GCODCEFGANN_OFFSET UNITYSDK_OFFSET(0x13A45580)
#define EFANHJHLAJM_GFDPHCBKHMH_OFFSET UNITYSDK_OFFSET(0x13A46190)
#define EFANHJHLAJM_HGMJKNEAANO_OFFSET UNITYSDK_OFFSET(0x13A465D0)
#define EFANHJHLAJM_HIACEJHMHOA_OFFSET UNITYSDK_OFFSET(0x13A45F00)
#define EFANHJHLAJM_IAAOBCKAGPF_OFFSET UNITYSDK_OFFSET(0x13A450D0)
#define EFANHJHLAJM_IFDFMDHPBDO_OFFSET UNITYSDK_OFFSET(0x13A44BD0)
#define EFANHJHLAJM_IPEAGFMEOKB_OFFSET UNITYSDK_OFFSET(0x13A45620)
#define EFANHJHLAJM_JDPJLKDNONC_OFFSET UNITYSDK_OFFSET(0x13A44C20)
#define EFANHJHLAJM_JFEILMNOCMK_OFFSET UNITYSDK_OFFSET(0x13A46390)
#define EFANHJHLAJM_JFIMJONCKHC_OFFSET UNITYSDK_OFFSET(0x13A45790)
#define EFANHJHLAJM_JHCNEPONPHI_OFFSET UNITYSDK_OFFSET(0x13A44890)
#define EFANHJHLAJM_KBPMCFICODM_OFFSET UNITYSDK_OFFSET(0x13A459A0)
#define EFANHJHLAJM_KNBMBDNJLBK_OFFSET UNITYSDK_OFFSET(0x13A45A20)
#define EFANHJHLAJM_LIDKFDENKAP_OFFSET UNITYSDK_OFFSET(0x13A44580)
#define EFANHJHLAJM_MDIOIKCGIOL_OFFSET UNITYSDK_OFFSET(0x13A44C80)
#define EFANHJHLAJM_NAPEMFLELHM_OFFSET UNITYSDK_OFFSET(0x13A456A0)
#define EFANHJHLAJM_NCKMAEILCDH_OFFSET UNITYSDK_OFFSET(0x13A46450)
#define EFANHJHLAJM_NIJJPBOIGBI_OFFSET UNITYSDK_OFFSET(0x13A445F0)
#define EFANHJHLAJM_OIFOAEBHMCM_OFFSET UNITYSDK_OFFSET(0x13A46510)
#define EFANHJHLAJM_ONACQUIRE_OFFSET UNITYSDK_OFFSET(0x13A44930)
#define EFANHJHLAJM_ONRETURN_OFFSET UNITYSDK_OFFSET(0x13A44AB0)
#define EFANHJHLAJM_OPOCPDBMELE_OFFSET UNITYSDK_OFFSET(0x13A453A0)
#define EFANHJHLAJM_POAJNJEKEGC_1_OFFSET UNITYSDK_OFFSET(0x13A451F0)
#define EFANHJHLAJM_POAJNJEKEGC_OFFSET UNITYSDK_OFFSET(0x13A45140)
#define EFANHJHLAJM__ONBIND_OFFSET UNITYSDK_OFFSET(0x13A44260)

	class EFANHJHLAJM : public ::FMPCODLIOLG
	{
	public:
		::RPG::GameCore::LevelUIComponent* FGCIJADADDA; // 0x60
		::UnityEngine::RectTransform* HKONEDKHNMM; // 0x68
		::RPG::GameCore::TurnBasedGameMode* GICHGNGMBGD; // 0x70
		::RPG::GameCore::GameEntity* KAKEIDJDNHJ; // 0x78
		::RPG::GameCore::CharacterDataComponent* HKCICBFPGGF; // 0x80
		::RPG::Client::UIFollow3DTarget* DIHCNFOOEFF; // 0x88
		::System::Int32 ALLINIHNNJJ; // 0x90
		::System::Boolean LPJHIOPCLID; // 0x94
		::System::Boolean AKCAAKFHBNO; // 0x95
		static ::System::Single* StaticGet_HKNKCMMHLMM()
		{
			return (::System::Single*)UnitySDK::FromName("", "EFANHJHLAJM")->GetStaticField(0x15C60);
		}

		static ::System::Single* StaticGet_MPDDIAHAKON()
		{
			return (::System::Single*)UnitySDK::FromName("", "EFANHJHLAJM")->GetStaticField(0x15C64);
		}

		static ::System::Single* StaticGet_KIHEELENINN()
		{
			return (::System::Single*)UnitySDK::FromName("", "EFANHJHLAJM")->GetStaticField(0x15C68);
		}

		static ::System::Single* StaticGet_HDPCNFIBDKD()
		{
			return (::System::Single*)UnitySDK::FromName("", "EFANHJHLAJM")->GetStaticField(0x15C6C);
		}

		static ::System::Single* StaticGet_PJAGOOIOLEK()
		{
			return (::System::Single*)UnitySDK::FromName("", "EFANHJHLAJM")->GetStaticField(0x15C70);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EFANHJHLAJM_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EFANHJHLAJM_CCTOR_OFFSET))();
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EFANHJHLAJM__ONBIND_OFFSET))(this);
		}

		::System::Void AIFLMCJJFKB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EFANHJHLAJM_AIFLMCJJFKB_OFFSET))(this);
		}

		::System::Void BJOGNFAIAPO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EFANHJHLAJM_BJOGNFAIAPO_OFFSET))(this);
		}

		::System::Void DHHDFAAJMMC(::IGKFNIEJGLM a1)
		{
			return ((::System::Void(*)(::PVOID, ::IGKFNIEJGLM))((::PBYTE)hIl2Cpp + EFANHJHLAJM_DHHDFAAJMMC_OFFSET))(this, a1);
		}

		::System::Void NIJJPBOIGBI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EFANHJHLAJM_NIJJPBOIGBI_OFFSET))(this);
		}

		::System::Void OnAcquire(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + EFANHJHLAJM_ONACQUIRE_OFFSET))(this, a1);
		}

		::System::Void OnReturn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EFANHJHLAJM_ONRETURN_OFFSET))(this);
		}

		::System::Void EKGCGIDIFJJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EFANHJHLAJM_EKGCGIDIFJJ_OFFSET))(this);
		}

		::System::Void JHCNEPONPHI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EFANHJHLAJM_JHCNEPONPHI_OFFSET))(this);
		}

		::System::Void LIDKFDENKAP(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + EFANHJHLAJM_LIDKFDENKAP_OFFSET))(this, a1);
		}

		::System::Void IAAOBCKAGPF(::RPG::Client::MonsterPhaseChangeParams* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MonsterPhaseChangeParams*))((::PBYTE)hIl2Cpp + EFANHJHLAJM_IAAOBCKAGPF_OFFSET))(this, a1);
		}

		::System::Void POAJNJEKEGC(::RPG::GameCore::AbilityCharacterModelChange* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AbilityCharacterModelChange*))((::PBYTE)hIl2Cpp + EFANHJHLAJM_POAJNJEKEGC_OFFSET))(this, a1);
		}

		::System::Void POAJNJEKEGC_1(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + EFANHJHLAJM_POAJNJEKEGC_1_OFFSET))(this, a1);
		}

		::System::Void FIHPNLLBGJK(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + EFANHJHLAJM_FIHPNLLBGJK_OFFSET))(this, a1);
		}

		::System::Void OPOCPDBMELE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EFANHJHLAJM_OPOCPDBMELE_OFFSET))(this);
		}

		::System::Void FLFDNCNPDNI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EFANHJHLAJM_FLFDNCNPDNI_OFFSET))(this);
		}

		::System::Void FDKKHFFLFEA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EFANHJHLAJM_FDKKHFFLFEA_OFFSET))(this);
		}

		::System::Void GCODCEFGANN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EFANHJHLAJM_GCODCEFGANN_OFFSET))(this);
		}

		::System::Void DAOHLCBLMHO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EFANHJHLAJM_DAOHLCBLMHO_OFFSET))(this);
		}

		::System::Void IPEAGFMEOKB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EFANHJHLAJM_IPEAGFMEOKB_OFFSET))(this);
		}

		::System::Void BLCMCABJHKP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EFANHJHLAJM_BLCMCABJHKP_OFFSET))(this);
		}

		::System::Void JFIMJONCKHC(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EFANHJHLAJM_JFIMJONCKHC_OFFSET))(this, a1);
		}

		::System::Void KBPMCFICODM(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + EFANHJHLAJM_KBPMCFICODM_OFFSET))(this, a1);
		}

		::System::Void MDIOIKCGIOL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EFANHJHLAJM_MDIOIKCGIOL_OFFSET))(this);
		}

		::UnityEngine::Vector3 DMPECNLMBJH(::UnityEngine::Vector3 a1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + EFANHJHLAJM_DMPECNLMBJH_OFFSET))(this, a1);
		}

		::UnityEngine::Rect KNBMBDNJLBK()
		{
			return ((::UnityEngine::Rect(*)(::PVOID))((::PBYTE)hIl2Cpp + EFANHJHLAJM_KNBMBDNJLBK_OFFSET))(this);
		}

		::System::Void NAPEMFLELHM(::EFANHJHLAJM_ActiveType a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::EFANHJHLAJM_ActiveType, ::System::Boolean))((::PBYTE)hIl2Cpp + EFANHJHLAJM_NAPEMFLELHM_OFFSET))(this, a1, a2);
		}

		::System::Void DJKOANKJJMJ(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + EFANHJHLAJM_DJKOANKJJMJ_OFFSET))(this, a1);
		}

		::System::Void BECADHBHGGN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EFANHJHLAJM_BECADHBHGGN_OFFSET))(this);
		}

		::System::Void DOHMJNLJAJM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EFANHJHLAJM_DOHMJNLJAJM_OFFSET))(this);
		}

		::System::Void JDPJLKDNONC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EFANHJHLAJM_JDPJLKDNONC_OFFSET))(this);
		}

		::System::Void ECKOFMEAHNB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EFANHJHLAJM_ECKOFMEAHNB_OFFSET))(this);
		}

		::System::Void IFDFMDHPBDO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EFANHJHLAJM_IFDFMDHPBDO_OFFSET))(this);
		}

		::System::Void HIACEJHMHOA(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EFANHJHLAJM_HIACEJHMHOA_OFFSET))(this, a1);
		}

		::System::Void AOJMBDBLBIL(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EFANHJHLAJM_AOJMBDBLBIL_OFFSET))(this, a1);
		}

		::System::Void BLGCKLHBOHE(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EFANHJHLAJM_BLGCKLHBOHE_OFFSET))(this, a1);
		}

		::System::Void GFDPHCBKHMH(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EFANHJHLAJM_GFDPHCBKHMH_OFFSET))(this, a1);
		}

		::System::Void ACMNLDLKINC(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EFANHJHLAJM_ACMNLDLKINC_OFFSET))(this, a1);
		}

		::System::Void JFEILMNOCMK(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EFANHJHLAJM_JFEILMNOCMK_OFFSET))(this, a1);
		}

		::System::Void NCKMAEILCDH(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EFANHJHLAJM_NCKMAEILCDH_OFFSET))(this, a1);
		}

		::System::Void OIFOAEBHMCM(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EFANHJHLAJM_OIFOAEBHMCM_OFFSET))(this, a1);
		}

		::System::Void HGMJKNEAANO(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EFANHJHLAJM_HGMJKNEAANO_OFFSET))(this, a1);
		}

		::System::Void CCGFKCEHGGE(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EFANHJHLAJM_CCGFKCEHGGE_OFFSET))(this, a1);
		}

		::System::Void CDCFJGJECBJ(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EFANHJHLAJM_CDCFJGJECBJ_OFFSET))(this, a1);
		}

		::System::Void AutoBindCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EFANHJHLAJM_AUTOBINDCALLBACK_OFFSET))(this);
		}

		::System::Void AutoRemoveCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EFANHJHLAJM_AUTOREMOVECALLBACK_OFFSET))(this);
		}

	};
