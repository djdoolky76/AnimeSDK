#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::Client { class AnimatorBridgeControllerBehavior; }
namespace RPG::Client { class BridgeChildAnimator; }
namespace System { class String; }

#define RPG_CLIENT_ANIMATORBRIDGECONTROLLERMONOPLUGIN_CTOR_OFFSET UNITYSDK_OFFSET(0xCFDB350)
#define RPG_CLIENT_ANIMATORBRIDGECONTROLLERMONOPLUGIN_KGNLCEOIKGF_OFFSET UNITYSDK_OFFSET(0xCFDB340)
#define RPG_CLIENT_ANIMATORBRIDGECONTROLLERMONOPLUGIN_ONANIMEVENT_OFFSET UNITYSDK_OFFSET(0xCFDAFB0)

namespace RPG::Client
{
	inline static constexpr unsigned int AnimatorBridgeControllerMonoPlugin_TypeDefinitionIndex = 72246;

	class AnimatorBridgeControllerMonoPlugin
	{
	public:
		::Il2CppArray<::RPG::Client::BridgeChildAnimator*>* ChildAnimators; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ANIMATORBRIDGECONTROLLERMONOPLUGIN_CTOR_OFFSET))(this);
		}

		::System::Void OnAnimEvent(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ANIMATORBRIDGECONTROLLERMONOPLUGIN_ONANIMEVENT_OFFSET))(this, a1);
		}

		::RPG::Client::AnimatorBridgeControllerBehavior* KGNLCEOIKGF()
		{
			return ((::RPG::Client::AnimatorBridgeControllerBehavior*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ANIMATORBRIDGECONTROLLERMONOPLUGIN_KGNLCEOIKGF_OFFSET))(this);
		}

	};
}
