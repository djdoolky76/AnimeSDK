#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"

#define KGLILJHHJEG_CTOR_OFFSET UNITYSDK_OFFSET(0xB3F5C50)

	class KGLILJHHJEG : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KGLILJHHJEG_CTOR_OFFSET))(this);
		}

	};
