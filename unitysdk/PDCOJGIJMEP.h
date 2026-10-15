#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"

#define PDCOJGIJMEP_CTOR_OFFSET UNITYSDK_OFFSET(0xC00D980)

	class PDCOJGIJMEP : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PDCOJGIJMEP_CTOR_OFFSET))(this);
		}

	};
