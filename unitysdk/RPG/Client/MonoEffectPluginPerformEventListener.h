#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MonoEffectPluginBase.h"
#include "unitysdk/RPG/Client/PerformActionType.h"
#include "unitysdk/RPG/Client/PerformEventType.h"
class PPJBCBCMDLB;
namespace System { class String; }
namespace UnityEngine { class GameObject; }

#define RPG_CLIENT_MONOEFFECTPLUGINPERFORMEVENTLISTENER_AWAKEPLUGIN_OFFSET UNITYSDK_OFFSET(0xE2577C0)
#define RPG_CLIENT_MONOEFFECTPLUGINPERFORMEVENTLISTENER_CTOR_OFFSET UNITYSDK_OFFSET(0xE257A90)
#define RPG_CLIENT_MONOEFFECTPLUGINPERFORMEVENTLISTENER_DESTROYPLUGIN_OFFSET UNITYSDK_OFFSET(0xE2578A0)
#define RPG_CLIENT_MONOEFFECTPLUGINPERFORMEVENTLISTENER_DISPOSEPLUGIN_OFFSET UNITYSDK_OFFSET(0xE2579D0)
#define RPG_CLIENT_MONOEFFECTPLUGINPERFORMEVENTLISTENER_RESETPLUGIN_OFFSET UNITYSDK_OFFSET(0xE257970)
#define RPG_CLIENT_MONOEFFECTPLUGINPERFORMEVENTLISTENER_TICK_OFFSET UNITYSDK_OFFSET(0xE257A20)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoEffectPluginPerformEventListener_TypeDefinitionIndex = 72060;

	class MonoEffectPluginPerformEventListener : public ::RPG::Client::MonoEffectPluginBase
	{
	public:
		::RPG::Client::PerformEventType EventType; // 0x28
		::RPG::Client::PerformActionType ActionType; // 0x2C
		::System::String* TriggerCustomString; // 0x30
		::System::String* AttachPoint; // 0x38
		::UnityEngine::GameObject* FlyTarget; // 0x40
		::PPJBCBCMDLB* KADDKEGNCHE; // 0x48
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINPERFORMEVENTLISTENER_CTOR_OFFSET))(this);
		}

		::System::Void AwakePlugin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINPERFORMEVENTLISTENER_AWAKEPLUGIN_OFFSET))(this);
		}

		::System::Void DestroyPlugin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINPERFORMEVENTLISTENER_DESTROYPLUGIN_OFFSET))(this);
		}

		::System::Void ResetPlugin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINPERFORMEVENTLISTENER_RESETPLUGIN_OFFSET))(this);
		}

		::System::Void DisposePlugin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINPERFORMEVENTLISTENER_DISPOSEPLUGIN_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINPERFORMEVENTLISTENER_TICK_OFFSET))(this, a1);
		}

	};
}
