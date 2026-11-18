#pragma once
#include "unitysdk/unitysdk.h"

#define MOLEMOLE_FLOWCANVAS_NODES_LD_TRIGGERLEVELCUSTOMCONDITIONS_INVOKE_OFFSET UNITYSDK_OFFSET(0x1245F5E0)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_TRIGGERLEVELCUSTOMCONDITIONS__CTOR_OFFSET UNITYSDK_OFFSET(0x1245F670)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LD_TriggerLevelCustomConditions_TypeDefinitionIndex = 83350;

	class LD_TriggerLevelCustomConditions
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_TRIGGERLEVELCUSTOMCONDITIONS__CTOR_OFFSET))(this);
		}

		::System::Void Invoke(::System::Int32 LevelConditionsID)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_TRIGGERLEVELCUSTOMCONDITIONS_INVOKE_OFFSET))(this, LevelConditionsID);
		}
	};
}
