#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Runtime/CompilerServices/AsyncVoidMethodBuilder.h"
#include "unitysdk/System/Runtime/CompilerServices/TaskAwaiter_1.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }
namespace System::Net { class WebResponse; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define AEKOPIGDJFA_FEBIJGEDHHI_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x6F1DD0)
#define AEKOPIGDJFA_FEBIJGEDHHI_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x4B8950)

inline static constexpr unsigned int AEKOPIGDJFA_FEBIJGEDHHI_TypeDefinitionIndex = 53006;

struct alignas(8) AEKOPIGDJFA_FEBIJGEDHHI
{
	::System::Net::WebResponse* PIPKHMLILHM; // 0x10
	::System::Runtime::CompilerServices::AsyncVoidMethodBuilder ECODFICGLGM; // 0x18
	::System::String* OIKFDBDFIID; // 0x38
	::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Net::WebResponse*> IELMICFKAAI; // 0x40
	::System::Int32 MDPILDGFNHN; // 0x48

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AEKOPIGDJFA_FEBIJGEDHHI_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* PPFFGLLDOOL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + AEKOPIGDJFA_FEBIJGEDHHI_SETSTATEMACHINE_OFFSET))(this, PPFFGLLDOOL);
	}
};
