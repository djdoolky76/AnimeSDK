#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder_1.h"
#include "unitysdk/NPGBGLGJGCF_CCEMFFGBBMF_CLPHDFOFABO.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

class NPGBGLGJGCF_CCEMFFGBBMF;
namespace System { class Object; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define NPGBGLGJGCF_CCEMFFGBBMF_BIEKLBHOFME_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x499D20)
#define NPGBGLGJGCF_CCEMFFGBBMF_BIEKLBHOFME_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2BEAE0)

inline static constexpr unsigned int NPGBGLGJGCF_CCEMFFGBBMF_BIEKLBHOFME_TypeDefinitionIndex = 59317;

struct alignas(8) NPGBGLGJGCF_CCEMFFGBBMF_BIEKLBHOFME
{
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder_1<::System::ValueTuple_2<::System::Boolean, ::System::Int32>> ECODFICGLGM; // 0x10
	::System::Byte _padding0[0x10];
	::System::Object* IELMICFKAAI; // 0x28
	::System::Byte _padding1[0x30];
	::NPGBGLGJGCF_CCEMFFGBBMF* KLHPEBKNIFB; // 0x60
	::NPGBGLGJGCF_CCEMFFGBBMF_CLPHDFOFABO MIDHFGMEOEC; // 0x68
	::System::Int32 DFPJIBPFIKM; // 0x120
	::System::Single JOELNNECAID; // 0x124
	::System::Int32 FHMOCCKBJFD; // 0x128
	::UnityEngine::Vector3 GBAHDKCCELK; // 0x12C
	::System::Int32 PDHHLKLOIDO; // 0x138
	::System::Int32 JBDAMIFIJLN; // 0x13C
	::System::Int32 LIMNECOMDOM; // 0x140
	::System::Int32 MDPILDGFNHN; // 0x144

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPGBGLGJGCF_CCEMFFGBBMF_BIEKLBHOFME_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* PPFFGLLDOOL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + NPGBGLGJGCF_CCEMFFGBBMF_BIEKLBHOFME_SETSTATEMACHINE_OFFSET))(this, PPFFGLLDOOL);
	}
};
