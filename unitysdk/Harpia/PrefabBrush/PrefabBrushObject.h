#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define HARPIA_PREFABBRUSH_PREFABBRUSHOBJECT__CTOR_OFFSET UNITYSDK_OFFSET(0x176D770)

namespace Harpia::PrefabBrush
{
	inline static constexpr unsigned int PrefabBrushObject_TypeDefinitionIndex = 16386;

	class PrefabBrushObject : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HARPIA_PREFABBRUSH_PREFABBRUSHOBJECT__CTOR_OFFSET))(this);
		}
	};
}
