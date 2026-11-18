#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/FlowCanvas/Flow.h"

namespace FlowCanvas { class FlowOutput; }

#define FLOWCANVAS_NODES_PUREREFLECTEDMETHODNODE___C__DISPLAYCLASS16_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1EF14E00)
#define FLOWCANVAS_NODES_PUREREFLECTEDMETHODNODE___C__DISPLAYCLASS16_1__REGISTERPORTS_B__2_OFFSET UNITYSDK_OFFSET(0x1EF14E10)

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int PureReflectedMethodNode___c__DisplayClass16_1_TypeDefinitionIndex = 30937;

	template <typename T>
	class PureReflectedMethodNode___c__DisplayClass16_1 : public ::System::Object
	{
	public:
		::System::Object* CS___8__locals1; // 0x10
		::FlowCanvas::FlowOutput* output; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_PUREREFLECTEDMETHODNODE___C__DISPLAYCLASS16_1__CTOR_OFFSET))(this);
		}

		::System::Void _RegisterPorts_b__2(::FlowCanvas::Flow flow)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_PUREREFLECTEDMETHODNODE___C__DISPLAYCLASS16_1__REGISTERPORTS_B__2_OFFSET))(this, flow);
		}
	};
}
