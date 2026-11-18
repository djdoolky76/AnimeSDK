#pragma once
#include "unitysdk/unitysdk.h"

#define MOLEMOLE_FLOWCANVAS_NODES_LDFINISHLEVELTASK_INVOKE_OFFSET UNITYSDK_OFFSET(0x180D8BF0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDFINISHLEVELTASK__CTOR_OFFSET UNITYSDK_OFFSET(0x180D8C80)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDFinishLevelTask_TypeDefinitionIndex = 56897;

	class LDFinishLevelTask
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDFINISHLEVELTASK__CTOR_OFFSET))(this);
		}

		::System::Void Invoke(::System::Int32 taskHandle)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDFINISHLEVELTASK_INVOKE_OFFSET))(this, taskHandle);
		}
	};
}
