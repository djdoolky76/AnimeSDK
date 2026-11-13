#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"

#define LIGCCKAKKAM_CTOR_OFFSET UNITYSDK_OFFSET(0x172DDF00)

inline static constexpr unsigned int LIGCCKAKKAM_TypeDefinitionIndex = 49731;

	class LIGCCKAKKAM : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LIGCCKAKKAM_CTOR_OFFSET))(this);
		}

	};
