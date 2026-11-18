#pragma once
#include "unitysdk/unitysdk.h"

#define MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_NEXTNORMALSELECTIONCOUNT_INVOKE_OFFSET UNITYSDK_OFFSET(0x14AE5620)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_NEXTNORMALSELECTIONCOUNT__CTOR_OFFSET UNITYSDK_OFFSET(0x14AE57A0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LD_AbyssS2_NextNormalSelectionCount_TypeDefinitionIndex = 51710;

	class LD_AbyssS2_NextNormalSelectionCount
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_NEXTNORMALSELECTIONCOUNT__CTOR_OFFSET))(this);
		}

		::System::Int32 Invoke()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_NEXTNORMALSELECTIONCOUNT_INVOKE_OFFSET))(this);
		}
	};
}
