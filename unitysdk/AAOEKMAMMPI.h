#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"

#define AAOEKMAMMPI_CTOR_OFFSET UNITYSDK_OFFSET(0x18C86DA0)

inline static constexpr unsigned int AAOEKMAMMPI_TypeDefinitionIndex = 49229;

	class AAOEKMAMMPI : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AAOEKMAMMPI_CTOR_OFFSET))(this);
		}

	};
