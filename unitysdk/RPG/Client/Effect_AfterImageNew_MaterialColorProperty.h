#pragma once
#include "unitysdk/unitysdk.h"
namespace System { class String; }
namespace UnityEngine { class Gradient; }

namespace RPG::Client
{
	struct alignas(8) Effect_AfterImageNew_MaterialColorProperty
	{
		::System::String* name; // 0x10
		::UnityEngine::Gradient* gradient; // 0x18
	};
}
