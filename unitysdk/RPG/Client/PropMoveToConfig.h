#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
namespace UnityEngine { class AnimationCurve; }

#define RPG_CLIENT_PROPMOVETOCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0xDDF78A0)

namespace RPG::Client
{
	class PropMoveToConfig : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::AnimationCurve* MoveToCurveData; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROPMOVETOCONFIG_CTOR_OFFSET))(this);
		}

	};
}
