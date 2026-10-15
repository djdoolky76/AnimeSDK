#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"

#define EHIPJHMIMMJ_CTOR_OFFSET UNITYSDK_OFFSET(0x154A1350)

inline static constexpr unsigned int EHIPJHMIMMJ_TypeDefinitionIndex = 48806;

	class EHIPJHMIMMJ : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EHIPJHMIMMJ_CTOR_OFFSET))(this);
		}

	};
