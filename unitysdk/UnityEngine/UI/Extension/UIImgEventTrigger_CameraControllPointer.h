#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace System { class String; }

#define UNITYENGINE_UI_EXTENSION_UIIMGEVENTTRIGGER_CAMERACONTROLLPOINTER_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1A815D70)
#define UNITYENGINE_UI_EXTENSION_UIIMGEVENTTRIGGER_CAMERACONTROLLPOINTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1A8139D0)
#define UNITYENGINE_UI_EXTENSION_UIIMGEVENTTRIGGER_CAMERACONTROLLPOINTER___BASE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1A816100)

namespace UnityEngine::UI::Extension
{
	inline static constexpr unsigned int UIImgEventTrigger_CameraControllPointer_TypeDefinitionIndex = 90301;

	class UIImgEventTrigger_CameraControllPointer : public ::System::Object
	{
	public:
		::System::Boolean isDrag; // 0x10
		::System::Boolean isValid; // 0x11
		::System::Byte _padding0[0x2];
		::UnityEngine::Vector2 beforeDragingPoint; // 0x14
		::UnityEngine::Vector2 offsetPoint; // 0x1C
		::UnityEngine::Vector2 dragingPoint; // 0x24
		::System::Int32 pointerId; // 0x2C
		::UnityEngine::Vector2 enterPoint; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIIMGEVENTTRIGGER_CAMERACONTROLLPOINTER__CTOR_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIIMGEVENTTRIGGER_CAMERACONTROLLPOINTER_TOSTRING_OFFSET))(this);
		}

		::System::String* __base_ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIIMGEVENTTRIGGER_CAMERACONTROLLPOINTER___BASE_TOSTRING_OFFSET))(this);
		}
	};
}
