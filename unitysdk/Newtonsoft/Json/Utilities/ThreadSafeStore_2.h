#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

namespace Newtonsoft::Json::Utilities
{
	template <typename T1, typename T2>
	class ThreadSafeStore_2 : public ::System::Object
	{
	public:
		::System::Object* _lock; // 0x0
		::System::Collections::Generic::Dictionary_2<T1, T2>* _store; // 0x0
		::System::Func_2<T1, T2>* _creator; // 0x0
	};
}
