#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder_1.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/ValueType.h"

class AHOEKPGNCED;
class AHOEKPGNCED_JFAHBKFBBLK;
namespace System { class Object; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define AHOEKPGNCED_AABDFEHAAEK_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x7C0B40)
#define AHOEKPGNCED_AABDFEHAAEK_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2BEAE0)

inline static constexpr unsigned int AHOEKPGNCED_AABDFEHAAEK_TypeDefinitionIndex = 53474;

struct alignas(8) AHOEKPGNCED_AABDFEHAAEK
{
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder_1<::System::Object*> ECODFICGLGM; // 0x10
	::System::Byte _padding0[0x10];
	::AHOEKPGNCED_JFAHBKFBBLK* BFIPACDBKOO; // 0x28
	::System::Threading::CancellationToken CBJFKEAGLGD; // 0x30
	::AHOEKPGNCED* KLHPEBKNIFB; // 0x38
	::System::Object* IELMICFKAAI; // 0x40
	::System::Byte _padding1[0x18];
	::System::Int32 MDPILDGFNHN; // 0x60
	::System::Boolean NPPMJEIPMFC; // 0x64
	::System::Byte _padding2[0x3];
	::System::Int32 EIGKENIGHBG; // 0x68

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AHOEKPGNCED_AABDFEHAAEK_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* PPFFGLLDOOL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + AHOEKPGNCED_AABDFEHAAEK_SETSTATEMACHINE_OFFSET))(this, PPFFGLLDOOL);
	}
};
