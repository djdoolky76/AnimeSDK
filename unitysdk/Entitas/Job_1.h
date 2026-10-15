#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Exception; }

namespace Entitas
{
	template <typename T>
	class Job_1 : public ::System::Object
	{
	public:
		::Il2CppArray<T>* entities; // 0x0
		::System::Int32 from; // 0x0
		::System::Int32 to; // 0x0
		::System::Exception* exception; // 0x0
	};
}
