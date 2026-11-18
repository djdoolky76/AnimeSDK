#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/ValueType.h"

class CELNNCEAKGB;
class FBMFHPMONGC;
class FBMFHPMONGC_OJCLOGBMMPO;
namespace System { class Object; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define FBMFHPMONGC_NNPHLFAIHCF_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x4AFCB0)
#define FBMFHPMONGC_NNPHLFAIHCF_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2BEAE0)

inline static constexpr unsigned int FBMFHPMONGC_NNPHLFAIHCF_TypeDefinitionIndex = 50492;

struct alignas(8) FBMFHPMONGC_NNPHLFAIHCF
{
	::Cysharp::Threading::Tasks::UniTask EBBGJAAPGKI; // 0x10
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder ECODFICGLGM; // 0x20
	::System::Object* KIFJPEHBMCP; // 0x30
	::System::Byte _padding0[0x10];
	::System::Object* JBKEHEIINMM; // 0x48
	::System::Byte _padding1[0x8];
	::Cysharp::Threading::Tasks::UniTask_Awaiter IELMICFKAAI; // 0x58
	::FBMFHPMONGC* KLHPEBKNIFB; // 0x68
	::FBMFHPMONGC_OJCLOGBMMPO* PGDOJBDJBOL; // 0x70
	::CELNNCEAKGB* KNIDCNLAFMM; // 0x78
	::System::Int32 MDPILDGFNHN; // 0x80
	::System::Single MIAMFPNGEIB; // 0x84
	::System::Int32 NPAKMAGBOCH; // 0x88
	::System::Single DCLPKENKEOA; // 0x8C
	::System::Single CKIBPNEOBHM; // 0x90

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBMFHPMONGC_NNPHLFAIHCF_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* PPFFGLLDOOL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + FBMFHPMONGC_NNPHLFAIHCF_SETSTATEMACHINE_OFFSET))(this, PPFFGLLDOOL);
	}
};
