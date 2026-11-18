#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }

inline static constexpr unsigned int MKLOIFMMLMC_MPFEPAAIOKK_TypeDefinitionIndex = 57829;

struct alignas(8) MKLOIFMMLMC_MPFEPAAIOKK
{
	::System::Int32 AJJPHGLFOID; // 0x10
	::System::Byte _padding0[0x4];
	::System::String* HIAIKHDFCLN; // 0x18
	::System::Func_2<::System::Threading::CancellationToken, ::Cysharp::Threading::Tasks::UniTask>* PLBEAIIJADM; // 0x20
};
