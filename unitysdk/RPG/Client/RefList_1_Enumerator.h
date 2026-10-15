#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::Client { template <typename T> class RefList_1; }

namespace RPG::Client
{
	template <typename T>
	struct alignas(8) RefList_1_Enumerator
	{
		::RPG::Client::RefList_1<T>* list; // 0x0
		::System::Int32 index; // 0x0
		::System::Int32 version; // 0x0
		T current; // 0x0
	};
}
