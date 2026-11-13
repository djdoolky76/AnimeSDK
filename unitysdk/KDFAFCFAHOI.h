#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"

#define KDFAFCFAHOI_CTOR_OFFSET UNITYSDK_OFFSET(0x1B5B10A0)

inline static constexpr unsigned int KDFAFCFAHOI_TypeDefinitionIndex = 49393;

	class KDFAFCFAHOI : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KDFAFCFAHOI_CTOR_OFFSET))(this);
		}

	};
