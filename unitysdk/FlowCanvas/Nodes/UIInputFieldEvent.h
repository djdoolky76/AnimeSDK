#pragma once
#include "unitysdk/unitysdk.h"

namespace FlowCanvas { class FlowOutput; }
namespace System { class String; }
namespace UnityEngine::UI { class InputField; }

#define FLOWCANVAS_NODES_UIINPUTFIELDEVENT_ONENDEDIT_OFFSET UNITYSDK_OFFSET(0x1F2FA100)
#define FLOWCANVAS_NODES_UIINPUTFIELDEVENT_ONGRAPHSTOPED_OFFSET UNITYSDK_OFFSET(0x1F2F9E10)
#define FLOWCANVAS_NODES_UIINPUTFIELDEVENT_ONPOSTGRAPHSTARTED_OFFSET UNITYSDK_OFFSET(0x1F2F9C20)
#define FLOWCANVAS_NODES_UIINPUTFIELDEVENT_ONVALUECHANGED_OFFSET UNITYSDK_OFFSET(0x1F2FA0B0)
#define FLOWCANVAS_NODES_UIINPUTFIELDEVENT_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x1F2F9FB0)
#define FLOWCANVAS_NODES_UIINPUTFIELDEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1F2FA150)
#define FLOWCANVAS_NODES_UIINPUTFIELDEVENT__REGISTERPORTS_B__5_0_OFFSET UNITYSDK_OFFSET(0x1F2FA1A0)
#define FLOWCANVAS_NODES_UIINPUTFIELDEVENT__REGISTERPORTS_B__5_1_OFFSET UNITYSDK_OFFSET(0x1F2FA200)

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int UIInputFieldEvent_TypeDefinitionIndex = 30413;

	class UIInputFieldEvent
	{
	public:
		::FlowCanvas::FlowOutput* onEndEdit; // 0xB0
		::System::String* value; // 0xB8
		::FlowCanvas::FlowOutput* onValueChanged; // 0xC0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_UIINPUTFIELDEVENT__CTOR_OFFSET))(this);
		}

		::System::Void OnPostGraphStarted()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_UIINPUTFIELDEVENT_ONPOSTGRAPHSTARTED_OFFSET))(this);
		}

		::System::Void OnGraphStoped()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_UIINPUTFIELDEVENT_ONGRAPHSTOPED_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_UIINPUTFIELDEVENT_REGISTERPORTS_OFFSET))(this);
		}

		::System::Void OnValueChanged(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_UIINPUTFIELDEVENT_ONVALUECHANGED_OFFSET))(this, value);
		}

		::System::Void OnEndEdit(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_UIINPUTFIELDEVENT_ONENDEDIT_OFFSET))(this, value);
		}

		::UnityEngine::UI::InputField* _RegisterPorts_b__5_0()
		{
			return ((::UnityEngine::UI::InputField*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_UIINPUTFIELDEVENT__REGISTERPORTS_B__5_0_OFFSET))(this);
		}

		::System::String* _RegisterPorts_b__5_1()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_UIINPUTFIELDEVENT__REGISTERPORTS_B__5_1_OFFSET))(this);
		}
	};
}
