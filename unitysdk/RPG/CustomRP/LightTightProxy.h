#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define RPG_CUSTOMRP_LIGHTTIGHTPROXY_CTOR_OFFSET UNITYSDK_OFFSET(0xE48FB40)

namespace RPG::CustomRP
{
	class LightTightProxy : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_LIGHTTIGHTPROXY_CTOR_OFFSET))(this);
		}

	};
}
