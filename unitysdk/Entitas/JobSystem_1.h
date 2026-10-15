#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace Entitas { class IGroup; }
namespace Entitas { template <typename T> class Job_1; }

namespace Entitas
{
	template <typename T>
	class JobSystem_1 : public ::System::Object
	{
	public:
		::Entitas::IGroup* _group; // 0x0
		::System::Int32 _threads; // 0x0
		::Il2CppArray<::Entitas::Job_1<T>*>* _jobs; // 0x0
		::System::Int32 _threadsRunning; // 0x0
	};
}
