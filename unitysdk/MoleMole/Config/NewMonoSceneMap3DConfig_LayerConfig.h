#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_NEWMONOSCENEMAP3DCONFIG_LAYERCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1BA49830)

namespace MoleMole::Config
{
	inline static constexpr unsigned int NewMonoSceneMap3DConfig_LayerConfig_TypeDefinitionIndex = 45117;

	class NewMonoSceneMap3DConfig_LayerConfig : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::Object*>* LayerConfigs; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_NEWMONOSCENEMAP3DCONFIG_LAYERCONFIG__CTOR_OFFSET))(this);
		}
	};
}
