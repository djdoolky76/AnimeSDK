#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define PARTICLESYSTEMPANEL_CTOR_OFFSET UNITYSDK_OFFSET(0xC39ADC0)

	class ParticleSystemPanel : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PARTICLESYSTEMPANEL_CTOR_OFFSET))(this);
		}

	};
