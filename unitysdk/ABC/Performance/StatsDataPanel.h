#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace UnityEngine { class GameObject; }

#define ABC_PERFORMANCE_STATSDATAPANEL__CTOR_OFFSET UNITYSDK_OFFSET(0x176D770)

namespace ABC::Performance
{
	inline static constexpr unsigned int StatsDataPanel_TypeDefinitionIndex = 8787;

	class StatsDataPanel : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::GameObject* ItemContainer; // 0x20
		::UnityEngine::GameObject* ShowItemTemplate; // 0x28
		::UnityEngine::GameObject* Container; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_PERFORMANCE_STATSDATAPANEL__CTOR_OFFSET))(this);
		}
	};
}
