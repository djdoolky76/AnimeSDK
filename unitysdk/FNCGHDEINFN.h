#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"

#define FNCGHDEINFN_CTOR_OFFSET UNITYSDK_OFFSET(0x17F11800)

inline static constexpr unsigned int FNCGHDEINFN_TypeDefinitionIndex = 49281;

	class FNCGHDEINFN : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FNCGHDEINFN_CTOR_OFFSET))(this);
		}

	};
