#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"

#define EPALLNMDBNA_CTOR_OFFSET UNITYSDK_OFFSET(0x155C26B0)

inline static constexpr unsigned int EPALLNMDBNA_TypeDefinitionIndex = 48206;

	class EPALLNMDBNA : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPALLNMDBNA_CTOR_OFFSET))(this);
		}

	};
