#pragma once
#include "unitysdk/unitysdk.h"
namespace System { class String; }
namespace UnityEngine { class Material; }

namespace RPG::Client
{
	struct alignas(8) MaterialReplaceUnit
	{
		::System::String* rendererName; // 0x10
		::Il2CppArray<::UnityEngine::Material*>* materials; // 0x18
	};
}
