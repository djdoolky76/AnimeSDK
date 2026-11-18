#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/ValueType.h"

class ADFDLGAPMHJ;
class BAHELGNCOPI;
class GNACLIIBMED;
class GNACLIIBMED_GKMKMMJOJHG;
namespace System { class Object; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define GNACLIIBMED_CGEJJJBNPFP_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x7B0DE0)
#define GNACLIIBMED_CGEJJJBNPFP_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2BEAE0)

inline static constexpr unsigned int GNACLIIBMED_CGEJJJBNPFP_TypeDefinitionIndex = 40199;

struct alignas(8) GNACLIIBMED_CGEJJJBNPFP
{
	::System::Object* GHANCJDIDBC; // 0x10
	::System::Object* FMLHNIOPKPA; // 0x18
	::System::Byte _padding0[0x30];
	::Cysharp::Threading::Tasks::UniTask_Awaiter IELMICFKAAI; // 0x50
	::ADFDLGAPMHJ* FPHHDKEHNEE; // 0x60
	::GNACLIIBMED_GKMKMMJOJHG* PGDOJBDJBOL; // 0x68
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder ECODFICGLGM; // 0x70
	::GNACLIIBMED* KLHPEBKNIFB; // 0x80
	::BAHELGNCOPI* ACNEODHCMLE; // 0x88
	::System::Int32 MDPILDGFNHN; // 0x90

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GNACLIIBMED_CGEJJJBNPFP_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* PPFFGLLDOOL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + GNACLIIBMED_CGEJJJBNPFP_SETSTATEMACHINE_OFFSET))(this, PPFFGLLDOOL);
	}
};
