#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Func_2; }
namespace UnityEngine::Timeline { class ComicEventBase; }

#define UNITYENGINE_TIMELINE_EVENTTRIGGERMARKERINFO___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1F5F9E80)
#define UNITYENGINE_TIMELINE_EVENTTRIGGERMARKERINFO___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1F5F9EC0)
#define UNITYENGINE_TIMELINE_EVENTTRIGGERMARKERINFO___C__EXISTKEYEVENT_B__6_0_OFFSET UNITYSDK_OFFSET(0x1F5F9ED0)

namespace UnityEngine::Timeline
{
	inline static constexpr unsigned int EventTriggerMarkerInfo___c_TypeDefinitionIndex = 32401;

	class EventTriggerMarkerInfo___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::UnityEngine::Timeline::ComicEventBase*, ::System::Boolean>** StaticGet___9__6_0()
		{
			return (::System::Func_2<::UnityEngine::Timeline::ComicEventBase*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(EventTriggerMarkerInfo___c_TypeDefinitionIndex)->GetStaticField(0x29030);
		}
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(EventTriggerMarkerInfo___c_TypeDefinitionIndex)->GetStaticField(0x29038);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_EVENTTRIGGERMARKERINFO___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_EVENTTRIGGERMARKERINFO___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _ExistKeyEvent_b__6_0(::UnityEngine::Timeline::ComicEventBase* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Timeline::ComicEventBase*))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_EVENTTRIGGERMARKERINFO___C__EXISTKEYEVENT_B__6_0_OFFSET))(this, x);
		}
	};
}
