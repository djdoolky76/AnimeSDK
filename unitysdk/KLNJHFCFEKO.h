#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"

#define KLNJHFCFEKO_CTOR_OFFSET UNITYSDK_OFFSET(0xB52F9D0)

inline static constexpr unsigned int KLNJHFCFEKO_TypeDefinitionIndex = 48825;

	class KLNJHFCFEKO : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KLNJHFCFEKO_CTOR_OFFSET))(this);
		}

	};
