#pragma once
#include "unitysdk/unitysdk.h"
namespace System { class String; }

namespace RPG::CustomRP
{
	struct alignas(8) PPFilterStack_ScreenEffectParameter
	{
		::System::String* ScreenEffectPath; // 0x10
	};
}
