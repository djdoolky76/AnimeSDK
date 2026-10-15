#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"

#define LLGIDNIAOCM_CTOR_OFFSET UNITYSDK_OFFSET(0xB765620)

inline static constexpr unsigned int LLGIDNIAOCM_TypeDefinitionIndex = 48763;

	class LLGIDNIAOCM : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LLGIDNIAOCM_CTOR_OFFSET))(this);
		}

	};
