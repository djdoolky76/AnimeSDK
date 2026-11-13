#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define RPG_CLIENT_ROADRASH_MONOROADRASHGAMEPREVIEWCAR_CTOR_OFFSET UNITYSDK_OFFSET(0x1C7B3B10)

namespace RPG::Client::RoadRash
{
	inline static constexpr unsigned int MonoRoadRashGamePreviewCar_TypeDefinitionIndex = 78185;

	class MonoRoadRashGamePreviewCar : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROADRASH_MONOROADRASHGAMEPREVIEWCAR_CTOR_OFFSET))(this);
		}

	};
}
