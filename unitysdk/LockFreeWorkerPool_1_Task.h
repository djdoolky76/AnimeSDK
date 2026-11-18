#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Action_2; }

inline static constexpr unsigned int LockFreeWorkerPool_1_Task_TypeDefinitionIndex = 38087;

template <typename T>
class LockFreeWorkerPool_1_Task : public ::System::Object
{
public:
	T parameters; // 0x0
	::System::Action_2<T, ::System::Int32>* function; // 0x0
};
