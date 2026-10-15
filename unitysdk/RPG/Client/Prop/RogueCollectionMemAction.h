#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
namespace RPG::Client { class AttachPointMapping; }
namespace RPG::Client { class Effect_Transform; }
namespace RPG::Client::Prop { class RogueCollectionBubbleTalk; }
namespace RPG::GameCore { class TriggerEffectList; }
namespace System { class String; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class MeshRenderer; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_PROP_ROGUECOLLECTIONMEMACTION_CTOR_OFFSET UNITYSDK_OFFSET(0xDD8A780)
#define RPG_CLIENT_PROP_ROGUECOLLECTIONMEMACTION_DLJHKKPEAEI_OFFSET UNITYSDK_OFFSET(0xDD89E40)
#define RPG_CLIENT_PROP_ROGUECOLLECTIONMEMACTION_EINNDCDHEAN_OFFSET UNITYSDK_OFFSET(0xDD89F40)
#define RPG_CLIENT_PROP_ROGUECOLLECTIONMEMACTION_EPNJNNNNBFA_OFFSET UNITYSDK_OFFSET(0xDD8A700)
#define RPG_CLIENT_PROP_ROGUECOLLECTIONMEMACTION_FEDNAGGLILO_OFFSET UNITYSDK_OFFSET(0xDD89CB0)
#define RPG_CLIENT_PROP_ROGUECOLLECTIONMEMACTION_IOOAJEJBJDB_OFFSET UNITYSDK_OFFSET(0xDD8A0B0)
#define RPG_CLIENT_PROP_ROGUECOLLECTIONMEMACTION_KCNFIMKIHDF_OFFSET UNITYSDK_OFFSET(0xDD89AD0)
#define RPG_CLIENT_PROP_ROGUECOLLECTIONMEMACTION_LCFNHINPPNK_OFFSET UNITYSDK_OFFSET(0xDD89D70)
#define RPG_CLIENT_PROP_ROGUECOLLECTIONMEMACTION_NDJNPJOOEJG_OFFSET UNITYSDK_OFFSET(0xDD89FA0)
#define RPG_CLIENT_PROP_ROGUECOLLECTIONMEMACTION_NMGIKBAFPNA_OFFSET UNITYSDK_OFFSET(0xDD8A140)
#define RPG_CLIENT_PROP_ROGUECOLLECTIONMEMACTION_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xDD89EA0)
#define RPG_CLIENT_PROP_ROGUECOLLECTIONMEMACTION_START_OFFSET UNITYSDK_OFFSET(0xDD89460)
#define RPG_CLIENT_PROP_ROGUECOLLECTIONMEMACTION_UPDATE_OFFSET UNITYSDK_OFFSET(0xDD89660)

namespace RPG::Client::Prop
{
	class RogueCollectionMemAction : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::Transform* PrefabTransform; // 0x18
		::System::String* TriggerIdleActionStateName; // 0x20
		::System::String* TriggerSleepActionStateName; // 0x28
		::System::String* TriggerWakeUpActionStateName; // 0x30
		::System::Int32 TriggerActionStateLayer; // 0x38
		::System::Byte _padding0[0x4];
		::UnityEngine::Material* NormalMaterial; // 0x40
		::UnityEngine::Material* SleepMaterial; // 0x48
		::UnityEngine::Material* WakeUpMaterial; // 0x50
		::RPG::GameCore::TriggerEffectList* WakeUpTriggerEffectList; // 0x58
		::System::Single RotateSmoothTime; // 0x60
		::System::Single RotateSpeedStop; // 0x64
		::System::Single IdleTime; // 0x68
		::System::Byte _padding1[0x4];
		::UnityEngine::Animator* FDEHOEKKPLA; // 0x70
		::System::String* CNICJFPMIKA; // 0x78
		::RPG::Client::Effect_Transform* LPHHDFJCLOC; // 0x80
		::RPG::Client::AttachPointMapping* MDOMBPFNPGB; // 0x88
		::System::Boolean HBLADIPKHHK; // 0x90
		::System::Byte _padding2[0x3];
		::System::Single GLMGPPLLDFC; // 0x94
		::System::Single JOBAKPHHKHJ; // 0x98
		::System::Single PJJEMPOLDIJ; // 0x9C
		::RPG::Client::Prop::RogueCollectionBubbleTalk* GMBPKGHNFJO; // 0xA0
		::UnityEngine::MeshRenderer* GFEHCONCNCA; // 0xA8
		::UnityEngine::Transform* LPEOHKHOLEP; // 0xB0
		::System::Int32 GBANOELPHIO; // 0xB8
		// static const ::System::String* FHKBMEPBALG; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ROGUECOLLECTIONMEMACTION_CTOR_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ROGUECOLLECTIONMEMACTION_START_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ROGUECOLLECTIONMEMACTION_UPDATE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ROGUECOLLECTIONMEMACTION_ONDISABLE_OFFSET))(this);
		}

		::System::Void KCNFIMKIHDF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ROGUECOLLECTIONMEMACTION_KCNFIMKIHDF_OFFSET))(this);
		}

		::System::Void FEDNAGGLILO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ROGUECOLLECTIONMEMACTION_FEDNAGGLILO_OFFSET))(this);
		}

		::System::Void LCFNHINPPNK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ROGUECOLLECTIONMEMACTION_LCFNHINPPNK_OFFSET))(this);
		}

		::System::Void NDJNPJOOEJG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ROGUECOLLECTIONMEMACTION_NDJNPJOOEJG_OFFSET))(this);
		}

		::System::Void IOOAJEJBJDB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ROGUECOLLECTIONMEMACTION_IOOAJEJBJDB_OFFSET))(this);
		}

		::System::Void EINNDCDHEAN(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ROGUECOLLECTIONMEMACTION_EINNDCDHEAN_OFFSET))(this, a1);
		}

		::System::Void EPNJNNNNBFA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ROGUECOLLECTIONMEMACTION_EPNJNNNNBFA_OFFSET))(this);
		}

		::System::Void DLJHKKPEAEI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ROGUECOLLECTIONMEMACTION_DLJHKKPEAEI_OFFSET))(this);
		}

		::System::Void NMGIKBAFPNA(::RPG::GameCore::TriggerEffectList* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TriggerEffectList*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ROGUECOLLECTIONMEMACTION_NMGIKBAFPNA_OFFSET))(this, a1);
		}

	};
}
