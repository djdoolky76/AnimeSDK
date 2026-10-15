#pragma once
#include "unitysdk/unitysdk.h"

#define RPG_CLIENT_GRIDFIGHTFLOWDIRECTOR_STAGEHINTCLOSEDEVENT_CTOR_OFFSET UNITYSDK_OFFSET(0xD12ECD0)
#define RPG_CLIENT_GRIDFIGHTFLOWDIRECTOR_STAGEHINTCLOSEDEVENT_GET_HASPORTALBUFFSELECTION_OFFSET UNITYSDK_OFFSET(0xD12BA90)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightFlowDirector_StageHintClosedEvent_TypeDefinitionIndex = 64579;

	class GridFightFlowDirector_StageHintClosedEvent
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFLOWDIRECTOR_STAGEHINTCLOSEDEVENT_CTOR_OFFSET))(this);
		}

		::System::Boolean get_HasPortalBuffSelection()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFLOWDIRECTOR_STAGEHINTCLOSEDEVENT_GET_HASPORTALBUFFSELECTION_OFFSET))(this);
		}

	};
}
