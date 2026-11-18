#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskVoidMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/DDGDBFHPBEJ_BGEAKJKKFOM.h"
#include "unitysdk/System/ValueType.h"

class DDGDBFHPBEJ;
class GEKNEEMAHBC;
class KDDIOLPMADK;
namespace System { class Object; }
namespace System { template <typename T> class WeakReference_1; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define DDGDBFHPBEJ_IOCKFHNCJDO_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x76D760)
#define DDGDBFHPBEJ_IOCKFHNCJDO_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2BEAE0)

inline static constexpr unsigned int DDGDBFHPBEJ_IOCKFHNCJDO_TypeDefinitionIndex = 66479;

struct alignas(8) DDGDBFHPBEJ_IOCKFHNCJDO
{
	::Cysharp::Threading::Tasks::UniTask_Awaiter IELMICFKAAI; // 0x10
	::DDGDBFHPBEJ_BGEAKJKKFOM PGDOJBDJBOL; // 0x20
	::System::WeakReference_1<::DDGDBFHPBEJ*>* PAJFDFILCKM; // 0x28
	::System::Object* KIFJPEHBMCP; // 0x30
	::System::Byte _padding0[0x8];
	::KDDIOLPMADK* KFNCGJMGBDA; // 0x40
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder ECODFICGLGM; // 0x48
	::GEKNEEMAHBC* AAOCANGHBDG; // 0x50
	::System::Int32 MDPILDGFNHN; // 0x58

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DDGDBFHPBEJ_IOCKFHNCJDO_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* PPFFGLLDOOL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + DDGDBFHPBEJ_IOCKFHNCJDO_SETSTATEMACHINE_OFFSET))(this, PPFFGLLDOOL);
	}
};
