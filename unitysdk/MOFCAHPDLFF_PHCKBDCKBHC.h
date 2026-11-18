#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskVoidMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/FDAKAAJJNDI.h"
#include "unitysdk/System/ValueType.h"

class JOMECMCADAI;
class MOFCAHPDLFF;
class MOFCAHPDLFF_AMOPJKKCNKB;
namespace System { class IDisposable; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define MOFCAHPDLFF_PHCKBDCKBHC_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x847970)
#define MOFCAHPDLFF_PHCKBDCKBHC_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2BEAE0)

inline static constexpr unsigned int MOFCAHPDLFF_PHCKBDCKBHC_TypeDefinitionIndex = 68521;

struct alignas(8) MOFCAHPDLFF_PHCKBDCKBHC
{
	::System::Collections::Generic::List_1<::Cysharp::Threading::Tasks::UniTask>* JLKPLNPBDOC; // 0x10
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder ECODFICGLGM; // 0x18
	::JOMECMCADAI* DMPDFKMGEAL; // 0x20
	::System::Object* HNCMBCIKDPF; // 0x28
	::MOFCAHPDLFF_AMOPJKKCNKB* PGDOJBDJBOL; // 0x30
	::Cysharp::Threading::Tasks::UniTask_Awaiter IELMICFKAAI; // 0x38
	::System::Object* ACPMKMMBGNE; // 0x48
	::System::Collections::Generic::List_1<::FDAKAAJJNDI>* KKGPLOGDAPI; // 0x50
	::System::Object* LPFIPANMENO; // 0x58
	::System::Object* JIAJMJJMLHG; // 0x60
	::System::Collections::Generic::List_1<::System::IDisposable*>* KECFPMBGOCJ; // 0x68
	::System::Object* ILNGHENCELC; // 0x70
	::MOFCAHPDLFF* KLHPEBKNIFB; // 0x78
	::System::Int32 MDPILDGFNHN; // 0x80

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOFCAHPDLFF_PHCKBDCKBHC_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* PPFFGLLDOOL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + MOFCAHPDLFF_PHCKBDCKBHC_SETSTATEMACHINE_OFFSET))(this, PPFFGLLDOOL);
	}
};
