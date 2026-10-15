#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define RPG_CLIENT_PROP_CHIMERADUELEFFECTBRIDGE_CTOR_OFFSET UNITYSDK_OFFSET(0xDC5E150)

namespace RPG::Client::Prop
{
	class ChimeraDuelEffectBridge : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELEFFECTBRIDGE_CTOR_OFFSET))(this);
		}

	};
}
