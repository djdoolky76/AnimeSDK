#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define PAMPELGAMES_ROADCONSTRUCTOR_PREVIEWROADPARENT__CTOR_OFFSET UNITYSDK_OFFSET(0x176D770)

namespace PampelGames::RoadConstructor
{
	inline static constexpr unsigned int PreviewRoadParent_TypeDefinitionIndex = 18780;

	class PreviewRoadParent : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PAMPELGAMES_ROADCONSTRUCTOR_PREVIEWROADPARENT__CTOR_OFFSET))(this);
		}
	};
}
