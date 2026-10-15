#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"

#define GGPHJKDJBNP_CTOR_OFFSET UNITYSDK_OFFSET(0x15A12F60)

	class GGPHJKDJBNP : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GGPHJKDJBNP_CTOR_OFFSET))(this);
		}

	};
