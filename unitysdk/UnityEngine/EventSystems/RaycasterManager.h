#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::EventSystems { class BaseRaycaster; }

#define UNITYENGINE_EVENTSYSTEMS_RAYCASTERMANAGER_ADDRAYCASTER_OFFSET UNITYSDK_OFFSET(0x2077FF20)
#define UNITYENGINE_EVENTSYSTEMS_RAYCASTERMANAGER_CCTOR_OFFSET UNITYSDK_OFFSET(0x20788C90)
#define UNITYENGINE_EVENTSYSTEMS_RAYCASTERMANAGER_GETRAYCASTERS_OFFSET UNITYSDK_OFFSET(0x20788C60)
#define UNITYENGINE_EVENTSYSTEMS_RAYCASTERMANAGER_REMOVERAYCASTERS_OFFSET UNITYSDK_OFFSET(0x20780070)

namespace UnityEngine::EventSystems
{
	inline static constexpr unsigned int RaycasterManager_TypeDefinitionIndex = 6960;

	class RaycasterManager : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::List_1<::UnityEngine::EventSystems::BaseRaycaster*>** StaticGet_s_Raycasters()
		{
			return (::System::Collections::Generic::List_1<::UnityEngine::EventSystems::BaseRaycaster*>**)UnitySDK::FromName("UnityEngine.EventSystems", "RaycasterManager")->GetStaticField(0x382D0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_RAYCASTERMANAGER_CCTOR_OFFSET))();
		}

		static ::System::Void AddRaycaster(::UnityEngine::EventSystems::BaseRaycaster* a1)
		{
			return ((::System::Void(*)(::UnityEngine::EventSystems::BaseRaycaster*))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_RAYCASTERMANAGER_ADDRAYCASTER_OFFSET))(a1);
		}

		static ::System::Collections::Generic::List_1<::UnityEngine::EventSystems::BaseRaycaster*>* GetRaycasters()
		{
			return ((::System::Collections::Generic::List_1<::UnityEngine::EventSystems::BaseRaycaster*>*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_RAYCASTERMANAGER_GETRAYCASTERS_OFFSET))();
		}

		static ::System::Void RemoveRaycasters(::UnityEngine::EventSystems::BaseRaycaster* a1)
		{
			return ((::System::Void(*)(::UnityEngine::EventSystems::BaseRaycaster*))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_RAYCASTERMANAGER_REMOVERAYCASTERS_OFFSET))(a1);
		}

	};
}
