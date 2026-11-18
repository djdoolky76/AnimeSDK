#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder_1.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/Threading/CancellationTokenRegistration.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/System/ValueType.h"

class PKDEEDPGBOD;
namespace System { class Object; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define MOLEMOLE_UIABYSSS2MAPREFRESHPAGECONTROLLER__SENDREFRESHMAPREQ_D__18_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x7F4190)
#define MOLEMOLE_UIABYSSS2MAPREFRESHPAGECONTROLLER__SENDREFRESHMAPREQ_D__18_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2BEAE0)

namespace MoleMole
{
	inline static constexpr unsigned int UIAbyssS2MapRefreshPageController__SendRefreshMapReq_d__18_TypeDefinitionIndex = 51167;

	template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17, typename T18>
	struct alignas(8) UIAbyssS2MapRefreshPageController__SendRefreshMapReq_d__18
	{
		::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder_1<::System::ValueTuple_2<::System::Boolean, ::PKDEEDPGBOD*>> __t__builder; // 0x10
		::System::Byte _padding0[0x18];
		::System::Threading::CancellationTokenRegistration __7__wrap1; // 0x30
		::System::Threading::CancellationToken ctsToken; // 0x48
		::System::Object* __u__1; // 0x50
		::System::Byte _padding1[0x18];
		::System::Int32 __1__state; // 0x70
		::System::Int32 targetRouteMapID; // 0x74

		::System::Void MoveNext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2MAPREFRESHPAGECONTROLLER__SENDREFRESHMAPREQ_D__18_MOVENEXT_OFFSET))(this);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2MAPREFRESHPAGECONTROLLER__SENDREFRESHMAPREQ_D__18_SETSTATEMACHINE_OFFSET))(this, stateMachine);
		}
	};
}
