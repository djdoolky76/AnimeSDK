#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define RPG_CUSTOMRP_LIGHTTIGHTPROXY_CTOR_OFFSET UNITYSDK_OFFSET(0xEF4E920)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int LightTightProxy_TypeDefinitionIndex = 52926;

	class LightTightProxy : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_LIGHTTIGHTPROXY_CTOR_OFFSET))(this);
		}

	};
}
