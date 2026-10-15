#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Nullable; }
namespace UnityEngine { class AnimationCurve; }

namespace RPG::Client
{
	template <typename T>
	class FullBodyBipedChainBlender_1 : public ::System::Object
	{
	public:
		::System::Nullable* StartValue; // 0x0
		::System::Single Time; // 0x0
		::System::Single Duration; // 0x0
		::UnityEngine::AnimationCurve* Curve; // 0x0
	};
}
