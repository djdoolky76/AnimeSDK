#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace UnityEngine { class AnimationCurve; }

#define RPG_CLIENT_STAGEHARMONYCURVE_CTOR_OFFSET UNITYSDK_OFFSET(0xE10B5A0)

namespace RPG::Client
{
	class StageHarmonyCurve : public ::System::Object
	{
	public:
		::System::Single Scale; // 0x10
		::System::Byte _padding0[0x4];
		::UnityEngine::AnimationCurve* Curve; // 0x18
		::System::Int32 BeatRepeate; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGEHARMONYCURVE_CTOR_OFFSET))(this);
		}

	};
}
