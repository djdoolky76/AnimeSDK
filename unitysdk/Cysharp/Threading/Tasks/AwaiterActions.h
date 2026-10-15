#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Action; }
namespace System { class Object; }

#define CYSHARP_THREADING_TASKS_AWAITERACTIONS_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F114E90)
#define CYSHARP_THREADING_TASKS_AWAITERACTIONS_CONTINUATION_OFFSET UNITYSDK_OFFSET(0x1F114E50)

namespace Cysharp::Threading::Tasks
{
	class AwaiterActions : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet_InvokeContinuationDelegate()
		{
			return (::System::Action**)UnitySDK::FromName("Cysharp.Threading.Tasks", "AwaiterActions")->GetStaticField(0x11D0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_AWAITERACTIONS_CCTOR_OFFSET))();
		}

		static ::System::Void Continuation(::System::Object* a1)
		{
			return ((::System::Void(*)(::System::Object*))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_AWAITERACTIONS_CONTINUATION_OFFSET))(a1);
		}

	};
}
