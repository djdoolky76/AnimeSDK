#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
namespace System { class String; }

#define UNITYENGINE_RENDERING_FREECAMERA_CCTOR_OFFSET UNITYSDK_OFFSET(0x20573740)
#define UNITYENGINE_RENDERING_FREECAMERA_CTOR_OFFSET UNITYSDK_OFFSET(0x20573720)
#define UNITYENGINE_RENDERING_FREECAMERA_ONENABLE_OFFSET UNITYSDK_OFFSET(0x20572CC0)
#define UNITYENGINE_RENDERING_FREECAMERA_REGISTERINPUTS_OFFSET UNITYSDK_OFFSET(0x20572CD0)
#define UNITYENGINE_RENDERING_FREECAMERA_UPDATE_OFFSET UNITYSDK_OFFSET(0x20572CE0)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int FreeCamera_TypeDefinitionIndex = 36397;

	class FreeCamera : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Single m_LookSpeedController; // 0x18
		::System::Single m_LookSpeedMouse; // 0x1C
		::System::Single m_MoveSpeed; // 0x20
		::System::Single m_MoveSpeedIncrement; // 0x24
		::System::Single m_Turbo; // 0x28
		static ::System::String** StaticGet_kMouseX()
		{
			return (::System::String**)UnitySDK::FromName("UnityEngine.Rendering", "FreeCamera")->GetStaticField(0x5A7F0);
		}

		static ::System::String** StaticGet_kHorizontal()
		{
			return (::System::String**)UnitySDK::FromName("UnityEngine.Rendering", "FreeCamera")->GetStaticField(0x5A7F8);
		}

		static ::System::String** StaticGet_kRightStickY()
		{
			return (::System::String**)UnitySDK::FromName("UnityEngine.Rendering", "FreeCamera")->GetStaticField(0x5A800);
		}

		static ::System::String** StaticGet_kVertical()
		{
			return (::System::String**)UnitySDK::FromName("UnityEngine.Rendering", "FreeCamera")->GetStaticField(0x5A808);
		}

		static ::System::String** StaticGet_kMouseY()
		{
			return (::System::String**)UnitySDK::FromName("UnityEngine.Rendering", "FreeCamera")->GetStaticField(0x5A810);
		}

		static ::System::String** StaticGet_kRightStickX()
		{
			return (::System::String**)UnitySDK::FromName("UnityEngine.Rendering", "FreeCamera")->GetStaticField(0x5A818);
		}

		static ::System::String** StaticGet_kYAxis()
		{
			return (::System::String**)UnitySDK::FromName("UnityEngine.Rendering", "FreeCamera")->GetStaticField(0x5A820);
		}

		static ::System::String** StaticGet_kSpeedAxis()
		{
			return (::System::String**)UnitySDK::FromName("UnityEngine.Rendering", "FreeCamera")->GetStaticField(0x5A828);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_FREECAMERA_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_FREECAMERA_CCTOR_OFFSET))();
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_FREECAMERA_ONENABLE_OFFSET))(this);
		}

		::System::Void RegisterInputs()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_FREECAMERA_REGISTERINPUTS_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_FREECAMERA_UPDATE_OFFSET))(this);
		}

	};
}
