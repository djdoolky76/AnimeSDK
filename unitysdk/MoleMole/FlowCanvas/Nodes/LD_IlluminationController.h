#pragma once
#include "unitysdk/unitysdk.h"

#define MOLEMOLE_FLOWCANVAS_NODES_LD_ILLUMINATIONCONTROLLER_INVOKE_OFFSET UNITYSDK_OFFSET(0x119150E0)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_ILLUMINATIONCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x119158B0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LD_IlluminationController_TypeDefinitionIndex = 62572;

	class LD_IlluminationController
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_ILLUMINATIONCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void Invoke(::System::Int32 sosWidgetID, ::System::Boolean IlluminationSwitch, ::System::Single IlluminationIntensity)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_ILLUMINATIONCONTROLLER_INVOKE_OFFSET))(this, sosWidgetID, IlluminationSwitch, IlluminationIntensity);
		}
	};
}
