#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
namespace UnityEngine { class MeshCollider; }
namespace UnityEngine { class Transform; }
namespace ZenFulcrum::EmbeddedBrowser { class Browser; }
namespace ZenFulcrum::EmbeddedBrowser { class BrowserCursor; }
namespace ZenFulcrum::EmbeddedBrowser { class FPSBrowserUI; }
namespace ZenFulcrum::EmbeddedBrowser { class FPSCursorRenderer; }

#define ZENFULCRUM_EMBEDDEDBROWSER_FPSCURSORRENDERER_CTOR_OFFSET UNITYSDK_OFFSET(0x1F65E100)
#define ZENFULCRUM_EMBEDDEDBROWSER_FPSCURSORRENDERER_GET_ENABLEINPUT_OFFSET UNITYSDK_OFFSET(0x1F65DC90)
#define ZENFULCRUM_EMBEDDEDBROWSER_FPSCURSORRENDERER_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x1F65DBC0)
#define ZENFULCRUM_EMBEDDEDBROWSER_FPSCURSORRENDERER_ONGUI_OFFSET UNITYSDK_OFFSET(0x1F65DD80)
#define ZENFULCRUM_EMBEDDEDBROWSER_FPSCURSORRENDERER_SETCURSOR_OFFSET UNITYSDK_OFFSET(0x1F65E0F0)
#define ZENFULCRUM_EMBEDDEDBROWSER_FPSCURSORRENDERER_SETUPBROWSERINPUT_OFFSET UNITYSDK_OFFSET(0x1F65D6E0)
#define ZENFULCRUM_EMBEDDEDBROWSER_FPSCURSORRENDERER_SET_ENABLEINPUT_OFFSET UNITYSDK_OFFSET(0x1F65DCA0)
#define ZENFULCRUM_EMBEDDEDBROWSER_FPSCURSORRENDERER_START_OFFSET UNITYSDK_OFFSET(0x1F65DCB0)

namespace ZenFulcrum::EmbeddedBrowser
{
	class FPSCursorRenderer : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Single scale; // 0x18
		::System::Single maxDistance; // 0x1C
		::UnityEngine::Transform* pointer; // 0x20
		::System::Boolean _EnableInput_k__BackingField; // 0x28
		::System::Byte _padding0[0x7];
		::ZenFulcrum::EmbeddedBrowser::BrowserCursor* baseCursor; // 0x30
		::ZenFulcrum::EmbeddedBrowser::BrowserCursor* currentCursor; // 0x38
		static ::ZenFulcrum::EmbeddedBrowser::FPSCursorRenderer** StaticGet__instance()
		{
			return (::ZenFulcrum::EmbeddedBrowser::FPSCursorRenderer**)UnitySDK::FromName("ZenFulcrum.EmbeddedBrowser", "FPSCursorRenderer")->GetStaticField(0x529C0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_FPSCURSORRENDERER_CTOR_OFFSET))(this);
		}

		static ::ZenFulcrum::EmbeddedBrowser::FPSCursorRenderer* get_Instance()
		{
			return ((::ZenFulcrum::EmbeddedBrowser::FPSCursorRenderer*(*)())((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_FPSCURSORRENDERER_GET_INSTANCE_OFFSET))();
		}

		::System::Boolean get_EnableInput()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_FPSCURSORRENDERER_GET_ENABLEINPUT_OFFSET))(this);
		}

		::System::Void set_EnableInput(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_FPSCURSORRENDERER_SET_ENABLEINPUT_OFFSET))(this, a1);
		}

		static ::System::Void SetUpBrowserInput(::ZenFulcrum::EmbeddedBrowser::Browser* a1, ::UnityEngine::MeshCollider* a2)
		{
			return ((::System::Void(*)(::ZenFulcrum::EmbeddedBrowser::Browser*, ::UnityEngine::MeshCollider*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_FPSCURSORRENDERER_SETUPBROWSERINPUT_OFFSET))(a1, a2);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_FPSCURSORRENDERER_START_OFFSET))(this);
		}

		::System::Void OnGUI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_FPSCURSORRENDERER_ONGUI_OFFSET))(this);
		}

		::System::Void SetCursor(::ZenFulcrum::EmbeddedBrowser::BrowserCursor* a1, ::ZenFulcrum::EmbeddedBrowser::FPSBrowserUI* a2)
		{
			return ((::System::Void(*)(::PVOID, ::ZenFulcrum::EmbeddedBrowser::BrowserCursor*, ::ZenFulcrum::EmbeddedBrowser::FPSBrowserUI*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_FPSCURSORRENDERER_SETCURSOR_OFFSET))(this, a1, a2);
		}

	};
}
