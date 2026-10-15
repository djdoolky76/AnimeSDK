#pragma once
#include "unitysdk/unitysdk.h"
namespace System { class String; }
namespace UnityEngine { class Material; }

namespace RPG::Client
{
	struct alignas(8) ReplaceMaterialsBlock
	{
		::System::String* RendererName; // 0x10
		::Il2CppArray<::UnityEngine::Material*>* Materials; // 0x18
	};
}
