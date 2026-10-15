#pragma once
#include "unitysdk/unitysdk.h"
namespace System { class Object; }

namespace RPG::GameCore
{
	template <typename T1, typename T2>
	struct alignas(8) AdapterEnumerator64_2
	{
		::System::Int32 index; // 0x0
		::System::Int32 totalCount; // 0x0
		T1 current; // 0x0
		::System::Object* enumerator; // 0x0
		::System::Object* dictEnumerator; // 0x0
		::System::Boolean isDictEnumerator; // 0x0
	};
}
