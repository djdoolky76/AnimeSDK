#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CILGIKDHOCI_ICDLCBPKNEM.h"

#define MOLEMOLE_FLOWCANVAS_NODES_LD_SETRALLYQUESTCONDPROGRESS_INVOKE_OFFSET UNITYSDK_OFFSET(0x1357B3B0)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_SETRALLYQUESTCONDPROGRESS__CTOR_OFFSET UNITYSDK_OFFSET(0x1357B5B0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LD_SetRallyQuestCondProgress_TypeDefinitionIndex = 54701;

	class LD_SetRallyQuestCondProgress
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_SETRALLYQUESTCONDPROGRESS__CTOR_OFFSET))(this);
		}

		::System::Void Invoke(::System::Int32 rallyQuestID, ::CILGIKDHOCI_ICDLCBPKNEM operation, ::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::CILGIKDHOCI_ICDLCBPKNEM, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_SETRALLYQUESTCONDPROGRESS_INVOKE_OFFSET))(this, rallyQuestID, operation, value);
		}
	};
}
