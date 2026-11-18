#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/FlowControlNode.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTaskVoid.h"
#include "unitysdk/FlowCanvas/Flow.h"

namespace FlowCanvas { class FlowOutput; }
namespace System::Threading { class CancellationTokenSource; }

#define MOLEMOLE_FLOWCANVAS_NODES_LD_SUMMERTIDETREASURETIMER_BEGIN_OFFSET UNITYSDK_OFFSET(0x1357BAF0)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_SUMMERTIDETREASURETIMER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1357B6D0)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_SUMMERTIDETREASURETIMER_PLAY_OFFSET UNITYSDK_OFFSET(0x1357B760)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_SUMMERTIDETREASURETIMER_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x1357B5D0)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_SUMMERTIDETREASURETIMER_UPDATE_OFFSET UNITYSDK_OFFSET(0x1357BBB0)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_SUMMERTIDETREASURETIMER__CTOR_OFFSET UNITYSDK_OFFSET(0x1357BC20)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_SUMMERTIDETREASURETIMER___BASE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1357BC60)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LD_SummerTideTreasureTimer_TypeDefinitionIndex = 82981;

	class LD_SummerTideTreasureTimer : public ::FlowCanvas::Nodes::FlowControlNode
	{
	public:
		::FlowCanvas::FlowOutput* start; // 0xA8
		::FlowCanvas::FlowOutput* finish; // 0xB0
		::FlowCanvas::FlowOutput* update; // 0xB8
		::System::Threading::CancellationTokenSource* _cancellationTokenSource; // 0xC0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_SUMMERTIDETREASURETIMER__CTOR_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_SUMMERTIDETREASURETIMER_REGISTERPORTS_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_SUMMERTIDETREASURETIMER_ONDESTROY_OFFSET))(this);
		}

		::System::Void Play(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_SUMMERTIDETREASURETIMER_PLAY_OFFSET))(this, f);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_SUMMERTIDETREASURETIMER_UPDATE_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::UniTaskVoid Begin(::FlowCanvas::Flow f)
		{
			return ((::Cysharp::Threading::Tasks::UniTaskVoid(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_SUMMERTIDETREASURETIMER_BEGIN_OFFSET))(this, f);
		}

		::System::Void __base_OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_SUMMERTIDETREASURETIMER___BASE_ONDESTROY_OFFSET))(this);
		}
	};
}
