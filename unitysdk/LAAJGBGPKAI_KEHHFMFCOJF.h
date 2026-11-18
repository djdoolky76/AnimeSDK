#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/Runtime/CompilerServices/AsyncVoidMethodBuilder.h"
#include "unitysdk/System/ValueType.h"

class AAILLIJGNGP;
class FBAMLABJMKF;
namespace MoleMole::Config { class AtmosphereData; }
namespace System { class Action; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define LAAJGBGPKAI_KEHHFMFCOJF_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x6E1CA0)
#define LAAJGBGPKAI_KEHHFMFCOJF_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x52F5B0)

inline static constexpr unsigned int LAAJGBGPKAI_KEHHFMFCOJF_TypeDefinitionIndex = 84457;

struct alignas(8) LAAJGBGPKAI_KEHHFMFCOJF
{
	::System::Runtime::CompilerServices::AsyncVoidMethodBuilder ECODFICGLGM; // 0x10
	::Cysharp::Threading::Tasks::UniTask_Awaiter IELMICFKAAI; // 0x30
	::FBAMLABJMKF* IDEMLDJACPJ; // 0x40
	::Cysharp::Threading::Tasks::UniTask ABDKGFNGIHK; // 0x48
	::AAILLIJGNGP* NGPKLFDGNBK; // 0x58
	::System::Action* NPFIONPDFED; // 0x60
	::MoleMole::Config::AtmosphereData* LJBPECKCCEA; // 0x68
	::System::Int32 MDPILDGFNHN; // 0x70
	::System::Boolean HFANICLMHMK; // 0x74

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LAAJGBGPKAI_KEHHFMFCOJF_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* PPFFGLLDOOL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + LAAJGBGPKAI_KEHHFMFCOJF_SETSTATEMACHINE_OFFSET))(this, PPFFGLLDOOL);
	}
};
