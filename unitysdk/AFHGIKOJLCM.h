#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"

#define AFHGIKOJLCM_CTOR_OFFSET UNITYSDK_OFFSET(0xCF0C640)

inline static constexpr unsigned int AFHGIKOJLCM_TypeDefinitionIndex = 48085;

	class AFHGIKOJLCM : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AFHGIKOJLCM_CTOR_OFFSET))(this);
		}

	};
