#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/NPGBGLGJGCF_CCEMFFGBBMF_KGHNCICOMGF_ODGPOMDILID.h"
#include "unitysdk/System/ValueType.h"

class NPGBGLGJGCF_CCEMFFGBBMF;
namespace System { class Object; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define NPGBGLGJGCF_CCEMFFGBBMF_LLELKMMAHKL_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x601D20)
#define NPGBGLGJGCF_CCEMFFGBBMF_LLELKMMAHKL_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2BEAE0)

inline static constexpr unsigned int NPGBGLGJGCF_CCEMFFGBBMF_LLELKMMAHKL_TypeDefinitionIndex = 59322;

struct alignas(8) NPGBGLGJGCF_CCEMFFGBBMF_LLELKMMAHKL
{
	::System::Object* IELMICFKAAI; // 0x10
	::System::Byte _padding0[0x10];
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder ECODFICGLGM; // 0x28
	::NPGBGLGJGCF_CCEMFFGBBMF* KLHPEBKNIFB; // 0x38
	::System::Int32 LIMNECOMDOM; // 0x40
	::System::Int32 MDPILDGFNHN; // 0x44
	::NPGBGLGJGCF_CCEMFFGBBMF_KGHNCICOMGF_ODGPOMDILID CCKFAJDPCCF; // 0x48

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPGBGLGJGCF_CCEMFFGBBMF_LLELKMMAHKL_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* PPFFGLLDOOL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + NPGBGLGJGCF_CCEMFFGBBMF_LLELKMMAHKL_SETSTATEMACHINE_OFFSET))(this, PPFFGLLDOOL);
	}
};
