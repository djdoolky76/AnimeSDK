#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Threading { class AutoResetEvent; }
namespace System::Threading { class Thread; }
template <typename T> class LockFreeSPSCQueue_1;

inline static constexpr unsigned int LockFreeWorkerPool_1_TypeDefinitionIndex = 38086;

template <typename T>
class LockFreeWorkerPool_1 : public ::System::Object
{
public:
	::System::Int32 _threadCount; // 0x0
	::Il2CppArray<::System::Threading::Thread*>* _threads; // 0x0
	::Il2CppArray<::LockFreeSPSCQueue_1<::System::Object*>*>* _taskQueues; // 0x0
	::Il2CppArray<::System::Threading::AutoResetEvent*>* _taskAvailable; // 0x0
	::System::Boolean _running; // 0x0
};
