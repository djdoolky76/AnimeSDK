#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskVoidMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/ValueType.h"

class LJKGAKEAJHD_OFIBKOBNIPF;
class PPAAHJMDPAO;
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define LJKGAKEAJHD_GKAPCEFKHKO_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x784D60)
#define LJKGAKEAJHD_GKAPCEFKHKO_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2BEAE0)

inline static constexpr unsigned int LJKGAKEAJHD_GKAPCEFKHKO_TypeDefinitionIndex = 81324;

struct alignas(8) LJKGAKEAJHD_GKAPCEFKHKO
{
	::PPAAHJMDPAO* HHHNJIMDFOG; // 0x10
	::LJKGAKEAJHD_OFIBKOBNIPF* PGDOJBDJBOL; // 0x18
	::Cysharp::Threading::Tasks::UniTask_Awaiter IELMICFKAAI; // 0x20
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder ECODFICGLGM; // 0x30
	::System::Int32 MDPILDGFNHN; // 0x38

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LJKGAKEAJHD_GKAPCEFKHKO_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* PPFFGLLDOOL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + LJKGAKEAJHD_GKAPCEFKHKO_SETSTATEMACHINE_OFFSET))(this, PPFFGLLDOOL);
	}
};
