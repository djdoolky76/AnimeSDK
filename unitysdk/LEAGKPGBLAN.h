#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"

#define LEAGKPGBLAN_CTOR_OFFSET UNITYSDK_OFFSET(0xB649AE0)

	class LEAGKPGBLAN : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEAGKPGBLAN_CTOR_OFFSET))(this);
		}

	};
