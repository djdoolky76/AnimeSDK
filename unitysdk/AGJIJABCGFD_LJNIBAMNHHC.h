#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/ValueType.h"

class PhotoFrame;
namespace MoleMole { class PhotoFrameRender; }
namespace MoleMole { class UIBaseController; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }
namespace UnityEngine { class RenderTexture; }

#define AGJIJABCGFD_LJNIBAMNHHC_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x75B290)
#define AGJIJABCGFD_LJNIBAMNHHC_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2BEAE0)

inline static constexpr unsigned int AGJIJABCGFD_LJNIBAMNHHC_TypeDefinitionIndex = 59812;

struct alignas(8) AGJIJABCGFD_LJNIBAMNHHC
{
	::System::Object* IELMICFKAAI; // 0x10
	::System::Byte _padding0[0x10];
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder ECODFICGLGM; // 0x28
	::System::Func_2<::UnityEngine::RenderTexture*, ::Cysharp::Threading::Tasks::UniTask>* IPJKGPFLHEB; // 0x38
	::PhotoFrame* IJODCLJOCKA; // 0x40
	::MoleMole::PhotoFrameRender* CIOCCDHHAOF; // 0x48
	::Cysharp::Threading::Tasks::UniTask_Awaiter KIFJPEHBMCP; // 0x50
	::MoleMole::UIBaseController* NCIMBHDKIJM; // 0x60
	::UnityEngine::RenderTexture* BILCHLKJKFG; // 0x68
	::System::Int32 MDPILDGFNHN; // 0x70

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AGJIJABCGFD_LJNIBAMNHHC_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* PPFFGLLDOOL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + AGJIJABCGFD_LJNIBAMNHHC_SETSTATEMACHINE_OFFSET))(this, PPFFGLLDOOL);
	}
};
