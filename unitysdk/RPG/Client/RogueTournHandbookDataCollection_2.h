#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

namespace RPG::Client
{
	template <typename T1, typename T2>
	class RogueTournHandbookDataCollection_2 : public ::System::Object
	{
	public:
		::System::UInt32 _UnlockedCount_k__BackingField; // 0x0
		::System::Collections::Generic::Dictionary_2<T1, T2>* _DataItems; // 0x0
	};
}
