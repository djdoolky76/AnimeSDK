#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/ValueType.h"

class FAPOJHHEIMH;
class ICEPLAICHGI;
class PIMJFBBFJPP_FHBHCKNALEC;
class PIMJFBBFJPP_IBCAHEFBOEM;
namespace MoleMole { class TextureSheetData; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define PIMJFBBFJPP_IBCAHEFBOEM_GNNFLIJJCFJ_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x6B8A00)
#define PIMJFBBFJPP_IBCAHEFBOEM_GNNFLIJJCFJ_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2BEAE0)

inline static constexpr unsigned int PIMJFBBFJPP_IBCAHEFBOEM_GNNFLIJJCFJ_TypeDefinitionIndex = 58954;

struct alignas(8) PIMJFBBFJPP_IBCAHEFBOEM_GNNFLIJJCFJ
{
	::FAPOJHHEIMH* FEHIDNKNCAF; // 0x10
	::MoleMole::TextureSheetData* LGMAKIBKPHJ; // 0x18
	::Cysharp::Threading::Tasks::UniTask NBPNNHCPDLA; // 0x20
	::ICEPLAICHGI* IPCBFIDILEL; // 0x30
	::Cysharp::Threading::Tasks::UniTask_Awaiter IELMICFKAAI; // 0x38
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder ECODFICGLGM; // 0x48
	::PIMJFBBFJPP_FHBHCKNALEC* PCOMBAGFMBE; // 0x58
	::PIMJFBBFJPP_IBCAHEFBOEM* KLHPEBKNIFB; // 0x60
	::System::Int32 MDPILDGFNHN; // 0x68

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIMJFBBFJPP_IBCAHEFBOEM_GNNFLIJJCFJ_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* PPFFGLLDOOL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + PIMJFBBFJPP_IBCAHEFBOEM_GNNFLIJJCFJ_SETSTATEMACHINE_OFFSET))(this, PPFFGLLDOOL);
	}
};
