#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Timeline/TimeNotificationBehaviour_NotificationEntry.h"
namespace System { class Object; }
namespace System { template <typename T> class Comparison_1; }

#define UNITYENGINE_TIMELINE_TIMENOTIFICATIONBEHAVIOUR___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F365910)
#define UNITYENGINE_TIMELINE_TIMENOTIFICATIONBEHAVIOUR___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F365950)
#define UNITYENGINE_TIMELINE_TIMENOTIFICATIONBEHAVIOUR___C__SORTNOTIFICATIONS_B__12_0_OFFSET UNITYSDK_OFFSET(0x1F365960)

namespace UnityEngine::Timeline
{
	inline static constexpr unsigned int TimeNotificationBehaviour___c_TypeDefinitionIndex = 38853;

	class TimeNotificationBehaviour___c : public ::System::Object
	{
	public:
		static ::System::Comparison_1<::System::Object*>** StaticGet___9__12_0()
		{
			return (::System::Comparison_1<::System::Object*>**)UnitySDK::FromName("UnityEngine.Timeline", "<>c")->GetStaticField(0x3F020);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("UnityEngine.Timeline", "<>c")->GetStaticField(0x3F028);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMENOTIFICATIONBEHAVIOUR___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMENOTIFICATIONBEHAVIOUR___C_CTOR_OFFSET))(this);
		}

		::System::Int32 _SortNotifications_b__12_0(::UnityEngine::Timeline::TimeNotificationBehaviour_NotificationEntry a1, ::UnityEngine::Timeline::TimeNotificationBehaviour_NotificationEntry a2)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::Timeline::TimeNotificationBehaviour_NotificationEntry, ::UnityEngine::Timeline::TimeNotificationBehaviour_NotificationEntry))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMENOTIFICATIONBEHAVIOUR___C__SORTNOTIFICATIONS_B__12_0_OFFSET))(this, a1, a2);
		}

	};
}
