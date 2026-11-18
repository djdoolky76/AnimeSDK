#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/FlowCanvas/Flow.h"

namespace FlowCanvas::Nodes { class CustomFunctionEvent; }
namespace System { template <typename T> class Action_1; }

#define FLOWCANVAS_NODES_CUSTOMFUNCTIONEVENT___C__DISPLAYCLASS22_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1E9C69A0)
#define FLOWCANVAS_NODES_CUSTOMFUNCTIONEVENT___C__DISPLAYCLASS22_0__NODECANVAS_FRAMEWORK_IINVOKABLE_INVOKEASYNC_B__0_OFFSET UNITYSDK_OFFSET(0x1E9C69B0)

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int CustomFunctionEvent___c__DisplayClass22_0_TypeDefinitionIndex = 29303;

	class CustomFunctionEvent___c__DisplayClass22_0 : public ::System::Object
	{
	public:
		::System::Action_1<::System::Object*>* callback; // 0x10
		::FlowCanvas::Nodes::CustomFunctionEvent* __4__this; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_CUSTOMFUNCTIONEVENT___C__DISPLAYCLASS22_0__CTOR_OFFSET))(this);
		}

		::System::Void _NodeCanvas_Framework_IInvokable_InvokeAsync_b__0(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_CUSTOMFUNCTIONEVENT___C__DISPLAYCLASS22_0__NODECANVAS_FRAMEWORK_IINVOKABLE_INVOKEASYNC_B__0_OFFSET))(this, f);
		}
	};
}
