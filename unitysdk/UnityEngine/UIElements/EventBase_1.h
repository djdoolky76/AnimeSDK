#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/UIElements/EventBase.h"
namespace UnityEngine::UIElements { template <typename T> class ObjectPool_1; }

namespace UnityEngine::UIElements
{
	template <typename T>
	class EventBase_1 : public ::UnityEngine::UIElements::EventBase
	{
	public:
		::System::Int32 m_RefCount; // 0x0
		static ::System::Int64* StaticGet_s_TypeId()
		{
			return (::System::Int64*)UnitySDK::FromName("UnityEngine.UIElements", "EventBase`1")->GetStaticField(0x0);
		}

		static ::UnityEngine::UIElements::ObjectPool_1<T>** StaticGet_s_Pool()
		{
			return (::UnityEngine::UIElements::ObjectPool_1<T>**)UnitySDK::FromName("UnityEngine.UIElements", "EventBase`1")->GetStaticField(0x0);
		}

	};
}
