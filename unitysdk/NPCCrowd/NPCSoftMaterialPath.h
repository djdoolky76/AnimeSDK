#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"

#define NPCCROWD_NPCSOFTMATERIALPATH__CTOR_1_OFFSET UNITYSDK_OFFSET(0xF1597D0)
#define NPCCROWD_NPCSOFTMATERIALPATH__CTOR_OFFSET UNITYSDK_OFFSET(0xF1597B0)

namespace NPCCrowd
{
	inline static constexpr unsigned int NPCSoftMaterialPath_TypeDefinitionIndex = 44359;

	class NPCSoftMaterialPath
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCSOFTMATERIALPATH__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::Foundation::AssetPath path)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::AssetPath))((::PBYTE)hIl2Cpp + NPCCROWD_NPCSOFTMATERIALPATH__CTOR_1_OFFSET))(this, path);
		}
	};
}
