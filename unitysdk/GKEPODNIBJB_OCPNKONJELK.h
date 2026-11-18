#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskVoidMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/ValueType.h"

class GKEPODNIBJB;
class GKEPODNIBJB_PEAHFGDJBGG;
namespace MoleMole { class AvatarShowSetting; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define GKEPODNIBJB_OCPNKONJELK_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x654690)
#define GKEPODNIBJB_OCPNKONJELK_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2BEAE0)

inline static constexpr unsigned int GKEPODNIBJB_OCPNKONJELK_TypeDefinitionIndex = 50388;

struct alignas(8) GKEPODNIBJB_OCPNKONJELK
{
	::Foundation::AssetPath JEOHDBCKFKF; // 0x10
	::MoleMole::AvatarShowSetting* LFACONBIMGP; // 0x20
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder ECODFICGLGM; // 0x28
	::GKEPODNIBJB* KLHPEBKNIFB; // 0x30
	::Cysharp::Threading::Tasks::UniTask_Awaiter IELMICFKAAI; // 0x38
	::System::Threading::CancellationToken BBBOOKGADEF; // 0x48
	::GKEPODNIBJB_PEAHFGDJBGG* PGDOJBDJBOL; // 0x50
	::System::UInt32 CJPLACFCFBP; // 0x58
	::System::Int32 MDPILDGFNHN; // 0x5C
	::System::Int32 PKMFBJMJCOO; // 0x60

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GKEPODNIBJB_OCPNKONJELK_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* PPFFGLLDOOL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + GKEPODNIBJB_OCPNKONJELK_SETSTATEMACHINE_OFFSET))(this, PPFFGLLDOOL);
	}
};
