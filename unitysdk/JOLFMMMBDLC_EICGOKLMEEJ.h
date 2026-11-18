#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Runtime/CompilerServices/AsyncTaskMethodBuilder_1.h"
#include "unitysdk/System/Runtime/CompilerServices/TaskAwaiter_1.h"
#include "unitysdk/System/ValueType.h"

class FNCHNNGGCFP;
class JIBOKDIOBNN;
class JOLFMMMBDLC;
class NGBFGIJANCG;
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }
template <typename T> class DOABAAHLOML_1;

#define JOLFMMMBDLC_EICGOKLMEEJ_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x7AA3A0)
#define JOLFMMMBDLC_EICGOKLMEEJ_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x3C0A10)

inline static constexpr unsigned int JOLFMMMBDLC_EICGOKLMEEJ_TypeDefinitionIndex = 91969;

struct alignas(8) JOLFMMMBDLC_EICGOKLMEEJ
{
	::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::DOABAAHLOML_1<::FNCHNNGGCFP*>*> ECODFICGLGM; // 0x10
	::System::Byte _padding0[0x10];
	::System::Runtime::CompilerServices::TaskAwaiter_1<::NGBFGIJANCG*> IELMICFKAAI; // 0x28
	::JOLFMMMBDLC* KLHPEBKNIFB; // 0x30
	::JIBOKDIOBNN* FCEIKAIDHPM; // 0x38
	::System::Int32 MDPILDGFNHN; // 0x40

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JOLFMMMBDLC_EICGOKLMEEJ_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* PPFFGLLDOOL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + JOLFMMMBDLC_EICGOKLMEEJ_SETSTATEMACHINE_OFFSET))(this, PPFFGLLDOOL);
	}
};
