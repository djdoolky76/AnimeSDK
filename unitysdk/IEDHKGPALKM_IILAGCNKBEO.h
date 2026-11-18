#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder_1.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/ValueType.h"

class EDOLCGHONPB;
class IEDHKGPALKM;
class IEDHKGPALKM_PHDBKEEOCHL;
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define IEDHKGPALKM_IILAGCNKBEO_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x7596D0)
#define IEDHKGPALKM_IILAGCNKBEO_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2BEAE0)

inline static constexpr unsigned int IEDHKGPALKM_IILAGCNKBEO_TypeDefinitionIndex = 89864;

struct alignas(8) IEDHKGPALKM_IILAGCNKBEO
{
	::Cysharp::Threading::Tasks::UniTask_Awaiter IELMICFKAAI; // 0x10
	::IEDHKGPALKM* KLHPEBKNIFB; // 0x20
	::IEDHKGPALKM_PHDBKEEOCHL* PGDOJBDJBOL; // 0x28
	::System::Threading::CancellationToken OMMEALOOOOD; // 0x30
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder_1<::EDOLCGHONPB*> ECODFICGLGM; // 0x38
	::System::Byte _padding0[0x10];
	::System::Int32 BIOGEIHKABE; // 0x50
	::System::Int32 MDPILDGFNHN; // 0x54
	::System::Int32 NPAKMAGBOCH; // 0x58

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IEDHKGPALKM_IILAGCNKBEO_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* PPFFGLLDOOL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + IEDHKGPALKM_IILAGCNKBEO_SETSTATEMACHINE_OFFSET))(this, PPFFGLLDOOL);
	}
};
