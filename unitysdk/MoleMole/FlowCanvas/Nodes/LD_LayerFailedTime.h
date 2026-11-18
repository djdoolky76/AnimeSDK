#pragma once
#include "unitysdk/unitysdk.h"

#define MOLEMOLE_FLOWCANVAS_NODES_LD_LAYERFAILEDTIME_INVOKE_OFFSET UNITYSDK_OFFSET(0x139E3BA0)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_LAYERFAILEDTIME__CTOR_OFFSET UNITYSDK_OFFSET(0x139E3CE0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LD_LayerFailedTime_TypeDefinitionIndex = 45072;

	class LD_LayerFailedTime
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_LAYERFAILEDTIME__CTOR_OFFSET))(this);
		}

		::System::Single Invoke()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_LAYERFAILEDTIME_INVOKE_OFFSET))(this);
		}
	};
}
