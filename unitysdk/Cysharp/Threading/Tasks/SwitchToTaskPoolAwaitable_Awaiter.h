#pragma once
#include "unitysdk/unitysdk.h"
namespace System { class Action; }
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define CYSHARP_THREADING_TASKS_SWITCHTOTASKPOOLAWAITABLE_AWAITER_CALLBACK_OFFSET UNITYSDK_OFFSET(0x1F16A590)
#define CYSHARP_THREADING_TASKS_SWITCHTOTASKPOOLAWAITABLE_AWAITER_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F16A5D0)
#define CYSHARP_THREADING_TASKS_SWITCHTOTASKPOOLAWAITABLE_AWAITER_GETRESULT_OFFSET UNITYSDK_OFFSET(0xB480)
#define CYSHARP_THREADING_TASKS_SWITCHTOTASKPOOLAWAITABLE_AWAITER_GET_ISCOMPLETED_OFFSET UNITYSDK_OFFSET(0x7F0A20)
#define CYSHARP_THREADING_TASKS_SWITCHTOTASKPOOLAWAITABLE_AWAITER_ONCOMPLETED_OFFSET UNITYSDK_OFFSET(0x3F46620)
#define CYSHARP_THREADING_TASKS_SWITCHTOTASKPOOLAWAITABLE_AWAITER_UNSAFEONCOMPLETED_OFFSET UNITYSDK_OFFSET(0x3F46630)

namespace Cysharp::Threading::Tasks
{
	inline static constexpr unsigned int SwitchToTaskPoolAwaitable_Awaiter_TypeDefinitionIndex = 39299;

	struct alignas(4) SwitchToTaskPoolAwaitable_Awaiter
	{
		static ::System::Action_1<::System::Object*>** StaticGet_switchToCallback()
		{
			return (::System::Action_1<::System::Object*>**)UnitySDK::FromName("Cysharp.Threading.Tasks", "Awaiter")->GetStaticField(0x33F50);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_SWITCHTOTASKPOOLAWAITABLE_AWAITER_CCTOR_OFFSET))();
		}

		::System::Boolean get_IsCompleted()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_SWITCHTOTASKPOOLAWAITABLE_AWAITER_GET_ISCOMPLETED_OFFSET))(this);
		}

		::System::Void GetResult()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_SWITCHTOTASKPOOLAWAITABLE_AWAITER_GETRESULT_OFFSET))(this);
		}

		::System::Void OnCompleted(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_SWITCHTOTASKPOOLAWAITABLE_AWAITER_ONCOMPLETED_OFFSET))(this, a1);
		}

		::System::Void UnsafeOnCompleted(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_SWITCHTOTASKPOOLAWAITABLE_AWAITER_UNSAFEONCOMPLETED_OFFSET))(this, a1);
		}

		static ::System::Void Callback(::System::Object* a1)
		{
			return ((::System::Void(*)(::System::Object*))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_SWITCHTOTASKPOOLAWAITABLE_AWAITER_CALLBACK_OFFSET))(a1);
		}

	};
}
