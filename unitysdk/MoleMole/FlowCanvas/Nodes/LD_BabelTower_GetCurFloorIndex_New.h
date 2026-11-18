#pragma once
#include "unitysdk/unitysdk.h"

#define MOLEMOLE_FLOWCANVAS_NODES_LD_BABELTOWER_GETCURFLOORINDEX_NEW_INVOKE_OFFSET UNITYSDK_OFFSET(0x13EDC290)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_BABELTOWER_GETCURFLOORINDEX_NEW__CTOR_OFFSET UNITYSDK_OFFSET(0x13EDC3C0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LD_BabelTower_GetCurFloorIndex_New_TypeDefinitionIndex = 45152;

	class LD_BabelTower_GetCurFloorIndex_New
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_BABELTOWER_GETCURFLOORINDEX_NEW__CTOR_OFFSET))(this);
		}

		::System::UInt32 Invoke()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_BABELTOWER_GETCURFLOORINDEX_NEW_INVOKE_OFFSET))(this);
		}
	};
}
