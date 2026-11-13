#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"

#define HBJFFEDGIFK_CTOR_OFFSET UNITYSDK_OFFSET(0x1B79CD10)

inline static constexpr unsigned int HBJFFEDGIFK_TypeDefinitionIndex = 48909;

	class HBJFFEDGIFK : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HBJFFEDGIFK_CTOR_OFFSET))(this);
		}

	};
