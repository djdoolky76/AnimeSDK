#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"

#define MJAKNKNBFAC_CTOR_OFFSET UNITYSDK_OFFSET(0xB9624B0)

inline static constexpr unsigned int MJAKNKNBFAC_TypeDefinitionIndex = 47958;

	class MJAKNKNBFAC : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MJAKNKNBFAC_CTOR_OFFSET))(this);
		}

	};
