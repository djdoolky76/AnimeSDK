#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Action; }
namespace System { class Object; }

#define CYSHARP_THREADING_TASKS_UNITASKCOMPLETIONSOURCECORESHARED_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F14DC50)
#define CYSHARP_THREADING_TASKS_UNITASKCOMPLETIONSOURCECORESHARED_COMPLETIONSENTINEL_OFFSET UNITYSDK_OFFSET(0x1F14DC00)

namespace Cysharp::Threading::Tasks
{
	class UniTaskCompletionSourceCoreShared : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet_s_sentinel()
		{
			return (::System::Action**)UnitySDK::FromName("Cysharp.Threading.Tasks", "UniTaskCompletionSourceCoreShared")->GetStaticField(0x41E20);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASKCOMPLETIONSOURCECORESHARED_CCTOR_OFFSET))();
		}

		static ::System::Void CompletionSentinel(::System::Object* a1)
		{
			return ((::System::Void(*)(::System::Object*))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASKCOMPLETIONSOURCECORESHARED_COMPLETIONSENTINEL_OFFSET))(a1);
		}

	};
}
