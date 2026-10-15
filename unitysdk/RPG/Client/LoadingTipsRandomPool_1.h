#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

namespace RPG::Client
{
	template <typename T>
	class LoadingTipsRandomPool_1 : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<T, ::System::UInt32>* _Items; // 0x0
		::System::UInt32 _WeightSum; // 0x0
	};
}
