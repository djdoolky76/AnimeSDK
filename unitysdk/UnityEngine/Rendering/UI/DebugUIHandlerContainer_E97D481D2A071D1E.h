#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine::Rendering::UI { class DebugUIHandlerWidget; }

#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERCONTAINER_E97D481D2A071D1E_B5556C378DA987F1_OFFSET UNITYSDK_OFFSET(0x403C3B0)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERCONTAINER_E97D481D2A071D1E__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

namespace UnityEngine::Rendering::UI
{
	inline static constexpr unsigned int DebugUIHandlerContainer_E97D481D2A071D1E_TypeDefinitionIndex = 20337;

	class DebugUIHandlerContainer_E97D481D2A071D1E : public ::System::Object
	{
	public:
		::UnityEngine::Rendering::UI::DebugUIHandlerWidget* B37DE1921D9E9747; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERCONTAINER_E97D481D2A071D1E__CTOR_OFFSET))(this);
		}

		::System::Boolean B5556C378DA987F1(::UnityEngine::Rendering::UI::DebugUIHandlerWidget* BB8C609F76620E45)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Rendering::UI::DebugUIHandlerWidget*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERCONTAINER_E97D481D2A071D1E_B5556C378DA987F1_OFFSET))(this, BB8C609F76620E45);
		}
	};
}
