#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole { class TurnBattleEntityUnit; }
namespace MoleMole::Battle { class Entity; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDTURNBASEDGETENTITYBYUNIT_INVOKE_OFFSET UNITYSDK_OFFSET(0x1A090F80)
#define MOLEMOLE_FLOWCANVAS_NODES_LDTURNBASEDGETENTITYBYUNIT__CTOR_OFFSET UNITYSDK_OFFSET(0x1A090FE0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDTurnBasedGetEntityByUnit_TypeDefinitionIndex = 79678;

	class LDTurnBasedGetEntityByUnit
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDTURNBASEDGETENTITYBYUNIT__CTOR_OFFSET))(this);
		}

		::MoleMole::Battle::Entity* Invoke(::MoleMole::TurnBattleEntityUnit* unit)
		{
			return ((::MoleMole::Battle::Entity*(*)(::PVOID, ::MoleMole::TurnBattleEntityUnit*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDTURNBASEDGETENTITYBYUNIT_INVOKE_OFFSET))(this, unit);
		}
	};
}
