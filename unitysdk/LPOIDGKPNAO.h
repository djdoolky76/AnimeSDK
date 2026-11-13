#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"

#define LPOIDGKPNAO_CTOR_OFFSET UNITYSDK_OFFSET(0x1B6C95C0)

inline static constexpr unsigned int LPOIDGKPNAO_TypeDefinitionIndex = 49813;

	class LPOIDGKPNAO : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LPOIDGKPNAO_CTOR_OFFSET))(this);
		}

	};
