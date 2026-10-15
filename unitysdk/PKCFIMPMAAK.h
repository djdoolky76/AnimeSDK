#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"

#define PKCFIMPMAAK_CTOR_OFFSET UNITYSDK_OFFSET(0xC2B1430)

inline static constexpr unsigned int PKCFIMPMAAK_TypeDefinitionIndex = 48275;

	class PKCFIMPMAAK : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PKCFIMPMAAK_CTOR_OFFSET))(this);
		}

	};
