#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Runtime/CompilerServices/AsyncTaskMethodBuilder.h"
#include "unitysdk/System/Runtime/CompilerServices/ConfiguredTaskAwaitable_ConfiguredTaskAwaiter.h"
#include "unitysdk/System/Threading/CancellationToken.h"
namespace System { class Object; }
namespace System::IO { class Stream; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define SYSTEM_IO_STREAM__COPYTOASYNCINTERNAL_D__27_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x3C21780)
#define SYSTEM_IO_STREAM__COPYTOASYNCINTERNAL_D__27_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x10B80)

namespace System::IO
{
	template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17, typename T18, typename T19, typename T20, typename T21, typename T22, typename T23, typename T24, typename T25, typename T26, typename T27>
	struct alignas(8) Stream__CopyToAsyncInternal_d__27
	{
		::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder; // 0x10
		::System::IO::Stream* destination; // 0x28
		::Il2CppArray<::System::Byte>* _buffer_5__1; // 0x30
		::System::IO::Stream* __4__this; // 0x38
		::System::Threading::CancellationToken cancellationToken; // 0x40
		::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter __u__1; // 0x48
		::System::Object* __u__2; // 0x58
		::System::Byte _padding0[0x8];
		::System::Int32 _bytesRead_5__2; // 0x68
		::System::Int32 bufferSize; // 0x6C
		::System::Int32 __1__state; // 0x70
		::System::Void MoveNext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_STREAM__COPYTOASYNCINTERNAL_D__27_MOVENEXT_OFFSET))(this);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + SYSTEM_IO_STREAM__COPYTOASYNCINTERNAL_D__27_SETSTATEMACHINE_OFFSET))(this, a1);
		}

	};
}
