#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

namespace RPG::Client
{
	template <typename T>
	class LuaEvent_1 : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::Object*>* _Events; // 0x0
	};
}
