#pragma once
#include "unitysdk/unitysdk.h"

#define HOUDINIENGINEUNITY_HEU_COOKEDDATAEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x387E9F0)

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int HEU_CookedDataEvent_TypeDefinitionIndex = 18099;

	class HEU_CookedDataEvent
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_COOKEDDATAEVENT__CTOR_OFFSET))(this);
		}
	};
}
