#pragma once
#include "unitysdk/unitysdk.h"

namespace System { class String; }

#define MOLEMOLE_FLOWCANVAS_NODES_LD_GETLEVELTIMERPAUSE_INVOKE_OFFSET UNITYSDK_OFFSET(0x14667CD0)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_GETLEVELTIMERPAUSE__CTOR_OFFSET UNITYSDK_OFFSET(0x14667D40)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LD_GetLevelTimerPause_TypeDefinitionIndex = 46181;

	class LD_GetLevelTimerPause
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_GETLEVELTIMERPAUSE__CTOR_OFFSET))(this);
		}

		::System::Boolean Invoke(::System::String* timerKey)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_GETLEVELTIMERPAUSE_INVOKE_OFFSET))(this, timerKey);
		}
	};
}
