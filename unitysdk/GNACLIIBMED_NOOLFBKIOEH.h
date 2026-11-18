#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

class GNACLIIBMED;
class GNACLIIBMED_LNGBACPONJB;
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }
template <typename T> class DBMAHDDGMHM_1;

#define GNACLIIBMED_NOOLFBKIOEH_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x7B0DF0)
#define GNACLIIBMED_NOOLFBKIOEH_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2BEAE0)

inline static constexpr unsigned int GNACLIIBMED_NOOLFBKIOEH_TypeDefinitionIndex = 40200;

struct alignas(8) GNACLIIBMED_NOOLFBKIOEH
{
	::DBMAHDDGMHM_1<::UnityEngine::Vector3>* GINILOLHCKG; // 0x10
	::GNACLIIBMED_LNGBACPONJB* PGDOJBDJBOL; // 0x18
	::GNACLIIBMED* KLHPEBKNIFB; // 0x20
	::System::Collections::Generic::List_1<::UnityEngine::Vector3>* OKPOEMBNAPJ; // 0x28
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder ECODFICGLGM; // 0x30
	::Cysharp::Threading::Tasks::UniTask_Awaiter IELMICFKAAI; // 0x40
	::System::Int32 EMAIAAIAGPP; // 0x50
	::System::Int32 MDPILDGFNHN; // 0x54

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GNACLIIBMED_NOOLFBKIOEH_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* PPFFGLLDOOL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + GNACLIIBMED_NOOLFBKIOEH_SETSTATEMACHINE_OFFSET))(this, PPFFGLLDOOL);
	}
};
