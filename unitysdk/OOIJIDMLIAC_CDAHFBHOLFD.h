#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

class EPJAODADCEA;
class OOIJIDMLIAC;
class OOIJIDMLIAC_EFGDFNOEBMF;
class OOIJIDMLIAC_LOFJAFLBJFN;
namespace System { class Object; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define OOIJIDMLIAC_CDAHFBHOLFD_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x777540)
#define OOIJIDMLIAC_CDAHFBHOLFD_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2BEAE0)

inline static constexpr unsigned int OOIJIDMLIAC_CDAHFBHOLFD_TypeDefinitionIndex = 70888;

struct alignas(8) OOIJIDMLIAC_CDAHFBHOLFD
{
	::System::Object* IELMICFKAAI; // 0x10
	::System::Byte _padding0[0x10];
	::OOIJIDMLIAC_EFGDFNOEBMF* MADPMCLFHKA; // 0x28
	::OOIJIDMLIAC_LOFJAFLBJFN* PGDOJBDJBOL; // 0x30
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder ECODFICGLGM; // 0x38
	::OOIJIDMLIAC* KLHPEBKNIFB; // 0x48
	::EPJAODADCEA* ONPGHHGJGDJ; // 0x50
	::Cysharp::Threading::Tasks::UniTask_Awaiter KIFJPEHBMCP; // 0x58
	::System::Boolean BONOALAMBCF; // 0x68
	::System::Byte _padding1[0x3];
	::UnityEngine::Vector3 LMCIAOAGELD; // 0x6C
	::System::Int32 MDPILDGFNHN; // 0x78

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OOIJIDMLIAC_CDAHFBHOLFD_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* PPFFGLLDOOL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + OOIJIDMLIAC_CDAHFBHOLFD_SETSTATEMACHINE_OFFSET))(this, PPFFGLLDOOL);
	}
};
