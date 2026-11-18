#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Battle { class Entity; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDRESETDYNAMICTARGETVALUE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1465FE90)
#define MOLEMOLE_FLOWCANVAS_NODES_LDRESETDYNAMICTARGETVALUE__CTOR_OFFSET UNITYSDK_OFFSET(0x1465FFF0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDResetDynamicTargetValue_TypeDefinitionIndex = 44283;

	class LDResetDynamicTargetValue
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDRESETDYNAMICTARGETVALUE__CTOR_OFFSET))(this);
		}

		::System::Boolean Invoke(::MoleMole::Battle::Entity* target, ::System::Boolean ResetAttackerTargetValues, ::System::Boolean ResetInRangeTargetValue, ::System::Boolean ResetSelectTargetValues)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDRESETDYNAMICTARGETVALUE_INVOKE_OFFSET))(this, target, ResetAttackerTargetValues, ResetInRangeTargetValue, ResetSelectTargetValues);
		}
	};
}
