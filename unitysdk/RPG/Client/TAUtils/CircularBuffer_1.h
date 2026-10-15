#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::TAUtils
{
	template <typename T>
	class CircularBuffer_1 : public ::System::Object
	{
	public:
		::Il2CppArray<T>* _Buffer; // 0x0
		::System::Int32 _StartIndex; // 0x0
		::System::Int32 _Count; // 0x0
		::System::Int32 _Capacity; // 0x0
	};
}
