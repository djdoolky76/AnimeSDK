#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define RPG_CUSTOMRP_TIGHTSPOTLIGHTPROXYMESHGENERATOR_CTOR_OFFSET UNITYSDK_OFFSET(0xE495020)

namespace RPG::CustomRP
{
	class TightSpotLightProxyMeshGenerator : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_TIGHTSPOTLIGHTPROXYMESHGENERATOR_CTOR_OFFSET))(this);
		}

	};
}
