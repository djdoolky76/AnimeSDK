#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class TransformVersionTracker;
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_MONOEFFECTPLUGINCYRENEMIRRORCONTROL_CCKCMKHKOAN_CTOR_OFFSET UNITYSDK_OFFSET(0x193998B0)
#define RPG_CLIENT_MONOEFFECTPLUGINCYRENEMIRRORCONTROL_CCKCMKHKOAN_GET_TRACKER_OFFSET UNITYSDK_OFFSET(0x1939A570)
#define RPG_CLIENT_MONOEFFECTPLUGINCYRENEMIRRORCONTROL_CCKCMKHKOAN_LDAMHBBILAD_OFFSET UNITYSDK_OFFSET(0x19398AE0)
#define RPG_CLIENT_MONOEFFECTPLUGINCYRENEMIRRORCONTROL_CCKCMKHKOAN_SET_TRACKER_OFFSET UNITYSDK_OFFSET(0x1939A580)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoEffectPluginCyreneMirrorControl_CCKCMKHKOAN_TypeDefinitionIndex = 71948;

	class MonoEffectPluginCyreneMirrorControl_CCKCMKHKOAN : public ::System::Object
	{
	public:
		::TransformVersionTracker* _Tracker_k__BackingField; // 0x10
		::System::UInt32 ABNPHONMCEP; // 0x18
		::System::Void _ctor(::UnityEngine::Transform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCYRENEMIRRORCONTROL_CCKCMKHKOAN_CTOR_OFFSET))(this, a1);
		}

		::TransformVersionTracker* get_Tracker()
		{
			return ((::TransformVersionTracker*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCYRENEMIRRORCONTROL_CCKCMKHKOAN_GET_TRACKER_OFFSET))(this);
		}

		::System::Void set_Tracker(::TransformVersionTracker* a1)
		{
			return ((::System::Void(*)(::PVOID, ::TransformVersionTracker*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCYRENEMIRRORCONTROL_CCKCMKHKOAN_SET_TRACKER_OFFSET))(this, a1);
		}

		::System::Boolean LDAMHBBILAD()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCYRENEMIRRORCONTROL_CCKCMKHKOAN_LDAMHBBILAD_OFFSET))(this);
		}

	};
}
