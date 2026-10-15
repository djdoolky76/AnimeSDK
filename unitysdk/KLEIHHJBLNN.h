#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"

#define KLEIHHJBLNN_CTOR_OFFSET UNITYSDK_OFFSET(0xB525F00)

	class KLEIHHJBLNN : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KLEIHHJBLNN_CTOR_OFFSET))(this);
		}

	};
