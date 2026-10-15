#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Action; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace UnityEngine::Rendering { class DebugUI_Widget; }
namespace UnityEngine::Rendering::UI { class DebugUIHandlerPanel; }

#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERCANVAS___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F2D1150)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERCANVAS___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F2D1190)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERCANVAS___C__ACTIVATEPANEL_B__14_0_OFFSET UNITYSDK_OFFSET(0x1F2D11C0)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERCANVAS___C__REBUILD_B__11_0_OFFSET UNITYSDK_OFFSET(0x1F2D11A0)

namespace UnityEngine::Rendering::UI
{
	class DebugUIHandlerCanvas___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("UnityEngine.Rendering.UI", "<>c")->GetStaticField(0x4A5A0);
		}

		static ::System::Action** StaticGet___9__14_0()
		{
			return (::System::Action**)UnitySDK::FromName("UnityEngine.Rendering.UI", "<>c")->GetStaticField(0x4A5A8);
		}

		static ::System::Func_2<::System::Object*, ::System::Boolean>** StaticGet___9__11_0()
		{
			return (::System::Func_2<::System::Object*, ::System::Boolean>**)UnitySDK::FromName("UnityEngine.Rendering.UI", "<>c")->GetStaticField(0x4A5B0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERCANVAS___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERCANVAS___C_CTOR_OFFSET))(this);
		}

		::System::Boolean _Rebuild_b__11_0(::UnityEngine::Rendering::DebugUI_Widget* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Rendering::DebugUI_Widget*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERCANVAS___C__REBUILD_B__11_0_OFFSET))(this, a1);
		}

		::System::Void _ActivatePanel_b__14_0(::UnityEngine::Rendering::UI::DebugUIHandlerPanel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::UI::DebugUIHandlerPanel*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERCANVAS___C__ACTIVATEPANEL_B__14_0_OFFSET))(this, a1);
		}

	};
}
