#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Action; }
namespace System { template <typename T> class Func_1; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }

namespace UnityEngine::ProBuilder
{
	template <typename T>
	class ObjectPool_1 : public ::System::Object
	{
	public:
		::System::Boolean m_IsDisposed; // 0x0
		::System::Collections::Generic::Queue_1<T>* m_Pool; // 0x0
		::System::Int32 desiredSize; // 0x0
		::System::Func_1<T>* constructor; // 0x0
		::System::Action* destructor; // 0x0
	};
}
