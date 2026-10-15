#pragma once
#include "unitysdk/unitysdk.h"
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

namespace Entitas
{
	template <typename T1, typename T2>
	class PrimaryEntityIndex_2
	{
	public:
		::System::Collections::Generic::Dictionary_2<T1, T2>* _index; // 0x0
	};
}
