#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"

#define LJEFLIPKKHL_CTOR_OFFSET UNITYSDK_OFFSET(0xB6E1D80)

inline static constexpr unsigned int LJEFLIPKKHL_TypeDefinitionIndex = 48315;

	class LJEFLIPKKHL : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LJEFLIPKKHL_CTOR_OFFSET))(this);
		}

	};
