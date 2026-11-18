#pragma once
#include "unitysdk/unitysdk.h"

namespace System { class String; }

#define MOLEMOLE_FLOWCANVAS_NODES_LD_DESTROYLEVELTIMER_INVOKE_OFFSET UNITYSDK_OFFSET(0x12B3F0E0)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_DESTROYLEVELTIMER__CTOR_OFFSET UNITYSDK_OFFSET(0x12B3F140)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LD_DestroyLevelTimer_TypeDefinitionIndex = 69490;

	class LD_DestroyLevelTimer
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_DESTROYLEVELTIMER__CTOR_OFFSET))(this);
		}

		::System::Void Invoke(::System::String* timerKey, ::System::Boolean forceTimeUp)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_DESTROYLEVELTIMER_INVOKE_OFFSET))(this, timerKey, forceTimeUp);
		}
	};
}
