#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"

#define BNKJLIPCOMJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1A770FA0)

inline static constexpr unsigned int BNKJLIPCOMJ_TypeDefinitionIndex = 49077;

	class BNKJLIPCOMJ : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BNKJLIPCOMJ_CTOR_OFFSET))(this);
		}

	};
