#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
class EMECDKHFJLI;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::Rendering { class Volume; }

#define RPG_CLIENT_CAMERAVOLUMEPROXY_CTOR_OFFSET UNITYSDK_OFFSET(0x1DDCED40)
#define RPG_CLIENT_CAMERAVOLUMEPROXY_INITUI3DCAMERAVOLUMEPROXY_OFFSET UNITYSDK_OFFSET(0x1DDCED90)
#define RPG_CLIENT_CAMERAVOLUMEPROXY_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1DDCF820)
#define RPG_CLIENT_CAMERAVOLUMEPROXY_RELEASE_OFFSET UNITYSDK_OFFSET(0x1DDCF1B0)
#define RPG_CLIENT_CAMERAVOLUMEPROXY_SETCUSTOMRELEASEACTION_OFFSET UNITYSDK_OFFSET(0x1DDCF160)
#define RPG_CLIENT_CAMERAVOLUMEPROXY_UPDATE_OFFSET UNITYSDK_OFFSET(0x1DDCF4F0)
#define RPG_CLIENT_CAMERAVOLUMEPROXY__INITPROXIES_OFFSET UNITYSDK_OFFSET(0x1DDCEE10)
#define RPG_CLIENT_CAMERAVOLUMEPROXY__RELEASEPROXIES_OFFSET UNITYSDK_OFFSET(0x1DDCF230)
#define RPG_CLIENT_CAMERAVOLUMEPROXY__TICKCOMPONENTS_OFFSET UNITYSDK_OFFSET(0x1DDCF560)

namespace RPG::Client
{
	inline static constexpr unsigned int CameraVolumeProxy_TypeDefinitionIndex = 75127;

	class CameraVolumeProxy : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::Rendering::Volume* _Volume; // 0x18
		::System::Action* _CustomReleaseAction; // 0x20
		::System::Collections::Generic::List_1<::EMECDKHFJLI*>* _ComponentProxies; // 0x28
		// static const ::System::Object _Priority; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERAVOLUMEPROXY_CTOR_OFFSET))(this);
		}

		::System::Void InitUI3DCameraVolumeProxy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERAVOLUMEPROXY_INITUI3DCAMERAVOLUMEPROXY_OFFSET))(this);
		}

		::System::Void SetCustomReleaseAction(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERAVOLUMEPROXY_SETCUSTOMRELEASEACTION_OFFSET))(this, a1);
		}

		::System::Void Release()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERAVOLUMEPROXY_RELEASE_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERAVOLUMEPROXY_UPDATE_OFFSET))(this);
		}

		::System::Void _TickComponents(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERAVOLUMEPROXY__TICKCOMPONENTS_OFFSET))(this, a1);
		}

		::System::Void _InitProxies()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERAVOLUMEPROXY__INITPROXIES_OFFSET))(this);
		}

		::System::Void _ReleaseProxies()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERAVOLUMEPROXY__RELEASEPROXIES_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERAVOLUMEPROXY_ONDESTROY_OFFSET))(this);
		}

	};
}
