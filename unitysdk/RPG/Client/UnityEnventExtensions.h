#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }
namespace UnityEngine::Events { class UnityAction; }
namespace UnityEngine::Events { class UnityEvent; }

#define RPG_CLIENT_UNITYENVENTEXTENSIONS_SAFEADDLISTENER_1_OFFSET UNITYSDK_OFFSET(0xE413D40)
#define RPG_CLIENT_UNITYENVENTEXTENSIONS_SAFEADDLISTENER_2_OFFSET UNITYSDK_OFFSET(0xE413DF0)
#define RPG_CLIENT_UNITYENVENTEXTENSIONS_SAFEADDLISTENER_3_OFFSET UNITYSDK_OFFSET(0xE413EA0)
#define RPG_CLIENT_UNITYENVENTEXTENSIONS_SAFEADDLISTENER_4_OFFSET UNITYSDK_OFFSET(0xE413F80)
#define RPG_CLIENT_UNITYENVENTEXTENSIONS_SAFEADDLISTENER_OFFSET UNITYSDK_OFFSET(0xE413CA0)

namespace RPG::Client
{
	class UnityEnventExtensions : public ::System::Object
	{
	public:
		static ::System::Void SafeAddListener(::UnityEngine::Events::UnityEvent* a1, ::UnityEngine::Events::UnityAction* a2)
		{
			return ((::System::Void(*)(::UnityEngine::Events::UnityEvent*, ::UnityEngine::Events::UnityAction*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UNITYENVENTEXTENSIONS_SAFEADDLISTENER_OFFSET))(a1, a2);
		}

		static ::System::Void SafeAddListener_1(::UnityEngine::Events::UnityEvent* a1, ::UnityEngine::Events::UnityAction* a2)
		{
			return ((::System::Void(*)(::UnityEngine::Events::UnityEvent*, ::UnityEngine::Events::UnityAction*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UNITYENVENTEXTENSIONS_SAFEADDLISTENER_1_OFFSET))(a1, a2);
		}

		static ::System::Void SafeAddListener_2(::UnityEngine::Events::UnityEvent* a1, ::UnityEngine::Events::UnityAction* a2)
		{
			return ((::System::Void(*)(::UnityEngine::Events::UnityEvent*, ::UnityEngine::Events::UnityAction*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UNITYENVENTEXTENSIONS_SAFEADDLISTENER_2_OFFSET))(a1, a2);
		}

		static ::System::Void SafeAddListener_3(::UnityEngine::Events::UnityEvent* a1, ::UnityEngine::Events::UnityAction* a2)
		{
			return ((::System::Void(*)(::UnityEngine::Events::UnityEvent*, ::UnityEngine::Events::UnityAction*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UNITYENVENTEXTENSIONS_SAFEADDLISTENER_3_OFFSET))(a1, a2);
		}

		static ::System::Void SafeAddListener_4(::UnityEngine::Events::UnityEvent* a1, ::UnityEngine::Events::UnityAction* a2)
		{
			return ((::System::Void(*)(::UnityEngine::Events::UnityEvent*, ::UnityEngine::Events::UnityAction*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UNITYENVENTEXTENSIONS_SAFEADDLISTENER_4_OFFSET))(a1, a2);
		}

	};
}
