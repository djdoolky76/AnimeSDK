#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"

#define MBGKOHOGJCL_CTOR_OFFSET UNITYSDK_OFFSET(0xB854550)

inline static constexpr unsigned int MBGKOHOGJCL_TypeDefinitionIndex = 48131;

	class MBGKOHOGJCL : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MBGKOHOGJCL_CTOR_OFFSET))(this);
		}

	};
