#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/YieldAwaitable_Awaiter.h"
#include "unitysdk/System/ValueType.h"

class LMPKENDCEBM;
class MFBKLAENAEC;
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }
namespace UnityEngine { class Transform; }

#define LMPKENDCEBM_EPMFNPAKHHO_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x749FB0)
#define LMPKENDCEBM_EPMFNPAKHHO_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2BEAE0)

inline static constexpr unsigned int LMPKENDCEBM_EPMFNPAKHHO_TypeDefinitionIndex = 80693;

struct alignas(8) LMPKENDCEBM_EPMFNPAKHHO
{
	::MFBKLAENAEC* KDMHAHBJPAP; // 0x10
	::LMPKENDCEBM* KLHPEBKNIFB; // 0x18
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder ECODFICGLGM; // 0x20
	::UnityEngine::Transform* DIHNCBMDPHG; // 0x30
	::Cysharp::Threading::Tasks::YieldAwaitable_Awaiter IELMICFKAAI; // 0x38
	::System::Int32 MDPILDGFNHN; // 0x3C

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LMPKENDCEBM_EPMFNPAKHHO_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* PPFFGLLDOOL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + LMPKENDCEBM_EPMFNPAKHHO_SETSTATEMACHINE_OFFSET))(this, PPFFGLLDOOL);
	}
};
