#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskVoidMethodBuilder.h"
#include "unitysdk/FNpcAvatarGenericParams_AccessoryInfo.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/ValueType.h"

class COCJHGGDBCA;
class FNpcAvatarGenericParams_PartInfo;
class NPCAvatarMeshAssetsSO;
namespace NPCCrowd::Animation { class NPCUnionAnimator; }
namespace NPCCrowd::Avatar { class NPCAvatarGOReference; }
namespace NPCCrowd::Avatar { class NPCCrowdAvatarManager; }
namespace System { class Action; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define NPCCROWD_AVATAR_NPCCROWDAVATARMANAGER__CREATEAVATARPARTSANDACCESSORIESASYNC_D__19_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x601B00)
#define NPCCROWD_AVATAR_NPCCROWDAVATARMANAGER__CREATEAVATARPARTSANDACCESSORIESASYNC_D__19_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2BEAE0)

namespace NPCCrowd::Avatar
{
	inline static constexpr unsigned int NPCCrowdAvatarManager__CreateAvatarPartsAndAccessoriesAsync_d__19_TypeDefinitionIndex = 61103;

	template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17, typename T18, typename T19>
	struct alignas(8) NPCCrowdAvatarManager__CreateAvatarPartsAndAccessoriesAsync_d__19
	{
		::Il2CppArray<::FNpcAvatarGenericParams_PartInfo*>* partInfos; // 0x10
		::NPCAvatarMeshAssetsSO* assetSo; // 0x18
		::NPCCrowd::Animation::NPCUnionAnimator* unionAnimator; // 0x20
		::System::Action* callback; // 0x28
		::System::Threading::CancellationToken cancellationToken; // 0x30
		::System::Object* __u__1; // 0x38
		::System::Byte _padding0[0x18];
		::COCJHGGDBCA* npcComp; // 0x58
		::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder __t__builder; // 0x60
		::NPCCrowd::Avatar::NPCAvatarGOReference* goRef; // 0x68
		::System::Collections::Generic::List_1<::FNpcAvatarGenericParams_AccessoryInfo>* accessoryInfos; // 0x70
		::NPCCrowd::Avatar::NPCCrowdAvatarManager* __4__this; // 0x78
		::System::Boolean enableGPULod; // 0x80
		::System::Byte _padding1[0x3];
		::System::Int32 __1__state; // 0x84

		::System::Void MoveNext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCCROWDAVATARMANAGER__CREATEAVATARPARTSANDACCESSORIESASYNC_D__19_MOVENEXT_OFFSET))(this);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCCROWDAVATARMANAGER__CREATEAVATARPARTSANDACCESSORIESASYNC_D__19_SETSTATEMACHINE_OFFSET))(this, stateMachine);
		}
	};
}
