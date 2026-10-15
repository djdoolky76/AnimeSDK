#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
class SWRTAsset;

#define SWRT_SWRT_CTOR_OFFSET UNITYSDK_OFFSET(0x1CC84420)
#define SWRT_SWRT_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1CC84320)
#define SWRT_SWRT_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1CC84180)

namespace SWRT
{
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
