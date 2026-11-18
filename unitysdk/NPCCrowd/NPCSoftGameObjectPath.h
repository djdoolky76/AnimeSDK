#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"

#define NPCCROWD_NPCSOFTGAMEOBJECTPATH__CTOR_1_OFFSET UNITYSDK_OFFSET(0xF159790)
#define NPCCROWD_NPCSOFTGAMEOBJECTPATH__CTOR_OFFSET UNITYSDK_OFFSET(0xF159770)

namespace NPCCrowd
{
	inline static constexpr unsigned int NPCSoftGameObjectPath_TypeDefinitionIndex = 40716;

	class NPCSoftGameObjectPath
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCSOFTGAMEOBJECTPATH__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::Foundation::AssetPath path)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::AssetPath))((::PBYTE)hIl2Cpp + NPCCROWD_NPCSOFTGAMEOBJECTPATH__CTOR_1_OFFSET))(this, path);
		}
	};
}
