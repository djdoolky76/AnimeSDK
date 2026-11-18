#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NodeCanvas/Framework/ActionTask.h"
#include "unitysdk/ParadoxNotion/CompactStatus.h"

#define NODECANVAS_TASKS_ACTIONS_FORCEFINISHGRAPH_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0x1EB89A40)
#define NODECANVAS_TASKS_ACTIONS_FORCEFINISHGRAPH__CTOR_OFFSET UNITYSDK_OFFSET(0x1EB89CD0)

namespace NodeCanvas::Tasks::Actions
{
	inline static constexpr unsigned int ForceFinishGraph_TypeDefinitionIndex = 29238;

	class ForceFinishGraph : public ::NodeCanvas::Framework::ActionTask
	{
	public:
		::ParadoxNotion::CompactStatus finishStatus; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_FORCEFINISHGRAPH__CTOR_OFFSET))(this);
		}

		::System::Void OnExecute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_FORCEFINISHGRAPH_ONEXECUTE_OFFSET))(this);
		}
	};
}
