#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder_1.h"
#include "unitysdk/NPGBGLGJGCF_CCEMFFGBBMF_KOIEGDOKOFE_JCHFIINKKAP.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define NPGBGLGJGCF_CCEMFFGBBMF_FHFOHHOPIJM_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x5CAA90)
#define NPGBGLGJGCF_CCEMFFGBBMF_FHFOHHOPIJM_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2BEAE0)

inline static constexpr unsigned int NPGBGLGJGCF_CCEMFFGBBMF_FHFOHHOPIJM_TypeDefinitionIndex = 59315;

struct alignas(8) NPGBGLGJGCF_CCEMFFGBBMF_FHFOHHOPIJM
{
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder_1<::System::Object*> ECODFICGLGM; // 0x10
	::System::Byte _padding0[0x38];
	::System::Object* IELMICFKAAI; // 0x50
	::System::Byte _padding1[0x10];
	::NPGBGLGJGCF_CCEMFFGBBMF_KOIEGDOKOFE_JCHFIINKKAP CCKFAJDPCCF; // 0x68
	::System::Int32 MDPILDGFNHN; // 0x94
	::System::Int32 LIMNECOMDOM; // 0x98

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPGBGLGJGCF_CCEMFFGBBMF_FHFOHHOPIJM_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* PPFFGLLDOOL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + NPGBGLGJGCF_CCEMFFGBBMF_FHFOHHOPIJM_SETSTATEMACHINE_OFFSET))(this, PPFFGLLDOOL);
	}
};
