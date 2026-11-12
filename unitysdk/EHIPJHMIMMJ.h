#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"

#define EHIPJHMIMMJ_CTOR_OFFSET UNITYSDK_OFFSET(0x163ABBC0)

inline static constexpr unsigned int EHIPJHMIMMJ_TypeDefinitionIndex = 49852;

	class EHIPJHMIMMJ : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EHIPJHMIMMJ_CTOR_OFFSET))(this);
		}

	};
