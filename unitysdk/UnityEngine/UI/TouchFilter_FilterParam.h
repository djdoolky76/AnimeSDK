#pragma once
#include "unitysdk/unitysdk.h"

#define UNITYENGINE_UI_TOUCHFILTER_FILTERPARAM_CTOR_OFFSET UNITYSDK_OFFSET(0xBA30)

namespace UnityEngine::UI
{
	inline static constexpr unsigned int TouchFilter_FilterParam_TypeDefinitionIndex = 6873;

	struct alignas(4) TouchFilter_FilterParam
	{
		::System::Single FilterLength; // 0x10
		::System::Single FilterRadianFromHorizon; // 0x14
		::System::Void _ctor(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_TOUCHFILTER_FILTERPARAM_CTOR_OFFSET))(this, a1, a2);
		}

	};
}
