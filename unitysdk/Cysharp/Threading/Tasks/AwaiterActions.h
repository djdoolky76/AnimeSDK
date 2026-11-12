#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define CYSHARP_THREADING_TASKS_AWAITERACTIONS_CCTOR_OFFSET UNITYSDK_OFFSET(0x203C5EF0)
#define CYSHARP_THREADING_TASKS_AWAITERACTIONS_CONTINUATION_OFFSET UNITYSDK_OFFSET(0x203C5EB0)

namespace Cysharp::Threading::Tasks
{
	inline static constexpr unsigned int AwaiterActions_TypeDefinitionIndex = 39310;

	class AwaiterActions : public ::System::Object
	{
	public:
		static ::System::Action_1<::System::Object*>** StaticGet_InvokeContinuationDelegate()
		{
			return (::System::Action_1<::System::Object*>**)UnitySDK::FromName("Cysharp.Threading.Tasks", "AwaiterActions")->GetStaticField(0x1170);
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
