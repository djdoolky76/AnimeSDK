#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"

#define FMCEHKMGOBL_CTOR_OFFSET UNITYSDK_OFFSET(0x158423C0)

inline static constexpr unsigned int FMCEHKMGOBL_TypeDefinitionIndex = 48656;

	class FMCEHKMGOBL : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FMCEHKMGOBL_CTOR_OFFSET))(this);
		}

	};
