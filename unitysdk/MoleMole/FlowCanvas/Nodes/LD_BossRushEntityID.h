#pragma once
#include "unitysdk/unitysdk.h"

#define MOLEMOLE_FLOWCANVAS_NODES_LD_BOSSRUSHENTITYID_INVOKE_OFFSET UNITYSDK_OFFSET(0x12B3F030)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_BOSSRUSHENTITYID__CTOR_OFFSET UNITYSDK_OFFSET(0x12B3F0C0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LD_BossRushEntityID_TypeDefinitionIndex = 67462;

	class LD_BossRushEntityID
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_BOSSRUSHENTITYID__CTOR_OFFSET))(this);
		}

		::System::UInt32 Invoke()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_BOSSRUSHENTITYID_INVOKE_OFFSET))(this);
		}
	};
}
