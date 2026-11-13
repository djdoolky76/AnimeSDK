#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Touch.h"
#include "unitysdk/UnityEngine/Vector2.h"
class ECLKHDGJJIM;
namespace UnityEngine { class Camera; }
namespace UnityEngine { class Canvas; }
namespace UnityEngine { class GameObject; }

#define RPG_CLIENT_SIMULATEINPUTPROXY_ADDCLICK_OFFSET UNITYSDK_OFFSET(0x1B414AA0)
#define RPG_CLIENT_SIMULATEINPUTPROXY_ADDDRAG_OFFSET UNITYSDK_OFFSET(0x1B414BA0)
#define RPG_CLIENT_SIMULATEINPUTPROXY_CCTOR_OFFSET UNITYSDK_OFFSET(0x1B415A80)
#define RPG_CLIENT_SIMULATEINPUTPROXY_CTOR_OFFSET UNITYSDK_OFFSET(0x1B415A70)
#define RPG_CLIENT_SIMULATEINPUTPROXY_DOONCFLOEAE_OFFSET UNITYSDK_OFFSET(0x1B414400)
#define RPG_CLIENT_SIMULATEINPUTPROXY_GETMOUSEBUTTONDOWN_OFFSET UNITYSDK_OFFSET(0x1B4145B0)
#define RPG_CLIENT_SIMULATEINPUTPROXY_GETMOUSEBUTTONUP_OFFSET UNITYSDK_OFFSET(0x1B4146F0)
#define RPG_CLIENT_SIMULATEINPUTPROXY_GETMOUSEBUTTON_OFFSET UNITYSDK_OFFSET(0x1B414470)
#define RPG_CLIENT_SIMULATEINPUTPROXY_GETSCREENPOSFROMOBJECT_OFFSET UNITYSDK_OFFSET(0x1B415700)
#define RPG_CLIENT_SIMULATEINPUTPROXY_GETSCREENPOSFROMWORLDPOS_OFFSET UNITYSDK_OFFSET(0x1B4159B0)
#define RPG_CLIENT_SIMULATEINPUTPROXY_GETTOUCH_OFFSET UNITYSDK_OFFSET(0x1B4148C0)
#define RPG_CLIENT_SIMULATEINPUTPROXY_GETWORLDPOSFROMSCEENNORM_OFFSET UNITYSDK_OFFSET(0x1B4153E0)
#define RPG_CLIENT_SIMULATEINPUTPROXY_GETWORLDPOSITION_OFFSET UNITYSDK_OFFSET(0x1B4154C0)
#define RPG_CLIENT_SIMULATEINPUTPROXY_GET_CANVAS_OFFSET UNITYSDK_OFFSET(0x1B414CF0)
#define RPG_CLIENT_SIMULATEINPUTPROXY_GET_EVENTCAMERA_OFFSET UNITYSDK_OFFSET(0x1B414DF0)
#define RPG_CLIENT_SIMULATEINPUTPROXY_GET_MOUSEPOSITION_OFFSET UNITYSDK_OFFSET(0x1B414740)
#define RPG_CLIENT_SIMULATEINPUTPROXY_GET_TOUCHCOUNT_OFFSET UNITYSDK_OFFSET(0x1B414320)
#define RPG_CLIENT_SIMULATEINPUTPROXY_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x1B414C30)
#define RPG_CLIENT_SIMULATEINPUTPROXY_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1B414A10)
#define RPG_CLIENT_SIMULATEINPUTPROXY_ONDRAWGIZMOSSELECTED_OFFSET UNITYSDK_OFFSET(0x1B415390)
#define RPG_CLIENT_SIMULATEINPUTPROXY_ONDRAWGIZMOS_OFFSET UNITYSDK_OFFSET(0x1B415280)
#define RPG_CLIENT_SIMULATEINPUTPROXY_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1B414990)
#define RPG_CLIENT_SIMULATEINPUTPROXY_SET_CANVAS_OFFSET UNITYSDK_OFFSET(0x1B414DA0)

namespace RPG::Client
{
	inline static constexpr unsigned int SimulateInputProxy_TypeDefinitionIndex = 74732;

