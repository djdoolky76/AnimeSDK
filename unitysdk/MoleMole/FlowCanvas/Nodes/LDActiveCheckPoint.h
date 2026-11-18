#pragma once
#include "unitysdk/unitysdk.h"

#define MOLEMOLE_FLOWCANVAS_NODES_LDACTIVECHECKPOINT_INVOKE_OFFSET UNITYSDK_OFFSET(0x1A7BC400)
#define MOLEMOLE_FLOWCANVAS_NODES_LDACTIVECHECKPOINT__CTOR_OFFSET UNITYSDK_OFFSET(0x1A7BC690)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDActiveCheckPoint_TypeDefinitionIndex = 53345;

	class LDActiveCheckPoint
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDACTIVECHECKPOINT__CTOR_OFFSET))(this);
		}

		::System::Boolean Invoke()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDACTIVECHECKPOINT_INVOKE_OFFSET))(this);
		}
	};
}
