#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/NPCCrowd/Lod/NPCLODRendererItem.h"
#include "unitysdk/System/ValueType.h"

class GIGFDLPMNND;
namespace NPCCrowd::Animation { class NPCUnionAnimator; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define NPCCROWD_ACCESSORIES_NPCACCESSORYMANAGER___STARTFADE_G__STARTFADEANDRELEASE_140_0_D_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x5C73D0)
#define NPCCROWD_ACCESSORIES_NPCACCESSORYMANAGER___STARTFADE_G__STARTFADEANDRELEASE_140_0_D_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2BEAE0)

namespace NPCCrowd::Accessories
{
	inline static constexpr unsigned int NPCAccessoryManager___StartFade_g__StartFadeAndRelease_140_0_d_TypeDefinitionIndex = 52992;

	struct alignas(8) NPCAccessoryManager___StartFade_g__StartFadeAndRelease_140_0_d
	{
		::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder __t__builder; // 0x10
		::Cysharp::Threading::Tasks::UniTask_Awaiter __u__1; // 0x20
		::Il2CppArray<::NPCCrowd::Lod::NPCLODRendererItem>* renderers; // 0x30
		::NPCCrowd::Animation::NPCUnionAnimator* unionAnimator; // 0x38
		::GIGFDLPMNND* matComponent; // 0x40
		::System::Boolean fadeIn; // 0x48
		::System::Byte _padding0[0x3];
		::System::Int32 __1__state; // 0x4C
		::System::Single fadeTime; // 0x50
		::System::Int32 rendererInstanceID; // 0x54

		::System::Void MoveNext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ACCESSORIES_NPCACCESSORYMANAGER___STARTFADE_G__STARTFADEANDRELEASE_140_0_D_MOVENEXT_OFFSET))(this);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + NPCCROWD_ACCESSORIES_NPCACCESSORYMANAGER___STARTFADE_G__STARTFADEANDRELEASE_140_0_D_SETSTATEMACHINE_OFFSET))(this, stateMachine);
		}
	};
}
