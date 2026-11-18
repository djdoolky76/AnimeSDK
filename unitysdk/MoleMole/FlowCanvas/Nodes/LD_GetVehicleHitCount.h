#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Battle { class Entity; }

#define MOLEMOLE_FLOWCANVAS_NODES_LD_GETVEHICLEHITCOUNT_INVOKE_OFFSET UNITYSDK_OFFSET(0x1A8F3B60)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_GETVEHICLEHITCOUNT__CTOR_OFFSET UNITYSDK_OFFSET(0x1A8F3C00)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LD_GetVehicleHitCount_TypeDefinitionIndex = 89522;

	class LD_GetVehicleHitCount
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_GETVEHICLEHITCOUNT__CTOR_OFFSET))(this);
		}

		::System::Int32 Invoke(::MoleMole::Battle::Entity* entity)
		{
			return ((::System::Int32(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_GETVEHICLEHITCOUNT_INVOKE_OFFSET))(this, entity);
		}
	};
}
