#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"

#define NCBBFLFFHJL_CTOR_OFFSET UNITYSDK_OFFSET(0xBAF7250)

inline static constexpr unsigned int NCBBFLFFHJL_TypeDefinitionIndex = 48358;

	class NCBBFLFFHJL : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NCBBFLFFHJL_CTOR_OFFSET))(this);
		}

	};
