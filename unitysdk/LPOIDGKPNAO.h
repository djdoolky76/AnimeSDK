#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"

#define LPOIDGKPNAO_CTOR_OFFSET UNITYSDK_OFFSET(0xB835B70)

inline static constexpr unsigned int LPOIDGKPNAO_TypeDefinitionIndex = 48767;

	class LPOIDGKPNAO : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LPOIDGKPNAO_CTOR_OFFSET))(this);
		}

	};
