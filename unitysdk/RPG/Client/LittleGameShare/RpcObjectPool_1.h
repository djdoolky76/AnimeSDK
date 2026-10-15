#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Action; }
namespace System::Collections::Concurrent { template <typename T> class ConcurrentQueue_1; }

namespace RPG::Client::LittleGameShare
{
	template <typename T>
	class RpcObjectPool_1 : public ::System::Object
	{
	public:
		::System::Collections::Concurrent::ConcurrentQueue_1<T>* _pool; // 0x0
		::System::Action* _onReturn; // 0x0
	};
}
