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

#define DINBDFEFOFH_AHHONLKBJEC_OFFSET UNITYSDK_OFFSET(0xF989460)
#define DINBDFEFOFH_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0xF98A2B0)
#define DINBDFEFOFH_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0xF98A430)
#define DINBDFEFOFH_BCBKCCIEEGK_OFFSET UNITYSDK_OFFSET(0xF989FC0)
#define DINBDFEFOFH_BHDHDNCKPND_OFFSET UNITYSDK_OFFSET(0xF989B00)
#define DINBDFEFOFH_CTOR_OFFSET UNITYSDK_OFFSET(0xF98A590)
#define DINBDFEFOFH_DLNFICMFNPN_OFFSET UNITYSDK_OFFSET(0xF9899C0)
#define DINBDFEFOFH_FAOAFPPDEIF_OFFSET UNITYSDK_OFFSET(0xF989EE0)
#define DINBDFEFOFH_FNMAFAJCMLC_OFFSET UNITYSDK_OFFSET(0xF989D70)
#define DINBDFEFOFH_FOALDLEFOLG_OFFSET UNITYSDK_OFFSET(0xF989E50)
#define DINBDFEFOFH_GNNLGCPMHBM_OFFSET UNITYSDK_OFFSET(0xF98A1C0)
#define DINBDFEFOFH_IHMHEFFGHHF_OFFSET UNITYSDK_OFFSET(0xF98A010)
#define DINBDFEFOFH_JMNFOCENFLP_OFFSET UNITYSDK_OFFSET(0xF989CA0)
#define DINBDFEFOFH_MFMPKBICAME_OFFSET UNITYSDK_OFFSET(0xF989590)
#define DINBDFEFOFH_NLIOLEEDGDC_OFFSET UNITYSDK_OFFSET(0xF989BD0)
#define DINBDFEFOFH_OEHPIOOIJDN_OFFSET UNITYSDK_OFFSET(0xF98A100)
#define DINBDFEFOFH_ONACQUIRE_OFFSET UNITYSDK_OFFSET(0xF9892F0)
#define DINBDFEFOFH_ONRETURN_OFFSET UNITYSDK_OFFSET(0xF989350)
#define DINBDFEFOFH_PPBADNLGBJD_OFFSET UNITYSDK_OFFSET(0xF989740)
#define DINBDFEFOFH__ONBIND_OFFSET UNITYSDK_OFFSET(0xF988B50)
#define DINBDFEFOFH__ONINITPARAMS_OFFSET UNITYSDK_OFFSET(0xF9893A0)
#define DINBDFEFOFH__SETUPVIEW_OFFSET UNITYSDK_OFFSET(0xF989400)

inline static constexpr unsigned int DINBDFEFOFH_TypeDefinitionIndex = 73851;

	class DINBDFEFOFH : public ::FMPCODLIOLG
	{
	public:
		::UnityEngine::ParticleSystem* HANMIMOFJPD; // 0x60
		::RPG::GameCore::GameEntity* KAKEIDJDNHJ; // 0x68
		::UnityEngine::Transform* JKOEDLIKIFD; // 0x70
		::UnityEngine::ParticleSystem* PPBLDHJBHNB; // 0x78
		::UnityEngine::Transform* CNINNFCJCKI; // 0x80
		::System::Collections::Generic::List_1<::PMHNIJDEPKG*>* JCLFGCFNEGD; // 0x88
		::UnityEngine::Animation* IPNIGDLLJAA; // 0x90
		::UnityEngine::Transform* LIJBHGLDPFO; // 0x98
		::System::Collections::Generic::List_1<::RPG::Client::QingQueEnergyBarIconType>* BNBOBEDOJEM; // 0xA0
		::RPG::Client::RPGAnimationEvent* DDCODMNKPIP; // 0xA8
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

		::System::Void _OnInitParams(::IGKFNIEJGLM a1)
		{
			return ((::System::Void(*)(::PVOID, ::IGKFNIEJGLM))((::PBYTE)hIl2Cpp + DINBDFEFOFH__ONINITPARAMS_OFFSET))(this, a1);
		}

		::System::Void _SetupView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DINBDFEFOFH__SETUPVIEW_OFFSET))(this);
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
