#pragma once
#include "unitysdk/unitysdk.h"

#define MOLEMOLE_FLOWCANVAS_NODES_LD_ISDEVLEVEL_INVOKE_OFFSET UNITYSDK_OFFSET(0x14AE6510)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_ISDEVLEVEL__CTOR_OFFSET UNITYSDK_OFFSET(0x14AE6570)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LD_IsDevLevel_TypeDefinitionIndex = 80931;

	class LD_IsDevLevel
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_ISDEVLEVEL__CTOR_OFFSET))(this);
		}

		::System::Boolean Invoke()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_ISDEVLEVEL_INVOKE_OFFSET))(this);
		}
	};
}
