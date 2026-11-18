#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/DroneExplodeTargetRenderer_IOCMLGAMCHJ.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define MOLEMOLE_DRONEEXPLODETARGETRENDERER_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x19B36830)
#define MOLEMOLE_DRONEEXPLODETARGETRENDERER_TRIGGERINTERACT_OFFSET UNITYSDK_OFFSET(0x19B367E0)
#define MOLEMOLE_DRONEEXPLODETARGETRENDERER__CTOR_OFFSET UNITYSDK_OFFSET(0x19B36880)

namespace MoleMole
{
	inline static constexpr unsigned int DroneExplodeTargetRenderer_TypeDefinitionIndex = 53043;

	class DroneExplodeTargetRenderer : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_DRONEEXPLODETARGETRENDERER__CTOR_OFFSET))(this);
		}

		::System::Void TriggerInteract(::MoleMole::DroneExplodeTargetRenderer_IOCMLGAMCHJ PAECIAANMPC)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::DroneExplodeTargetRenderer_IOCMLGAMCHJ))((::PBYTE)hIl2Cpp + MOLEMOLE_DRONEEXPLODETARGETRENDERER_TRIGGERINTERACT_OFFSET))(this, PAECIAANMPC);
		}

		::System::Void Initialize(::System::Boolean HJONLICJCJI, ::System::Boolean FIOEIEDAPKK)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_DRONEEXPLODETARGETRENDERER_INITIALIZE_OFFSET))(this, HJONLICJCJI, FIOEIEDAPKK);
		}
	};
}
