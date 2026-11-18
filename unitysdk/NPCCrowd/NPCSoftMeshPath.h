#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"

#define NPCCROWD_NPCSOFTMESHPATH__CTOR_1_OFFSET UNITYSDK_OFFSET(0xB2F4830)
#define NPCCROWD_NPCSOFTMESHPATH__CTOR_OFFSET UNITYSDK_OFFSET(0xB2F4810)

namespace NPCCrowd
{
	inline static constexpr unsigned int NPCSoftMeshPath_TypeDefinitionIndex = 58796;

	class NPCSoftMeshPath
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCSOFTMESHPATH__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::Foundation::AssetPath path)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::AssetPath))((::PBYTE)hIl2Cpp + NPCCROWD_NPCSOFTMESHPATH__CTOR_1_OFFSET))(this, path);
		}
	};
}
