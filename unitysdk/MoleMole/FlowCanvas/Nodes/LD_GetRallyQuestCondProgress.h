#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::FlowCanvas::Nodes { class LD_GetRallyQuestCondProgress_ProgressPair; }

#define MOLEMOLE_FLOWCANVAS_NODES_LD_GETRALLYQUESTCONDPROGRESS_INVOKE_OFFSET UNITYSDK_OFFSET(0x11914D70)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_GETRALLYQUESTCONDPROGRESS__CTOR_OFFSET UNITYSDK_OFFSET(0x119150C0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LD_GetRallyQuestCondProgress_TypeDefinitionIndex = 74236;

	class LD_GetRallyQuestCondProgress
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_GETRALLYQUESTCONDPROGRESS__CTOR_OFFSET))(this);
		}

		::MoleMole::FlowCanvas::Nodes::LD_GetRallyQuestCondProgress_ProgressPair* Invoke(::System::Int32 rallyQuestID)
		{
			return ((::MoleMole::FlowCanvas::Nodes::LD_GetRallyQuestCondProgress_ProgressPair*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_GETRALLYQUESTCONDPROGRESS_INVOKE_OFFSET))(this, rallyQuestID);
		}
	};
}
