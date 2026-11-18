#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Battle { class Entity; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDTURNBASEDREMOVEALLTURNENTITYUNITSBYENTITY_INVOKE_OFFSET UNITYSDK_OFFSET(0x180E2CF0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDTURNBASEDREMOVEALLTURNENTITYUNITSBYENTITY__CTOR_OFFSET UNITYSDK_OFFSET(0x180E30B0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDTurnBasedRemoveAllTurnEntityUnitsByEntity_TypeDefinitionIndex = 87108;

	class LDTurnBasedRemoveAllTurnEntityUnitsByEntity
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDTURNBASEDREMOVEALLTURNENTITYUNITSBYENTITY__CTOR_OFFSET))(this);
		}

		::System::Void Invoke(::MoleMole::Battle::Entity* entity)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDTURNBASEDREMOVEALLTURNENTITYUNITSBYENTITY_INVOKE_OFFSET))(this, entity);
		}
	};
}
