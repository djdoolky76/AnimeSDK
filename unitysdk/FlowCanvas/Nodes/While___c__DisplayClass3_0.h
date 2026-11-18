#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/FlowCanvas/Flow.h"

namespace FlowCanvas { class FlowOutput; }
namespace FlowCanvas { template <typename T> class ValueInput_1; }
namespace FlowCanvas::Nodes { class While; }

#define FLOWCANVAS_NODES_WHILE___C__DISPLAYCLASS3_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1EA59580)
#define FLOWCANVAS_NODES_WHILE___C__DISPLAYCLASS3_0__REGISTERPORTS_B__0_OFFSET UNITYSDK_OFFSET(0x1EA59590)

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int While___c__DisplayClass3_0_TypeDefinitionIndex = 30235;

	class While___c__DisplayClass3_0 : public ::System::Object
	{
	public:
		::FlowCanvas::ValueInput_1<::System::Boolean>* c; // 0x10
		::FlowCanvas::Nodes::While* __4__this; // 0x18
		::FlowCanvas::FlowOutput* fUpdate; // 0x20
		::FlowCanvas::FlowOutput* fFinish; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_WHILE___C__DISPLAYCLASS3_0__CTOR_OFFSET))(this);
		}

		::System::Void _RegisterPorts_b__0(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_WHILE___C__DISPLAYCLASS3_0__REGISTERPORTS_B__0_OFFSET))(this, f);
		}
	};
}
