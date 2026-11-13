#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"

#define KHBGHHFCEOA_CTOR_OFFSET UNITYSDK_OFFSET(0x19785760)

inline static constexpr unsigned int KHBGHHFCEOA_TypeDefinitionIndex = 49215;

	class KHBGHHFCEOA : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KHBGHHFCEOA_CTOR_OFFSET))(this);
		}

	};
