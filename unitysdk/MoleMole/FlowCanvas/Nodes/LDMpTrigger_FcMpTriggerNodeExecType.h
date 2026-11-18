#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDMpTrigger_FcMpTriggerNodeExecType_TypeDefinitionIndex = 66131;

	enum class LDMpTrigger_FcMpTriggerNodeExecType : ::System::Int32
	{
		FcCallTriggerEnter = 1,
		FcCallTriggerExit = 2,
		FcCallDelayEntry = 4,
		None = 0,
		FcCallAllTriggerStay = 3,
	};
}