	class SimulateInputProxy : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::Canvas* IOBMLODJAJG; // 0x18
		::ECLKHDGJJIM* KBPKPMHHODJ; // 0x20
		::System::Int32 GOODNJGLAGP; // 0x28
		static ::Il2CppArray<::UnityEngine::Vector3>** StaticGet_CCECLIMCMHB()
		{
			return (::Il2CppArray<::UnityEngine::Vector3>**)UnitySDK::FromName("RPG.Client", "SimulateInputProxy")->GetStaticField(0x738B0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIMULATEINPUTPROXY_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_SIMULATEINPUTPROXY_CCTOR_OFFSET))();
		}

		::System::Int32 get_touchCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIMULATEINPUTPROXY_GET_TOUCHCOUNT_OFFSET))(this);
		}

		::System::Boolean GetMouseButton(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIMULATEINPUTPROXY_GETMOUSEBUTTON_OFFSET))(this, a1);
		}

		::System::Boolean GetMouseButtonDown(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIMULATEINPUTPROXY_GETMOUSEBUTTONDOWN_OFFSET))(this, a1);
		}

		::System::Boolean GetMouseButtonUp(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIMULATEINPUTPROXY_GETMOUSEBUTTONUP_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 get_mousePosition()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIMULATEINPUTPROXY_GET_MOUSEPOSITION_OFFSET))(this);
		}

		::UnityEngine::Touch GetTouch(::System::Int32 a1)
		{
			return ((::UnityEngine::Touch(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIMULATEINPUTPROXY_GETTOUCH_OFFSET))(this, a1);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIMULATEINPUTPROXY_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIMULATEINPUTPROXY_ONDISABLE_OFFSET))(this);
		}

		::System::Void AddClick(::UnityEngine::Vector2 a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIMULATEINPUTPROXY_ADDCLICK_OFFSET))(this, a1, a2);
		}

		::System::Void AddDrag(::UnityEngine::Vector2 a1, ::UnityEngine::Vector2 a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIMULATEINPUTPROXY_ADDDRAG_OFFSET))(this, a1, a2, a3);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIMULATEINPUTPROXY_LATEUPDATE_OFFSET))(this);
		}

		::UnityEngine::Canvas* get_canvas()
		{
			return ((::UnityEngine::Canvas*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIMULATEINPUTPROXY_GET_CANVAS_OFFSET))(this);
		}

		::System::Void set_canvas(::UnityEngine::Canvas* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Canvas*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIMULATEINPUTPROXY_SET_CANVAS_OFFSET))(this, a1);
		}

		::UnityEngine::Camera* get_eventCamera()
		{
			return ((::UnityEngine::Camera*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIMULATEINPUTPROXY_GET_EVENTCAMERA_OFFSET))(this);
		}

		::System::Void OnDrawGizmos()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIMULATEINPUTPROXY_ONDRAWGIZMOS_OFFSET))(this);
		}

		::System::Void OnDrawGizmosSelected()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIMULATEINPUTPROXY_ONDRAWGIZMOSSELECTED_OFFSET))(this);
		}

		::UnityEngine::Vector2 GetWorldPosFromSceenNorm(::System::Single a1, ::System::Single a2)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIMULATEINPUTPROXY_GETWORLDPOSFROMSCEENNORM_OFFSET))(this, a1, a2);
		}

		static ::UnityEngine::Vector2 GetWorldPosition(::UnityEngine::GameObject* a1)
		{
			return ((::UnityEngine::Vector2(*)(::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIMULATEINPUTPROXY_GETWORLDPOSITION_OFFSET))(a1);
		}

		::UnityEngine::Vector2 GetScreenPosFromObject(::UnityEngine::GameObject* a1)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIMULATEINPUTPROXY_GETSCREENPOSFROMOBJECT_OFFSET))(this, a1);
		}

		::UnityEngine::Vector2 GetScreenPosFromWorldPos(::UnityEngine::Vector2 a1)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIMULATEINPUTPROXY_GETSCREENPOSFROMWORLDPOS_OFFSET))(this, a1);
		}

		::System::Boolean DOONCFLOEAE()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIMULATEINPUTPROXY_DOONCFLOEAE_OFFSET))(this);
		}

	};
}
