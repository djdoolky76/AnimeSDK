#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/FILGGMBPDJD.h"
#include "unitysdk/System/ValueType.h"

class BFEFACBOBJM;
class DFEONFMKCKE;
class IPKONFBBLJP;
class JFDFFEGKMKP;
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define IPKONFBBLJP_PHBIGDIICII_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x786280)
#define IPKONFBBLJP_PHBIGDIICII_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2BEAE0)

inline static constexpr unsigned int IPKONFBBLJP_PHBIGDIICII_TypeDefinitionIndex = 88909;

struct alignas(8) IPKONFBBLJP_PHBIGDIICII
{
	::DFEONFMKCKE* BFJONIPNMBI; // 0x10
	::Cysharp::Threading::Tasks::UniTask_Awaiter IELMICFKAAI; // 0x18
	::IPKONFBBLJP* KLHPEBKNIFB; // 0x28
	::JFDFFEGKMKP* FMJAFFDJMBB; // 0x30
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder ECODFICGLGM; // 0x38
	::BFEFACBOBJM* NLKHAICJJAL; // 0x48
	::FILGGMBPDJD FGDPOAFBDID; // 0x50
	::System::Int32 MDPILDGFNHN; // 0x54

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IPKONFBBLJP_PHBIGDIICII_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* PPFFGLLDOOL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + IPKONFBBLJP_PHBIGDIICII_SETSTATEMACHINE_OFFSET))(this, PPFFGLLDOOL);
	}
};
