#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CELKNCGOJPN.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/NDPKCBLNKJB.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/ValueType.h"

class NGOFNNDDEBO;
class OEBMABOOAGC;
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define NGOFNNDDEBO_CIDPIDFCKPG_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x808A90)
#define NGOFNNDDEBO_CIDPIDFCKPG_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2BEAE0)

inline static constexpr unsigned int NGOFNNDDEBO_CIDPIDFCKPG_TypeDefinitionIndex = 71208;

struct alignas(8) NGOFNNDDEBO_CIDPIDFCKPG
{
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder ECODFICGLGM; // 0x10
	::OEBMABOOAGC* HPBADOHDAMI; // 0x20
	::Cysharp::Threading::Tasks::UniTask_Awaiter IELMICFKAAI; // 0x28
	::NGOFNNDDEBO* KLHPEBKNIFB; // 0x38
	::OEBMABOOAGC* IDMMEIADIFM; // 0x40
	::System::Threading::CancellationToken AMIDHEAIANO; // 0x48
	::System::Int32 MDPILDGFNHN; // 0x50
	::NDPKCBLNKJB DNPAGEBONLH; // 0x54
	::CELKNCGOJPN GHNAFBPJNKB; // 0x58

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NGOFNNDDEBO_CIDPIDFCKPG_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* PPFFGLLDOOL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + NGOFNNDDEBO_CIDPIDFCKPG_SETSTATEMACHINE_OFFSET))(this, PPFFGLLDOOL);
	}
};
