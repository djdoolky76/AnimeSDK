#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"

#define GGPHJKDJBNP_CTOR_OFFSET UNITYSDK_OFFSET(0x15A07660)

inline static constexpr unsigned int GGPHJKDJBNP_TypeDefinitionIndex = 47807;

	class GGPHJKDJBNP : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GGPHJKDJBNP_CTOR_OFFSET))(this);
		}

	};
