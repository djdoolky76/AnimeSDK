#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define ABC_UI_MONOTUTORIALSWIPELERPHANDLER__CTOR_OFFSET UNITYSDK_OFFSET(0x176D770)

namespace ABC::UI
{
	inline static constexpr unsigned int MonoTutorialSwipeLerpHandler_TypeDefinitionIndex = 6762;

	class MonoTutorialSwipeLerpHandler : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Single Value; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_UI_MONOTUTORIALSWIPELERPHANDLER__CTOR_OFFSET))(this);
		}
	};
}
