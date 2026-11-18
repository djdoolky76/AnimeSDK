#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole { class TurnBattleEntityUnit; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDTURNBASEDADDTEMPORARYUNIT_INVOKE_OFFSET UNITYSDK_OFFSET(0x1B4B68B0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDTURNBASEDADDTEMPORARYUNIT__CTOR_OFFSET UNITYSDK_OFFSET(0x1B4B6A00)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDTurnBasedAddTemporaryUnit_TypeDefinitionIndex = 79473;

	class LDTurnBasedAddTemporaryUnit
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDTURNBASEDADDTEMPORARYUNIT__CTOR_OFFSET))(this);
		}

		::System::Void Invoke(::MoleMole::TurnBattleEntityUnit* entityUnit)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::TurnBattleEntityUnit*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDTURNBASEDADDTEMPORARYUNIT_INVOKE_OFFSET))(this, entityUnit);
		}
	};
}
