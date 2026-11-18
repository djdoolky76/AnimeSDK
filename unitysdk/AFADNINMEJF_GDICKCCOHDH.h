#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/ValueType.h"

class AFADNINMEJF;
class AFADNINMEJF_ODNHHBNLEAL;
class DGDNKBFMHME;
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Action_1; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }
namespace UnityEngine { class Texture; }

#define AFADNINMEJF_GDICKCCOHDH_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x6F1E60)
#define AFADNINMEJF_GDICKCCOHDH_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2BEAE0)

inline static constexpr unsigned int AFADNINMEJF_GDICKCCOHDH_TypeDefinitionIndex = 53990;

struct alignas(8) AFADNINMEJF_GDICKCCOHDH
{
	::System::Action_2<::UnityEngine::Texture*, ::System::Int32>* JFIPJPEKAFC; // 0x10
	::System::Action_2<::UnityEngine::Texture*, ::System::Int32>* KMJALCAPOFP; // 0x18
	::System::Action* MDNHGALDDKA; // 0x20
	::Cysharp::Threading::Tasks::UniTask_Awaiter IELMICFKAAI; // 0x28
	::AFADNINMEJF* KLHPEBKNIFB; // 0x38
	::System::Action_1<::DGDNKBFMHME*>* EJNNKEEJENG; // 0x40
	::AFADNINMEJF_ODNHHBNLEAL* PGDOJBDJBOL; // 0x48
	::System::String* CJBJONJDOLI; // 0x50
	::System::Action_1<::DGDNKBFMHME*>* AJFPKBOMMIA; // 0x58
	::System::Threading::CancellationToken CBJFKEAGLGD; // 0x60
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder ECODFICGLGM; // 0x68
	::System::Action_1<::DGDNKBFMHME*>* PABLEDCGDGM; // 0x78
	::System::Int32 MDPILDGFNHN; // 0x80
	::System::Boolean HAFDIMGJBHC; // 0x84

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AFADNINMEJF_GDICKCCOHDH_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* PPFFGLLDOOL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + AFADNINMEJF_GDICKCCOHDH_SETSTATEMACHINE_OFFSET))(this, PPFFGLLDOOL);
	}
};
