#pragma once
#include "unitysdk/unitysdk.h"

#define MOLEMOLE_FLOWCANVAS_NODES_LD_SURFMUTEINPUT_INVOKE_OFFSET UNITYSDK_OFFSET(0x13EDFA00)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_SURFMUTEINPUT__CTOR_OFFSET UNITYSDK_OFFSET(0x13EDFAB0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LD_SurfMuteInput_TypeDefinitionIndex = 84705;

	class LD_SurfMuteInput
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_SURFMUTEINPUT__CTOR_OFFSET))(this);
		}

		::System::Void Invoke(::System::Boolean mute)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_SURFMUTEINPUT_INVOKE_OFFSET))(this, mute);
		}
	};
}
