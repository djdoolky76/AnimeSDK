#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Runtime/CompilerServices/AsyncTaskMethodBuilder_1.h"
#include "unitysdk/System/Runtime/CompilerServices/ConfiguredTaskAwaitable_ConfiguredTaskAwaiter.h"
#include "unitysdk/System/Security/Cryptography/CryptoStream_HopToThreadPoolAwaitable.h"
#include "unitysdk/System/Threading/CancellationToken.h"
namespace System { class Object; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }
namespace System::Security::Cryptography { class CryptoStream; }
namespace System::Threading { class SemaphoreSlim; }

#define SYSTEM_SECURITY_CRYPTOGRAPHY_CRYPTOSTREAM__READASYNCINTERNAL_D__34_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x3C24E90)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_CRYPTOSTREAM__READASYNCINTERNAL_D__34_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x10AE0)

namespace System::Security::Cryptography
{
	inline static constexpr unsigned int CryptoStream__ReadAsyncInternal_d__34_TypeDefinitionIndex = 1014;

	template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17, typename T18, typename T19, typename T20, typename T21, typename T22, typename T23, typename T24, typename T25, typename T26, typename T27, typename T28, typename T29, typename T30, typename T31, typename T32, typename T33, typename T34>
	struct alignas(8) CryptoStream__ReadAsyncInternal_d__34
	{
		::System::Security::Cryptography::CryptoStream* __4__this; // 0x10
		::Il2CppArray<::System::Byte>* _tempInputBuffer_5__1; // 0x18
		::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Int32> __t__builder; // 0x20
		::System::Byte _padding0[0x10];
		::System::Threading::SemaphoreSlim* _sem_5__4; // 0x38
		::System::Threading::CancellationToken cancellationToken; // 0x40
		::System::Object* __u__3; // 0x48
		::System::Byte _padding1[0x8];
		::Il2CppArray<::System::Byte>* buffer; // 0x58
		::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter __u__2; // 0x60
		::System::Int32 __1__state; // 0x70
		::System::Int32 offset; // 0x74
		::System::Int32 count; // 0x78
		::System::Int32 _currentOutputIndex_5__2; // 0x7C
		::System::Int32 _bytesToDeliver_5__3; // 0x80
		::System::Security::Cryptography::CryptoStream_HopToThreadPoolAwaitable __u__1; // 0x84
		::System::Byte _padding2[0x3];
		::System::Int32 __7__wrap1; // 0x88
		::System::Void MoveNext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_CRYPTOSTREAM__READASYNCINTERNAL_D__34_MOVENEXT_OFFSET))(this);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_CRYPTOSTREAM__READASYNCINTERNAL_D__34_SETSTATEMACHINE_OFFSET))(this, a1);
		}

	};
}
