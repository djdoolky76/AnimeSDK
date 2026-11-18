#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Threading { class AutoResetEvent; }
namespace System::Threading { class Thread; }
template <typename T> class LockFreeWorkStealingDeque_1;

inline static constexpr unsigned int LockFreeWorkStealingWorkerPool_1_TypeDefinitionIndex = 38083;

template <typename T>
class LockFreeWorkStealingWorkerPool_1 : public ::System::Object
{
public:
	::System::Int32 _threadCount; // 0x0
	::Il2CppArray<::System::Threading::Thread*>* _threads; // 0x0
	::Il2CppArray<::LockFreeWorkStealingDeque_1<::System::Object*>*>* _taskQueues; // 0x0
	::Il2CppArray<::System::Threading::AutoResetEvent*>* _taskAvailable; // 0x0
	::System::Boolean _running; // 0x0
};
