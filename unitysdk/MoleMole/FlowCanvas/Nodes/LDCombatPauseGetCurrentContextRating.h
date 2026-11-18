#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Level/RatingType.h"

#define MOLEMOLE_FLOWCANVAS_NODES_LDCOMBATPAUSEGETCURRENTCONTEXTRATING_INVOKE_OFFSET UNITYSDK_OFFSET(0x1A8E6F20)
#define MOLEMOLE_FLOWCANVAS_NODES_LDCOMBATPAUSEGETCURRENTCONTEXTRATING__CTOR_OFFSET UNITYSDK_OFFSET(0x1A8E7070)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDCombatPauseGetCurrentContextRating_TypeDefinitionIndex = 80035;

	class LDCombatPauseGetCurrentContextRating
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDCOMBATPAUSEGETCURRENTCONTEXTRATING__CTOR_OFFSET))(this);
		}

		::MoleMole::Level::RatingType Invoke()
		{
			return ((::MoleMole::Level::RatingType(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDCOMBATPAUSEGETCURRENTCONTEXTRATING_INVOKE_OFFSET))(this);
		}
	};
}
