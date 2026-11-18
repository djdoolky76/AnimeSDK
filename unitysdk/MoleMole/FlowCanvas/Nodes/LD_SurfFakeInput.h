#pragma once
#include "unitysdk/unitysdk.h"

#define MOLEMOLE_FLOWCANVAS_NODES_LD_SURFFAKEINPUT_INVOKE_OFFSET UNITYSDK_OFFSET(0x162C73C0)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_SURFFAKEINPUT__CTOR_OFFSET UNITYSDK_OFFSET(0x162C74B0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LD_SurfFakeInput_TypeDefinitionIndex = 64351;

	class LD_SurfFakeInput
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_SURFFAKEINPUT__CTOR_OFFSET))(this);
		}

		::System::Void Invoke(::System::Int32 steer, ::System::Boolean boost, ::System::Boolean drift, ::System::Single duration)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_SURFFAKEINPUT_INVOKE_OFFSET))(this, steer, boost, drift, duration);
		}
	};
}
