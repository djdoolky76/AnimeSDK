#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"

#define JOBNKHKFBAL_CTOR_OFFSET UNITYSDK_OFFSET(0xB29EEE0)

	class JOBNKHKFBAL : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JOBNKHKFBAL_CTOR_OFFSET))(this);
		}

	};
