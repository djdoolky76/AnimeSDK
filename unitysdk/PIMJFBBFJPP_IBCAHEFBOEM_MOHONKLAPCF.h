#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/MoleMole/HollowChessboard/GeometryHeightType.h"
#include "unitysdk/System/ValueType.h"

class FAPOJHHEIMH;
class ICEPLAICHGI;
class PIMJFBBFJPP_FHBHCKNALEC;
class PIMJFBBFJPP_IBCAHEFBOEM;
namespace MoleMole { class TextureSheetData; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define PIMJFBBFJPP_IBCAHEFBOEM_MOHONKLAPCF_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x7462C0)
#define PIMJFBBFJPP_IBCAHEFBOEM_MOHONKLAPCF_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2BEAE0)

inline static constexpr unsigned int PIMJFBBFJPP_IBCAHEFBOEM_MOHONKLAPCF_TypeDefinitionIndex = 58947;

struct alignas(8) PIMJFBBFJPP_IBCAHEFBOEM_MOHONKLAPCF
{
	::FAPOJHHEIMH* FEHIDNKNCAF; // 0x10
	::PIMJFBBFJPP_FHBHCKNALEC* PCOMBAGFMBE; // 0x18
	::PIMJFBBFJPP_IBCAHEFBOEM* KLHPEBKNIFB; // 0x20
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder ECODFICGLGM; // 0x28
	::Cysharp::Threading::Tasks::UniTask_Awaiter IELMICFKAAI; // 0x38
	::ICEPLAICHGI* IPCBFIDILEL; // 0x48
	::MoleMole::TextureSheetData* LGMAKIBKPHJ; // 0x50
	::Cysharp::Threading::Tasks::UniTask NBPNNHCPDLA; // 0x58
	::System::Boolean AILDHHOBLDO; // 0x68
	::System::Boolean AGEKJHHFGCB; // 0x69
	::System::Byte _padding0[0x2];
	::MoleMole::HollowChessboard::GeometryHeightType BCPIPCIIIMA; // 0x6C
	::System::Int32 MDPILDGFNHN; // 0x70

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIMJFBBFJPP_IBCAHEFBOEM_MOHONKLAPCF_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* PPFFGLLDOOL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + PIMJFBBFJPP_IBCAHEFBOEM_MOHONKLAPCF_SETSTATEMACHINE_OFFSET))(this, PPFFGLLDOOL);
	}
};
