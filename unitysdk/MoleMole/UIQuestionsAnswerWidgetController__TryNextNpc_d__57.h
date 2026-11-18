#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/ValueType.h"

class HOHJMEHNANH;
class KDNHFAFMKKE;
class NJCGAEIPJEK;
namespace MoleMole { class UIQuestionsAnswerWidgetController; }
namespace System { class Object; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER__TRYNEXTNPC_D__57_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x772DE0)
#define MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER__TRYNEXTNPC_D__57_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2BEAE0)

namespace MoleMole
{
	inline static constexpr unsigned int UIQuestionsAnswerWidgetController__TryNextNpc_d__57_TypeDefinitionIndex = 53763;

	template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17, typename T18, typename T19, typename T20, typename T21, typename T22, typename T23, typename T24, typename T25, typename T26, typename T27, typename T28, typename T29, typename T30, typename T31, typename T32, typename T33, typename T34, typename T35, typename T36, typename T37, typename T38, typename T39, typename T40, typename T41, typename T42, typename T43, typename T44, typename T45, typename T46, typename T47, typename T48, typename T49, typename T50, typename T51, typename T52, typename T53, typename T54, typename T55, typename T56, typename T57>
	struct alignas(8) UIQuestionsAnswerWidgetController__TryNextNpc_d__57
	{
		::HOHJMEHNANH* _stage_5__6; // 0x10
		::KDNHFAFMKKE* _nextConfig_5__3; // 0x18
		::System::Object* __u__2; // 0x20
		::System::Byte _padding0[0x8];
		::HOHJMEHNANH* _stageConfig_5__2; // 0x30
		::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder __t__builder; // 0x38
		::System::Object* __8__1; // 0x48
		::MoleMole::UIQuestionsAnswerWidgetController* __4__this; // 0x50
		::NJCGAEIPJEK* _special_5__7; // 0x58
		::Cysharp::Threading::Tasks::UniTask_Awaiter __u__1; // 0x60
		::System::Int32 __1__state; // 0x70
		::System::Boolean skipScreen; // 0x74
		::System::Boolean _correct_5__4; // 0x75
		::System::Byte _padding1[0x2];
		::System::Int32 _exScore_5__5; // 0x78

		::System::Void MoveNext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER__TRYNEXTNPC_D__57_MOVENEXT_OFFSET))(this);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER__TRYNEXTNPC_D__57_SETSTATEMACHINE_OFFSET))(this, stateMachine);
		}
	};
}
