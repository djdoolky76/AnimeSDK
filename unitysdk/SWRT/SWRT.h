#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
class SWRTAsset;

#define SWRT_SWRT_CTOR_OFFSET UNITYSDK_OFFSET(0x2075A020)
#define SWRT_SWRT_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x20759F20)
#define SWRT_SWRT_ONENABLE_OFFSET UNITYSDK_OFFSET(0x20759D80)

namespace SWRT
{
	inline static constexpr unsigned int SWRT_TypeDefinitionIndex = 38439;

	class SWRT : public ::UnityEngine::MonoBehaviour
	{
	public:
		::SWRTAsset* Asset; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SWRT_SWRT_CTOR_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SWRT_SWRT_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SWRT_SWRT_ONDISABLE_OFFSET))(this);
		}

	};
}
