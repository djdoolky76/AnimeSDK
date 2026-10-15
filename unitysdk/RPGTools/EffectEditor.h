#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define RPGTOOLS_EFFECTEDITOR_CTOR_OFFSET UNITYSDK_OFFSET(0xE89E360)

namespace RPGTools
{
	class EffectEditor : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_EFFECTEDITOR_CTOR_OFFSET))(this);
		}

	};
}
