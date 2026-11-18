#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class NewMonoSceneMap3DConfig_BottomAndFontConfig; }
namespace MoleMole::Config { class NewMonoSceneMap3DConfig_GroupStateControlData; }
namespace MoleMole::Config { class NewMonoSceneMap3DConfig_LayerConfig; }

#define MOLEMOLE_CONFIG_NEWMONOSCENEMAP3DCONFIG_NEWCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1B935B10)

namespace MoleMole::Config
{
	inline static constexpr unsigned int NewMonoSceneMap3DConfig_NewConfig_TypeDefinitionIndex = 45122;

	class NewMonoSceneMap3DConfig_NewConfig : public ::System::Object
	{
	public:
		::MoleMole::Config::NewMonoSceneMap3DConfig_LayerConfig* LayerConfigData; // 0x10
		::MoleMole::Config::NewMonoSceneMap3DConfig_BottomAndFontConfig* BottomAndFontConfigData; // 0x18
		::MoleMole::Config::NewMonoSceneMap3DConfig_GroupStateControlData* GroupStateControlData; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_NEWMONOSCENEMAP3DCONFIG_NEWCONFIG__CTOR_OFFSET))(this);
		}
	};
}
