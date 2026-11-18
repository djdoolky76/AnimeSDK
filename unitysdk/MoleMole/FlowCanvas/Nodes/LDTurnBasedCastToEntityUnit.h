#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole { class TurnBattleEntityUnit; }
namespace MoleMole { class TurnBattleUnitBase; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDTURNBASEDCASTTOENTITYUNIT_INVOKE_OFFSET UNITYSDK_OFFSET(0x14308420)
#define MOLEMOLE_FLOWCANVAS_NODES_LDTURNBASEDCASTTOENTITYUNIT__CTOR_OFFSET UNITYSDK_OFFSET(0x14308580)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDTurnBasedCastToEntityUnit_TypeDefinitionIndex = 40646;

	class LDTurnBasedCastToEntityUnit
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDTURNBASEDCASTTOENTITYUNIT__CTOR_OFFSET))(this);
		}

		::MoleMole::TurnBattleEntityUnit* Invoke(::MoleMole::TurnBattleUnitBase* unit)
		{
			return ((::MoleMole::TurnBattleEntityUnit*(*)(::PVOID, ::MoleMole::TurnBattleUnitBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDTURNBASEDCASTTOENTITYUNIT_INVOKE_OFFSET))(this, unit);
		}
	};
}
