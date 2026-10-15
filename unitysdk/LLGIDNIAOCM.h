#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"

#define LLGIDNIAOCM_CTOR_OFFSET UNITYSDK_OFFSET(0xB76C6F0)

	class LLGIDNIAOCM : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LLGIDNIAOCM_CTOR_OFFSET))(this);
		}

	};
