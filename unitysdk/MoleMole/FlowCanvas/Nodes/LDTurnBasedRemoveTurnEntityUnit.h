#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole { class TurnBattleEntityUnit; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDTURNBASEDREMOVETURNENTITYUNIT_INVOKE_OFFSET UNITYSDK_OFFSET(0x135715E0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDTURNBASEDREMOVETURNENTITYUNIT__CTOR_OFFSET UNITYSDK_OFFSET(0x13571710)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDTurnBasedRemoveTurnEntityUnit_TypeDefinitionIndex = 74267;

	class LDTurnBasedRemoveTurnEntityUnit
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDTURNBASEDREMOVETURNENTITYUNIT__CTOR_OFFSET))(this);
		}

		::System::Void Invoke(::MoleMole::TurnBattleEntityUnit* unit)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::TurnBattleEntityUnit*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDTURNBASEDREMOVETURNENTITYUNIT_INVOKE_OFFSET))(this, unit);
		}
	};
}
