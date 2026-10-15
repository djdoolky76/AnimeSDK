#pragma once
#include "unitysdk/unitysdk.h"
namespace System { class String; }
namespace UnityEngine { class SkinnedMeshRenderer; }

#define RPG_CLIENT_ASTRAFX_ASTRAFX_SKINNEDMESH_SKINNEDMESHBINDER_GET_VALID_OFFSET UNITYSDK_OFFSET(0xE1490)

namespace RPG::Client::AstraFX
{
	struct alignas(8) AstraFX_SkinnedMesh_SkinnedMeshBinder
	{
		::UnityEngine::SkinnedMeshRenderer* SkinnedMesh; // 0x10
		::System::String* BindName; // 0x18
		::System::Boolean get_Valid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASTRAFX_ASTRAFX_SKINNEDMESH_SKINNEDMESHBINDER_GET_VALID_OFFSET))(this);
		}

	};
}
