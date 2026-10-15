#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"

#define KDFAFCFAHOI_CTOR_OFFSET UNITYSDK_OFFSET(0xB34E830)

	class KDFAFCFAHOI : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KDFAFCFAHOI_CTOR_OFFSET))(this);
		}

	};
