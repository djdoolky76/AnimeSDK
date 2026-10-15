#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"

#define AHKPFKCDFPG_CTOR_OFFSET UNITYSDK_OFFSET(0xEB86000)

	class AHKPFKCDFPG : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AHKPFKCDFPG_CTOR_OFFSET))(this);
		}

	};
