#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Runtime/CompilerServices/AsyncTaskMethodBuilder_1.h"
#include "unitysdk/System/Runtime/CompilerServices/TaskAwaiter_1.h"
#include "unitysdk/System/ValueType.h"

class DONKLFMCKMN;
class FBEPIJOMMNB;
class JOLFMMMBDLC;
class NGBFGIJANCG;
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }
template <typename T> class DOABAAHLOML_1;

#define JOLFMMMBDLC_JCPEEKPOGCM_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x7B4A70)
#define JOLFMMMBDLC_JCPEEKPOGCM_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x596080)

inline static constexpr unsigned int JOLFMMMBDLC_JCPEEKPOGCM_TypeDefinitionIndex = 91971;

struct alignas(8) JOLFMMMBDLC_JCPEEKPOGCM
{
	::JOLFMMMBDLC* KLHPEBKNIFB; // 0x10
	::FBEPIJOMMNB* FCEIKAIDHPM; // 0x18
	::System::Runtime::CompilerServices::TaskAwaiter_1<::NGBFGIJANCG*> IELMICFKAAI; // 0x20
	::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::DOABAAHLOML_1<::DONKLFMCKMN*>*> ECODFICGLGM; // 0x28
	::System::Byte _padding0[0x10];
	::System::Int32 MDPILDGFNHN; // 0x40

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JOLFMMMBDLC_JCPEEKPOGCM_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* PPFFGLLDOOL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + JOLFMMMBDLC_JCPEEKPOGCM_SETSTATEMACHINE_OFFSET))(this, PPFFGLLDOOL);
	}
};
