#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"

#define DLLGGCJODDJ_CTOR_OFFSET UNITYSDK_OFFSET(0xF8AB780)

inline static constexpr unsigned int DLLGGCJODDJ_TypeDefinitionIndex = 48383;

	class DLLGGCJODDJ : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DLLGGCJODDJ_CTOR_OFFSET))(this);
		}

	};
