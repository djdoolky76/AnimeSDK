#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Rendering/ShadowCastingMode.h"
namespace UnityEngine { class Material; }

#define RPG_CLIENT_SCENE_INSTANCEARRAYMONOPLUGIN_INDEXEDMATERIAL_CTOR_OFFSET UNITYSDK_OFFSET(0xE0A02D0)

namespace RPG::Client
{
	class Scene_InstanceArrayMonoPlugin_IndexedMaterial : public ::System::Object
	{
	public:
		::System::Int32 id; // 0x10
		::System::Byte _padding0[0x4];
		::UnityEngine::Material* material; // 0x18
		::UnityEngine::Rendering::ShadowCastingMode CastShadows; // 0x20
		::System::Boolean ReceiveShadows; // 0x24
		::System::Byte _padding1[0x3];
		::System::UInt32 RenderingLayerMask; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SCENE_INSTANCEARRAYMONOPLUGIN_INDEXEDMATERIAL_CTOR_OFFSET))(this);
		}

	};
}
