#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define MOLEMOLE_SCARYNIGHT_MONOSCARYNIGHTDEBUGINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1BDE3840)

namespace MoleMole::ScaryNight
{
	inline static constexpr unsigned int MonoScaryNightDebugInfo_TypeDefinitionIndex = 61129;

	class MonoScaryNightDebugInfo : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCARYNIGHT_MONOSCARYNIGHTDEBUGINFO__CTOR_OFFSET))(this);
		}
	};
}
