#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/ValueType.h"

class OEFEEFMOGPH_HDMGGKLBDPD;
class OEFEEFMOGPH_HFGGMCGEGOF;
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define OEFEEFMOGPH_HDMGGKLBDPD_AJFBGJBKDIP_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x8117C0)
#define OEFEEFMOGPH_HDMGGKLBDPD_AJFBGJBKDIP_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2BEAE0)

inline static constexpr unsigned int OEFEEFMOGPH_HDMGGKLBDPD_AJFBGJBKDIP_TypeDefinitionIndex = 49753;

struct alignas(8) OEFEEFMOGPH_HDMGGKLBDPD_AJFBGJBKDIP
{
	::OEFEEFMOGPH_HDMGGKLBDPD* KLHPEBKNIFB; // 0x10
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder ECODFICGLGM; // 0x18
	::Cysharp::Threading::Tasks::UniTask_Awaiter IELMICFKAAI; // 0x28
	::OEFEEFMOGPH_HFGGMCGEGOF* PGDOJBDJBOL; // 0x38
	::System::Threading::CancellationToken OMMEALOOOOD; // 0x40
	::System::Int32 MDPILDGFNHN; // 0x48

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OEFEEFMOGPH_HDMGGKLBDPD_AJFBGJBKDIP_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* PPFFGLLDOOL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + OEFEEFMOGPH_HDMGGKLBDPD_AJFBGJBKDIP_SETSTATEMACHINE_OFFSET))(this, PPFFGLLDOOL);
	}
};
