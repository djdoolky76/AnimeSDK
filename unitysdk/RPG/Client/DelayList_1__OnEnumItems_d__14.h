#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { template <typename T> class DelayList_1; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

namespace RPG::Client
{
	template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14>
	class DelayList_1__OnEnumItems_d__14 : public ::System::Object
	{
	public:
		::System::Int32 __1__state; // 0x0
		T1 __2__current; // 0x0
		::System::Int32 __l__initialThreadId; // 0x0
		::RPG::Client::DelayList_1<T2>* __4__this; // 0x0
		::System::Object* __7__wrap1; // 0x0
		::System::Collections::Generic::IEnumerator_1<T2>* __7__wrap2; // 0x0
	};
}
