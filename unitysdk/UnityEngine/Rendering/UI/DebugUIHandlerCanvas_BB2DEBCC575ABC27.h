#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace UnityEngine::Rendering::UI { class DebugUIHandlerWidget; }

#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERCANVAS_BB2DEBCC575ABC27_BC31DE9302014BB3_OFFSET UNITYSDK_OFFSET(0x403C380)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERCANVAS_BB2DEBCC575ABC27__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

namespace UnityEngine::Rendering::UI
{
	inline static constexpr unsigned int DebugUIHandlerCanvas_BB2DEBCC575ABC27_TypeDefinitionIndex = 20351;

	class DebugUIHandlerCanvas_BB2DEBCC575ABC27 : public ::System::Object
	{
	public:
		::System::String* E1F57B811306985C; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERCANVAS_BB2DEBCC575ABC27__CTOR_OFFSET))(this);
		}

		::System::Boolean BC31DE9302014BB3(::UnityEngine::Rendering::UI::DebugUIHandlerWidget* B5F62894A37965D9)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Rendering::UI::DebugUIHandlerWidget*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERCANVAS_BB2DEBCC575ABC27_BC31DE9302014BB3_OFFSET))(this, B5F62894A37965D9);
		}
	};
}
