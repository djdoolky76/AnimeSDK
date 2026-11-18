#pragma once
#include "unitysdk/unitysdk.h"

#define MOLEMOLE_FLOWCANVAS_NODES_LD_GETLEVELCONDITIONTARGETNUM_INVOKE_OFFSET UNITYSDK_OFFSET(0x10D1A2A0)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_GETLEVELCONDITIONTARGETNUM__CTOR_OFFSET UNITYSDK_OFFSET(0x10D1A540)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LD_GetLevelConditionTargetNum_TypeDefinitionIndex = 78320;

	class LD_GetLevelConditionTargetNum
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_GETLEVELCONDITIONTARGETNUM__CTOR_OFFSET))(this);
		}

		::System::Int32 Invoke(::System::Int32 levelConditionID)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_GETLEVELCONDITIONTARGETNUM_INVOKE_OFFSET))(this, levelConditionID);
		}
	};
}
