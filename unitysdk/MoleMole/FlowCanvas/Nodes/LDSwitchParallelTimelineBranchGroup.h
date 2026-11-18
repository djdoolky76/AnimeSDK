#pragma once
#include "unitysdk/unitysdk.h"

namespace System { class String; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDSWITCHPARALLELTIMELINEBRANCHGROUP_INVOKE_OFFSET UNITYSDK_OFFSET(0x12B3D160)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSWITCHPARALLELTIMELINEBRANCHGROUP__CTOR_OFFSET UNITYSDK_OFFSET(0x12B3D280)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDSwitchParallelTimelineBranchGroup_TypeDefinitionIndex = 64374;

	class LDSwitchParallelTimelineBranchGroup
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSWITCHPARALLELTIMELINEBRANCHGROUP__CTOR_OFFSET))(this);
		}

		::System::Void Invoke(::System::String* timelineCustomTag, ::System::String* branchGroupTag, ::System::Boolean workable)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSWITCHPARALLELTIMELINEBRANCHGROUP_INVOKE_OFFSET))(this, timelineCustomTag, branchGroupTag, workable);
		}
	};
}
