#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define ENVIRONMENTSYSTEMTEST_CTOR_OFFSET UNITYSDK_OFFSET(0x1656C950)

inline static constexpr unsigned int EnvironmentSystemTest_TypeDefinitionIndex = 48329;

	class EnvironmentSystemTest : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIRONMENTSYSTEMTEST_CTOR_OFFSET))(this);
		}

	};
