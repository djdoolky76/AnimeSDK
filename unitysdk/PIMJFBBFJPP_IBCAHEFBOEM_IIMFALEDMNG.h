#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/MoleMole/HollowChessboard/GeometryHeightType.h"
#include "unitysdk/System/ValueType.h"

class FAPOJHHEIMH;
class PIMJFBBFJPP_FHBHCKNALEC;
class PIMJFBBFJPP_IBCAHEFBOEM;
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define PIMJFBBFJPP_IBCAHEFBOEM_IIMFALEDMNG_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x6A3870)
#define PIMJFBBFJPP_IBCAHEFBOEM_IIMFALEDMNG_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2BEAE0)

inline static constexpr unsigned int PIMJFBBFJPP_IBCAHEFBOEM_IIMFALEDMNG_TypeDefinitionIndex = 58949;

struct alignas(8) PIMJFBBFJPP_IBCAHEFBOEM_IIMFALEDMNG
{
	::PIMJFBBFJPP_FHBHCKNALEC* PCOMBAGFMBE; // 0x10
	::FAPOJHHEIMH* FEHIDNKNCAF; // 0x18
	::Cysharp::Threading::Tasks::UniTask_Awaiter IELMICFKAAI; // 0x20
	::PIMJFBBFJPP_IBCAHEFBOEM* KLHPEBKNIFB; // 0x30
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder ECODFICGLGM; // 0x38
	::System::Int32 MDPILDGFNHN; // 0x48
	::System::Boolean GIOEGNDICIC; // 0x4C
	::System::Boolean EGMBBKMBLLC; // 0x4D
	::System::Byte _padding0[0x2];
	::MoleMole::HollowChessboard::GeometryHeightType BCPIPCIIIMA; // 0x50

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIMJFBBFJPP_IBCAHEFBOEM_IIMFALEDMNG_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* PPFFGLLDOOL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + PIMJFBBFJPP_IBCAHEFBOEM_IIMFALEDMNG_SETSTATEMACHINE_OFFSET))(this, PPFFGLLDOOL);
	}
};
