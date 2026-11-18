#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class NPCAvatarMeshAssetsSO_FNPCAvatarLodMeshAssets;

#define NPCAVATARUTILS___C__DISPLAYCLASS20_1__CTOR_OFFSET UNITYSDK_OFFSET(0x11F8FE30)
#define NPCAVATARUTILS___C__DISPLAYCLASS20_1__LOADMESHGPULODASYNC_B__0_OFFSET UNITYSDK_OFFSET(0x11F8FE40)

inline static constexpr unsigned int NPCAvatarUtils___c__DisplayClass20_1_TypeDefinitionIndex = 47753;

template <typename T>
class NPCAvatarUtils___c__DisplayClass20_1 : public ::System::Object
{
public:
	::System::Object* CS___8__locals1; // 0x10
	::System::Int32 i; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCAVATARUTILS___C__DISPLAYCLASS20_1__CTOR_OFFSET))(this);
	}

	::System::Boolean _LoadMeshGPULODAsync_b__0(::NPCAvatarMeshAssetsSO_FNPCAvatarLodMeshAssets* data)
	{
		return ((::System::Boolean(*)(::PVOID, ::NPCAvatarMeshAssetsSO_FNPCAvatarLodMeshAssets*))((::PBYTE)hIl2Cpp + NPCAVATARUTILS___C__DISPLAYCLASS20_1__LOADMESHGPULODASYNC_B__0_OFFSET))(this, data);
	}
};
