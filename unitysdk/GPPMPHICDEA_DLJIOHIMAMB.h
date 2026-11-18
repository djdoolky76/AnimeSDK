#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskVoidMethodBuilder.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/ValueType.h"

class GCIMMDDIFBJ;
namespace System { class Action; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define GPPMPHICDEA_DLJIOHIMAMB_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x7489F0)
#define GPPMPHICDEA_DLJIOHIMAMB_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2BEAE0)

inline static constexpr unsigned int GPPMPHICDEA_DLJIOHIMAMB_TypeDefinitionIndex = 42672;

struct alignas(8) GPPMPHICDEA_DLJIOHIMAMB
{
	::System::Object* IELMICFKAAI; // 0x10
	::System::Byte _padding0[0x8];
	::System::String* GENKEAPFFJG; // 0x20
	::System::Action* EJGDHCIBCJH; // 0x28
	::GCIMMDDIFBJ* BBBPHGDBIMG; // 0x30
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder ECODFICGLGM; // 0x38
	::System::Threading::CancellationToken OMMEALOOOOD; // 0x40
	::GCIMMDDIFBJ* NGANLBJDPEK; // 0x48
	::System::String* NNMIAOMGAAO; // 0x50
	::System::Int32 MDPILDGFNHN; // 0x58

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GPPMPHICDEA_DLJIOHIMAMB_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* PPFFGLLDOOL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + GPPMPHICDEA_DLJIOHIMAMB_SETSTATEMACHINE_OFFSET))(this, PPFFGLLDOOL);
	}
};
