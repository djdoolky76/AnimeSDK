#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Battle { class Entity; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDCURVEMOVESWITCHSTATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x16232A00)
#define MOLEMOLE_FLOWCANVAS_NODES_LDCURVEMOVESWITCHSTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x16232B90)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDCurveMoveSwitchState_TypeDefinitionIndex = 85464;

	class LDCurveMoveSwitchState
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDCURVEMOVESWITCHSTATE__CTOR_OFFSET))(this);
		}

		::System::Void Invoke(::MoleMole::Battle::Entity* entity, ::System::Boolean enable)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDCURVEMOVESWITCHSTATE_INVOKE_OFFSET))(this, entity, enable);
		}
	};
}
