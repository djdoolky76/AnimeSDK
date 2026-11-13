#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"

#define MPPKJJMPJOK_CTOR_OFFSET UNITYSDK_OFFSET(0x1B22E7C0)

inline static constexpr unsigned int MPPKJJMPJOK_TypeDefinitionIndex = 48861;

	class MPPKJJMPJOK : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MPPKJJMPJOK_CTOR_OFFSET))(this);
		}

	};
