#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define CYSHARP_THREADING_TASKS_UNITASKCOMPLETIONSOURCECORESHARED_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F120230)
#define CYSHARP_THREADING_TASKS_UNITASKCOMPLETIONSOURCECORESHARED_COMPLETIONSENTINEL_OFFSET UNITYSDK_OFFSET(0x1F1201E0)

namespace Cysharp::Threading::Tasks
{
	inline static constexpr unsigned int UniTaskCompletionSourceCoreShared_TypeDefinitionIndex = 38394;

	class UniTaskCompletionSourceCoreShared : public ::System::Object
	{
	public:
		static ::System::Action_1<::System::Object*>** StaticGet_s_sentinel()
		{
			return (::System::Action_1<::System::Object*>**)UnitySDK::FromName("Cysharp.Threading.Tasks", "UniTaskCompletionSourceCoreShared")->GetStaticField(0x380C0);
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
