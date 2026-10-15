#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"
namespace System { class String; }
namespace UnityEngine { class AnimationCurve; }

#define RPG_CLIENT_CAMERABLENDCURVE_CTOR_OFFSET UNITYSDK_OFFSET(0xC92C160)

namespace RPG::Client
{
	class CameraBlendCurve : public ::UnityEngine::ScriptableObject
	{
	public:
		::System::String* CurveName; // 0x18
		::UnityEngine::AnimationCurve* Curve; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERABLENDCURVE_CTOR_OFFSET))(this);
		}

	};
}
