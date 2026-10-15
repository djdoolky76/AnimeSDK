#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"

#define PHIAOLOAGHH_CTOR_OFFSET UNITYSDK_OFFSET(0xC24BF50)

	class PHIAOLOAGHH : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PHIAOLOAGHH_CTOR_OFFSET))(this);
		}

	};
