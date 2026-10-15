#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"

#define FLBFBLDLINO_CTOR_OFFSET UNITYSDK_OFFSET(0x15829B90)

	class FLBFBLDLINO : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLBFBLDLINO_CTOR_OFFSET))(this);
		}

	};
