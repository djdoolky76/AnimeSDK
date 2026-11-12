#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"

#define JOBNKHKFBAL_CTOR_OFFSET UNITYSDK_OFFSET(0xBACA2C0)

inline static constexpr unsigned int JOBNKHKFBAL_TypeDefinitionIndex = 48880;

	class JOBNKHKFBAL : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JOBNKHKFBAL_CTOR_OFFSET))(this);
		}

	};
