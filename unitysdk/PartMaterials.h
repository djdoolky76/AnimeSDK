#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ENPCAvatarBodyPart.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"

#define PARTMATERIALS__CTOR_OFFSET UNITYSDK_OFFSET(0x194C4CF0)

inline static constexpr unsigned int PartMaterials_TypeDefinitionIndex = 73336;

class PartMaterials : public ::System::Object
{
public:
	::ENPCAvatarBodyPart partType; // 0x10
	::System::Byte _padding0[0x4];
	::Il2CppArray<::Foundation::AssetPath>* partMaterialAssetPaths; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PARTMATERIALS__CTOR_OFFSET))(this);
	}
};
