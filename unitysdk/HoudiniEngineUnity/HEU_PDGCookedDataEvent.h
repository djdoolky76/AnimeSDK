#pragma once
#include "unitysdk/unitysdk.h"

#define HOUDINIENGINEUNITY_HEU_PDGCOOKEDDATAEVENT_CTOR_OFFSET UNITYSDK_OFFSET(0x1B9551D0)

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int HEU_PDGCookedDataEvent_TypeDefinitionIndex = 40530;

	class HEU_PDGCookedDataEvent
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PDGCOOKEDDATAEVENT_CTOR_OFFSET))(this);
		}

	};
}
