#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"

#define MPPKJJMPJOK_CTOR_OFFSET UNITYSDK_OFFSET(0xBA45940)

inline static constexpr unsigned int MPPKJJMPJOK_TypeDefinitionIndex = 47830;

	class MPPKJJMPJOK : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MPPKJJMPJOK_CTOR_OFFSET))(this);
		}

	};
