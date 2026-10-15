#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Threading/AsyncLocalValueChangedArgs_1.h"
#include "unitysdk/System/Object.h"
namespace System { class Action; }

namespace System::Threading
{
	template <typename T>
	class AsyncLocal_1 : public ::System::Object
	{
	public:
		::System::Action* m_valueChangedHandler; // 0x0
	};
}
