#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class NPCAvatarMeshAssetsSO_FNPCAvatarLodMeshAssets;

#define NPCAVATARMESHASSETSSO___C__DISPLAYCLASS68_0__CTOR_OFFSET UNITYSDK_OFFSET(0x115B1750)
#define NPCAVATARMESHASSETSSO___C__DISPLAYCLASS68_0__GETORADDMESHASSETS_B__0_OFFSET UNITYSDK_OFFSET(0x115B1760)

inline static constexpr unsigned int NPCAvatarMeshAssetsSO___c__DisplayClass68_0_TypeDefinitionIndex = 48094;

class NPCAvatarMeshAssetsSO___c__DisplayClass68_0 : public ::System::Object
{
public:
	::System::Int32 id; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCAVATARMESHASSETSSO___C__DISPLAYCLASS68_0__CTOR_OFFSET))(this);
	}

	::System::Boolean _GetOrAddMeshAssets_b__0(::NPCAvatarMeshAssetsSO_FNPCAvatarLodMeshAssets* m)
	{
		return ((::System::Boolean(*)(::PVOID, ::NPCAvatarMeshAssetsSO_FNPCAvatarLodMeshAssets*))((::PBYTE)hIl2Cpp + NPCAVATARMESHASSETSSO___C__DISPLAYCLASS68_0__GETORADDMESHASSETS_B__0_OFFSET))(this, m);
	}
};
