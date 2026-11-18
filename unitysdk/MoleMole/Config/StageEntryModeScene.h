#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/StageEntryMode.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace System { class String; }

#define MOLEMOLE_CONFIG_STAGEENTRYMODESCENE__CTOR_OFFSET UNITYSDK_OFFSET(0x190BE180)

namespace MoleMole::Config
{
	inline static constexpr unsigned int StageEntryModeScene_TypeDefinitionIndex = 55189;

	class StageEntryModeScene : public ::MoleMole::Config::StageEntryMode
	{
	public:
		::System::String* onlyLoadInBakePrefabPath; // 0x10
		::System::String* envPrefabPath; // 0x18
		::System::String* locationPointName; // 0x20
		::System::String* sceneName; // 0x28
		::UnityEngine::Vector2 MapStartAnchor; // 0x30
		::System::Boolean UseSceneLevelTime; // 0x38
		::System::Byte _padding0[0x3];
		::UnityEngine::Vector2 MapEndAnchor; // 0x3C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_STAGEENTRYMODESCENE__CTOR_OFFSET))(this);
		}
	};
}
