#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EBNNGMLLPII.h"
#include "unitysdk/System/Runtime/CompilerServices/AsyncVoidMethodBuilder.h"
#include "unitysdk/System/Runtime/CompilerServices/TaskAwaiter_1.h"
#include "unitysdk/System/ValueType.h"

class GPNLCMANEMN_KHGIEOAPPFN;
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Net { class HttpWebRequest; }
namespace System::Net { class WebResponse; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define GPNLCMANEMN_ALDJHEMIAHM_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x7B3440)
#define GPNLCMANEMN_ALDJHEMIAHM_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x7B3450)

inline static constexpr unsigned int GPNLCMANEMN_ALDJHEMIAHM_TypeDefinitionIndex = 39843;

struct alignas(8) GPNLCMANEMN_ALDJHEMIAHM
{
	::System::Action_1<::EBNNGMLLPII>* IGAAKDOIPNN; // 0x10
	::System::Net::HttpWebRequest* NOLCJCHLHAB; // 0x18
	::System::String* OLOMNNBBHPJ; // 0x20
	::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Net::WebResponse*> IELMICFKAAI; // 0x28
	::GPNLCMANEMN_KHGIEOAPPFN* PGDOJBDJBOL; // 0x30
	::System::Runtime::CompilerServices::AsyncVoidMethodBuilder ECODFICGLGM; // 0x38
	::System::Int32 MDPILDGFNHN; // 0x58
	::System::Boolean FFONFDIECCJ; // 0x5C

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GPNLCMANEMN_ALDJHEMIAHM_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* PPFFGLLDOOL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + GPNLCMANEMN_ALDJHEMIAHM_SETSTATEMACHINE_OFFSET))(this, PPFFGLLDOOL);
	}
};
