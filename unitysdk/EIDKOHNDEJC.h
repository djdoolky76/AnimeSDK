#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"

#define EIDKOHNDEJC_CTOR_OFFSET UNITYSDK_OFFSET(0x154BF330)

inline static constexpr unsigned int EIDKOHNDEJC_TypeDefinitionIndex = 48697;

	class EIDKOHNDEJC : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EIDKOHNDEJC_CTOR_OFFSET))(this);
		}

	};
