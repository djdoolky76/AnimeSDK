#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/FlowCanvas/Flow.h"

namespace FlowCanvas { class FlowOutput; }
namespace FlowCanvas { template <typename T> class ValueInput_1; }

#define FLOWCANVAS_NODES_SWITCHINT___C__DISPLAYCLASS4_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1EB7E4C0)
#define FLOWCANVAS_NODES_SWITCHINT___C__DISPLAYCLASS4_0__REGISTERPORTS_B__0_OFFSET UNITYSDK_OFFSET(0x1EB7E4D0)

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int SwitchInt___c__DisplayClass4_0_TypeDefinitionIndex = 30733;

	class SwitchInt___c__DisplayClass4_0 : public ::System::Object
	{
	public:
		::Il2CppArray<::FlowCanvas::FlowOutput*>* cases; // 0x10
		::FlowCanvas::FlowOutput* defaultCase; // 0x18
		::FlowCanvas::ValueInput_1<::System::Int32>* selector; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_SWITCHINT___C__DISPLAYCLASS4_0__CTOR_OFFSET))(this);
		}

		::System::Void _RegisterPorts_b__0(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_SWITCHINT___C__DISPLAYCLASS4_0__REGISTERPORTS_B__0_OFFSET))(this, f);
		}
	};
}
