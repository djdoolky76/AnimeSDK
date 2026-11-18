#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder_1.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/ValueType.h"

class GEMNJHFCHPI_MEPCCPNOIEI;
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define GEMNJHFCHPI_GHNNEFGJEMC_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x6BF270)
#define GEMNJHFCHPI_GHNNEFGJEMC_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2BEAE0)

inline static constexpr unsigned int GEMNJHFCHPI_GHNNEFGJEMC_TypeDefinitionIndex = 65028;

struct alignas(8) GEMNJHFCHPI_GHNNEFGJEMC
{
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder_1<::System::Boolean> ECODFICGLGM; // 0x10
	::System::Byte _padding0[0x10];
	::System::Threading::CancellationToken MJKDCNCONFK; // 0x28
	::GEMNJHFCHPI_MEPCCPNOIEI* PGDOJBDJBOL; // 0x30
	::Cysharp::Threading::Tasks::UniTask_Awaiter IELMICFKAAI; // 0x38
	::System::Collections::Generic::List_1<::System::Int32>* CJCNKFOLMLH; // 0x48
	::System::Int32 MBCLEKLCOJN; // 0x50
	::System::Int32 BCIGBPGPIPM; // 0x54
	::System::Int32 JNIANLBFJCI; // 0x58
	::System::Int32 PIOCHDLPAEH; // 0x5C
	::System::Int32 MDPILDGFNHN; // 0x60
	::System::Boolean LDNKDODOPKC; // 0x64
	::System::Byte _padding1[0x3];
	::System::Int32 PKGODCFJDDL; // 0x68
	::System::Int32 KHHNPABHKGO; // 0x6C

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GEMNJHFCHPI_GHNNEFGJEMC_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* PPFFGLLDOOL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + GEMNJHFCHPI_GHNNEFGJEMC_SETSTATEMACHINE_OFFSET))(this, PPFFGLLDOOL);
	}
};
