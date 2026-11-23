#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class FB44A8EE635F7557_F4F4EBE45C07C16D;
namespace UnityEngine::Rendering::UI { class DebugUIHandlerValue; }

#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERPERSISTENTCANVAS_AD50E2C9E6890BC4_BE76986B5A9889F8_OFFSET UNITYSDK_OFFSET(0x403C410)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERPERSISTENTCANVAS_AD50E2C9E6890BC4__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

namespace UnityEngine::Rendering::UI
{
	inline static constexpr unsigned int DebugUIHandlerPersistentCanvas_AD50E2C9E6890BC4_TypeDefinitionIndex = 20347;

	class DebugUIHandlerPersistentCanvas_AD50E2C9E6890BC4 : public ::System::Object
	{
	public:
		::FB44A8EE635F7557_F4F4EBE45C07C16D* B37DE1921D9E9747; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERPERSISTENTCANVAS_AD50E2C9E6890BC4__CTOR_OFFSET))(this);
		}

		::System::Boolean BE76986B5A9889F8(::UnityEngine::Rendering::UI::DebugUIHandlerValue* BB8C609F76620E45)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Rendering::UI::DebugUIHandlerValue*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERPERSISTENTCANVAS_AD50E2C9E6890BC4_BE76986B5A9889F8_OFFSET))(this, BB8C609F76620E45);
		}
	};
}
