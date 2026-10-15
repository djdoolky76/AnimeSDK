#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"

#define AFFBOKMMIGK_CTOR_OFFSET UNITYSDK_OFFSET(0xCF09080)

	class AFFBOKMMIGK : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AFFBOKMMIGK_CTOR_OFFSET))(this);
		}

	};
