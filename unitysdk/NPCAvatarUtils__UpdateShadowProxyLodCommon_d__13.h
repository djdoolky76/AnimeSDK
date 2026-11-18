#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskVoidMethodBuilder.h"
#include "unitysdk/MoleMole/ECrowdShadowFineness.h"
#include "unitysdk/NPCCrowd/Lod/ELODLevel.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/ValueType.h"

class NPCAvatarMeshAssetsSO;
namespace NPCCrowd::Avatar { class NPCAvatarGOReference; }
namespace NPCCrowd::Lod { class NPCCrowdLodRuntimeData; }
namespace System { class Object; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define NPCAVATARUTILS__UPDATESHADOWPROXYLODCOMMON_D__13_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x633E50)
#define NPCAVATARUTILS__UPDATESHADOWPROXYLODCOMMON_D__13_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2BEAE0)

inline static constexpr unsigned int NPCAvatarUtils__UpdateShadowProxyLodCommon_d__13_TypeDefinitionIndex = 47759;

template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13>
struct alignas(8) NPCAvatarUtils__UpdateShadowProxyLodCommon_d__13
{
	::NPCCrowd::Lod::NPCCrowdLodRuntimeData* lodRuntimeData; // 0x10
	::System::Object* __u__1; // 0x18
	::System::Byte _padding0[0x10];
	::System::Threading::CancellationToken cancellationToken; // 0x30
	::NPCAvatarMeshAssetsSO* assetSo; // 0x38
	::NPCCrowd::Avatar::NPCAvatarGOReference* goInfo; // 0x40
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder __t__builder; // 0x48
	::System::Int32 __1__state; // 0x50
	::NPCCrowd::Lod::ELODLevel lod; // 0x54
	::NPCCrowd::Lod::ELODLevel oldLod; // 0x58
	::MoleMole::ECrowdShadowFineness _newShadowFineness_5__2; // 0x5C

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCAVATARUTILS__UPDATESHADOWPROXYLODCOMMON_D__13_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + NPCAVATARUTILS__UPDATESHADOWPROXYLODCOMMON_D__13_SETSTATEMACHINE_OFFSET))(this, stateMachine);
	}
};
