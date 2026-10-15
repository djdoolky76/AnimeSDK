#pragma once
#include "unitysdk/unitysdk.h"
namespace System { class String; }
namespace System::Reflection { class MethodInfo; }
namespace UnityEngine { class MonoBehaviour; }

namespace RPG::CustomRP
{
	struct alignas(8) ActionEntry
	{
		::UnityEngine::MonoBehaviour* owner; // 0x10
		::System::Reflection::MethodInfo* method; // 0x18
		::System::String* displayName; // 0x20
	};
}
