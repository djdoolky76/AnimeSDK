#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/ValueType.h"

class FBMFHPMONGC;
class GHDMPGJOIGL;
namespace System { class Object; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define FBMFHPMONGC_FAOJEACKDEL_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x7259D0)
#define FBMFHPMONGC_FAOJEACKDEL_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2BEAE0)

inline static constexpr unsigned int FBMFHPMONGC_FAOJEACKDEL_TypeDefinitionIndex = 50504;

struct alignas(8) FBMFHPMONGC_FAOJEACKDEL
{
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder ECODFICGLGM; // 0x10
	::Cysharp::Threading::Tasks::UniTask_Awaiter JBKEHEIINMM; // 0x20
	::System::Object* KIFJPEHBMCP; // 0x30
	::System::Byte _padding0[0x8];
	::FBMFHPMONGC* KLHPEBKNIFB; // 0x40
	::System::Object* IELMICFKAAI; // 0x48
	::System::Byte _padding1[0x10];
	::GHDMPGJOIGL* CNPLOJJLHCE; // 0x60
	::System::Int32 NPAKMAGBOCH; // 0x68
	::System::Int32 MDPILDGFNHN; // 0x6C

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBMFHPMONGC_FAOJEACKDEL_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* PPFFGLLDOOL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + FBMFHPMONGC_FAOJEACKDEL_SETSTATEMACHINE_OFFSET))(this, PPFFGLLDOOL);
	}
};
