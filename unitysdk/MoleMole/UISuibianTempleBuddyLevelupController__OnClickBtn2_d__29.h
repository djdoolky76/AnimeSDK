#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskVoidMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/ValueType.h"

class INBCNFOEDGH;
class MatAnimation;
namespace MoleMole { class UISuibianTempleBuddyLevelupController; }
namespace System { class Object; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }
namespace UnityEngine { class Animation; }

#define MOLEMOLE_UISUIBIANTEMPLEBUDDYLEVELUPCONTROLLER__ONCLICKBTN2_D__29_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x7C9710)
#define MOLEMOLE_UISUIBIANTEMPLEBUDDYLEVELUPCONTROLLER__ONCLICKBTN2_D__29_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2BEAE0)

namespace MoleMole
{
	inline static constexpr unsigned int UISuibianTempleBuddyLevelupController__OnClickBtn2_d__29_TypeDefinitionIndex = 42712;

	template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17, typename T18, typename T19, typename T20, typename T21, typename T22, typename T23, typename T24, typename T25, typename T26, typename T27, typename T28, typename T29>
	struct alignas(8) UISuibianTempleBuddyLevelupController__OnClickBtn2_d__29
	{
		::INBCNFOEDGH* _rsp_5__2; // 0x10
		::Cysharp::Threading::Tasks::UniTask_Awaiter __u__2; // 0x18
		::UnityEngine::Animation* _anim_5__4; // 0x28
		::System::Object* __u__1; // 0x30
		::System::Byte _padding0[0x10];
		::MoleMole::UISuibianTempleBuddyLevelupController* __4__this; // 0x48
		::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder __t__builder; // 0x50
		::System::Object* __8__1; // 0x58
		::System::Object* __8__2; // 0x60
		::MatAnimation* _matAnim_5__3; // 0x68
		::System::Single _delay_5__5; // 0x70
		::System::Int32 __1__state; // 0x74

		::System::Void MoveNext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLEBUDDYLEVELUPCONTROLLER__ONCLICKBTN2_D__29_MOVENEXT_OFFSET))(this);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLEBUDDYLEVELUPCONTROLLER__ONCLICKBTN2_D__29_SETSTATEMACHINE_OFFSET))(this, stateMachine);
		}
	};
}
