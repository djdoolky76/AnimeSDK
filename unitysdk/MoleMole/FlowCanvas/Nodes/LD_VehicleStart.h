#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Battle { class Entity; }

#define MOLEMOLE_FLOWCANVAS_NODES_LD_VEHICLESTART_INVOKE_OFFSET UNITYSDK_OFFSET(0x1430E700)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_VEHICLESTART__CTOR_OFFSET UNITYSDK_OFFSET(0x1430E770)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LD_VehicleStart_TypeDefinitionIndex = 57936;

	class LD_VehicleStart
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_VEHICLESTART__CTOR_OFFSET))(this);
		}

		::System::Void Invoke(::MoleMole::Battle::Entity* entity)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_VEHICLESTART_INVOKE_OFFSET))(this, entity);
		}
	};
}
