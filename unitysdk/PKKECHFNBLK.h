#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTaskCompletionSourceCore_1.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTaskStatus.h"
#include "unitysdk/MoleMole/HollowChessboard/RenderDataHandle.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"

namespace System { template <typename T> class Action_1; }

#define PKKECHFNBLK_BJANDJKKNCD_OFFSET UNITYSDK_OFFSET(0x1C661270)
#define PKKECHFNBLK_CBPEKIJJCJM_OFFSET UNITYSDK_OFFSET(0x1C661700)
#define PKKECHFNBLK_GETRESULT_OFFSET UNITYSDK_OFFSET(0x1C661160)
#define PKKECHFNBLK_GETSTATUS_OFFSET UNITYSDK_OFFSET(0x1C6612D0)
#define PKKECHFNBLK_IGAGINDJKCH_OFFSET UNITYSDK_OFFSET(0x1C6615B0)
#define PKKECHFNBLK_NPMOCEJOFIC_OFFSET UNITYSDK_OFFSET(0x1C661500)
#define PKKECHFNBLK_ONCOMPLETED_OFFSET UNITYSDK_OFFSET(0x1C6613E0)
#define PKKECHFNBLK_UNSAFEGETSTATUS_OFFSET UNITYSDK_OFFSET(0x1C661460)
#define PKKECHFNBLK__CTOR_OFFSET UNITYSDK_OFFSET(0x1C6610F0)

inline static constexpr unsigned int PKKECHFNBLK_TypeDefinitionIndex = 66332;

class PKKECHFNBLK : public ::System::Object
{
public:
	::MoleMole::HollowChessboard::RenderDataHandle PHHDHIBOCKA; // 0x10
	::System::Threading::CancellationToken AMIDHEAIANO; // 0x20
	::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<::System::Boolean> MJHEFGLNLNE; // 0x28
	::System::Byte _padding0[0x18];
	::System::Boolean NLCNFBCPIAA; // 0x48

	::System::Void _ctor(::MoleMole::HollowChessboard::RenderDataHandle PHHDHIBOCKA)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::HollowChessboard::RenderDataHandle))((::PBYTE)hIl2Cpp + PKKECHFNBLK__CTOR_OFFSET))(this, PHHDHIBOCKA);
	}

	::System::Void GetResult(::System::Int16 OMMEALOOOOD)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int16))((::PBYTE)hIl2Cpp + PKKECHFNBLK_GETRESULT_OFFSET))(this, OMMEALOOOOD);
	}

	::Cysharp::Threading::Tasks::UniTaskStatus GetStatus(::System::Int16 OMMEALOOOOD)
	{
		return ((::Cysharp::Threading::Tasks::UniTaskStatus(*)(::PVOID, ::System::Int16))((::PBYTE)hIl2Cpp + PKKECHFNBLK_GETSTATUS_OFFSET))(this, OMMEALOOOOD);
	}

	::System::Void OnCompleted(::System::Action_1<::System::Object*>* KIMACCJHOMG, ::System::Object* JKBLDFBGBPK, ::System::Int16 OMMEALOOOOD)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*, ::System::Object*, ::System::Int16))((::PBYTE)hIl2Cpp + PKKECHFNBLK_ONCOMPLETED_OFFSET))(this, KIMACCJHOMG, JKBLDFBGBPK, OMMEALOOOOD);
	}

	::Cysharp::Threading::Tasks::UniTaskStatus UnsafeGetStatus()
	{
		return ((::Cysharp::Threading::Tasks::UniTaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + PKKECHFNBLK_UNSAFEGETSTATUS_OFFSET))(this);
	}

	::System::Void BJANDJKKNCD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PKKECHFNBLK_BJANDJKKNCD_OFFSET))(this);
	}

	::Cysharp::Threading::Tasks::UniTask NPMOCEJOFIC()
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID))((::PBYTE)hIl2Cpp + PKKECHFNBLK_NPMOCEJOFIC_OFFSET))(this);
	}

	::System::Boolean IGAGINDJKCH()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PKKECHFNBLK_IGAGINDJKCH_OFFSET))(this);
	}

	::System::Void CBPEKIJJCJM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PKKECHFNBLK_CBPEKIJJCJM_OFFSET))(this);
	}
};
