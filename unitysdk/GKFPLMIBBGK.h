#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"

#define GKFPLMIBBGK_CTOR_OFFSET UNITYSDK_OFFSET(0x15A8AE50)

inline static constexpr unsigned int GKFPLMIBBGK_TypeDefinitionIndex = 48362;

	class GKFPLMIBBGK : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GKFPLMIBBGK_CTOR_OFFSET))(this);
		}

	};
