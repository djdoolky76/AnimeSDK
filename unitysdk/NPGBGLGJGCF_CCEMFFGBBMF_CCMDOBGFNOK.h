#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/MoleMole/Config/GuidePoint_AutoGenStrategy.h"
#include "unitysdk/NPGBGLGJGCF_CCEMFFGBBMF_CLPHDFOFABO.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

class NPGBGLGJGCF_CCEMFFGBBMF;
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define NPGBGLGJGCF_CCEMFFGBBMF_CCMDOBGFNOK_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x7099E0)
#define NPGBGLGJGCF_CCEMFFGBBMF_CCMDOBGFNOK_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2BEAE0)

inline static constexpr unsigned int NPGBGLGJGCF_CCEMFFGBBMF_CCMDOBGFNOK_TypeDefinitionIndex = 59321;

struct alignas(8) NPGBGLGJGCF_CCEMFFGBBMF_CCMDOBGFNOK
{
	::System::Collections::Generic::List_1<::System::Int32>* MLJFMMHJNPO; // 0x10
	::System::Object* KIFJPEHBMCP; // 0x18
	::System::Byte _padding0[0x10];
	::System::Object* IELMICFKAAI; // 0x30
	::System::Byte _padding1[0x8];
	::System::Object* LLBAGMLEOBM; // 0x40
	::System::Byte _padding2[0x8];
	::NPGBGLGJGCF_CCEMFFGBBMF* KLHPEBKNIFB; // 0x50
	::NPGBGLGJGCF_CCEMFFGBBMF_CLPHDFOFABO FMOOIHIEFDM; // 0x58
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder ECODFICGLGM; // 0x110
	::MoleMole::Config::GuidePoint_AutoGenStrategy PIBBHNMPBKK; // 0x120
	::System::Int32 MDPILDGFNHN; // 0x170
	::System::Int32 MJALEJBPJNB; // 0x174
	::System::Int32 LFJIBLPBKIP; // 0x178
	::UnityEngine::Vector3 GBAHDKCCELK; // 0x17C
	::System::Single AKBNHNNAOFF; // 0x188
	::System::Int32 ECPPIKJOKLF; // 0x18C
	::UnityEngine::Vector3 IBIFOIKNICM; // 0x190
	::System::Int32 KLHOBEMCJNA; // 0x19C
	::System::Boolean DHHHJJNNMDC; // 0x1A0
	::System::Boolean IDGPLIBGLGK; // 0x1A1
	::System::Boolean HBCKDMBCOHI; // 0x1A2
	::System::Byte _padding3[0x1];
	::System::Int32 LIMNECOMDOM; // 0x1A4

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPGBGLGJGCF_CCEMFFGBBMF_CCMDOBGFNOK_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* PPFFGLLDOOL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + NPGBGLGJGCF_CCEMFFGBBMF_CCMDOBGFNOK_SETSTATEMACHINE_OFFSET))(this, PPFFGLLDOOL);
	}
};
