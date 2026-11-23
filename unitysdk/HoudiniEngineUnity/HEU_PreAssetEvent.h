#pragma once
#include "unitysdk/unitysdk.h"

#define HOUDINIENGINEUNITY_HEU_PREASSETEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x3874120)

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int HEU_PreAssetEvent_TypeDefinitionIndex = 18077;

	class HEU_PreAssetEvent
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PREASSETEVENT__CTOR_OFFSET))(this);
		}
	};
}
