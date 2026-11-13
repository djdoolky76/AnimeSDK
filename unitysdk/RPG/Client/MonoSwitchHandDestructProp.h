#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define RPG_CLIENT_MONOSWITCHHANDDESTRUCTPROP_CTOR_OFFSET UNITYSDK_OFFSET(0x1D27E710)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoSwitchHandDestructProp_TypeDefinitionIndex = 70733;

	class MonoSwitchHandDestructProp : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOSWITCHHANDDESTRUCTPROP_CTOR_OFFSET))(this);
		}

	};
}
