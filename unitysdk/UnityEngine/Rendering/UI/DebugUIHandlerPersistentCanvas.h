#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/System/Nullable_1.h"

class FB44A8EE635F7557_B28559379AEAA6F8;
class FB44A8EE635F7557_F4F4EBE45C07C16D;
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::Rendering::UI { class DebugUIHandlerValue; }

#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERPERSISTENTCANVAS_B10456EE796D56CF_OFFSET UNITYSDK_OFFSET(0x4037480)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERPERSISTENTCANVAS_B13DAF83945FBB32_OFFSET UNITYSDK_OFFSET(0x4037670)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERPERSISTENTCANVAS_E2B40C5CB19CE5FC_1_OFFSET UNITYSDK_OFFSET(0x4037960)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERPERSISTENTCANVAS_E2B40C5CB19CE5FC_OFFSET UNITYSDK_OFFSET(0x40376C0)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERPERSISTENTCANVAS__CTOR_OFFSET UNITYSDK_OFFSET(0x4037D10)

namespace UnityEngine::Rendering::UI
{
	inline static constexpr unsigned int DebugUIHandlerPersistentCanvas_TypeDefinitionIndex = 20349;

	class DebugUIHandlerPersistentCanvas : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::RectTransform* panel; // 0x20
		::UnityEngine::RectTransform* valuePrefab; // 0x28
		::System::Collections::Generic::List_1<::UnityEngine::Rendering::UI::DebugUIHandlerValue*>* A2EDA9EC980C0636; // 0x30
		::System::Collections::Generic::List_1<::System::Object*>* E54003650A9A4D1D; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERPERSISTENTCANVAS__CTOR_OFFSET))(this);
		}

		::System::Void E2B40C5CB19CE5FC(::FB44A8EE635F7557_F4F4EBE45C07C16D* B37DE1921D9E9747, ::System::String* BF35D9381545B37C)
		{
			return ((::System::Void(*)(::PVOID, ::FB44A8EE635F7557_F4F4EBE45C07C16D*, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERPERSISTENTCANVAS_E2B40C5CB19CE5FC_OFFSET))(this, B37DE1921D9E9747, BF35D9381545B37C);
		}

		::System::Void B10456EE796D56CF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERPERSISTENTCANVAS_B10456EE796D56CF_OFFSET))(this);
		}

		::System::Boolean B13DAF83945FBB32()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERPERSISTENTCANVAS_B13DAF83945FBB32_OFFSET))(this);
		}

		::System::Void E2B40C5CB19CE5FC_1(::FB44A8EE635F7557_B28559379AEAA6F8* B37DE1921D9E9747, ::System::Nullable_1<::System::Int32> F4942043E2293ECA)
		{
			return ((::System::Void(*)(::PVOID, ::FB44A8EE635F7557_B28559379AEAA6F8*, ::System::Nullable_1<::System::Int32>))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERPERSISTENTCANVAS_E2B40C5CB19CE5FC_1_OFFSET))(this, B37DE1921D9E9747, F4942043E2293ECA);
		}
	};
}
