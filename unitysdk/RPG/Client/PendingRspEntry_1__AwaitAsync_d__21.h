#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/RPG/Client/PacketSendResult_1.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/Threading/CancellationTokenRegistration.h"
namespace RPG::Client { template <typename T> class PendingRspEntry_1; }
namespace System { class Object; }
namespace System::Threading { class CancellationTokenSource; }

namespace RPG::Client
{
	inline static constexpr unsigned int PendingRspEntry_1__AwaitAsync_d__21_TypeDefinitionIndex = 69409;

	template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17, typename T18, typename T19, typename T20, typename T21>
	struct alignas(8) PendingRspEntry_1__AwaitAsync_d__21
	{
		::System::Int32 __1__state; // 0x0
		::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder __t__builder; // 0x0
		::System::Threading::CancellationToken ct; // 0x0
		::RPG::Client::PendingRspEntry_1<T1>* __4__this; // 0x0
		::System::Threading::CancellationTokenRegistration _ctReg_5__2; // 0x0
		::System::Threading::CancellationTokenSource* _timeoutCts_5__3; // 0x0
		::System::Object* __u__1; // 0x0
	};
}
