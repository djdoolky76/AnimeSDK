#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"

#define MBGKOHOGJCL_CTOR_OFFSET UNITYSDK_OFFSET(0xB85AD90)

	class MBGKOHOGJCL : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MBGKOHOGJCL_CTOR_OFFSET))(this);
		}

	};
