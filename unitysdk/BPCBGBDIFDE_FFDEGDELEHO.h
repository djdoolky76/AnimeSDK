#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

class BPCBGBDIFDE;
class MonoSceneMap3DConfig;
namespace MoleMole { class MapChangeLayerConfig; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }
namespace System::Threading { class CancellationTokenSource; }

#define BPCBGBDIFDE_FFDEGDELEHO_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x7266C0)
#define BPCBGBDIFDE_FFDEGDELEHO_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2BEAE0)

inline static constexpr unsigned int BPCBGBDIFDE_FFDEGDELEHO_TypeDefinitionIndex = 78641;

struct alignas(8) BPCBGBDIFDE_FFDEGDELEHO
{
	::System::Threading::CancellationToken AMIDHEAIANO; // 0x10
	::Cysharp::Threading::Tasks::UniTask_Awaiter IELMICFKAAI; // 0x18
	::System::Threading::CancellationTokenSource* NOHGNMIOAGI; // 0x28
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder ECODFICGLGM; // 0x30
	::MoleMole::MapChangeLayerConfig* PJMBNDJALPH; // 0x40
	::MonoSceneMap3DConfig* BGODMAGOHKM; // 0x48
	::BPCBGBDIFDE* KLHPEBKNIFB; // 0x50
	::MoleMole::MapChangeLayerConfig* HJPFFOCLGHG; // 0x58
	::System::Int32 ALHGJFMFPJK; // 0x60
	::UnityEngine::Vector3 MEEIPOOMGNJ; // 0x64
	::UnityEngine::Vector3 KKLCDAKGDIB; // 0x70
	::System::Int32 MDPILDGFNHN; // 0x7C

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BPCBGBDIFDE_FFDEGDELEHO_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* PPFFGLLDOOL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + BPCBGBDIFDE_FFDEGDELEHO_SETSTATEMACHINE_OFFSET))(this, PPFFGLLDOOL);
	}
};
