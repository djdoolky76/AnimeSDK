#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AHOEKPGNCED_IAIINDHGACE.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder_1.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/ValueType.h"

class AHOEKPGNCED;
namespace System { class Object; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define AHOEKPGNCED_PHNBDFCNFPN_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x75B2A0)
#define AHOEKPGNCED_PHNBDFCNFPN_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2BEAE0)

inline static constexpr unsigned int AHOEKPGNCED_PHNBDFCNFPN_TypeDefinitionIndex = 53465;

struct alignas(8) AHOEKPGNCED_PHNBDFCNFPN
{
	::AHOEKPGNCED_IAIINDHGACE PGDOJBDJBOL; // 0x10
	::System::Threading::CancellationToken CBJFKEAGLGD; // 0x20
	::AHOEKPGNCED* KLHPEBKNIFB; // 0x28
	::System::Object* IELMICFKAAI; // 0x30
	::System::Byte _padding0[0x10];
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder_1<::System::Object*> ECODFICGLGM; // 0x48
	::System::Byte _padding1[0x10];
	::System::Int32 MDPILDGFNHN; // 0x60
	::System::Int32 EIGKENIGHBG; // 0x64

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AHOEKPGNCED_PHNBDFCNFPN_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* PPFFGLLDOOL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + AHOEKPGNCED_PHNBDFCNFPN_SETSTATEMACHINE_OFFSET))(this, PPFFGLLDOOL);
	}
};
