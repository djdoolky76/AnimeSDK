#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class MeshFilter; }
namespace UnityEngine { class MeshRenderer; }

#define NPCCROWD_AVATAR_NPCAVATARGOREFERENCESIMPLEMODELCOMPONENTINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x14F31CE0)

namespace NPCCrowd::Avatar
{
	inline static constexpr unsigned int NPCAvatarGOReferenceSimpleModelComponentInfo_TypeDefinitionIndex = 77094;

	class NPCAvatarGOReferenceSimpleModelComponentInfo : public ::System::Object
	{
	public:
		::UnityEngine::GameObject* simpleGpuGo; // 0x10
		::UnityEngine::MeshFilter* simpleGpuMF; // 0x18
		::UnityEngine::Material* simpleGpuDitherMaterial; // 0x20
		::UnityEngine::Material* simpleGpuMaterial; // 0x28
		::UnityEngine::MeshRenderer* simpleGpuMR; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCAVATARGOREFERENCESIMPLEMODELCOMPONENTINFO__CTOR_OFFSET))(this);
		}
	};
}
