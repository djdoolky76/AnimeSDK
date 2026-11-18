#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/ValueType.h"

class EKFPPMNCGPE;
class NBJLLOBDKHH;
namespace System { class String; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define NBJLLOBDKHH_LMFAMJGCBJN_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x6E9700)
#define NBJLLOBDKHH_LMFAMJGCBJN_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2BEAE0)

inline static constexpr unsigned int NBJLLOBDKHH_LMFAMJGCBJN_TypeDefinitionIndex = 46246;

struct alignas(8) NBJLLOBDKHH_LMFAMJGCBJN
{
	::NBJLLOBDKHH* KLHPEBKNIFB; // 0x10
	::Cysharp::Threading::Tasks::UniTask OHFCOLOJPKF; // 0x18
	::Cysharp::Threading::Tasks::UniTask_Awaiter IELMICFKAAI; // 0x28
	::System::String* LIPIPGHBHFH; // 0x38
	::EKFPPMNCGPE* FAIPFCNDLDE; // 0x40
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder ECODFICGLGM; // 0x48
	::System::Single JNNJANADCHH; // 0x58
	::System::Single OBKMIEMMGIA; // 0x5C
	::System::Single INHDEFICDBI; // 0x60
	::System::Single NCDMGNBPKIM; // 0x64
	::System::Single LIIDLDHEPGL; // 0x68
	::System::Single KHBLAKGIHFM; // 0x6C
	::System::Single EJAOAGGJHHA; // 0x70
	::System::Int32 MDPILDGFNHN; // 0x74
	::System::Single PBJCNECIHCN; // 0x78

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NBJLLOBDKHH_LMFAMJGCBJN_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* PPFFGLLDOOL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + NBJLLOBDKHH_LMFAMJGCBJN_SETSTATEMACHINE_OFFSET))(this, PPFFGLLDOOL);
	}
};
