#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"
#include "unitysdk/System/ValueType.h"

class DGDNKBFMHME;
class GEMANLDGCFD;
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define GEMANLDGCFD_KKBMHDGJCJP_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x700B40)
#define GEMANLDGCFD_KKBMHDGJCJP_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2BEAE0)

inline static constexpr unsigned int GEMANLDGCFD_KKBMHDGJCJP_TypeDefinitionIndex = 47202;

struct alignas(8) GEMANLDGCFD_KKBMHDGJCJP
{
	::System::Action_1<::DGDNKBFMHME*>* EJNNKEEJENG; // 0x10
	::System::Action_1<::DGDNKBFMHME*>* AJFPKBOMMIA; // 0x18
	::System::Action* MDNHGALDDKA; // 0x20
	::Cysharp::Threading::Tasks::UniTask_Awaiter IELMICFKAAI; // 0x28
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder ECODFICGLGM; // 0x38
	::System::Action_1<::DGDNKBFMHME*>* PABLEDCGDGM; // 0x48
	::GEMANLDGCFD* KLHPEBKNIFB; // 0x50
	::System::String* CJBJONJDOLI; // 0x58
	::System::Int32 MDPILDGFNHN; // 0x60
	::System::Boolean MBMACCFFIKC; // 0x64
	::System::Boolean HAFDIMGJBHC; // 0x65
	::System::Byte _padding0[0x2];
	::MoleMole::HollowChessboard::HollowCell EKPEBNCLJPM; // 0x68

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GEMANLDGCFD_KKBMHDGJCJP_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* PPFFGLLDOOL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + GEMANLDGCFD_KKBMHDGJCJP_SETSTATEMACHINE_OFFSET))(this, PPFFGLLDOOL);
	}
};
