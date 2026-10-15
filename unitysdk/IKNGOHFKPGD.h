#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"

#define IKNGOHFKPGD_CTOR_OFFSET UNITYSDK_OFFSET(0x1648FA70)

inline static constexpr unsigned int IKNGOHFKPGD_TypeDefinitionIndex = 48814;

	class IKNGOHFKPGD : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IKNGOHFKPGD_CTOR_OFFSET))(this);
		}

	};
