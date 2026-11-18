#pragma once
#include "unitysdk/unitysdk.h"

#define MOLEMOLE_FLOWCANVAS_NODES_LDSCARYNIGHTROUNDENDWAIT_INVOKE_OFFSET UNITYSDK_OFFSET(0x10D15530)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSCARYNIGHTROUNDENDWAIT__CTOR_OFFSET UNITYSDK_OFFSET(0x10D15690)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDScaryNightRoundEndWait_TypeDefinitionIndex = 58520;

	class LDScaryNightRoundEndWait
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSCARYNIGHTROUNDENDWAIT__CTOR_OFFSET))(this);
		}

		::System::Void Invoke(::System::Single MonstreIsDead, ::System::Single MonstreIsAlive)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSCARYNIGHTROUNDENDWAIT_INVOKE_OFFSET))(this, MonstreIsDead, MonstreIsAlive);
		}
	};
}
