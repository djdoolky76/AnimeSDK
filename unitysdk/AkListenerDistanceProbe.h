#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class AkGameObj;

#define AKLISTENERDISTANCEPROBE_A28D6A0C3E793E7D_OFFSET UNITYSDK_OFFSET(0x291A540)
#define AKLISTENERDISTANCEPROBE_BF13C91AD80643D2_OFFSET UNITYSDK_OFFSET(0x291A5B0)
#define AKLISTENERDISTANCEPROBE__CTOR_OFFSET UNITYSDK_OFFSET(0x176D770)

inline static constexpr unsigned int AkListenerDistanceProbe_TypeDefinitionIndex = 20484;

class AkListenerDistanceProbe : public ::UnityEngine::MonoBehaviour
{
public:
	::AkGameObj* distanceProbe; // 0x20

	::System::Void A28D6A0C3E793E7D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKLISTENERDISTANCEPROBE_A28D6A0C3E793E7D_OFFSET))(this);
	}

	::System::Void BF13C91AD80643D2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKLISTENERDISTANCEPROBE_BF13C91AD80643D2_OFFSET))(this);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKLISTENERDISTANCEPROBE__CTOR_OFFSET))(this);
	}
};
