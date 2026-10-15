#pragma once
#include "unitysdk/unitysdk.h"
namespace System { class Object; }

namespace System::Threading::Tasks
{
	template <typename T>
	struct alignas(8) ValueTask_1
	{
		::System::Object* _obj; // 0x0
		T _result; // 0x0
		::System::Int16 _token; // 0x0
		::System::Boolean _continueOnCapturedContext; // 0x0
	};
}
