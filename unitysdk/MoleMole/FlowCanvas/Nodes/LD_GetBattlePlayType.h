#pragma once
#include "unitysdk/unitysdk.h"

#define MOLEMOLE_FLOWCANVAS_NODES_LD_GETBATTLEPLAYTYPE_INVOKE_OFFSET UNITYSDK_OFFSET(0x130D6DC0)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_GETBATTLEPLAYTYPE__CTOR_OFFSET UNITYSDK_OFFSET(0x130D6EF0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LD_GetBattlePlayType_TypeDefinitionIndex = 92273;

	class LD_GetBattlePlayType
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_GETBATTLEPLAYTYPE__CTOR_OFFSET))(this);
		}

		::System::Int32 Invoke()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_GETBATTLEPLAYTYPE_INVOKE_OFFSET))(this);
		}
	};
}
