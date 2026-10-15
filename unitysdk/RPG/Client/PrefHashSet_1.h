#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::Client { template <typename T> class PrefHashSet_1; }
namespace System { template <typename T> class Action_1; }

namespace RPG::Client
{
	inline static constexpr unsigned int PrefHashSet_1_TypeDefinitionIndex = 35320;

	template <typename T>
	class PrefHashSet_1
	{
	public:
		::System::Action_1<::RPG::Client::PrefHashSet_1<T>*>* onChanged; // 0x0
	};
}
