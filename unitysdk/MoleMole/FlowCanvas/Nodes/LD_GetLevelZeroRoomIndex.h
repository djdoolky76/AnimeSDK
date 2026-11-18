#pragma once
#include "unitysdk/unitysdk.h"

#define MOLEMOLE_FLOWCANVAS_NODES_LD_GETLEVELZEROROOMINDEX_INVOKE_OFFSET UNITYSDK_OFFSET(0x139E3440)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_GETLEVELZEROROOMINDEX__CTOR_OFFSET UNITYSDK_OFFSET(0x139E3620)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LD_GetLevelZeroRoomIndex_TypeDefinitionIndex = 65413;

	class LD_GetLevelZeroRoomIndex
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_GETLEVELZEROROOMINDEX__CTOR_OFFSET))(this);
		}

		::System::Int32 Invoke()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_GETLEVELZEROROOMINDEX_INVOKE_OFFSET))(this);
		}
	};
}
