#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define MONOSTAIRGENERATOR_CTOR_OFFSET UNITYSDK_OFFSET(0xBA49520)

inline static constexpr unsigned int MonoStairGenerator_TypeDefinitionIndex = 47507;

	class MonoStairGenerator : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOSTAIRGENERATOR_CTOR_OFFSET))(this);
		}

	};
