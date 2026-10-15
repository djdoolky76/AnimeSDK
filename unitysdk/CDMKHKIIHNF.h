#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"

#define CDMKHKIIHNF_CTOR_OFFSET UNITYSDK_OFFSET(0xC76D750)

inline static constexpr unsigned int CDMKHKIIHNF_TypeDefinitionIndex = 48168;

	class CDMKHKIIHNF : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CDMKHKIIHNF_CTOR_OFFSET))(this);
		}

	};
