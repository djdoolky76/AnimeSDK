#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/ValueType.h"

class CBDDODKFCIJ;
class CFMGIKJLMBJ;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define FOUNDATION_VIEWOBJECT_DONJON_EXITDONJONUTILS__ONBIGSCENEDUNGEONEND_D__4_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x726920)
#define FOUNDATION_VIEWOBJECT_DONJON_EXITDONJONUTILS__ONBIGSCENEDUNGEONEND_D__4_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2BEAE0)

namespace Foundation::ViewObject::Donjon
{
	inline static constexpr unsigned int ExitDonjonUtils__OnBigSceneDungeonEnd_d__4_TypeDefinitionIndex = 43279;

	template <typename T1, typename T2, typename T3, typename T4>
	struct alignas(8) ExitDonjonUtils__OnBigSceneDungeonEnd_d__4
	{
		::Cysharp::Threading::Tasks::UniTask_Awaiter __u__1; // 0x10
		::System::Action* onResultContextPrepared; // 0x20
		::System::Threading::CancellationToken ct; // 0x28
		::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder __t__builder; // 0x30
		::CBDDODKFCIJ* _context_5__2; // 0x40
		::System::Collections::Generic::List_1<::CFMGIKJLMBJ*>* ntfs; // 0x48
		::System::Boolean success; // 0x50
		::System::Byte _padding0[0x3];
		::System::Int32 __1__state; // 0x54

		::System::Void MoveNext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_DONJON_EXITDONJONUTILS__ONBIGSCENEDUNGEONEND_D__4_MOVENEXT_OFFSET))(this);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_DONJON_EXITDONJONUTILS__ONBIGSCENEDUNGEONEND_D__4_SETSTATEMACHINE_OFFSET))(this, stateMachine);
		}
	};
}
