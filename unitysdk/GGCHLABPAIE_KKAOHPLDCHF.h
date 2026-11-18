#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Runtime/CompilerServices/AsyncTaskMethodBuilder_1.h"
#include "unitysdk/System/Runtime/CompilerServices/TaskAwaiter_1.h"
#include "unitysdk/System/ValueType.h"

namespace NodeCanvas::Framework { class Graph; }
namespace NodeCanvas::Framework { class Node; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }
namespace System::Threading::Tasks { template <typename T> class Task_1; }

#define GGCHLABPAIE_KKAOHPLDCHF_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x7D21C0)
#define GGCHLABPAIE_KKAOHPLDCHF_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x52F5B0)

inline static constexpr unsigned int GGCHLABPAIE_KKAOHPLDCHF_TypeDefinitionIndex = 79322;

struct alignas(8) GGCHLABPAIE_KKAOHPLDCHF
{
	::NodeCanvas::Framework::Graph* HODAIDNDKHD; // 0x10
	::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Int32> ECODFICGLGM; // 0x18
	::System::Byte _padding0[0x10];
	::System::Threading::Tasks::Task_1<::System::Int32>* LLKFGJGKHHB; // 0x30
	::NodeCanvas::Framework::Node* KKJEBAEEJCA; // 0x38
	::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Int32> IELMICFKAAI; // 0x40
	::System::Int32 MDPILDGFNHN; // 0x48

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GGCHLABPAIE_KKAOHPLDCHF_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* PPFFGLLDOOL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + GGCHLABPAIE_KKAOHPLDCHF_SETSTATEMACHINE_OFFSET))(this, PPFFGLLDOOL);
	}
};
