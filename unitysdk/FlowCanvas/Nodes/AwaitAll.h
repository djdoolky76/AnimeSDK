#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/FlowControlNode.h"
#include "unitysdk/FlowCanvas/Flow.h"

namespace FlowCanvas { class FlowOutput; }

#define FLOWCANVAS_NODES_AWAITALL_CHECK_OFFSET UNITYSDK_OFFSET(0x1D5D01B0)
#define FLOWCANVAS_NODES_AWAITALL_ONGRAPHSTARTED_OFFSET UNITYSDK_OFFSET(0x1D5CFFB0)
#define FLOWCANVAS_NODES_AWAITALL_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x1D5D00B0)
#define FLOWCANVAS_NODES_AWAITALL_RESET_OFFSET UNITYSDK_OFFSET(0x1D5D0030)
#define FLOWCANVAS_NODES_AWAITALL__CTOR_OFFSET UNITYSDK_OFFSET(0x1D5D02F0)

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int AwaitAll_TypeDefinitionIndex = 30384;

	class AwaitAll : public ::FlowCanvas::Nodes::FlowControlNode
	{
	public:
		::Il2CppArray<::System::Single>* calls; // 0xA8
		::FlowCanvas::FlowOutput* fOut; // 0xB0
		::System::Int32 _portCount; // 0xB8
		::System::Single maxAwaitTime; // 0xBC

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_AWAITALL__CTOR_OFFSET))(this);
		}

		::System::Void OnGraphStarted()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_AWAITALL_ONGRAPHSTARTED_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_AWAITALL_REGISTERPORTS_OFFSET))(this);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_AWAITALL_RESET_OFFSET))(this);
		}

		::System::Void Check(::System::Int32 index, ::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_AWAITALL_CHECK_OFFSET))(this, index, f);
		}
	};
}
