#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/NPCCrowd/Lod/ELODLevel.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/ValueType.h"

class COCJHGGDBCA;
class GIGFDLPMNND;
class NPCAvatarMeshAssetsSO;
class NPCAvatarRuntimeData;
namespace NPCCrowd::Accessories { class NPCAccessory; }
namespace NPCCrowd::Avatar { class NPCAvatarGOReference; }
namespace NPCCrowd::Lod { class NPCCrowdLodRuntimeData; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define NPCAVATARUTILS__LOADNEWLODASSET_D__58_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x5A6C70)
#define NPCAVATARUTILS__LOADNEWLODASSET_D__58_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2BEAE0)

inline static constexpr unsigned int NPCAvatarUtils__LoadNewLODAsset_d__58_TypeDefinitionIndex = 47750;

template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17, typename T18, typename T19, typename T20, typename T21, typename T22, typename T23, typename T24, typename T25, typename T26, typename T27, typename T28, typename T29, typename T30, typename T31, typename T32, typename T33, typename T34, typename T35, typename T36, typename T37, typename T38, typename T39, typename T40, typename T41, typename T42, typename T43, typename T44, typename T45, typename T46, typename T47, typename T48, typename T49, typename T50, typename T51, typename T52, typename T53, typename T54, typename T55, typename T56, typename T57, typename T58>
struct alignas(8) NPCAvatarUtils__LoadNewLODAsset_d__58
{
	::NPCAvatarRuntimeData* avatarRuntimeData; // 0x10
	::NPCAvatarMeshAssetsSO* _assetSo_5__3; // 0x18
	::GIGFDLPMNND* materialComponent; // 0x20
	::Cysharp::Threading::Tasks::UniTask_Awaiter __u__1; // 0x28
	::NPCCrowd::Lod::NPCCrowdLodRuntimeData* lodRuntimeData; // 0x38
	::COCJHGGDBCA* npcCmp; // 0x40
	::NPCCrowd::Lod::NPCCrowdLodRuntimeData* _ownerLodRuntimeData_5__4; // 0x48
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder __t__builder; // 0x50
	::NPCCrowd::Avatar::NPCAvatarGOReference* _goInfo_5__2; // 0x60
	::System::Collections::Generic::List_1<::NPCCrowd::Accessories::NPCAccessory*>* accessories; // 0x68
	::System::Threading::CancellationToken cancellationToken; // 0x70
	::NPCCrowd::Lod::ELODLevel oldLod; // 0x78
	::System::Boolean useGpuLod; // 0x7C
	::System::Boolean _enableGpuLod_5__5; // 0x7D
	::System::Byte _padding0[0x2];
	::System::Int32 __1__state; // 0x80
	::NPCCrowd::Lod::ELODLevel lod; // 0x84

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCAVATARUTILS__LOADNEWLODASSET_D__58_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + NPCAVATARUTILS__LOADNEWLODASSET_D__58_SETSTATEMACHINE_OFFSET))(this, stateMachine);
	}
};
