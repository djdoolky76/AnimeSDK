#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define PARTICLESYSTEMPANEL_CTOR_OFFSET UNITYSDK_OFFSET(0x1B8C0710)

inline static constexpr unsigned int ParticleSystemPanel_TypeDefinitionIndex = 48305;

	class ParticleSystemPanel : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PARTICLESYSTEMPANEL_CTOR_OFFSET))(this);
		}

	};
