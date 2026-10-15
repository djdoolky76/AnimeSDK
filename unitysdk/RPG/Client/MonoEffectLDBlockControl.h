#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define RPG_CLIENT_MONOEFFECTLDBLOCKCONTROL_CTOR_OFFSET UNITYSDK_OFFSET(0xD7AA1E0)
#define RPG_CLIENT_MONOEFFECTLDBLOCKCONTROL_UPDATE_OFFSET UNITYSDK_OFFSET(0xD7AA070)

namespace RPG::Client
{
	class MonoEffectLDBlockControl : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTLDBLOCKCONTROL_CTOR_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTLDBLOCKCONTROL_UPDATE_OFFSET))(this);
		}

	};
}
