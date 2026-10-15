#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }

namespace System::Dynamic::Utils
{
	template <typename T1, typename T2>
	class CacheDict_2 : public ::System::Object
	{
	public:
		::System::Int32 _mask; // 0x0
		::Il2CppArray<::System::Object*>* _entries; // 0x0
	};
}
