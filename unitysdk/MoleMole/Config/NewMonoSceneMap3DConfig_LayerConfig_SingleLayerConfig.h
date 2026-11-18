#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Bounds.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define MOLEMOLE_CONFIG_NEWMONOSCENEMAP3DCONFIG_LAYERCONFIG_SINGLELAYERCONFIG_GET_EDITBOUNDS_OFFSET UNITYSDK_OFFSET(0x1BA498B0)
#define MOLEMOLE_CONFIG_NEWMONOSCENEMAP3DCONFIG_LAYERCONFIG_SINGLELAYERCONFIG_SET_EDITBOUNDS_OFFSET UNITYSDK_OFFSET(0x1BA498D0)
#define MOLEMOLE_CONFIG_NEWMONOSCENEMAP3DCONFIG_LAYERCONFIG_SINGLELAYERCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1BA498E0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int NewMonoSceneMap3DConfig_LayerConfig_SingleLayerConfig_TypeDefinitionIndex = 45118;

	class NewMonoSceneMap3DConfig_LayerConfig_SingleLayerConfig : public ::System::Object
	{
	public:
		::System::String* LayerName; // 0x10
		::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* ShowGameObjects; // 0x18
		::System::Boolean OverrideBounds; // 0x20
		::System::Byte _padding0[0x3];
		::UnityEngine::Bounds Bounds; // 0x24
		::System::Int32 Priority; // 0x3C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_NEWMONOSCENEMAP3DCONFIG_LAYERCONFIG_SINGLELAYERCONFIG__CTOR_OFFSET))(this);
		}

		::UnityEngine::Bounds get_EditBounds()
		{
			return ((::UnityEngine::Bounds(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_NEWMONOSCENEMAP3DCONFIG_LAYERCONFIG_SINGLELAYERCONFIG_GET_EDITBOUNDS_OFFSET))(this);
		}

		::System::Void set_EditBounds(::UnityEngine::Bounds EGEGIMGMJHN)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Bounds))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_NEWMONOSCENEMAP3DCONFIG_LAYERCONFIG_SINGLELAYERCONFIG_SET_EDITBOUNDS_OFFSET))(this, EGEGIMGMJHN);
		}
	};
}
