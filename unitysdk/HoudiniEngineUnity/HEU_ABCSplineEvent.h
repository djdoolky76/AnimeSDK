#pragma once
#include "unitysdk/unitysdk.h"

#define HOUDINIENGINEUNITY_HEU_ABCSPLINEEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x38672E0)

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int HEU_ABCSplineEvent_TypeDefinitionIndex = 18081;

	class HEU_ABCSplineEvent
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_ABCSPLINEEVENT__CTOR_OFFSET))(this);
		}
	};
}
