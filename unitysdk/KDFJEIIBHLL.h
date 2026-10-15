#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"

#define KDFJEIIBHLL_CTOR_OFFSET UNITYSDK_OFFSET(0xB35D020)

inline static constexpr unsigned int KDFJEIIBHLL_TypeDefinitionIndex = 48725;

	class KDFJEIIBHLL : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KDFJEIIBHLL_CTOR_OFFSET))(this);
		}

	};
