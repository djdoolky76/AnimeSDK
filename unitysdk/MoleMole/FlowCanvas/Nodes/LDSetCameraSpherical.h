#pragma once
#include "unitysdk/unitysdk.h"

#define MOLEMOLE_FLOWCANVAS_NODES_LDSETCAMERASPHERICAL_INVOKE_OFFSET UNITYSDK_OFFSET(0x1A7C6A20)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSETCAMERASPHERICAL__CTOR_OFFSET UNITYSDK_OFFSET(0x1A7C6AC0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDSetCameraSpherical_TypeDefinitionIndex = 70605;

	class LDSetCameraSpherical
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSETCAMERASPHERICAL__CTOR_OFFSET))(this);
		}

		::System::Boolean Invoke(::System::Single polarAngle, ::System::Single elevationAngle)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSETCAMERASPHERICAL_INVOKE_OFFSET))(this, polarAngle, elevationAngle);
		}
	};
}
