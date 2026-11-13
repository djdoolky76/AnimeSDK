#pragma once
#include "unitysdk/unitysdk.h"

#define HOUDINIENGINEUNITY_HEU_RELOADDATAEVENT_CTOR_OFFSET UNITYSDK_OFFSET(0x1C81DD60)

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int HEU_ReloadDataEvent_TypeDefinitionIndex = 41336;

	class HEU_ReloadDataEvent
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_RELOADDATAEVENT_CTOR_OFFSET))(this);
		}

	};
}
