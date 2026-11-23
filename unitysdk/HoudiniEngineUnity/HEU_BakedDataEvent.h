#pragma once
#include "unitysdk/unitysdk.h"

#define HOUDINIENGINEUNITY_HEU_BAKEDDATAEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x3808E00)

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int HEU_BakedDataEvent_TypeDefinitionIndex = 17878;

	class HEU_BakedDataEvent
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_BAKEDDATAEVENT__CTOR_OFFSET))(this);
		}
	};
}
