#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define MONOSCENEARTPREFAB_CTOR_OFFSET UNITYSDK_OFFSET(0xBA4F030)

	class MonoSceneArtPrefab : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOSCENEARTPREFAB_CTOR_OFFSET))(this);
		}

	};
