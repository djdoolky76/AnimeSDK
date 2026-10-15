#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace UnityEngine { class Mesh; }

#define RPG_CLIENT_SCENE_INSTANCEARRAYMONOPLUGIN_INDEXEDMESH_CTOR_OFFSET UNITYSDK_OFFSET(0xE0A02E0)

namespace RPG::Client
{
	class Scene_InstanceArrayMonoPlugin_IndexedMesh : public ::System::Object
	{
	public:
		::System::Int32 id; // 0x10
		::System::Byte _padding0[0x4];
		::UnityEngine::Mesh* mesh; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SCENE_INSTANCEARRAYMONOPLUGIN_INDEXEDMESH_CTOR_OFFSET))(this);
		}

	};
}
