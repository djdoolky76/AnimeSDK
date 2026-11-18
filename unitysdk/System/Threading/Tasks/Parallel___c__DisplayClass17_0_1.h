#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class OperationCanceledException; }
namespace System { template <typename T1, typename T2, typename T3, typename T4> class Func_4; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Action_1; }
namespace System { template <typename T> class Func_1; }
namespace System::Threading::Tasks { class ParallelForReplicatingTask; }
namespace System::Threading::Tasks { class ParallelLoopState; }
namespace System::Threading::Tasks { class ParallelLoopStateFlags32; }
namespace System::Threading::Tasks { class ParallelOptions; }
namespace System::Threading::Tasks { class RangeManager; }

namespace System::Threading::Tasks
{
	inline static constexpr unsigned int Parallel___c__DisplayClass17_0_1_TypeDefinitionIndex = 888;

	template <typename T>
	class Parallel___c__DisplayClass17_0_1 : public ::System::Object
	{
	public:
		::System::Threading::Tasks::ParallelLoopStateFlags32* sharedPStateFlags; // 0x0
		::System::OperationCanceledException* oce; // 0x0
		::System::Threading::Tasks::ParallelOptions* parallelOptions; // 0x0
		::System::Threading::Tasks::ParallelForReplicatingTask* rootTask; // 0x0
		::System::Threading::Tasks::RangeManager* rangeManager; // 0x0
		::System::Action_2<::System::Int32, ::System::Threading::Tasks::ParallelLoopState*>* bodyWithState; // 0x0
		::System::Func_4<::System::Int32, ::System::Threading::Tasks::ParallelLoopState*, T, T>* bodyWithLocal; // 0x0
		::System::Func_1<T>* localInit; // 0x0
		::System::Action_1<::System::Int32>* body; // 0x0
		::System::Action_1<T>* localFinally; // 0x0
	};
}
