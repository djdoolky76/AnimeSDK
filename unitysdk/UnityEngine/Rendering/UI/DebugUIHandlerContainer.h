#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::Rendering::UI { class DebugUIHandlerWidget; }

#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERCONTAINER_AD70205C6BCA7D62_OFFSET UNITYSDK_OFFSET(0x4036660)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERCONTAINER_B2CDE7726C7A841B_OFFSET UNITYSDK_OFFSET(0x4036260)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERCONTAINER_BF99B98616A75A16_OFFSET UNITYSDK_OFFSET(0x4036550)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERCONTAINER_F3831ECC6D8B2B27_OFFSET UNITYSDK_OFFSET(0x40365D0)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERCONTAINER__CTOR_OFFSET UNITYSDK_OFFSET(0x176D770)

namespace UnityEngine::Rendering::UI
{
	inline static constexpr unsigned int DebugUIHandlerContainer_TypeDefinitionIndex = 20338;

	class DebugUIHandlerContainer : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::RectTransform* contentHolder; // 0x20

		::UnityEngine::Rendering::UI::DebugUIHandlerWidget* BF99B98616A75A16()
		{
			return ((::UnityEngine::Rendering::UI::DebugUIHandlerWidget*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERCONTAINER_BF99B98616A75A16_OFFSET))(this);
		}

		::System::Boolean AD70205C6BCA7D62(::UnityEngine::Rendering::UI::DebugUIHandlerWidget* B37DE1921D9E9747)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Rendering::UI::DebugUIHandlerWidget*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERCONTAINER_AD70205C6BCA7D62_OFFSET))(this, B37DE1921D9E9747);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERCONTAINER__CTOR_OFFSET))(this);
		}

		::UnityEngine::Rendering::UI::DebugUIHandlerWidget* F3831ECC6D8B2B27()
		{
			return ((::UnityEngine::Rendering::UI::DebugUIHandlerWidget*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERCONTAINER_F3831ECC6D8B2B27_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::UnityEngine::Rendering::UI::DebugUIHandlerWidget*>* B2CDE7726C7A841B()
		{
			return ((::System::Collections::Generic::List_1<::UnityEngine::Rendering::UI::DebugUIHandlerWidget*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERCONTAINER_B2CDE7726C7A841B_OFFSET))(this);
		}
	};
}
