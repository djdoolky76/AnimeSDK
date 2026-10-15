#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"

#define AIGKCGGIFIO_CTOR_OFFSET UNITYSDK_OFFSET(0xEBA3950)

	class AIGKCGGIFIO : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AIGKCGGIFIO_CTOR_OFFSET))(this);
		}

	};
