#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskVoidMethodBuilder.h"
#include "unitysdk/ENPCAvatarGender.h"
#include "unitysdk/ENPCAvatarSize.h"
#include "unitysdk/FNpcAvatarGenericParams_AccessoryInfo.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/ValueType.h"

class FNpcAvatarGenericParams_PartInfo;
class NPCAvatarMeshAssetsSO;
namespace NPCCrowd::Avatar { class NPCCrowdAvatarManager; }
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }
namespace UnityEngine { class GameObject; }

#define NPCCROWD_AVATAR_NPCCROWDAVATARMANAGER__CREATEAVATARPARTSANDACCESSORIESGALGAMEASYNC_D__28_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x7099C0)
#define NPCCROWD_AVATAR_NPCCROWDAVATARMANAGER__CREATEAVATARPARTSANDACCESSORIESGALGAMEASYNC_D__28_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2BEAE0)

namespace NPCCrowd::Avatar
{
	inline static constexpr unsigned int NPCCrowdAvatarManager__CreateAvatarPartsAndAccessoriesGalgameAsync_d__28_TypeDefinitionIndex = 61113;

	template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17, typename T18, typename T19, typename T20, typename T21, typename T22, typename T23, typename T24, typename T25, typename T26, typename T27, typename T28>
	struct alignas(8) NPCCrowdAvatarManager__CreateAvatarPartsAndAccessoriesGalgameAsync_d__28
	{
		::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder __t__builder; // 0x10
		::UnityEngine::GameObject* avatarGo; // 0x18
		::System::Collections::Generic::List_1<::FNpcAvatarGenericParams_AccessoryInfo>* accessoryInfos; // 0x20
		::NPCAvatarMeshAssetsSO* assetSo; // 0x28
		::System::Action_1<::UnityEngine::GameObject*>* callback; // 0x30
		::Il2CppArray<::FNpcAvatarGenericParams_PartInfo*>* partInfos; // 0x38
		::NPCCrowd::Avatar::NPCCrowdAvatarManager* __4__this; // 0x40
		::System::Object* __u__1; // 0x48
		::System::Byte _padding0[0x18];
		::System::Threading::CancellationToken cancellationToken; // 0x68
		::System::Boolean enableLookIK; // 0x70
		::System::Byte _padding1[0x3];
		::ENPCAvatarGender gender; // 0x74
		::System::Int32 __1__state; // 0x78
		::ENPCAvatarSize size; // 0x7C
		::System::Int32 avatarParamsID; // 0x80

		::System::Void MoveNext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCCROWDAVATARMANAGER__CREATEAVATARPARTSANDACCESSORIESGALGAMEASYNC_D__28_MOVENEXT_OFFSET))(this);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCCROWDAVATARMANAGER__CREATEAVATARPARTSANDACCESSORIESGALGAMEASYNC_D__28_SETSTATEMACHINE_OFFSET))(this, stateMachine);
		}
	};
}
