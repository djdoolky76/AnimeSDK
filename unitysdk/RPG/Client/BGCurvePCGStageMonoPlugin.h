#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define RPG_CLIENT_BGCURVEPCGSTAGEMONOPLUGIN_CTOR_OFFSET UNITYSDK_OFFSET(0xC7DD3C0)

namespace RPG::Client
{
	class BGCurvePCGStageMonoPlugin : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BGCURVEPCGSTAGEMONOPLUGIN_CTOR_OFFSET))(this);
		}

	};
}
