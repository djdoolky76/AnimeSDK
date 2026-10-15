#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
#include "unitysdk/RPG/Client/QingQueEnergyBarIconType.h"
#include "unitysdk/IGKFNIEJGLM.h"
class PMHNIJDEPKG;
namespace RPG::Client { class QingQueBattleEnergyBarNotify; }
namespace RPG::Client { class RPGAnimationEvent; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class LevelCharacterRevive; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class ParticleSystem; }
namespace UnityEngine { class Transform; }

#define DINBDFEFOFH_AHHONLKBJEC_OFFSET UNITYSDK_OFFSET(0xF223230)
#define DINBDFEFOFH_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0xF224060)
#define DINBDFEFOFH_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0xF2241E0)
#define DINBDFEFOFH_BCBKCCIEEGK_OFFSET UNITYSDK_OFFSET(0xF223D70)
#define DINBDFEFOFH_BHDHDNCKPND_OFFSET UNITYSDK_OFFSET(0xF2238D0)
#define DINBDFEFOFH_CTOR_OFFSET UNITYSDK_OFFSET(0xF224340)
#define DINBDFEFOFH_DHHDFAAJMMC_OFFSET UNITYSDK_OFFSET(0xF223160)
#define DINBDFEFOFH_DLNFICMFNPN_OFFSET UNITYSDK_OFFSET(0xF223790)
#define DINBDFEFOFH_EKGCGIDIFJJ_OFFSET UNITYSDK_OFFSET(0xF2231D0)
#define DINBDFEFOFH_FAOAFPPDEIF_OFFSET UNITYSDK_OFFSET(0xF223C90)
#define DINBDFEFOFH_FNMAFAJCMLC_OFFSET UNITYSDK_OFFSET(0xF223B20)
#define DINBDFEFOFH_FOALDLEFOLG_OFFSET UNITYSDK_OFFSET(0xF223C00)
#define DINBDFEFOFH_GNNLGCPMHBM_OFFSET UNITYSDK_OFFSET(0xF223F70)
#define DINBDFEFOFH_IHMHEFFGHHF_OFFSET UNITYSDK_OFFSET(0xF223DC0)
#define DINBDFEFOFH_JMNFOCENFLP_OFFSET UNITYSDK_OFFSET(0xF223A50)
#define DINBDFEFOFH_MFMPKBICAME_OFFSET UNITYSDK_OFFSET(0xF223360)
#define DINBDFEFOFH_NLIOLEEDGDC_OFFSET UNITYSDK_OFFSET(0xF223990)
#define DINBDFEFOFH_OEHPIOOIJDN_OFFSET UNITYSDK_OFFSET(0xF223EB0)
#define DINBDFEFOFH_ONACQUIRE_OFFSET UNITYSDK_OFFSET(0xF2230B0)
#define DINBDFEFOFH_ONRETURN_OFFSET UNITYSDK_OFFSET(0xF223110)
#define DINBDFEFOFH_PPBADNLGBJD_OFFSET UNITYSDK_OFFSET(0xF223510)
#define DINBDFEFOFH__ONBIND_OFFSET UNITYSDK_OFFSET(0xF222A20)

