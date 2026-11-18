#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Timeline/BaseTimeline/BaseTimelineBehavior.h"

namespace MoleMole::Timeline { class SceneLoadManagerParams; }

#define MOLEMOLE_TIMELINE_SCENELOADMANAGERCONTROLBEHAVIOR_EEEPHBMCNEN_OFFSET UNITYSDK_OFFSET(0x17E79330)
#define MOLEMOLE_TIMELINE_SCENELOADMANAGERCONTROLBEHAVIOR_JEINNALOJDE_OFFSET UNITYSDK_OFFSET(0x17E79320)
#define MOLEMOLE_TIMELINE_SCENELOADMANAGERCONTROLBEHAVIOR_ONPAUSE_OFFSET UNITYSDK_OFFSET(0x17E79260)
#define MOLEMOLE_TIMELINE_SCENELOADMANAGERCONTROLBEHAVIOR_ONPLAY_OFFSET UNITYSDK_OFFSET(0x17E791C0)
#define MOLEMOLE_TIMELINE_SCENELOADMANAGERCONTROLBEHAVIOR__CTOR_OFFSET UNITYSDK_OFFSET(0x17E792E0)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int SceneLoadManagerControlBehavior_TypeDefinitionIndex = 40490;

	class SceneLoadManagerControlBehavior : public ::MoleMole::Timeline::BaseTimeline::BaseTimelineBehavior
	{
	public:
		::MoleMole::Timeline::SceneLoadManagerParams* Params; // 0x18
		::System::Boolean isInit; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_SCENELOADMANAGERCONTROLBEHAVIOR__CTOR_OFFSET))(this);
		}

		::System::Void OnPlay()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_SCENELOADMANAGERCONTROLBEHAVIOR_ONPLAY_OFFSET))(this);
		}

		::System::Void OnPause()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_SCENELOADMANAGERCONTROLBEHAVIOR_ONPAUSE_OFFSET))(this);
		}

		::System::Void JEINNALOJDE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_SCENELOADMANAGERCONTROLBEHAVIOR_JEINNALOJDE_OFFSET))(this);
		}

		::System::Void EEEPHBMCNEN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_SCENELOADMANAGERCONTROLBEHAVIOR_EEEPHBMCNEN_OFFSET))(this);
		}
	};
}
