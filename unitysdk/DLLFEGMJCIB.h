#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"

#define DLLFEGMJCIB_CTOR_OFFSET UNITYSDK_OFFSET(0xF8AB770)

	class DLLFEGMJCIB : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DLLFEGMJCIB_CTOR_OFFSET))(this);
		}

	};
