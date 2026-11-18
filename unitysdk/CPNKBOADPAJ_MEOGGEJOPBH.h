#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder_1.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/ValueType.h"

class CPNKBOADPAJ_CBKACKLBONC;
namespace System { class String; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CPNKBOADPAJ_MEOGGEJOPBH_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x6EE270)
#define CPNKBOADPAJ_MEOGGEJOPBH_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2BEAE0)

inline static constexpr unsigned int CPNKBOADPAJ_MEOGGEJOPBH_TypeDefinitionIndex = 91821;

struct alignas(8) CPNKBOADPAJ_MEOGGEJOPBH
{
	::Foundation::AssetPath CEKNHIDPNNA; // 0x10
	::Cysharp::Threading::Tasks::UniTask_Awaiter IELMICFKAAI; // 0x20
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder_1<::System::String*> ECODFICGLGM; // 0x30
	::System::Byte _padding0[0x10];
	::CPNKBOADPAJ_CBKACKLBONC* PGDOJBDJBOL; // 0x48
	::System::Int32 MDPILDGFNHN; // 0x50

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CPNKBOADPAJ_MEOGGEJOPBH_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* PPFFGLLDOOL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CPNKBOADPAJ_MEOGGEJOPBH_SETSTATEMACHINE_OFFSET))(this, PPFFGLLDOOL);
	}
};
