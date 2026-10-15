#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"

#define EEMHJEMILIA_CTOR_OFFSET UNITYSDK_OFFSET(0x13A3EFC0)

inline static constexpr unsigned int EEMHJEMILIA_TypeDefinitionIndex = 48027;

	class EEMHJEMILIA : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EEMHJEMILIA_CTOR_OFFSET))(this);
		}

	};
