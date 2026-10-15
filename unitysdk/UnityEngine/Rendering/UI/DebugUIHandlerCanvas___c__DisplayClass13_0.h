#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }
namespace UnityEngine::Rendering::UI { class DebugUIHandlerWidget; }

#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERCANVAS___C__DISPLAYCLASS13_0_CTOR_OFFSET UNITYSDK_OFFSET(0x1F2D0960)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERCANVAS___C__DISPLAYCLASS13_0__GETWIDGETFROMPATH_B__0_OFFSET UNITYSDK_OFFSET(0x1F2D1200)

namespace UnityEngine::Rendering::UI
{
	class DebugUIHandlerCanvas___c__DisplayClass13_0 : public ::System::Object
	{
	public:
		::System::String* queryPath; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERCANVAS___C__DISPLAYCLASS13_0_CTOR_OFFSET))(this);
		}

		::System::Boolean _GetWidgetFromPath_b__0(::UnityEngine::Rendering::UI::DebugUIHandlerWidget* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Rendering::UI::DebugUIHandlerWidget*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERCANVAS___C__DISPLAYCLASS13_0__GETWIDGETFROMPATH_B__0_OFFSET))(this, a1);
		}

	};
}
