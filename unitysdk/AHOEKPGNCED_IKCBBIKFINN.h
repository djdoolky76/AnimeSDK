#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/ValueType.h"

class AHOEKPGNCED;
namespace System { class Object; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define AHOEKPGNCED_IKCBBIKFINN_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x6B8F90)
#define AHOEKPGNCED_IKCBBIKFINN_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2BEAE0)

inline static constexpr unsigned int AHOEKPGNCED_IKCBBIKFINN_TypeDefinitionIndex = 53467;

struct alignas(8) AHOEKPGNCED_IKCBBIKFINN
{
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder ECODFICGLGM; // 0x10
	::System::Threading::CancellationToken CBJFKEAGLGD; // 0x20
	::System::Object* IELMICFKAAI; // 0x28
	::System::Byte _padding0[0x18];
	::AHOEKPGNCED* KLHPEBKNIFB; // 0x48
	::System::Int32 EIGKENIGHBG; // 0x50
	::System::Int32 DHGFIHKJEAJ; // 0x54
	::System::Int32 BGNABNAGBNH; // 0x58
	::System::Int32 MDPILDGFNHN; // 0x5C

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AHOEKPGNCED_IKCBBIKFINN_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* PPFFGLLDOOL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + AHOEKPGNCED_IKCBBIKFINN_SETSTATEMACHINE_OFFSET))(this, PPFFGLLDOOL);
	}
};
