#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/RPG/Client/TriggerEffectCallbackParams.h"
namespace RPG::Client { class MonoEffect; }
namespace RPG::GameCore { class TriggerEffectList; }
namespace System { class String; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_PROP_ROGUECOLLECTIONRATIOACTION_CTOR_OFFSET UNITYSDK_OFFSET(0xDD8B6B0)
#define RPG_CLIENT_PROP_ROGUECOLLECTIONRATIOACTION_DMHJCFAEIPH_OFFSET UNITYSDK_OFFSET(0xDD8AF60)
#define RPG_CLIENT_PROP_ROGUECOLLECTIONRATIOACTION_EPNJNNNNBFA_OFFSET UNITYSDK_OFFSET(0xDD8B640)
#define RPG_CLIENT_PROP_ROGUECOLLECTIONRATIOACTION_NMGIKBAFPNA_OFFSET UNITYSDK_OFFSET(0xDD8B040)
#define RPG_CLIENT_PROP_ROGUECOLLECTIONRATIOACTION_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xDD8AFB0)
#define RPG_CLIENT_PROP_ROGUECOLLECTIONRATIOACTION_START_OFFSET UNITYSDK_OFFSET(0xDD8ADB0)
#define RPG_CLIENT_PROP_ROGUECOLLECTIONRATIOACTION_UPDATE_OFFSET UNITYSDK_OFFSET(0xDD8AE40)
#define RPG_CLIENT_PROP_ROGUECOLLECTIONRATIOACTION___LOADACTIONEFFECT_B__5_0_OFFSET UNITYSDK_OFFSET(0xDD8B6C0)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int RogueCollectionRatioAction_TypeDefinitionIndex = 78950;

	class RogueCollectionRatioAction : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::Transform* EffectHideRoot; // 0x18
		::System::Single WaitUnloadSeconds; // 0x20
		::System::Byte _padding0[0x4];
		::System::String* TriggerActionStateName; // 0x28
		::System::Int32 TriggerActionStateLayer; // 0x30
		::System::Byte _padding1[0x4];
		::RPG::GameCore::TriggerEffectList* TriggerEffectList; // 0x38
		::UnityEngine::Vector3 ThrowRotate; // 0x40
		::System::Byte _padding2[0x4];
		::UnityEngine::Animator* FDEHOEKKPLA; // 0x50
		::System::Boolean JGPKJBPMGLC; // 0x58
		::System::Byte _padding3[0x3];
		::System::Int32 GBANOELPHIO; // 0x5C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ROGUECOLLECTIONRATIOACTION_CTOR_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ROGUECOLLECTIONRATIOACTION_START_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ROGUECOLLECTIONRATIOACTION_UPDATE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ROGUECOLLECTIONRATIOACTION_ONDISABLE_OFFSET))(this);
		}

		::System::Void DMHJCFAEIPH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ROGUECOLLECTIONRATIOACTION_DMHJCFAEIPH_OFFSET))(this);
		}

		::System::Void EPNJNNNNBFA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ROGUECOLLECTIONRATIOACTION_EPNJNNNNBFA_OFFSET))(this);
		}

		::System::Void NMGIKBAFPNA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ROGUECOLLECTIONRATIOACTION_NMGIKBAFPNA_OFFSET))(this);
		}

		::System::Void __LoadActionEffect_b__5_0(::RPG::Client::MonoEffect* a1, ::RPG::Client::TriggerEffectCallbackParams a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoEffect*, ::RPG::Client::TriggerEffectCallbackParams))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ROGUECOLLECTIONRATIOACTION___LOADACTIONEFFECT_B__5_0_OFFSET))(this, a1, a2);
		}

	};
}
