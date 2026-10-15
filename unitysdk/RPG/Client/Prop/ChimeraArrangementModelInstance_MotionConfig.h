#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace UnityEngine { class AnimationCurve; }

#define RPG_CLIENT_PROP_CHIMERAARRANGEMENTMODELINSTANCE_MOTIONCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0xDC489C0)

namespace RPG::Client::Prop
{
	class ChimeraArrangementModelInstance_MotionConfig : public ::System::Object
	{
	public:
		::System::Single Duration; // 0x10
		::System::Byte _padding0[0x4];
		::UnityEngine::AnimationCurve* Curve; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERAARRANGEMENTMODELINSTANCE_MOTIONCONFIG_CTOR_OFFSET))(this);
		}

	};
}
