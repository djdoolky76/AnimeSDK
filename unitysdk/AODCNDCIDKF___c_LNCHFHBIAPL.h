#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Runtime/CompilerServices/AsyncVoidMethodBuilder.h"
#include "unitysdk/System/Runtime/CompilerServices/TaskAwaiter_1.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }
namespace System::Net::Http { class HttpClient; }
namespace System::Net::Http { class HttpResponseMessage; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define AODCNDCIDKF___C_LNCHFHBIAPL_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x7263D0)
#define AODCNDCIDKF___C_LNCHFHBIAPL_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x6C2D10)

inline static constexpr unsigned int AODCNDCIDKF___c_LNCHFHBIAPL_TypeDefinitionIndex = 79598;

struct alignas(8) AODCNDCIDKF___c_LNCHFHBIAPL
{
	::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Net::Http::HttpResponseMessage*> IELMICFKAAI; // 0x10
	::System::Runtime::CompilerServices::TaskAwaiter_1<::System::String*> KIFJPEHBMCP; // 0x18
	::System::Net::Http::HttpClient* BNNANDGKMIK; // 0x20
	::System::String* ELCCAICKGEC; // 0x28
	::System::Runtime::CompilerServices::AsyncVoidMethodBuilder ECODFICGLGM; // 0x30
	::System::Int32 MDPILDGFNHN; // 0x50

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AODCNDCIDKF___C_LNCHFHBIAPL_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* PPFFGLLDOOL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + AODCNDCIDKF___C_LNCHFHBIAPL_SETSTATEMACHINE_OFFSET))(this, PPFFGLLDOOL);
	}
};
