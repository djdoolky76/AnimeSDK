#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore
{
	template <typename T>
	class LockableList_1 : public ::System::Object
	{
	public:
		::Il2CppArray<T>* _Datas; // 0x0
		::System::Int32 _Count; // 0x0
		::System::Int32 _LockDepth; // 0x0
		::System::Int32 _RemovingIndex; // 0x0
	};
}
