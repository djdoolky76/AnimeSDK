#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"

#define LLDNNPOJEKJ_CTOR_OFFSET UNITYSDK_OFFSET(0xB764640)

inline static constexpr unsigned int LLDNNPOJEKJ_TypeDefinitionIndex = 47825;

	class LLDNNPOJEKJ : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LLDNNPOJEKJ_CTOR_OFFSET))(this);
		}

	};
