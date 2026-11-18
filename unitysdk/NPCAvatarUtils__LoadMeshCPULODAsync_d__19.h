#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_1.h"
#include "unitysdk/NPCCrowd/Lod/ELODLevel.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/ValueType.h"

class NPCAvatarMeshAssetsSO;
namespace NPCCrowd::Avatar { class NPCAvatarGOReference; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }
namespace UnityEngine { class Mesh; }

#define NPCAVATARUTILS__LOADMESHCPULODASYNC_D__19_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x596130)
#define NPCAVATARUTILS__LOADMESHCPULODASYNC_D__19_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2BEAE0)

inline static constexpr unsigned int NPCAvatarUtils__LoadMeshCPULODAsync_d__19_TypeDefinitionIndex = 47757;

template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17, typename T18, typename T19>
struct alignas(8) NPCAvatarUtils__LoadMeshCPULODAsync_d__19
{
	::NPCCrowd::Avatar::NPCAvatarGOReference* goInfo; // 0x10
	::System::Collections::Generic::List_1<::Cysharp::Threading::Tasks::UniTask_1<::UnityEngine::Mesh*>>* _tasks_5__2; // 0x18
	::System::Threading::CancellationToken cancellationToken; // 0x20
	::NPCAvatarMeshAssetsSO* assetSo; // 0x28
	::System::Object* __u__1; // 0x30
	::System::Byte _padding0[0x10];
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder __t__builder; // 0x48
	::System::Int32 __1__state; // 0x58
	::NPCCrowd::Lod::ELODLevel lod; // 0x5C

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCAVATARUTILS__LOADMESHCPULODASYNC_D__19_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + NPCAVATARUTILS__LOADMESHCPULODASYNC_D__19_SETSTATEMACHINE_OFFSET))(this, stateMachine);
	}
};
