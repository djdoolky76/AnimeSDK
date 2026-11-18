#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/ValueType.h"

class NPCAvatarMeshAssetsSO_FNPCAvatarLodMeshAssets;
namespace NPCCrowd::Animation { class NPCCrowdAnimator; }
namespace NPCCrowd::Avatar { class NPCAvatarGOReferenceComponentInfo; }
namespace NPCCrowd::Avatar { class NPCCrowdAvatarManager; }
namespace System { class Object; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }
namespace UnityEngine { class GameObject; }

#define NPCCROWD_AVATAR_NPCCROWDAVATARMANAGER__SETUPAVATARPARTINFOASYNC_D__45_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x635840)
#define NPCCROWD_AVATAR_NPCCROWDAVATARMANAGER__SETUPAVATARPARTINFOASYNC_D__45_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2BEAE0)

namespace NPCCrowd::Avatar
{
	inline static constexpr unsigned int NPCCrowdAvatarManager__SetupAvatarPartInfoAsync_d__45_TypeDefinitionIndex = 61116;

	template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17, typename T18, typename T19, typename T20, typename T21, typename T22, typename T23, typename T24, typename T25, typename T26, typename T27, typename T28, typename T29, typename T30, typename T31, typename T32, typename T33, typename T34, typename T35, typename T36, typename T37, typename T38, typename T39, typename T40, typename T41, typename T42, typename T43, typename T44, typename T45>
	struct alignas(8) NPCCrowdAvatarManager__SetupAvatarPartInfoAsync_d__45
	{
		::System::Threading::CancellationToken cancellationToken; // 0x10
		::NPCCrowd::Avatar::NPCCrowdAvatarManager* __4__this; // 0x18
		::UnityEngine::GameObject* avatarGo; // 0x20
		::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder __t__builder; // 0x28
		::NPCCrowd::Avatar::NPCAvatarGOReferenceComponentInfo* partGoInfo; // 0x38
		::System::Object* __u__1; // 0x40
		::System::Byte _padding0[0x10];
		::NPCCrowd::Animation::NPCCrowdAnimator* gpuAnimator; // 0x58
		::NPCAvatarMeshAssetsSO_FNPCAvatarLodMeshAssets* meshAss; // 0x60
		::System::Int32 __1__state; // 0x68
		::System::Boolean enableGPULod; // 0x6C

		::System::Void MoveNext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCCROWDAVATARMANAGER__SETUPAVATARPARTINFOASYNC_D__45_MOVENEXT_OFFSET))(this);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCCROWDAVATARMANAGER__SETUPAVATARPARTINFOASYNC_D__45_SETSTATEMACHINE_OFFSET))(this, stateMachine);
		}
	};
}
