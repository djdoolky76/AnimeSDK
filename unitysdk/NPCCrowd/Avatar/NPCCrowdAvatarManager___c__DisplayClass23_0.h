#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class NPCAvatarMeshAssetsSO_FNPCAvatarLodMeshAssets;
namespace NPCCrowd::Avatar { class NPCAvatarGOReferenceComponentInfo; }

#define NPCCROWD_AVATAR_NPCCROWDAVATARMANAGER___C__DISPLAYCLASS23_0__CTOR_OFFSET UNITYSDK_OFFSET(0x11FC27D0)
#define NPCCROWD_AVATAR_NPCCROWDAVATARMANAGER___C__DISPLAYCLASS23_0__INITAVATARPARTMDBCOMPONENT_B__0_OFFSET UNITYSDK_OFFSET(0x11FC27E0)

namespace NPCCrowd::Avatar
{
	inline static constexpr unsigned int NPCCrowdAvatarManager___c__DisplayClass23_0_TypeDefinitionIndex = 61108;

	class NPCCrowdAvatarManager___c__DisplayClass23_0 : public ::System::Object
	{
	public:
		::NPCCrowd::Avatar::NPCAvatarGOReferenceComponentInfo* part; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCCROWDAVATARMANAGER___C__DISPLAYCLASS23_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _InitAvatarPartMdbComponent_b__0(::NPCAvatarMeshAssetsSO_FNPCAvatarLodMeshAssets* data)
		{
			return ((::System::Boolean(*)(::PVOID, ::NPCAvatarMeshAssetsSO_FNPCAvatarLodMeshAssets*))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCCROWDAVATARMANAGER___C__DISPLAYCLASS23_0__INITAVATARPARTMDBCOMPONENT_B__0_OFFSET))(this, data);
		}
	};
}
