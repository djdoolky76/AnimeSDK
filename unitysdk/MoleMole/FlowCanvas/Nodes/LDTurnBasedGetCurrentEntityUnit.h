#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole { class TurnBattleEntityUnit; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDTURNBASEDGETCURRENTENTITYUNIT_INVOKE_OFFSET UNITYSDK_OFFSET(0x130D3770)
#define MOLEMOLE_FLOWCANVAS_NODES_LDTURNBASEDGETCURRENTENTITYUNIT__CTOR_OFFSET UNITYSDK_OFFSET(0x130D3930)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDTurnBasedGetCurrentEntityUnit_TypeDefinitionIndex = 91644;

	class LDTurnBasedGetCurrentEntityUnit
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDTURNBASEDGETCURRENTENTITYUNIT__CTOR_OFFSET))(this);
		}

		::MoleMole::TurnBattleEntityUnit* Invoke()
		{
			return ((::MoleMole::TurnBattleEntityUnit*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDTURNBASEDGETCURRENTENTITYUNIT_INVOKE_OFFSET))(this);
		}
	};
}
