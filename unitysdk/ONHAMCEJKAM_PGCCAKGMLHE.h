#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder_1.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/ValueType.h"

class FPKMCDJIKEB;
class MMDOKAHEMKG;
class ONHAMCEJKAM;
namespace System { class Object; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define ONHAMCEJKAM_PGCCAKGMLHE_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x595A90)
#define ONHAMCEJKAM_PGCCAKGMLHE_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2BEAE0)

inline static constexpr unsigned int ONHAMCEJKAM_PGCCAKGMLHE_TypeDefinitionIndex = 66999;

struct alignas(8) ONHAMCEJKAM_PGCCAKGMLHE
{
	::System::Object* IELMICFKAAI; // 0x10
	::System::Byte _padding0[0x10];
	::Foundation::AssetPath CEKNHIDPNNA; // 0x28
	::FPKMCDJIKEB* KCDGPMPEPBC; // 0x38
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder_1<::MMDOKAHEMKG*> ECODFICGLGM; // 0x40
	::System::Byte _padding1[0x10];
	::ONHAMCEJKAM* KLHPEBKNIFB; // 0x58
	::System::Object* KIFJPEHBMCP; // 0x60
	::System::Byte _padding2[0x10];
	::System::Int32 MDPILDGFNHN; // 0x78

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ONHAMCEJKAM_PGCCAKGMLHE_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* PPFFGLLDOOL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + ONHAMCEJKAM_PGCCAKGMLHE_SETSTATEMACHINE_OFFSET))(this, PPFFGLLDOOL);
	}
};
