#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTaskCompletionSourceCore_1.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTaskStatus.h"
#include "unitysdk/Foundation/Coroutine/CoroutineHandle.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/Threading/CancellationTokenRegistration.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"

namespace System { class EventArgs; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MJJIBBPMPEK_BJANDJKKNCD_OFFSET UNITYSDK_OFFSET(0x177C1AB0)
#define MJJIBBPMPEK_BMGJGPAJLEF_OFFSET UNITYSDK_OFFSET(0x177C2210)
#define MJJIBBPMPEK_CJLPJGJCPMP_OFFSET UNITYSDK_OFFSET(0x177C2600)
#define MJJIBBPMPEK_GBJMAOFDIHG_OFFSET UNITYSDK_OFFSET(0x177C26F0)
#define MJJIBBPMPEK_GETRESULT_OFFSET UNITYSDK_OFFSET(0x177C19E0)
#define MJJIBBPMPEK_GETSTATUS_OFFSET UNITYSDK_OFFSET(0x177C1E60)
#define MJJIBBPMPEK_GNOAKLDPFLE_OFFSET UNITYSDK_OFFSET(0x177C23E0)
#define MJJIBBPMPEK_IMDOAFOCLIF_OFFSET UNITYSDK_OFFSET(0x177C2510)
#define MJJIBBPMPEK_NPMOCEJOFIC_OFFSET UNITYSDK_OFFSET(0x177C2090)
#define MJJIBBPMPEK_ONCOMPLETED_OFFSET UNITYSDK_OFFSET(0x177C1F70)
#define MJJIBBPMPEK_UNSAFEGETSTATUS_OFFSET UNITYSDK_OFFSET(0x177C1FF0)
#define MJJIBBPMPEK__CTOR_OFFSET UNITYSDK_OFFSET(0x177C1610)

inline static constexpr unsigned int MJJIBBPMPEK_TypeDefinitionIndex = 68971;

class MJJIBBPMPEK : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::UInt32>* OCLBLFJJIIL; // 0x10
	::System::Threading::CancellationToken AMIDHEAIANO; // 0x18
	::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<::System::Boolean> MJHEFGLNLNE; // 0x20
	::System::Byte _padding0[0x18];
	::System::Threading::CancellationTokenRegistration CHCCAFMFOHH; // 0x40
	::Foundation::Coroutine::CoroutineHandle PJCJHHAAIDK; // 0x58
	::System::Boolean NLCNFBCPIAA; // 0x5C

	::System::Void _ctor(::System::Collections::Generic::List_1<::System::UInt32>* OCLBLFJJIIL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + MJJIBBPMPEK__CTOR_OFFSET))(this, OCLBLFJJIIL);
	}

	::System::Void GetResult(::System::Int16 OMMEALOOOOD)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int16))((::PBYTE)hIl2Cpp + MJJIBBPMPEK_GETRESULT_OFFSET))(this, OMMEALOOOOD);
	}

	::Cysharp::Threading::Tasks::UniTaskStatus GetStatus(::System::Int16 OMMEALOOOOD)
	{
		return ((::Cysharp::Threading::Tasks::UniTaskStatus(*)(::PVOID, ::System::Int16))((::PBYTE)hIl2Cpp + MJJIBBPMPEK_GETSTATUS_OFFSET))(this, OMMEALOOOOD);
	}

	::System::Void OnCompleted(::System::Action_1<::System::Object*>* KIMACCJHOMG, ::System::Object* JKBLDFBGBPK, ::System::Int16 OMMEALOOOOD)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*, ::System::Object*, ::System::Int16))((::PBYTE)hIl2Cpp + MJJIBBPMPEK_ONCOMPLETED_OFFSET))(this, KIMACCJHOMG, JKBLDFBGBPK, OMMEALOOOOD);
	}

	::Cysharp::Threading::Tasks::UniTaskStatus UnsafeGetStatus()
	{
		return ((::Cysharp::Threading::Tasks::UniTaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + MJJIBBPMPEK_UNSAFEGETSTATUS_OFFSET))(this);
	}

	::Cysharp::Threading::Tasks::UniTask NPMOCEJOFIC()
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID))((::PBYTE)hIl2Cpp + MJJIBBPMPEK_NPMOCEJOFIC_OFFSET))(this);
	}

	::System::Void BMGJGPAJLEF(::System::EventArgs* KOIBHLHLMFC)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MJJIBBPMPEK_BMGJGPAJLEF_OFFSET))(this, KOIBHLHLMFC);
	}

	::System::Void IMDOAFOCLIF(::System::EventArgs* KOIBHLHLMFC)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MJJIBBPMPEK_IMDOAFOCLIF_OFFSET))(this, KOIBHLHLMFC);
	}

	::System::Void CJLPJGJCPMP(::System::EventArgs* KOIBHLHLMFC)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MJJIBBPMPEK_CJLPJGJCPMP_OFFSET))(this, KOIBHLHLMFC);
	}

	::System::Void GNOAKLDPFLE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MJJIBBPMPEK_GNOAKLDPFLE_OFFSET))(this);
	}

	::System::Void BJANDJKKNCD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MJJIBBPMPEK_BJANDJKKNCD_OFFSET))(this);
	}

	::System::Void GBJMAOFDIHG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MJJIBBPMPEK_GBJMAOFDIHG_OFFSET))(this);
	}
};
