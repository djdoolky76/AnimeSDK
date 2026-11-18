#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/ValueType.h"

class CBHALHKAKLC;
class CBHALHKAKLC_DPIODKIFIME;
class CBHALHKAKLC_GCPLLNDKKKN;
class CBHALHKAKLC_OMCMPLFMCAM;
namespace System { class Action; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CBHALHKAKLC_EPCKLDFONFA_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x714F90)
#define CBHALHKAKLC_EPCKLDFONFA_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2BEAE0)

inline static constexpr unsigned int CBHALHKAKLC_EPCKLDFONFA_TypeDefinitionIndex = 55888;

struct alignas(8) CBHALHKAKLC_EPCKLDFONFA
{
	::Cysharp::Threading::Tasks::UniTask_Awaiter IELMICFKAAI; // 0x10
	::System::Action* HKEBHFKHBCC; // 0x20
	::CBHALHKAKLC_GCPLLNDKKKN* PGDOJBDJBOL; // 0x28
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder ECODFICGLGM; // 0x30
	::CBHALHKAKLC* KLHPEBKNIFB; // 0x40
	::CBHALHKAKLC_OMCMPLFMCAM* JGEGLCONONM; // 0x48
	::CBHALHKAKLC_DPIODKIFIME* MADPMCLFHKA; // 0x50
	::System::Int32 NHJDGBFINHB; // 0x58
	::System::Int32 MDPILDGFNHN; // 0x5C
	::System::Boolean FGFCINCDNHK; // 0x60

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CBHALHKAKLC_EPCKLDFONFA_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* PPFFGLLDOOL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CBHALHKAKLC_EPCKLDFONFA_SETSTATEMACHINE_OFFSET))(this, PPFFGLLDOOL);
	}
};
