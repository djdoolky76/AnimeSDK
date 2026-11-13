#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"

#define KGLILJHHJEG_CTOR_OFFSET UNITYSDK_OFFSET(0x1977E350)

inline static constexpr unsigned int KGLILJHHJEG_TypeDefinitionIndex = 49130;

	class KGLILJHHJEG : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KGLILJHHJEG_CTOR_OFFSET))(this);
		}

	};
