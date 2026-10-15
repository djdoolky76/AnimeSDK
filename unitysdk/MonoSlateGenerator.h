#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define MONOSLATEGENERATOR_CTOR_OFFSET UNITYSDK_OFFSET(0xBA4F040)

	class MonoSlateGenerator : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOSLATEGENERATOR_CTOR_OFFSET))(this);
		}

	};
