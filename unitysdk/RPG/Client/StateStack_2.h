#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Action; }
namespace System { class Object; }
namespace System { template <typename T> class Func_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

namespace RPG::Client
{
	template <typename T1, typename T2>
	class StateStack_2 : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::Object*>* stateInfos; // 0x0
		::System::Func_1<T1>* mGetter; // 0x0
		::System::Action* mSetter; // 0x0
		::System::Boolean _AlwaysInvoke_k__BackingField; // 0x0
	};
}
