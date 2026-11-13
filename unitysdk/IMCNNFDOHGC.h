#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"

#define IMCNNFDOHGC_CTOR_OFFSET UNITYSDK_OFFSET(0x1A5CF8C0)

inline static constexpr unsigned int IMCNNFDOHGC_TypeDefinitionIndex = 49775;

	class IMCNNFDOHGC : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IMCNNFDOHGC_CTOR_OFFSET))(this);
		}

	};
