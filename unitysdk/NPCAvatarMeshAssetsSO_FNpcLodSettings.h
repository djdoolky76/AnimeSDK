#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

inline static constexpr unsigned int NPCAvatarMeshAssetsSO_FNpcLodSettings_TypeDefinitionIndex = 48080;

struct alignas(4) NPCAvatarMeshAssetsSO_FNpcLodSettings
{
	::System::Boolean overrideDefaultLod; // 0x10
	::System::Byte _padding0[0x3];
	::System::Single lodBias; // 0x14
};
