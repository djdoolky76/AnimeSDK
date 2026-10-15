#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder_1.h"
#include "unitysdk/GGPBLIJNGNC.h"
#include "unitysdk/System/Threading/CancellationToken.h"
namespace Google::Protobuf { class IMessage; }
namespace System { class Object; }

inline static constexpr unsigned int NEJPJAPAHMF__SendPacketAsync_d__2_1_TypeDefinitionIndex = 80503;

	template <typename T>
	struct alignas(8) NEJPJAPAHMF__SendPacketAsync_d__2_1
	{
		::System::Int32 __1__state; // 0x0
		::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder_1<T> __t__builder; // 0x0
		::Google::Protobuf::IMessage* data; // 0x0
		::GGPBLIJNGNC options; // 0x0
		::System::Threading::CancellationToken ct; // 0x0
		::System::Object* __u__1; // 0x0
	};
