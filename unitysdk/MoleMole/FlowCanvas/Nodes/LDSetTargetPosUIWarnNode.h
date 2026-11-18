#pragma once
#include "unitysdk/unitysdk.h"

class HELBPHOMBOK;

#define MOLEMOLE_FLOWCANVAS_NODES_LDSETTARGETPOSUIWARNNODE_INVOKE_OFFSET UNITYSDK_OFFSET(0x180E0630)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSETTARGETPOSUIWARNNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x180E07A0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDSetTargetPosUIWarnNode_TypeDefinitionIndex = 58265;

	class LDSetTargetPosUIWarnNode
	{
	public:
		::HELBPHOMBOK* param; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSETTARGETPOSUIWARNNODE__CTOR_OFFSET))(this);
		}

		::System::Boolean Invoke(::System::Boolean warnState, ::System::Int32 index)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSETTARGETPOSUIWARNNODE_INVOKE_OFFSET))(this, warnState, index);
		}
	};
}
