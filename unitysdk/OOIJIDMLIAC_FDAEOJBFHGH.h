#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskVoidMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/ValueType.h"

class EPJAODADCEA;
class OOIJIDMLIAC;
class OOIJIDMLIAC_ILLEJLHKDPI;
class OOIJIDMLIAC_JNNFBPOKBLH;
namespace MoleMole::Battle { class Entity; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define OOIJIDMLIAC_FDAEOJBFHGH_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x75B3B0)
#define OOIJIDMLIAC_FDAEOJBFHGH_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2BEAE0)

inline static constexpr unsigned int OOIJIDMLIAC_FDAEOJBFHGH_TypeDefinitionIndex = 70897;

struct alignas(8) OOIJIDMLIAC_FDAEOJBFHGH
{
	::EPJAODADCEA* ONPGHHGJGDJ; // 0x10
	::MoleMole::Battle::Entity* KECKGDFIALJ; // 0x18
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder ECODFICGLGM; // 0x20
	::OOIJIDMLIAC* KLHPEBKNIFB; // 0x28
	::OOIJIDMLIAC_JNNFBPOKBLH* PGDOJBDJBOL; // 0x30
	::Cysharp::Threading::Tasks::UniTask_Awaiter IELMICFKAAI; // 0x38
	::OOIJIDMLIAC_ILLEJLHKDPI* MADPMCLFHKA; // 0x48
	::System::Threading::CancellationToken AMIDHEAIANO; // 0x50
	::System::Int32 MDPILDGFNHN; // 0x58

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OOIJIDMLIAC_FDAEOJBFHGH_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* PPFFGLLDOOL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + OOIJIDMLIAC_FDAEOJBFHGH_SETSTATEMACHINE_OFFSET))(this, PPFFGLLDOOL);
	}
};
