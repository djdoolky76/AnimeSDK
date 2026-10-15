#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }
namespace UnityEngine { class AnimationCurve; }

#define RPG_GAMECORE_PROJECTILECURVE_CTOR_OFFSET UNITYSDK_OFFSET(0xE71DC80)

namespace RPG::GameCore
{
	class ProjectileCurve : public ::System::Object
	{
	public:
		::System::String* Name; // 0x10
		::UnityEngine::AnimationCurve* Curve; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROJECTILECURVE_CTOR_OFFSET))(this);
		}

	};
}
