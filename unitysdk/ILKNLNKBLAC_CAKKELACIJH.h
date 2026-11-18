#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/ILKNLNKBLAC.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/ValueType.h"

class ILKNLNKBLAC_AGACEFEFLDC;
namespace System { class Object; }
namespace System { class String; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define ILKNLNKBLAC_CAKKELACIJH_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x7E85A0)
#define ILKNLNKBLAC_CAKKELACIJH_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2BEAE0)

inline static constexpr unsigned int ILKNLNKBLAC_CAKKELACIJH_TypeDefinitionIndex = 71489;

struct alignas(8) ILKNLNKBLAC_CAKKELACIJH
{
	::System::Threading::CancellationToken AMIDHEAIANO; // 0x10
	::Cysharp::Threading::Tasks::UniTask_Awaiter KIFJPEHBMCP; // 0x18
	::ILKNLNKBLAC KLHPEBKNIFB; // 0x28
	::ILKNLNKBLAC_AGACEFEFLDC* PGDOJBDJBOL; // 0x40
	::System::Object* IELMICFKAAI; // 0x48
	::System::Byte _padding0[0x10];
	::System::String* INHDAAAMAAL; // 0x60
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder ECODFICGLGM; // 0x68
	::System::Int32 MDPILDGFNHN; // 0x78

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ILKNLNKBLAC_CAKKELACIJH_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* PPFFGLLDOOL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + ILKNLNKBLAC_CAKKELACIJH_SETSTATEMACHINE_OFFSET))(this, PPFFGLLDOOL);
	}
};
