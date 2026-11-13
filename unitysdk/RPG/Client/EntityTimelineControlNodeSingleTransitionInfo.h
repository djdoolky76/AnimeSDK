#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_ENTITYTIMELINECONTROLNODESINGLETRANSITIONINFO_CTOR_OFFSET UNITYSDK_OFFSET(0x1A6D94E0)

namespace RPG::Client
{
	inline static constexpr unsigned int EntityTimelineControlNodeSingleTransitionInfo_TypeDefinitionIndex = 65211;

	class EntityTimelineControlNodeSingleTransitionInfo : public ::System::Object
	{
	public:
		::System::Int32 TransitionNodeIndex; // 0x10
		::System::Single Percentage; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENTITYTIMELINECONTROLNODESINGLETRANSITIONINFO_CTOR_OFFSET))(this);
		}

	};
}
