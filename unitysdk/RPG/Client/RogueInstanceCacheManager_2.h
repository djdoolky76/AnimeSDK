#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

namespace RPG::Client
{
	template <typename T1, typename T2>
	class RogueInstanceCacheManager_2 : public ::System::Object
	{
	public:
		::System::Func_2<T1, T2>* _CreateInstanceImpl; // 0x0
		::System::Collections::Generic::Dictionary_2<T1, T2>* _CachedInstances; // 0x0
	};
}
