#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/MoleMole/Config/ConfigBlackboardParam.h"
#include "unitysdk/System/ValueType.h"

class BMPGJHGMOBJ;
class DKKCMLMECFA;
class GFGJIGOLMOC;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }
namespace System::Threading { class CancellationTokenSource; }

#define DKKCMLMECFA_KEPCAJFOHLO_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x740CF0)
#define DKKCMLMECFA_KEPCAJFOHLO_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2BEAE0)

inline static constexpr unsigned int DKKCMLMECFA_KEPCAJFOHLO_TypeDefinitionIndex = 76432;

struct alignas(8) DKKCMLMECFA_KEPCAJFOHLO
{
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder ECODFICGLGM; // 0x10
	::System::Threading::CancellationTokenSource* APIDEKMJPMO; // 0x20
	::System::Collections::Generic::List_1<::MoleMole::Config::ConfigBlackboardParam>* INAFPBGPAMP; // 0x28
	::GFGJIGOLMOC* BOBNILJOFFD; // 0x30
	::Cysharp::Threading::Tasks::UniTask_Awaiter IELMICFKAAI; // 0x38
	::BMPGJHGMOBJ* ENKPBPJFGPD; // 0x48
	::System::String* INHDAAAMAAL; // 0x50
	::System::Collections::Generic::HashSet_1<::System::Int32>* KLFMNJLANEK; // 0x58
	::DKKCMLMECFA* FIBEOINBCNC; // 0x60
	::Foundation::ViewObject::ViewObjectHandle AMNIHACKELI; // 0x68
	::System::UInt32 OMDIPCJNPJC; // 0x78
	::System::Int32 MDPILDGFNHN; // 0x7C

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DKKCMLMECFA_KEPCAJFOHLO_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* PPFFGLLDOOL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + DKKCMLMECFA_KEPCAJFOHLO_SETSTATEMACHINE_OFFSET))(this, PPFFGLLDOOL);
	}
};
