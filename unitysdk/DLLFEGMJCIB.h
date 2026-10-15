#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"

#define DLLFEGMJCIB_CTOR_OFFSET UNITYSDK_OFFSET(0xF8A5D70)

inline static constexpr unsigned int DLLFEGMJCIB_TypeDefinitionIndex = 47835;

	class DLLFEGMJCIB : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DLLFEGMJCIB_CTOR_OFFSET))(this);
		}

	};
