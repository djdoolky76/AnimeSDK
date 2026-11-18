#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder_1.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/ValueType.h"

class ALIEALDFGKE;
class GFMLEBCNNCN;
class HAMJECLNFDC;
class IEDHKGPALKM;
class IEDHKGPALKM_CHMIKALHGEK;
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define IEDHKGPALKM_CGFNPOOMBEJ_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x79F4E0)
#define IEDHKGPALKM_CGFNPOOMBEJ_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2BEAE0)

inline static constexpr unsigned int IEDHKGPALKM_CGFNPOOMBEJ_TypeDefinitionIndex = 89859;

struct alignas(8) IEDHKGPALKM_CGFNPOOMBEJ
{
	::IEDHKGPALKM_CHMIKALHGEK* PGDOJBDJBOL; // 0x10
	::System::Collections::Generic::List_1<::HAMJECLNFDC*>* GBDDCOLLDAC; // 0x18
	::System::Threading::CancellationToken OMMEALOOOOD; // 0x20
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder_1<::ALIEALDFGKE*> ECODFICGLGM; // 0x28
	::System::Byte _padding0[0x10];
	::IEDHKGPALKM* KLHPEBKNIFB; // 0x40
	::System::Collections::Generic::List_1<::GFMLEBCNNCN*>* DMFCFEPLNDL; // 0x48
	::Cysharp::Threading::Tasks::UniTask_Awaiter IELMICFKAAI; // 0x50
	::System::Int32 DPOFGFFPAAI; // 0x60
	::System::Int32 MEOALNDNHHP; // 0x64
	::System::Int32 MDPILDGFNHN; // 0x68
	::System::Boolean CAAFEGLOALC; // 0x6C
	::System::Boolean FAFNDDAFHCJ; // 0x6D
	::System::Byte _padding1[0x2];
	::System::UInt32 KADLGOGHGLE; // 0x70
	::System::Single MDPPNMIPDMP; // 0x74

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IEDHKGPALKM_CGFNPOOMBEJ_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* PPFFGLLDOOL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + IEDHKGPALKM_CGFNPOOMBEJ_SETSTATEMACHINE_OFFSET))(this, PPFFGLLDOOL);
	}
};
