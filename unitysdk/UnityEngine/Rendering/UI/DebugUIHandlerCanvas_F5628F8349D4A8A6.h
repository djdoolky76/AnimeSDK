#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class FB44A8EE635F7557_F277F6EFBC870B19;
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine::Rendering::UI { class DebugUIHandlerPanel; }

#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERCANVAS_F5628F8349D4A8A6_BCFD0F51E6AC2FA9_OFFSET UNITYSDK_OFFSET(0x403C090)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERCANVAS_F5628F8349D4A8A6_FF17D16DD93A5BF2_OFFSET UNITYSDK_OFFSET(0x403C1C0)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERCANVAS_F5628F8349D4A8A6__CCTOR_OFFSET UNITYSDK_OFFSET(0x403C5F0)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERCANVAS_F5628F8349D4A8A6__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

namespace UnityEngine::Rendering::UI
{
	inline static constexpr unsigned int DebugUIHandlerCanvas_F5628F8349D4A8A6_TypeDefinitionIndex = 20350;

	class DebugUIHandlerCanvas_F5628F8349D4A8A6 : public ::System::Object
	{
	public:
		static ::UnityEngine::Rendering::UI::DebugUIHandlerCanvas_F5628F8349D4A8A6** StaticGet_AA32F971AB02398B()
		{
			return (::UnityEngine::Rendering::UI::DebugUIHandlerCanvas_F5628F8349D4A8A6**)Il2CppClass::FromTypeDefinitionIndex(DebugUIHandlerCanvas_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::Func_2<::System::Object*, ::System::Boolean>** StaticGet_F6459B7CA2224D03()
		{
			return (::System::Func_2<::System::Object*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(DebugUIHandlerCanvas_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x8);
		}
		static ::System::Action_1<::UnityEngine::Rendering::UI::DebugUIHandlerPanel*>** StaticGet_E7075C39E6B63936()
		{
			return (::System::Action_1<::UnityEngine::Rendering::UI::DebugUIHandlerPanel*>**)Il2CppClass::FromTypeDefinitionIndex(DebugUIHandlerCanvas_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x10);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERCANVAS_F5628F8349D4A8A6__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERCANVAS_F5628F8349D4A8A6__CTOR_OFFSET))(this);
		}

		::System::Boolean FF17D16DD93A5BF2(::FB44A8EE635F7557_F277F6EFBC870B19* BB8C609F76620E45)
		{
			return ((::System::Boolean(*)(::PVOID, ::FB44A8EE635F7557_F277F6EFBC870B19*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERCANVAS_F5628F8349D4A8A6_FF17D16DD93A5BF2_OFFSET))(this, BB8C609F76620E45);
		}

		::System::Void BCFD0F51E6AC2FA9(::UnityEngine::Rendering::UI::DebugUIHandlerPanel* B5459FABA90E20BD)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::UI::DebugUIHandlerPanel*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERCANVAS_F5628F8349D4A8A6_BCFD0F51E6AC2FA9_OFFSET))(this, B5459FABA90E20BD);
		}
	};
}
