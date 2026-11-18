#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/ValueType.h"

class IKKDCFLLIOF;
class INCBBJCEHND;
class JNJDDELLIAH;
class JNJDDELLIAH_HDLMEEABACJ;
class OMGAIHDFKIN;
namespace MoleMole { class UIScaryNightInLevelPageController; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define JNJDDELLIAH_GLKOOGPPIJA_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x6FAB20)
#define JNJDDELLIAH_GLKOOGPPIJA_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2BEAE0)

inline static constexpr unsigned int JNJDDELLIAH_GLKOOGPPIJA_TypeDefinitionIndex = 52339;

struct alignas(8) JNJDDELLIAH_GLKOOGPPIJA
{
	::JNJDDELLIAH* KLHPEBKNIFB; // 0x10
	::System::Collections::Generic::List_1<::IKKDCFLLIOF*>* MGNPPPJOJDK; // 0x18
	::Cysharp::Threading::Tasks::UniTask_Awaiter KIFJPEHBMCP; // 0x20
	::OMGAIHDFKIN* DHDDELAAJEE; // 0x30
	::System::Object* IELMICFKAAI; // 0x38
	::System::Byte _padding0[0x8];
	::MoleMole::UIScaryNightInLevelPageController* KKJPAONBIAF; // 0x48
	::INCBBJCEHND* ABPJEHPBMFE; // 0x50
	::JNJDDELLIAH_HDLMEEABACJ* PGDOJBDJBOL; // 0x58
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder ECODFICGLGM; // 0x60
	::System::Int32 MDPILDGFNHN; // 0x70

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JNJDDELLIAH_GLKOOGPPIJA_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* PPFFGLLDOOL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + JNJDDELLIAH_GLKOOGPPIJA_SETSTATEMACHINE_OFFSET))(this, PPFFGLLDOOL);
	}
};
