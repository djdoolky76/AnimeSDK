#pragma once
#include "unitysdk/unitysdk.h"
namespace System { class String; }

namespace UnityEngine::Windows::Speech
{
	struct alignas(8) SemanticMeaning
	{
		::System::String* key; // 0x10
		::Il2CppArray<::System::String*>* values; // 0x18
	};
}
