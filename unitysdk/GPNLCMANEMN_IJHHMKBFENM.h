#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EBNNGMLLPII.h"
#include "unitysdk/System/Runtime/CompilerServices/AsyncVoidMethodBuilder.h"
#include "unitysdk/System/Runtime/CompilerServices/TaskAwaiter_1.h"
#include "unitysdk/System/ValueType.h"

class GPNLCMANEMN_DCHGJHDJEFF;
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Net { class HttpWebRequest; }
namespace System::Net { class WebResponse; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define GPNLCMANEMN_IJHHMKBFENM_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x743F10)
#define GPNLCMANEMN_IJHHMKBFENM_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x52F5B0)

inline static constexpr unsigned int GPNLCMANEMN_IJHHMKBFENM_TypeDefinitionIndex = 39846;

struct alignas(8) GPNLCMANEMN_IJHHMKBFENM
{
	::System::Runtime::CompilerServices::AsyncVoidMethodBuilder ECODFICGLGM; // 0x10
	::GPNLCMANEMN_DCHGJHDJEFF* PGDOJBDJBOL; // 0x30
	::System::Action_1<::EBNNGMLLPII>* IGAAKDOIPNN; // 0x38
	::System::Net::HttpWebRequest* NOLCJCHLHAB; // 0x40
	::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Net::WebResponse*> IELMICFKAAI; // 0x48
	::System::String* OLOMNNBBHPJ; // 0x50
	::System::Int32 MDPILDGFNHN; // 0x58

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GPNLCMANEMN_IJHHMKBFENM_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* PPFFGLLDOOL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + GPNLCMANEMN_IJHHMKBFENM_SETSTATEMACHINE_OFFSET))(this, PPFFGLLDOOL);
	}
};