inline static constexpr unsigned int DINBDFEFOFH_TypeDefinitionIndex = 71830;

	class DINBDFEFOFH : public ::FMPCODLIOLG
	{
	public:
		::UnityEngine::Animation* IPNIGDLLJAA; // 0x60
		::UnityEngine::Transform* CNINNFCJCKI; // 0x68
		::UnityEngine::Transform* JKOEDLIKIFD; // 0x70
		::UnityEngine::ParticleSystem* HANMIMOFJPD; // 0x78
		::System::Collections::Generic::List_1<::RPG::Client::QingQueEnergyBarIconType>* BNBOBEDOJEM; // 0x80
		::System::Collections::Generic::List_1<::PMHNIJDEPKG*>* JCLFGCFNEGD; // 0x88
		::UnityEngine::ParticleSystem* PPBLDHJBHNB; // 0x90
		::RPG::GameCore::GameEntity* KAKEIDJDNHJ; // 0x98
		::RPG::Client::RPGAnimationEvent* DDCODMNKPIP; // 0xA0
		::UnityEngine::Transform* LIJBHGLDPFO; // 0xA8
		::System::Collections::Generic::Dictionary_2<::RPG::Client::QingQueEnergyBarIconType, ::System::String*>* CFCNONMPAIF; // 0xB0
		::System::Boolean GCMMCMDNACJ; // 0xB8
		// static const ::System::Object CFPLMPKMIIP; // 0x0
		// static const ::System::String* PFNJHKKKAHC; // 0x0
		// static const ::System::String* CJHAIOKMMDA; // 0x0
		// static const ::System::String* FMLEGIJHOFK; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DINBDFEFOFH_CTOR_OFFSET))(this);
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DINBDFEFOFH__ONBIND_OFFSET))(this);
		}

		::System::Void OnAcquire(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + DINBDFEFOFH_ONACQUIRE_OFFSET))(this, a1);
		}

		::System::Void OnReturn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DINBDFEFOFH_ONRETURN_OFFSET))(this);
		}

		::System::Void DHHDFAAJMMC(::IGKFNIEJGLM a1)
		{
			return ((::System::Void(*)(::PVOID, ::IGKFNIEJGLM))((::PBYTE)hIl2Cpp + DINBDFEFOFH_DHHDFAAJMMC_OFFSET))(this, a1);
		}

		::System::Void EKGCGIDIFJJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DINBDFEFOFH_EKGCGIDIFJJ_OFFSET))(this);
		}

		::System::Void DLNFICMFNPN(::RPG::Client::QingQueBattleEnergyBarNotify* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::QingQueBattleEnergyBarNotify*))((::PBYTE)hIl2Cpp + DINBDFEFOFH_DLNFICMFNPN_OFFSET))(this, a1);
		}

		::System::Void JMNFOCENFLP(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + DINBDFEFOFH_JMNFOCENFLP_OFFSET))(this, a1);
		}

		::System::Void FNMAFAJCMLC(::RPG::GameCore::LevelCharacterRevive* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelCharacterRevive*))((::PBYTE)hIl2Cpp + DINBDFEFOFH_FNMAFAJCMLC_OFFSET))(this, a1);
		}

		::System::Void NLIOLEEDGDC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DINBDFEFOFH_NLIOLEEDGDC_OFFSET))(this);
		}

		::System::Void BHDHDNCKPND()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DINBDFEFOFH_BHDHDNCKPND_OFFSET))(this);
		}

		::System::Void FOALDLEFOLG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DINBDFEFOFH_FOALDLEFOLG_OFFSET))(this);
		}

		::System::Void PPBADNLGBJD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DINBDFEFOFH_PPBADNLGBJD_OFFSET))(this);
		}

		::System::String* FAOAFPPDEIF(::RPG::Client::QingQueEnergyBarIconType a1)
		{
			return ((::System::String*(*)(::PVOID, ::RPG::Client::QingQueEnergyBarIconType))((::PBYTE)hIl2Cpp + DINBDFEFOFH_FAOAFPPDEIF_OFFSET))(this, a1);
		}

		::System::Void MFMPKBICAME()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DINBDFEFOFH_MFMPKBICAME_OFFSET))(this);
		}

		::System::Void AHHONLKBJEC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DINBDFEFOFH_AHHONLKBJEC_OFFSET))(this);
		}

		::System::Void BCBKCCIEEGK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DINBDFEFOFH_BCBKCCIEEGK_OFFSET))(this);
		}

		::System::Void IHMHEFFGHHF(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + DINBDFEFOFH_IHMHEFFGHHF_OFFSET))(this, a1);
		}

		::System::Void OEHPIOOIJDN(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + DINBDFEFOFH_OEHPIOOIJDN_OFFSET))(this, a1);
		}

		::System::Void GNNLGCPMHBM(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + DINBDFEFOFH_GNNLGCPMHBM_OFFSET))(this, a1);
		}

		::System::Void AutoBindCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DINBDFEFOFH_AUTOBINDCALLBACK_OFFSET))(this);
		}

		::System::Void AutoRemoveCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DINBDFEFOFH_AUTOREMOVECALLBACK_OFFSET))(this);
		}

	};
