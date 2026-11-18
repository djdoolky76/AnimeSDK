#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MOLEMOLE_CONFIG_NEWMONOSCENEMAP3DCONFIG_GROUPSTATELAYERCONTROLITEM__CTOR_OFFSET UNITYSDK_OFFSET(0x1A76FAD0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int NewMonoSceneMap3DConfig_GroupStateLayerControlItem_TypeDefinitionIndex = 45125;

	class NewMonoSceneMap3DConfig_GroupStateLayerControlItem : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_NEWMONOSCENEMAP3DCONFIG_GROUPSTATELAYERCONTROLITEM__CTOR_OFFSET))(this);
		}
	};
}
