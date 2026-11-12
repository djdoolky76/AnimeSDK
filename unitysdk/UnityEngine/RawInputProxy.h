#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Touch.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define UNITYENGINE_RAWINPUTPROXY_CTOR_OFFSET UNITYSDK_OFFSET(0x2078E030)
#define UNITYENGINE_RAWINPUTPROXY_GETMOUSEBUTTONDOWN_OFFSET UNITYSDK_OFFSET(0x2078DBE0)
#define UNITYENGINE_RAWINPUTPROXY_GETMOUSEBUTTONUP_OFFSET UNITYSDK_OFFSET(0x2078DDB0)
#define UNITYENGINE_RAWINPUTPROXY_GETMOUSEBUTTON_OFFSET UNITYSDK_OFFSET(0x2078DA10)
#define UNITYENGINE_RAWINPUTPROXY_GETTOUCH_OFFSET UNITYSDK_OFFSET(0x2078D7A0)
#define UNITYENGINE_RAWINPUTPROXY_GET_MOUSEPOSITION_OFFSET UNITYSDK_OFFSET(0x2078DFC0)
#define UNITYENGINE_RAWINPUTPROXY_GET_TOUCHCOUNT_OFFSET UNITYSDK_OFFSET(0x2078D760)

namespace UnityEngine
{
	inline static constexpr unsigned int RawInputProxy_TypeDefinitionIndex = 6699;

	class RawInputProxy : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RAWINPUTPROXY_CTOR_OFFSET))(this);
		}

		::System::Int32 get_touchCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RAWINPUTPROXY_GET_TOUCHCOUNT_OFFSET))(this);
		}

		::UnityEngine::Touch GetTouch(::System::Int32 a1)
		{
			return ((::UnityEngine::Touch(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RAWINPUTPROXY_GETTOUCH_OFFSET))(this, a1);
		}

		::System::Boolean GetMouseButton(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RAWINPUTPROXY_GETMOUSEBUTTON_OFFSET))(this, a1);
		}

		::System::Boolean GetMouseButtonDown(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RAWINPUTPROXY_GETMOUSEBUTTONDOWN_OFFSET))(this, a1);
		}

		::System::Boolean GetMouseButtonUp(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RAWINPUTPROXY_GETMOUSEBUTTONUP_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 get_mousePosition()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RAWINPUTPROXY_GET_MOUSEPOSITION_OFFSET))(this);
		}

	};
}
