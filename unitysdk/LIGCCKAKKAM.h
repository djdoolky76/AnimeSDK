#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"

#define LIGCCKAKKAM_CTOR_OFFSET UNITYSDK_OFFSET(0xB6C3F20)

inline static constexpr unsigned int LIGCCKAKKAM_TypeDefinitionIndex = 48685;

	class LIGCCKAKKAM : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LIGCCKAKKAM_CTOR_OFFSET))(this);
		}

	};
