#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder_1.h"
#include "unitysdk/MKBLJBDJHFE.h"
#include "unitysdk/System/ValueType.h"

class EFJMDEIBFHI;
class FDOKNLPCNHO;
namespace System { class Object; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define EFJMDEIBFHI_BEFDACIMJNC_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x76C2E0)
#define EFJMDEIBFHI_BEFDACIMJNC_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2BEAE0)

inline static constexpr unsigned int EFJMDEIBFHI_BEFDACIMJNC_TypeDefinitionIndex = 82259;

struct alignas(8) EFJMDEIBFHI_BEFDACIMJNC
{
	::FDOKNLPCNHO* BPGPPMDMKEK; // 0x10
	::System::Object* IELMICFKAAI; // 0x18
	::System::Byte _padding0[0x8];
	::EFJMDEIBFHI* KLHPEBKNIFB; // 0x28
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder_1<::MKBLJBDJHFE> ECODFICGLGM; // 0x30
	::System::Byte _padding1[0x10];
	::System::Int32 MDPILDGFNHN; // 0x48

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EFJMDEIBFHI_BEFDACIMJNC_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* PPFFGLLDOOL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + EFJMDEIBFHI_BEFDACIMJNC_SETSTATEMACHINE_OFFSET))(this, PPFFGLLDOOL);
	}
};
