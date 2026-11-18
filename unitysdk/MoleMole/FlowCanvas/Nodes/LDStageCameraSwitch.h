#pragma once
#include "unitysdk/unitysdk.h"

namespace System { class String; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDSTAGECAMERASWITCH_INVOKE_OFFSET UNITYSDK_OFFSET(0x11910BC0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSTAGECAMERASWITCH__CTOR_OFFSET UNITYSDK_OFFSET(0x11910F10)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDStageCameraSwitch_TypeDefinitionIndex = 55130;

	class LDStageCameraSwitch
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSTAGECAMERASWITCH__CTOR_OFFSET))(this);
		}

		::System::Boolean Invoke(::System::Boolean active, ::System::String* staticCameraKey)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSTAGECAMERASWITCH_INVOKE_OFFSET))(this, active, staticCameraKey);
		}
	};
}
