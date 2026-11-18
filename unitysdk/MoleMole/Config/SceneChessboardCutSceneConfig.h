#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/CutSceneEndMode.h"
#include "unitysdk/MoleMole/Config/SceneChessboardCutSceneConfig_BodySize.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ScenePeformAnimatorParam; }

#define MOLEMOLE_CONFIG_SCENECHESSBOARDCUTSCENECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1B44F5A0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int SceneChessboardCutSceneConfig_TypeDefinitionIndex = 52081;

	class SceneChessboardCutSceneConfig : public ::System::Object
	{
	public:
		::Il2CppArray<::MoleMole::Config::ScenePeformAnimatorParam*>* AnimParams; // 0x10
		::System::Single cutSceneAjustX; // 0x18
		::MoleMole::Config::CutSceneEndMode finishMode; // 0x1C
		::System::Single InputMuteDelayTime; // 0x20
		::System::Single ShowUIDelayTime; // 0x24
		::System::Single cutSceneAjustHeight; // 0x28
		::System::Single FlowCanvasDelayTime; // 0x2C
		::System::Single cutSceneAjustZ; // 0x30
		::MoleMole::Config::SceneChessboardCutSceneConfig_BodySize bodySize; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SCENECHESSBOARDCUTSCENECONFIG__CTOR_OFFSET))(this);
		}
	};
}
