#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/RoadRash/MonoEffectConfig.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
class GHMGGIHEHJE;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace UnityEngine { class Animator; }

#define RPG_CLIENT_ROADRASH_MONOROADRASHGAMEACCELERATIONRING_COLLECTALLREFASSETPATH_OFFSET UNITYSDK_OFFSET(0xDEC4520)
#define RPG_CLIENT_ROADRASH_MONOROADRASHGAMEACCELERATIONRING_CTOR_OFFSET UNITYSDK_OFFSET(0xDEC52E0)
#define RPG_CLIENT_ROADRASH_MONOROADRASHGAMEACCELERATIONRING_DISPOSE_OFFSET UNITYSDK_OFFSET(0xDEC5180)
#define RPG_CLIENT_ROADRASH_MONOROADRASHGAMEACCELERATIONRING_FIREPASSTHROUGHEFFECT_OFFSET UNITYSDK_OFFSET(0xDEC4630)
#define RPG_CLIENT_ROADRASH_MONOROADRASHGAMEACCELERATIONRING_GIJMMEGLCEO_OFFSET UNITYSDK_OFFSET(0xDEC4510)
#define RPG_CLIENT_ROADRASH_MONOROADRASHGAMEACCELERATIONRING_KGCJJBNEPOM_OFFSET UNITYSDK_OFFSET(0xDEC4500)
#define RPG_CLIENT_ROADRASH_MONOROADRASHGAMEACCELERATIONRING_ONTRIGGERED_OFFSET UNITYSDK_OFFSET(0xDEC45B0)
#define RPG_CLIENT_ROADRASH_MONOROADRASHGAMEACCELERATIONRING_TRIGGEREFFECT_OFFSET UNITYSDK_OFFSET(0xDEC4C20)
#define RPG_CLIENT_ROADRASH_MONOROADRASHGAMEACCELERATIONRING_UPDATE_OFFSET UNITYSDK_OFFSET(0xDEC5250)

namespace RPG::Client::RoadRash
{
	inline static constexpr unsigned int MonoRoadRashGameAccelerationRing_TypeDefinitionIndex = 75847;

	class MonoRoadRashGameAccelerationRing : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::String* AccelerationModifierName; // 0x18
		::RPG::Client::RoadRash::MonoEffectConfig TriggerEffectConfig; // 0x20
		::UnityEngine::Animator* Animator; // 0x50
		::System::String* TriggerName; // 0x58
		::RPG::Client::RoadRash::MonoEffectConfig PassThroughEffectConfig; // 0x60
		::System::Int32 OMBFMIKBLHL; // 0x90
		::System::UInt32 FBMJMGBBHFH; // 0x94
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROADRASH_MONOROADRASHGAMEACCELERATIONRING_CTOR_OFFSET))(this);
		}

		::System::String* KGCJJBNEPOM()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROADRASH_MONOROADRASHGAMEACCELERATIONRING_KGCJJBNEPOM_OFFSET))(this);
		}

		::System::String* GIJMMEGLCEO()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROADRASH_MONOROADRASHGAMEACCELERATIONRING_GIJMMEGLCEO_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerator_1<::System::String*>* CollectAllRefAssetPath()
		{
			return ((::System::Collections::Generic::IEnumerator_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROADRASH_MONOROADRASHGAMEACCELERATIONRING_COLLECTALLREFASSETPATH_OFFSET))(this);
		}

		::System::Void OnTriggered(::GHMGGIHEHJE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GHMGGIHEHJE*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROADRASH_MONOROADRASHGAMEACCELERATIONRING_ONTRIGGERED_OFFSET))(this, a1);
		}

		::System::Void FirePassThroughEffect(::GHMGGIHEHJE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GHMGGIHEHJE*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROADRASH_MONOROADRASHGAMEACCELERATIONRING_FIREPASSTHROUGHEFFECT_OFFSET))(this, a1);
		}

		::System::Void TriggerEffect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROADRASH_MONOROADRASHGAMEACCELERATIONRING_TRIGGEREFFECT_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROADRASH_MONOROADRASHGAMEACCELERATIONRING_DISPOSE_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROADRASH_MONOROADRASHGAMEACCELERATIONRING_UPDATE_OFFSET))(this);
		}

	};
}
