#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Touch.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace UnityEngine { class IInputProxy; }
namespace UnityEngine { class RawInputProxy; }

#define UNITYENGINE_INPUTPROXY_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CD1C800)
#define UNITYENGINE_INPUTPROXY_GETMOUSEBUTTONDOWN_OFFSET UNITYSDK_OFFSET(0x1CD1C220)
#define UNITYENGINE_INPUTPROXY_GETMOUSEBUTTONUP_OFFSET UNITYSDK_OFFSET(0x1CD1C3F0)
#define UNITYENGINE_INPUTPROXY_GETMOUSEBUTTON_OFFSET UNITYSDK_OFFSET(0x1CD1C050)
#define UNITYENGINE_INPUTPROXY_GETTOUCH_OFFSET UNITYSDK_OFFSET(0x1CD0D2F0)
#define UNITYENGINE_INPUTPROXY_GET_ISINPROXYMODE_OFFSET UNITYSDK_OFFSET(0x1CD1BF20)
#define UNITYENGINE_INPUTPROXY_GET_MOUSEPOSITION_OFFSET UNITYSDK_OFFSET(0x1CD1C5C0)
#define UNITYENGINE_INPUTPROXY_GET_TOUCHCOUNT_OFFSET UNITYSDK_OFFSET(0x1CD0D0D0)
#define UNITYENGINE_INPUTPROXY_SETPROXYIMPL_OFFSET UNITYSDK_OFFSET(0x1CD1C010)
#define UNITYENGINE_INPUTPROXY_TOUCHCOUNT_OFFSET UNITYSDK_OFFSET(0x1CD1BF70)

namespace UnityEngine
{
	inline static constexpr unsigned int InputProxy_TypeDefinitionIndex = 6700;

	class InputProxy : public ::System::Object
	{
	public:
		static ::UnityEngine::RawInputProxy** StaticGet_defaultProxy()
		{
			return (::UnityEngine::RawInputProxy**)UnitySDK::FromName("UnityEngine", "InputProxy")->GetStaticField(0x2BDE0);
		}

		static ::UnityEngine::IInputProxy** StaticGet_Poxyimpl()
		{
			return (::UnityEngine::IInputProxy**)UnitySDK::FromName("UnityEngine", "InputProxy")->GetStaticField(0x2BDE8);
		}

		static ::System::Boolean* StaticGet_InProxyMode()
		{
			return (::System::Boolean*)UnitySDK::FromName("UnityEngine", "InputProxy")->GetStaticField(0x8E80);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTPROXY_CCTOR_OFFSET))();
		}

		static ::System::Boolean get_IsInProxyMode()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTPROXY_GET_ISINPROXYMODE_OFFSET))();
		}

		static ::System::Int32 get_touchCount()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTPROXY_GET_TOUCHCOUNT_OFFSET))();
		}

		static ::System::Int32 TouchCount()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTPROXY_TOUCHCOUNT_OFFSET))();
		}

		static ::UnityEngine::Touch GetTouch(::System::Int32 a1)
		{
			return ((::UnityEngine::Touch(*)(::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTPROXY_GETTOUCH_OFFSET))(a1);
		}

		static ::System::Void SetProxyImpl(::UnityEngine::IInputProxy* a1)
		{
			return ((::System::Void(*)(::UnityEngine::IInputProxy*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTPROXY_SETPROXYIMPL_OFFSET))(a1);
		}

		static ::System::Boolean GetMouseButton(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTPROXY_GETMOUSEBUTTON_OFFSET))(a1);
		}

		static ::System::Boolean GetMouseButtonDown(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTPROXY_GETMOUSEBUTTONDOWN_OFFSET))(a1);
		}

		static ::System::Boolean GetMouseButtonUp(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTPROXY_GETMOUSEBUTTONUP_OFFSET))(a1);
		}

		static ::UnityEngine::Vector3 get_mousePosition()
		{
			return ((::UnityEngine::Vector3(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTPROXY_GET_MOUSEPOSITION_OFFSET))();
		}

	};
}
