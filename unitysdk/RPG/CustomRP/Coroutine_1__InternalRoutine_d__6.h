#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::CustomRP { template <typename T> class Coroutine_1; }
namespace System { class Object; }
namespace System::Collections { class IEnumerator; }

namespace RPG::CustomRP
{
	template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
	class Coroutine_1__InternalRoutine_d__6 : public ::System::Object
	{
	public:
		::System::Int32 __1__state; // 0x0
		::System::Object* __2__current; // 0x0
		::System::Collections::IEnumerator* coroutine; // 0x0
		::RPG::CustomRP::Coroutine_1<T1>* __4__this; // 0x0
	};
}
