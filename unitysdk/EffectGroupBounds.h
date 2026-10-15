#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define EFFECTGROUPBOUNDS_CTOR_OFFSET UNITYSDK_OFFSET(0x155DFAE0)

	class EffectGroupBounds : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EFFECTGROUPBOUNDS_CTOR_OFFSET))(this);
		}

	};
