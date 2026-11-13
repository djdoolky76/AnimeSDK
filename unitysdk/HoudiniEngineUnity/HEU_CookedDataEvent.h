#pragma once
#include "unitysdk/unitysdk.h"

#define HOUDINIENGINEUNITY_HEU_COOKEDDATAEVENT_CTOR_OFFSET UNITYSDK_OFFSET(0x175DEC60)

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int HEU_CookedDataEvent_TypeDefinitionIndex = 41337;

	class HEU_CookedDataEvent
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_COOKEDDATAEVENT_CTOR_OFFSET))(this);
		}

	};
}
