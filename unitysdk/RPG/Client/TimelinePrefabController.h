#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
class FGIAPIJFCFN;
namespace Cinemachine { class CinemachineVirtualCamera; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define RPG_CLIENT_TIMELINEPREFABCONTROLLER_AWAKE_OFFSET UNITYSDK_OFFSET(0x1A15A8B0)
#define RPG_CLIENT_TIMELINEPREFABCONTROLLER_CTOR_OFFSET UNITYSDK_OFFSET(0x1A15AB80)
#define RPG_CLIENT_TIMELINEPREFABCONTROLLER_GET_BEHAVIOUR_OFFSET UNITYSDK_OFFSET(0x1A15A850)
#define RPG_CLIENT_TIMELINEPREFABCONTROLLER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1A15AAA0)
#define RPG_CLIENT_TIMELINEPREFABCONTROLLER_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1A15AA50)
#define RPG_CLIENT_TIMELINEPREFABCONTROLLER_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1A15A9A0)
#define RPG_CLIENT_TIMELINEPREFABCONTROLLER_UPDATE_OFFSET UNITYSDK_OFFSET(0x1A15AB30)

namespace RPG::Client
{
	inline static constexpr unsigned int TimelinePrefabController_TypeDefinitionIndex = 62140;

	class TimelinePrefabController : public ::UnityEngine::MonoBehaviour
	{
	public:
		::FGIAPIJFCFN* EIGCKKONNIO; // 0x18
		::Cinemachine::CinemachineVirtualCamera* VirtualCamera; // 0x20
		::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* Actors; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMELINEPREFABCONTROLLER_CTOR_OFFSET))(this);
		}

		::FGIAPIJFCFN* get_Behaviour()
		{
			return ((::FGIAPIJFCFN*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMELINEPREFABCONTROLLER_GET_BEHAVIOUR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMELINEPREFABCONTROLLER_AWAKE_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMELINEPREFABCONTROLLER_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMELINEPREFABCONTROLLER_ONDISABLE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMELINEPREFABCONTROLLER_ONDESTROY_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMELINEPREFABCONTROLLER_UPDATE_OFFSET))(this);
		}

	};
}
