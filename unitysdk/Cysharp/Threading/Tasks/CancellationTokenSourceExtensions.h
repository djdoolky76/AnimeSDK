#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/DelayType.h"
#include "unitysdk/Cysharp/Threading/Tasks/PlayerLoopTiming.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/TimeSpan.h"

namespace System { class IDisposable; }
namespace System { template <typename T> class Action_1; }
namespace System::Threading { class CancellationTokenSource; }

#define CYSHARP_THREADING_TASKS_CANCELLATIONTOKENSOURCEEXTENSIONS_CANCELAFTERSLIM_OFFSET UNITYSDK_OFFSET(0x1FE8AFE0)
#define CYSHARP_THREADING_TASKS_CANCELLATIONTOKENSOURCEEXTENSIONS_CANCELCANCELLATIONTOKENSOURCESTATE_OFFSET UNITYSDK_OFFSET(0x1FE8AF60)
#define CYSHARP_THREADING_TASKS_CANCELLATIONTOKENSOURCEEXTENSIONS__CCTOR_OFFSET UNITYSDK_OFFSET(0x1FE8B090)

namespace Cysharp::Threading::Tasks
{
	inline static constexpr unsigned int CancellationTokenSourceExtensions_TypeDefinitionIndex = 31238;

	class CancellationTokenSourceExtensions : public ::System::Object
	{
	public:
		static ::System::Action_1<::System::Object*>** StaticGet_CancelCancellationTokenSourceStateDelegate()
		{
			return (::System::Action_1<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(CancellationTokenSourceExtensions_TypeDefinitionIndex)->GetStaticField(0x282F0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_CANCELLATIONTOKENSOURCEEXTENSIONS__CCTOR_OFFSET))();
		}

		static ::System::Void CancelCancellationTokenSourceState(::System::Object* state)
		{
			return ((::System::Void(*)(::System::Object*))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_CANCELLATIONTOKENSOURCEEXTENSIONS_CANCELCANCELLATIONTOKENSOURCESTATE_OFFSET))(state);
		}

		static ::System::IDisposable* CancelAfterSlim(::System::Threading::CancellationTokenSource* cts, ::System::TimeSpan delayTimeSpan, ::Cysharp::Threading::Tasks::DelayType delayType, ::Cysharp::Threading::Tasks::PlayerLoopTiming delayTiming)
		{
			return ((::System::IDisposable*(*)(::System::Threading::CancellationTokenSource*, ::System::TimeSpan, ::Cysharp::Threading::Tasks::DelayType, ::Cysharp::Threading::Tasks::PlayerLoopTiming))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_CANCELLATIONTOKENSOURCEEXTENSIONS_CANCELAFTERSLIM_OFFSET))(cts, delayTimeSpan, delayType, delayTiming);
		}
	};
}
