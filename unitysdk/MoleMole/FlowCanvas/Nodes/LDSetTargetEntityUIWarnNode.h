#pragma once
#include "unitysdk/unitysdk.h"

class HELBPHOMBOK;

#define MOLEMOLE_FLOWCANVAS_NODES_LDSETTARGETENTITYUIWARNNODE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1A08E780)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSETTARGETENTITYUIWARNNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A08E8F0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDSetTargetEntityUIWarnNode_TypeDefinitionIndex = 65013;

	class LDSetTargetEntityUIWarnNode
	{
	public:
		::HELBPHOMBOK* param; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSETTARGETENTITYUIWARNNODE__CTOR_OFFSET))(this);
		}

		::System::Boolean Invoke(::System::Boolean warnState, ::System::UInt32 id)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean, ::System::UInt32))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSETTARGETENTITYUIWARNNODE_INVOKE_OFFSET))(this, warnState, id);
		}
	};
}
