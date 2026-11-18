#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder_1.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/ValueType.h"

class NPCAvatarMeshAssetsSO_FNPCAvatarLodMeshAssets;
namespace System { class Object; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }
namespace UnityEngine { class Material; }

#define NPCAVATARMESHASSETSSO_FNPCAVATARLODMESHASSETS__GETMATERIALSASYNC_D__21_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x70D2B0)
#define NPCAVATARMESHASSETSSO_FNPCAVATARLODMESHASSETS__GETMATERIALSASYNC_D__21_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2BEAE0)

inline static constexpr unsigned int NPCAvatarMeshAssetsSO_FNPCAvatarLodMeshAssets__GetMaterialsAsync_d__21_TypeDefinitionIndex = 48089;

template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17, typename T18, typename T19, typename T20, typename T21>
struct alignas(8) NPCAvatarMeshAssetsSO_FNPCAvatarLodMeshAssets__GetMaterialsAsync_d__21
{
	::System::Threading::CancellationToken cancellationToken; // 0x10
	::System::Object* __u__1; // 0x18
	::System::Byte _padding0[0x10];
	::NPCAvatarMeshAssetsSO_FNPCAvatarLodMeshAssets* __4__this; // 0x30
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder_1<::Il2CppArray<::UnityEngine::Material*>*> __t__builder; // 0x38
	::System::Byte _padding1[0x10];
	::System::Int32 __1__state; // 0x50

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCAVATARMESHASSETSSO_FNPCAVATARLODMESHASSETS__GETMATERIALSASYNC_D__21_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + NPCAVATARMESHASSETSSO_FNPCAVATARLODMESHASSETS__GETMATERIALSASYNC_D__21_SETSTATEMACHINE_OFFSET))(this, stateMachine);
	}
};
