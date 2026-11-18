#pragma once
#include "unitysdk/unitysdk.h"

#define MOLEMOLE_FLOWCANVAS_NODES_LD_GETZEROLEVELTYPE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1A092210)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_GETZEROLEVELTYPE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A0923F0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LD_GetZeroLevelType_TypeDefinitionIndex = 84489;

	class LD_GetZeroLevelType
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_GETZEROLEVELTYPE__CTOR_OFFSET))(this);
		}

		::System::Int32 Invoke()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_GETZEROLEVELTYPE_INVOKE_OFFSET))(this);
		}
	};
}
