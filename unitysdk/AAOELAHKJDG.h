#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"

#define AAOELAHKJDG_CTOR_OFFSET UNITYSDK_OFFSET(0xB0D6C30)

inline static constexpr unsigned int AAOELAHKJDG_TypeDefinitionIndex = 48042;

	class AAOELAHKJDG : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AAOELAHKJDG_CTOR_OFFSET))(this);
		}

	};
