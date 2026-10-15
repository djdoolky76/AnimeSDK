#pragma once
#include "unitysdk/unitysdk.h"
namespace System { class String; }

namespace RPG::Client::CrowdAnimator
{
	struct alignas(8) CrowdPrototype_AnimationClipInfo
	{
		::System::String* path; // 0x10
	};
}
