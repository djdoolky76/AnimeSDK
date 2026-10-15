#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"

#define MPFONPNCOOO_CTOR_OFFSET UNITYSDK_OFFSET(0xBA3D740)

inline static constexpr unsigned int MPFONPNCOOO_TypeDefinitionIndex = 47880;

	class MPFONPNCOOO : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MPFONPNCOOO_CTOR_OFFSET))(this);
		}

	};
