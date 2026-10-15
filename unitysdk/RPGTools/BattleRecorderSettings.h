#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"

#define RPGTOOLS_BATTLERECORDERSETTINGS_CTOR_OFFSET UNITYSDK_OFFSET(0xE89E350)

namespace RPGTools
{
	class BattleRecorderSettings : public ::UnityEngine::ScriptableObject
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_BATTLERECORDERSETTINGS_CTOR_OFFSET))(this);
		}

	};
}
