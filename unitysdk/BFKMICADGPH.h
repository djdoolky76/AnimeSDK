#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"

#define BFKMICADGPH_CTOR_OFFSET UNITYSDK_OFFSET(0x151B0440)

inline static constexpr unsigned int BFKMICADGPH_TypeDefinitionIndex = 49248;

	class BFKMICADGPH : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BFKMICADGPH_CTOR_OFFSET))(this);
		}

	};
