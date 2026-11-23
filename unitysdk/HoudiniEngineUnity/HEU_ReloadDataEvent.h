#pragma once
#include "unitysdk/unitysdk.h"

#define HOUDINIENGINEUNITY_HEU_RELOADDATAEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x3894F30)

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int HEU_ReloadDataEvent_TypeDefinitionIndex = 18132;

	class HEU_ReloadDataEvent
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_RELOADDATAEVENT__CTOR_OFFSET))(this);
		}
	};
}
