#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

class FBMFHPMONGC;
class GEIHCPAOKKK;
class MonoRootMotion;
namespace System { class Object; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define FBMFHPMONGC_IBIEFPDDHJC_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x6AE2B0)
#define FBMFHPMONGC_IBIEFPDDHJC_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2BEAE0)

inline static constexpr unsigned int FBMFHPMONGC_IBIEFPDDHJC_TypeDefinitionIndex = 50514;

struct alignas(8) FBMFHPMONGC_IBIEFPDDHJC
{
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder ECODFICGLGM; // 0x10
	::GEIHCPAOKKK* NAJIKKCDNDO; // 0x20
	::System::Object* GHANCJDIDBC; // 0x28
	::System::Byte _padding0[0x10];
	::Cysharp::Threading::Tasks::UniTask_Awaiter IELMICFKAAI; // 0x40
	::MonoRootMotion* AJPMKADJDNO; // 0x50
	::FBMFHPMONGC* KLHPEBKNIFB; // 0x58
	::System::Single EFJEPDPHGDF; // 0x60
	::System::Boolean NPPMJEIPMFC; // 0x64
	::System::Byte _padding1[0x3];
	::System::Single AEFIONBDLPC; // 0x68
	::System::Single FAOKCADCMGA; // 0x6C
	::System::Int32 MDPILDGFNHN; // 0x70
	::System::Int32 HKMIACHFCHC; // 0x74
	::UnityEngine::Vector3 JOELNDNEEKD; // 0x78

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBMFHPMONGC_IBIEFPDDHJC_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* PPFFGLLDOOL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + FBMFHPMONGC_IBIEFPDDHJC_SETSTATEMACHINE_OFFSET))(this, PPFFGLLDOOL);
	}
};
