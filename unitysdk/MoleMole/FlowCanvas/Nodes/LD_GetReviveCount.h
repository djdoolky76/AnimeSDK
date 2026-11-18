#pragma once
#include "unitysdk/unitysdk.h"

#define MOLEMOLE_FLOWCANVAS_NODES_LD_GETREVIVECOUNT_INVOKE_OFFSET UNITYSDK_OFFSET(0x13578440)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_GETREVIVECOUNT__CTOR_OFFSET UNITYSDK_OFFSET(0x13578580)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LD_GetReviveCount_TypeDefinitionIndex = 79390;

	class LD_GetReviveCount
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_GETREVIVECOUNT__CTOR_OFFSET))(this);
		}

		::System::Int32 Invoke()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_GETREVIVECOUNT_INVOKE_OFFSET))(this);
		}
	};
}
