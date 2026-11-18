#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/Threading/CancellationTokenRegistration.h"
#include "unitysdk/System/ValueType.h"

class AGNBAGNKPJM_JPOJJJLLLJC;
class AGNBAGNKPJM_OMEKCEGGJEH;
class ENGKPGFGGLM;
class JOGNJHBPBCB;
namespace System { class IDisposable; }
namespace System { template <typename T> class Action_1; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }
namespace System::Threading { class CancellationTokenSource; }

#define AGNBAGNKPJM_OMEKCEGGJEH_OMEMBEBMHPA_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x6B8F80)
#define AGNBAGNKPJM_OMEKCEGGJEH_OMEMBEBMHPA_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2BEAE0)

inline static constexpr unsigned int AGNBAGNKPJM_OMEKCEGGJEH_OMEMBEBMHPA_TypeDefinitionIndex = 90168;

struct alignas(8) AGNBAGNKPJM_OMEKCEGGJEH_OMEMBEBMHPA
{
	::System::IDisposable* BDCGFJLGNJL; // 0x10
	::JOGNJHBPBCB* ABAJEFNFJCC; // 0x18
	::AGNBAGNKPJM_JPOJJJLLLJC* PGDOJBDJBOL; // 0x20
	::AGNBAGNKPJM_OMEKCEGGJEH* KLHPEBKNIFB; // 0x28
	::System::Threading::CancellationTokenSource* KLPCCNIEHPM; // 0x30
	::Cysharp::Threading::Tasks::UniTask_Awaiter IELMICFKAAI; // 0x38
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder ECODFICGLGM; // 0x48
	::System::Threading::CancellationTokenRegistration ACPMKMMBGNE; // 0x58
	::System::Threading::CancellationToken OMMEALOOOOD; // 0x70
	::System::Action_1<::ENGKPGFGGLM*>* KDODHGCFKAC; // 0x78
	::System::Int32 MDPILDGFNHN; // 0x80

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AGNBAGNKPJM_OMEKCEGGJEH_OMEMBEBMHPA_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* PPFFGLLDOOL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + AGNBAGNKPJM_OMEKCEGGJEH_OMEMBEBMHPA_SETSTATEMACHINE_OFFSET))(this, PPFFGLLDOOL);
	}
};
