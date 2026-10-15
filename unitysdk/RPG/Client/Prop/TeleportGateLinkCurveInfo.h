#pragma once
#include "unitysdk/unitysdk.h"
namespace System { class String; }
namespace UnityEngine { class GameObject; }

namespace RPG::Client::Prop
{
	struct alignas(8) TeleportGateLinkCurveInfo
	{
		::System::Int32 StartIndex; // 0x10
		::System::Int32 EndIndex; // 0x14
		::UnityEngine::GameObject* CurveObject; // 0x18
		::System::Boolean EnableRaycastDetect; // 0x20
		::System::Byte _padding0[0x7];
		::System::String* CurveEffectPath; // 0x28
	};
}
