#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Action; }
namespace System { class Object; }
namespace UnityEngine::Rendering { class DebugUI_Panel; }

#define UNITYENGINE_RENDERING_DEBUGUI_PANEL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F2C07E0)
#define UNITYENGINE_RENDERING_DEBUGUI_PANEL___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F2C0820)
#define UNITYENGINE_RENDERING_DEBUGUI_PANEL___C___CTOR_B__29_0_OFFSET UNITYSDK_OFFSET(0x1F2C0830)

namespace UnityEngine::Rendering
{
	class DebugUI_Panel___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("UnityEngine.Rendering", "<>c")->GetStaticField(0x48610);
		}

		static ::System::Action** StaticGet___9__29_0()
		{
			return (::System::Action**)UnitySDK::FromName("UnityEngine.Rendering", "<>c")->GetStaticField(0x48618);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DEBUGUI_PANEL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DEBUGUI_PANEL___C_CTOR_OFFSET))(this);
		}

		::System::Void __ctor_b__29_0(::UnityEngine::Rendering::DebugUI_Panel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::DebugUI_Panel*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DEBUGUI_PANEL___C___CTOR_B__29_0_OFFSET))(this, a1);
		}

	};
}
